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

// System.ComponentModel.PropertyTabAttribute
struct PropertyTabAttribute_t2212120584;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.ComponentModel.PropertyTabScope[]
struct PropertyTabScopeU5BU5D_t1164479937;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_System_ComponentModel_PropertyTabScope3896620352.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_ComponentModel_PropertyTabAttribute2212120584.h"

// System.Void System.ComponentModel.PropertyTabAttribute::.ctor()
extern "C"  void PropertyTabAttribute__ctor_m472707293 (PropertyTabAttribute_t2212120584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.String)
extern "C"  void PropertyTabAttribute__ctor_m3409034565 (PropertyTabAttribute_t2212120584 * __this, String_t* ___tabClassName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.Type)
extern "C"  void PropertyTabAttribute__ctor_m1680593532 (PropertyTabAttribute_t2212120584 * __this, Type_t * ___tabClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.String,System.ComponentModel.PropertyTabScope)
extern "C"  void PropertyTabAttribute__ctor_m133938730 (PropertyTabAttribute_t2212120584 * __this, String_t* ___tabClassName0, int32_t ___tabScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.Type,System.ComponentModel.PropertyTabScope)
extern "C"  void PropertyTabAttribute__ctor_m3589458195 (PropertyTabAttribute_t2212120584 * __this, Type_t * ___tabClass0, int32_t ___tabScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.ComponentModel.PropertyTabAttribute::get_TabClasses()
extern "C"  TypeU5BU5D_t3339007067* PropertyTabAttribute_get_TabClasses_m2834340313 (PropertyTabAttribute_t2212120584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyTabScope[] System.ComponentModel.PropertyTabAttribute::get_TabScopes()
extern "C"  PropertyTabScopeU5BU5D_t1164479937* PropertyTabAttribute_get_TabScopes_m3831792160 (PropertyTabAttribute_t2212120584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.ComponentModel.PropertyTabAttribute::get_TabClassNames()
extern "C"  StringU5BU5D_t4054002952* PropertyTabAttribute_get_TabClassNames_m1853151254 (PropertyTabAttribute_t2212120584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyTabAttribute::Equals(System.Object)
extern "C"  bool PropertyTabAttribute_Equals_m2869476920 (PropertyTabAttribute_t2212120584 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyTabAttribute::Equals(System.ComponentModel.PropertyTabAttribute)
extern "C"  bool PropertyTabAttribute_Equals_m30464925 (PropertyTabAttribute_t2212120584 * __this, PropertyTabAttribute_t2212120584 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyTabAttribute::GetHashCode()
extern "C"  int32_t PropertyTabAttribute_GetHashCode_m1635973532 (PropertyTabAttribute_t2212120584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::InitializeArrays(System.String[],System.ComponentModel.PropertyTabScope[])
extern "C"  void PropertyTabAttribute_InitializeArrays_m2276955134 (PropertyTabAttribute_t2212120584 * __this, StringU5BU5D_t4054002952* ___tabClassNames0, PropertyTabScopeU5BU5D_t1164479937* ___tabScopes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::InitializeArrays(System.Type[],System.ComponentModel.PropertyTabScope[])
extern "C"  void PropertyTabAttribute_InitializeArrays_m3856090983 (PropertyTabAttribute_t2212120584 * __this, TypeU5BU5D_t3339007067* ___tabClasses0, PropertyTabScopeU5BU5D_t1164479937* ___tabScopes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyTabAttribute::GetTypeFromName(System.String)
extern "C"  Type_t * PropertyTabAttribute_GetTypeFromName_m2625727548 (PropertyTabAttribute_t2212120584 * __this, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
