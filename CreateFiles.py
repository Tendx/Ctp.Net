import os
import re


class Config:
    LibDir = 'ctp_win_x86'
    Namespace = 'Ctp.Net'
    class MarketApi:
        Name = 'MarketApi'
        Project = 'Ctp.Net.Market'
        Lib = 'thostmduserapi_se.lib'
        LibH = 'ThostFtdcMdApi.h'
        LibSpi = 'CThostFtdcMdSpi'
        LibApi = 'CThostFtdcMdApi'
        NativeLibSpiImpl = 'MarketSpi'
        NativeDelegatesH = 'delegates.h'
        NativeTypedefsH = 'typedefs.h'

    class TraderApi:
        Name = 'TraderApi'
        Project = 'Ctp.Net.Trader'
        Lib = 'thosttraderapi_se.lib'
        LibH = 'ThostFtdcTraderApi.h'
        LibSpi = 'CThostFtdcTraderSpi'
        LibApi = 'CThostFtdcTraderApi'
        NativeLibSpiImpl = 'TraderSpi'
        NativeDelegatesH = 'delegates.h'
        NativeTypedefsH = 'typedefs.h'

    class Types:
        Project = 'Ctp.Net.Types'
        LibTypeH = 'ThostFtdcUserApiDataType.h'
        LibStructH = 'ThostFtdcUserApiStruct.h'
        EnumsCs = 'Enums.cs'
        ClassesCs = 'Classes.cs'
        DelegatesCs = 'Delegates.cs'


# region

class ArgsDescription:
    def __init__(self, n, t, d):
        self.Name = n
        self.Type = t
        self.Default = d


class RemarkDescription:
    def __init__(self, t, k, v):
        self.Text = t
        self.Key = k
        self.Value = v


class FuncDescription:
    def __init__(self):
        self.Name = ''
        self.Static = False
        self.Return = 'void'
        self.Arguments = []
        self.Remarks = []


class TypeDescription:
    def __init__(self, n, t, v, m, r):
        self.Name = n
        self.Type = t
        self.Value = v
        self.Members = m
        self.Remarks = r
        self.Used = False


class ValueDescription:
    def __init__(self, n, t, v, r):
        self.Name = n
        self.Type = t
        self.Value = v
        self.Remarks = r

# endregion


# region

def ParseApi(path, name):
    lines = open(path).readlines()
    start_ln = 0
    end_ln = 0
    for ln in range(0, len(lines)):
        line = lines[ln].strip(' ')
        if 'class ' in line and name in line:
            start_ln = ln + 2
        if start_ln > 0 and line.startswith('}'):
            end_ln = ln
            break
    fcns = []
    fd = None
    for ln in range(start_ln, end_ln):
        line = lines[ln].strip(' \t\n{}=0;')
        if line.startswith('//'):
            if fd == None:
                fd = FuncDescription()
            if '@param' in line:
                items = line.strip(' /').split(' ', 2)[1:]
                if '：' in items[0]:
                    items = items[0].split('：')
                fd.Remarks.append(RemarkDescription(items[1], 'param', items[0]))
            elif '@ret' in line:
                item = line.strip(' /').split(' ', 1)[-1]
                fd.Remarks.append(RemarkDescription(item, 'returns', ''))
            elif '@rem' in line:
                item = line.strip(' /').split(' ', 1)[-1]
                if item != '@remark':
                    fd.Remarks.append(RemarkDescription(item, 'remarks', ''))
            else:
                fd.Remarks.append(RemarkDescription(line.strip(' /'), 'summary' if len(fd.Remarks) == 0 else 'remarks', ''))
        elif '(' in line and ')' in line:
            if '~' in line:
                fd = None
                continue
            if fd == None:
                fd = FuncDescription()
            args = re.findall('[\(](.*?)[\)]', line)[0].split(', ')
            litems = re.findall('(.*?)[\(]', line)[0].split(' ')
            fd.Name = litems[-1]
            if 'static' in litems[0]:
                fd.Static = True
            if len(litems) > 1:
                fd.Return = litems[-2]
            for a in args:
                if a == '':
                    continue
                if '=' in a:
                    items = re.split('[ |=]+', a)
                    fd.Arguments.append(ArgsDescription(items[-2], items[-3], items[-1]))
                else:
                    a = re.sub('[ ]?\*[ ]?', ' *', a)
                    items = re.split('[ ]+', a)
                    fd.Arguments.append(ArgsDescription(items[-1], items[-2], ''))
            fcns.append(fd)
            fd = None
    return fcns


