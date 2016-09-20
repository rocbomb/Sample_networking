#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.Reflection.AssemblyName
struct AssemblyName_t2915647011;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t595214213;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1003119691;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t641370685;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IO.Stream
struct Stream_t1561764144;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1394482686;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_AssemblyName2915647011.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2771074959.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1002978443.h"
#include "mscorlib_System_Security_PermissionSet1199249641.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m558768500 (AssemblyBuilder_t1002978443 * __this, AssemblyName_t2915647011 * ___n0, String_t* ___directory1, int32_t ___access2, bool ___corlib_internal3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m2666501043 (Il2CppObject * __this /* static, unused */, AssemblyBuilder_t1002978443 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m2002209681 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void AssemblyBuilder_AddPermissionRequests_m831171448 (AssemblyBuilder_t1002978443 * __this, PermissionSet_t1199249641 * ___required0, PermissionSet_t1199249641 * ___optional1, PermissionSet_t1199249641 * ___refused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C"  ModuleBuilder_t595214213 * AssemblyBuilder_DefineDynamicModule_m490868275 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C"  ModuleBuilder_t595214213 * AssemblyBuilder_DefineDynamicModule_m1810872554 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, bool ___emitSymbolInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t595214213 * AssemblyBuilder_DefineDynamicModule_m3735477071 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, String_t* ___fileName1, bool ___emitSymbolInfo2, bool ___transient3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t1003119691* AssemblyBuilder_GetModulesInternal_m2718782039 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3339007067* AssemblyBuilder_GetTypes_m3461115874 (AssemblyBuilder_t1002978443 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Emit.AssemblyBuilder::GetManifestResourceInfo(System.String)
extern "C"  ManifestResourceInfo_t641370685 * AssemblyBuilder_GetManifestResourceInfo_m3751902347 (AssemblyBuilder_t1002978443 * __this, String_t* ___resourceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Emit.AssemblyBuilder::GetManifestResourceNames()
extern "C"  StringU5BU5D_t4054002952* AssemblyBuilder_GetManifestResourceNames_m1783825638 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.String)
extern "C"  Stream_t1561764144 * AssemblyBuilder_GetManifestResourceStream_m2644853023 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.Type,System.String)
extern "C"  Stream_t1561764144 * AssemblyBuilder_GetManifestResourceStream_m3064954514 (AssemblyBuilder_t1002978443 * __this, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m332025933 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m1537194370 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1296175624 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m1726853645 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C"  Module_t1394482686 * AssemblyBuilder_GetManifestModule_m3329157928 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t3991598821 * AssemblyBuilder_not_supported_m186391929 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m153452157 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, String_t* ___fileName1, bool ___fileNeedsToExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t2915647011 * AssemblyBuilder_UnprotectedGetName_m3388533202 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