def ParseTypes(path):
    lines = open(path).readlines()
    types = []
    td = None
    vd = None
    for ln in range(0, len(lines)):
        line = lines[ln].strip(' \n,;')
        if 'enum ' in line:
            td = TypeDescription(line.split(' ')[1], 'enum', '', [], '')
            ln += 1
            while True:
                ln += 1
                line = lines[ln].strip(' \n\t,;')
                if '}' in line:
                    break
                items = re.split('[ |=]+', line)
                td.Members.append(ValueDescription(items[0], '', items[1] if len(items) > 1 else '', ''))
            types.append(td)
            td = None
        elif '//' in line and '////' not in line:
            if td == None:
                td = TypeDescription('', '', '', [], line.strip(' /'))
            elif vd == None:
                vd = ValueDescription('', '', '', line.strip(' /'))
        elif '#define ' in line:
            items = re.split(' +', line)
            if len(items) < 3:
                continue
            vd.Name = items[1]
            vd.Value = items[2]
            td.Members.append(vd)
            vd = None
        elif 'typedef ' in line:
            items = re.split('[ |\[|\]]+', line)
            if items[1] == 'char' and len(items) == 3 and len(td.Members) > 0:
                td.Type = 'enum'
            else:
                td.Type = items[1]
                td.Value = items[3] if len(items) > 3 else ''
            td.Name = items[2]
            types.append(td)
            td = None

    return types


def ParseStructs(path):
    lines = open(path).readlines()
    td = None
    vd = None
    structs = []
    td = None
    vd = None
    for ln in range(0, len(lines)):
        line = lines[ln].strip(' \n')
        if 'struct ' in line:
            td = TypeDescription(line.split(' ')[1], 'struct', '', [], lines[ln-1].strip(' \n/'))
            ln += 1
            while True:
                ln += 1
                line = lines[ln].strip(' \t\n')
                if '}' in line:
                    break
                if '//' in line:
                    if vd == None:
                        vd = ValueDescription('', '', '', line.strip('/'))
                elif ';' in line:
                    items = re.split('[\s|;]+', line)
                    vd.Name = items[1]
                    vd.Type = items[0]
                    td.Members.append(vd)
                    vd = None
            structs.append(td)
    return structs


def RenameFunc(name):
    result = name.strip(' *')
    if result == 'CreateFtdcMdApi':
        result = 'CreateMarketApi'
    elif result == 'CreateFtdcTraderApi':
        result = 'CreateTraderApi'
    return result


def RenameType(name, pointer=True, array=False):
    result = name
    if name == 'CThostFtdcTraderApi':
        result = 'TraderApi'
    elif name == 'CThostFtdcMdApi':
        result = 'MarketApi'
    elif name == 'char' and pointer:
        result = 'String'
    else:
        for trim in ['THOST_TE_', 'THOST_TERT_', 'TThostFtdc', 'THOST_FTDC_', 'TFtdc', 'CThostFtdc']:
            if name.startswith(trim):
                result = name[len(trim):]
    if pointer:
        result += '^'
    if array:
        result = 'IList<{}>^'.format(result)
    return result


def RenameArg(name):
    return re.search('[A-Z]\w+', name).group()

# endregion

# region

def WriteNativeDelegatesH(apiConfig, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.NativeDelegatesH), 'w') as fo:
        fo.write('#pragma once\n')
        fo.write('#include "..\\{}\\{}"\n\n'.format(Config.LibDir, Config.Types.LibStructH))
        fo.write('namespace native\n{\n')
        fo.write('    namespace delegates\n    {\n')
        for f in spi:
            fo.write('{}delegate {} {}({});\n'.format(' '*8, f.Return, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
        fo.write('    }\n}\n')


def WriteNativeTypedefsH(apiConfig, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.NativeTypedefsH), 'w') as fo:
        fo.write('#pragma once\n')
        fo.write('#include "..\\{}\\{}"\n\n'.format(Config.LibDir, Config.Types.LibStructH))
        fo.write('namespace native\n{\n')
        fo.write('    namespace typedefs\n    {\n')
        for f in spi:
            fo.write('{}typedef {}(__stdcall* {})({});\n'.format(' '*8, f.Return, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
        fo.write('    }\n}\n')


def WriteNativeSpiH(apiConfig, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.NativeLibSpiImpl + '.h'), 'w') as fo:
        fo.write('#pragma once\n')
        fo.write('#pragma comment(lib, "../{}/{}")\n'.format(Config.LibDir, apiConfig.Lib))
        fo.write('#include "{}"\n'.format(apiConfig.NativeTypedefsH))
        fo.write('#include "..\\{}\\{}"\n\n'.format(Config.LibDir, apiConfig.LibH))
        fo.write('namespace native\n{\n')
        fo.write('    class  {} : public {}\n    {{\n'.format(apiConfig.NativeLibSpiImpl, apiConfig.LibSpi))
        fo.write('    public:\n\n')
        fo.write('#pragma region responses\n')
        for f in spi:
            fo.write('{}{} {}({});\n'.format(' '*8, f.Return, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
        fo.write('#pragma endregion\n\n')
        fo.write('#pragma region callees\n')
        for f in spi:
            fo.write('{0}typedefs::{1} {1}_ = nullptr;\n'.format(' '*8, f.Name))
        fo.write('#pragma endregion\n\n')
        fo.write('{0}{1}();\n{0}~{1}();\n'.format(' '*8, apiConfig.NativeLibSpiImpl))
        fo.write('    };\n}\n')


def WriteNativeSpiCpp(apiConfig, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.NativeLibSpiImpl + '.cpp'), 'w') as fo:
        fo.write('#include "{}.h"\n\n'.format(apiConfig.NativeLibSpiImpl))
        fo.write('namespace native\n{\n')
        for f in spi:
            fo.write('    {} {}::{}({})\n'.format(f.Return, apiConfig.NativeLibSpiImpl, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
            fo.write('    {\n')
            fo.write('{}if ({}_ != nullptr)\n'.format(' '*8, f.Name))
            fo.write('{}{}_({});\n'.format(' '*12, f.Name, ', '.join(a.Name.strip('*') for a in f.Arguments)))
            fo.write('    }\n\n')
        fo.write('    {0}::{0}() {{}};\n\n    {0}::~{0}() {{}};\n'.format(apiConfig.NativeLibSpiImpl))
        fo.write('}\n')


def WriteApiH(apiConfig, api, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.Name + '.h'), 'w') as fo:
        fo.write('#pragma once\n')
        fo.write('#include "{}.h"\n\n'.format(apiConfig.NativeLibSpiImpl))
        fo.write('using namespace System;\n')
        fo.write('using namespace System::Collections::Generic;\n')
        fo.write('using namespace System::Runtime::InteropServices;\n\n')
        s = 0
        for ns in Config.Namespace.split('.'):
            fo.write('{0}namespace {1}\n{0}{{\n'.format(' '*s, ns))
            s += 4
        fo.write('{0}public ref class {1}\n{0}{{\n'.format(' '*s, apiConfig.Name))
        fo.write('{}public:\n\n'.format(' '*s))
        fo.write('#pragma region requests\n')
        for f in api:
            if f.Name == 'RegisterSpi':
                continue
            for r in f.Remarks:
                fo.write('{0}/// <{1}{3}>{2}</{1}>\n'.format(' '*(s+4), r.Key, RenameType(r.Text, False), ' name="{}"'.format(RenameArg(r.Value)) if r.Key == 'param' else ''))
            fo.write('{}{}{} {}'.format(' '*(s+4), 'static ' if f.Static else '', RenameType(f.Return, '*' in f.Name), RenameFunc(f.Name)))
            fo.write('({});\n\n'.format(', '.join(RenameType(a.Type, '*' in a.Name, '[]' in a.Name) + ' ' + RenameArg(a.Name) for a in f.Arguments)))
        fo.write('#pragma endregion\n\n')
        fo.write('#pragma region events\n')
        for f in spi:
            for r in f.Remarks:
                fo.write('{0}/// <{1}{3}>{2}</{1}>\n'.format(' '*(s+4), r.Key, r.Text, ' name="{}"'.format(RenameArg(r.Value)) if r.Key == 'param' else ''))
            fo.write('{0}event {1}^ {1};\n\n'.format(' '*(s+4), f.Name))
        fo.write('#pragma endregion\n\n')
        fo.write(' '*4 + 'private:\n\n')
        fo.write('#pragma region triggers\n')
        for f in spi:
            fo.write('{}{} {}_({});\n'.format(' '*(s+4), f.Return, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
        fo.write('#pragma endregion\n\n')
        fo.write(' '*(s+4) + 'List<GCHandle>^ _handles = gcnew List<GCHandle>();\n')
        fo.write('{}{}* _api = nullptr;\n'.format(' '*(s+4), apiConfig.LibApi))
        fo.write('{}native::{}* _spi = nullptr;\n'.format(' '*(s+4), apiConfig.NativeLibSpiImpl))
        fo.write(' '*(s+4) + 'void InitTriggers();\n\n')
        fo.write('{0}{1}();\n{0}~{1}();\n'.format(' '*(s + 4), apiConfig.Name))
        fo.write('{}}};\n'.format(' '*s))
        fo.write(''.join([' '*b + '}\n' for b in range(0, s, 4)][::-1]))


def WriteApiCpp(apiConfig, api, spi):
    with open(os.path.join(apiConfig.Project, apiConfig.Name + '.cpp'), 'w') as fo:
        fo.write('#include "{}"\n'.format(apiConfig.NativeDelegatesH))
        fo.write('#include "{}"\n'.format(apiConfig.NativeTypedefsH))
        fo.write('#include "{}.h"\n'.format(apiConfig.Name))
        fo.write('#include "{}.Custom.h"\n\n'.format(apiConfig.Name))
        fo.write('using namespace native;\n')
        fo.write('using namespace System;\n')
        fo.write('using namespace System::IO;\n\n')
        s = 0
        for ns in Config.Namespace.split('.'):
            fo.write('{0}namespace {1}\n{0}{{\n'.format(' '*s, ns))
            s += 4
        fo.write('#pragma region requests\n')
        for f in api:
            if f.Name == 'RegisterSpi':
                continue
            fo.write('{}#ifndef {}\n'.format(' '*s, apiConfig.Name.upper() + '_' + RenameFunc(f.Name).upper()))
            ret = RenameType(f.Return, '*' in f.Name)
            args = [[RenameType(a.Type, '*' in a.Name, '[]' in a.Name), RenameArg(a.Name)] for a in f.Arguments]
            fo.write('{}{} {}::{}({})\n'.format(' '*s, ret, apiConfig.Name, RenameFunc(f.Name), ', '.join(a[0] + ' ' + a[1] for a in args)))
            fo.write(' '*s + '{\n')
            if len(args) > 0:
                a = args[0]
                if '^' in a[0] and '*' not in f.Name and 'List' not in a[0]:
                    if 'Str' in a[0]:
                        fo.write('{}IntPtr ptr = Marshal::StringToHGlobalAnsi({});\n'.format(' '*(s+4), a[1]))
                        fo.write('{0}try\n{0}{{\n'.format(' '*(s+4)))
                    else:
                        fo.write('{}IntPtr ptr = Marshal::AllocHGlobal(Marshal::SizeOf({}));\n'.format(' '*(s+4), a[1]))
                        fo.write('{0}try\n{0}{{\n'.format(' '*(s+4)))
                        fo.write('{}Marshal::StructureToPtr({}, ptr, false);\n'.format(' '*(s+8), a[1]))
                    fo.write('{}return _api->{}(static_cast<{}*>(ptr.ToPointer())'.format(' '*(s+8), f.Name, f.Arguments[0].Type))
                    fo.write('{});\n'.format((''.join(', ' + a[1] for a in args[1:]) if len(args)>1 else '')))
                    fo.write('{0}}}\n{0}finally\n{0}{{\n'.format(' '*(s+4)))
                    fo.write('{}Marshal::FreeHGlobal(ptr);\n'.format(' '*(s+8)))
                    fo.write('{0}}}\n'.format(' '*(s+4)))
            elif f.Return == 'char':
                fo.write('{}return gcnew String({}{}());\n'.format(' '*(s+4), apiConfig.LibApi + '::' if f.Static else '_api->', RenameFunc(f.Name)))
            else:
                fo.write('{}return {}{}();\n'.format(' '*(s+4), apiConfig.LibApi + '::' if f.Static else '_api->', RenameFunc(f.Name)))
            fo.write(' '*s + '}\n')
            fo.write(' '*s + '#endif\n\n')
        fo.write('#pragma endregion\n\n')
        fo.write('#pragma region triggers\n')
        for f in spi:
            fo.write('{}{} {}::{}_({})\n'.format(' '*s, f.Return, apiConfig.Name, f.Name, ', '.join(a.Type + ' ' + a.Name for a in f.Arguments)))
            fo.write('{}{{\n'.format(' '*s))
            names = []
            for a in f.Arguments:
                if '*' in a.Name:
                    name = RenameArg(a.Name).strip('Field')
                    fo.write('{0}{1}^ {2} = safe_cast<{1}^>(Marshal::PtrToStructure(IntPtr({3}), {1}::typeid));\n'.format(' '*(s+4), RenameType(a.Type, False), name, a.Name.strip('* ')))
                    names.append(name)
                else:
                    names.append(a.Name)
            fo.write('{}{}({});\n'.format(' '*(s+4), f.Name, ', '.join(names)))
            fo.write('{}}}\n\n'.format(' '*s))
        fo.write('#pragma endregion\n\n')
        fo.write('{}void {}::InitTriggers()\n'.format(' '*s, apiConfig.Name))
        fo.write('{}{{\n'.format(' '*s))
        for f in spi:
            fo.write('{0}delegates::{1}^ {1} = gcnew delegates::{1}(this, &{2}::{1}_);\n'.format(' '*(s+4), f.Name, apiConfig.Name))
            fo.write('{0}GCHandle h{1} = GCHandle::Alloc({1});\n'.format(' '*(s+4), f.Name))
            fo.write('{}_handles->Add(h{});\n'.format(' '*(s+4), f.Name))
            fo.write('{0}_spi->{1}_ = static_cast<typedefs::{1}>(Marshal::GetFunctionPointerForDelegate({1}).ToPointer());\n\n'.format(' '*(s+4), f.Name))
        fo.write('{}}}\n\n'.format(' '*s))
        fo.write((
            '{0}#ifndef {1}_{1}\n' + 
            '{0}{2}::{2}()\n' +
            '{0}{{\n' +
            '{0}    _spi = new native::{3}();\n' +
            '{0}    InitTriggers();\n' + 
            '{0}}}\n' +
            '{0}#endif\n\n'
        ).format(' '*s, apiConfig.Name.upper(), apiConfig.Name, apiConfig.NativeLibSpiImpl))
        fo.write((
            '{0}#ifndef {1}__{1}\n' + 
            '{0}{2}::~{2}()\n' +
            '{0}{{\n' +
            '{0}    Release();\n' +
            '{0}    for each (GCHandle handle in _handles)\n' +
            '{0}        handle.Free();\n' + 
            '{0}}}\n' +
            '{0}#endif\n\n'
        ).format(' '*s, apiConfig.Name.upper(), apiConfig.Name, apiConfig.NativeLibSpiImpl))
        fo.write(''.join([' '*b + '}\n' for b in range(0, s, 4)][::-1]))


def WriteTypesDelegatesCs(path, fcns):
    with open(path, 'w') as fo:
        fo.write('namespace {}\n{{\n'.format(Config.Namespace))
        delegates = dict()
        for f in fcns:
            if f.Name not in delegates.keys():
                delegates[f.Name] = f
        for d in delegates.values():
            fo.write('    public delegate {} {}({});\n'.format(d.Return, d.Name, ', '.join(RenameType(a.Type, False) + ' ' + RenameArg(a.Name) for a in d.Arguments)))
        fo.write('}\n')


def WriteTypesClassesCs(path, structs, types, fcns):
    with open(path, 'w') as fo:
        fo.write('using System.Runtime.InteropServices;\n\n')
        fo.write('namespace {}\n{{\n'.format(Config.Namespace))
        usedStructs = set()
        dictTypes = dict()
        for t in types:
            dictTypes[t.Name] = t
        for f in fcns:
            for a in f.Arguments:
                if a.Type not in usedStructs:
                    usedStructs.add(a.Type)
                if a.Type in dictTypes.keys():
                    dictTypes[a.Type].Used = True
        for s in structs:
            if s.Name in usedStructs:
                s.Used = True
        for s in structs:
            if not s.Used:
                continue
            fo.write('    /// <summary>{}</summary>\n'.format(s.Remarks))
            fo.write('    [StructLayout(LayoutKind.Sequential)]\n')
            fo.write('    public class {}\n'.format(RenameType(s.Name, False)))
            fo.write('    {\n')
            for m in s.Members:
                fo.write('        /// <summary>{}</summary>\n'.format(m.Remarks))
                t = dictTypes[m.Type]
                t.Used = True
                if t.Type == 'char' and t.Value != '':
                    fo.write('        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = {})]\n'.format(t.Value))
                    fo.write('        public string {};\n'.format(m.Name))
                elif t.Type == 'enum':
                    fo.write('        public {} {};\n'.format(RenameType(m.Type, False), m.Name))
                else:
                    fo.write('        public {} {};\n'.format(t.Type, m.Name))
            fo.write('    }\n\n')
        fo.write('}\n')


def WriteTypesEnumsCs(path, types):
    with open(path, 'w') as fo:
        fo.write('namespace {}\n{{\n'.format(Config.Namespace))
        for t in types:
            if not t.Used or t.Type != 'enum':
                continue
            if t.Remarks != '':
                fo.write('    /// <summary>{}</summary>\n'.format(RenameType(t.Remarks, False)))
            fo.write('    public enum {}{}\n'.format(RenameType(t.Name, False), '' if re.match('\'[\S]\'', t.Members[0].Value) == None else ' : byte'))
            fo.write('    {\n')
            for m in t.Members:
                if m.Remarks != '':
                    fo.write('        /// <summary>{}</summary>\n'.format(m.Remarks))
                if m.Value == '':
                    fo.write('        {},\n'.format(RenameType(m.Name, False)))
                elif re.match('\'[\S]\'', t.Members[0].Value) == None:
                    fo.write('        {} = {},\n'.format(RenameType(m.Name, False), m.Value))
                else:
                    fo.write('        {} = (byte){},\n'.format(RenameType(m.Name, False), m.Value))
            fo.write('    }\n\n')
        fo.write('}\n')

# endregion

if __name__ == '__main__':
    print('>>> ' + Config.LibDir)
    mdHPath = os.path.join(Config.LibDir, Config.MarketApi.LibH)
    tdHPath = os.path.join(Config.LibDir, Config.TraderApi.LibH)
    typeHPath = os.path.join(Config.LibDir, Config.Types.LibTypeH)
    structHPath = os.path.join(Config.LibDir, Config.Types.LibStructH)
    print('Process {}... '.format(mdHPath), end='')
    mdapi = ParseApi(mdHPath, Config.MarketApi.LibApi)
    mdspi = ParseApi(mdHPath, Config.MarketApi.LibSpi)
    print('done')
    print('Process {}... '.format(tdHPath), end='')
    tdapi = ParseApi(tdHPath, Config.TraderApi.LibApi)
    tdspi = ParseApi(tdHPath, Config.TraderApi.LibSpi)
    print('done')
    print('Process {}... '.format(typeHPath), end='')
    types = ParseTypes(typeHPath)
    print('done')
    print('Process {}... '.format(structHPath), end='')
    structs = ParseStructs(structHPath)
    print('done')

    print('>>> ' + Config.MarketApi.Project)
    print('Create native {}... '.format(Config.MarketApi.NativeDelegatesH), end='')
    WriteNativeDelegatesH(Config.MarketApi, mdspi)
    print('done')
    print('Create native {}... '.format(Config.MarketApi.NativeTypedefsH), end='')
    WriteNativeTypedefsH(Config.MarketApi, mdspi)
    print('done')
    print('Create native {}... '.format(Config.MarketApi.NativeLibSpiImpl), end='')
    WriteNativeSpiH(Config.MarketApi, mdspi)
    WriteNativeSpiCpp(Config.MarketApi, mdspi)
    print('done')
    print('Create clr api {}... '.format(Config.MarketApi.Name), end='')
    WriteApiH(Config.MarketApi, mdapi, mdspi)
    WriteApiCpp(Config.MarketApi, mdapi, mdspi)
    print('done')

    print('>>> ' + Config.TraderApi.Project)
    print('Create native {}... '.format(Config.TraderApi.NativeDelegatesH), end='')
    WriteNativeDelegatesH(Config.TraderApi, tdspi)
    print('done')
    print('Create native {}... '.format(Config.TraderApi.NativeTypedefsH), end='')
    WriteNativeTypedefsH(Config.TraderApi, tdspi)
    print('done')
    print('Create native {}... '.format(Config.TraderApi.NativeLibSpiImpl), end='')
    WriteNativeSpiH(Config.TraderApi, tdspi)
    WriteNativeSpiCpp(Config.TraderApi, tdspi)
    print('done')
    print('Create clr api {}... '.format(Config.TraderApi.Name), end='')
    WriteApiH(Config.TraderApi, tdapi, tdspi)
    WriteApiCpp(Config.TraderApi, tdapi, tdspi)
    print('done')

    print('>>> ' + Config.Types.Project)
    enumsCSPath = os.path.join(Config.Types.Project, Config.Types.EnumsCs)
    delegatesCSPath = os.path.join(Config.Types.Project, Config.Types.DelegatesCs)
    classesCSPath = os.path.join(Config.Types.Project, Config.Types.ClassesCs)
    print('Create {}... '.format(Config.Types.DelegatesCs), end='')
    WriteTypesDelegatesCs(delegatesCSPath, mdspi + tdspi)
    print('done')
    print('Create {}... '.format(Config.Types.ClassesCs), end='')
    WriteTypesClassesCs(classesCSPath, structs, types, mdapi + mdspi + tdapi + tdspi)
    print('done')
    print('Create {}... '.format(Config.Types.EnumsCs), end='')
    WriteTypesEnumsCs(enumsCSPath, types)
    print('done')

    print('>>> All Files Created !!!')
