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

// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t677452661;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Configur1616530321.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern "C"  void ConfigurationLockCollection__ctor_m4015947913 (ConfigurationLockCollection_t677452661 * __this, ConfigurationElement_t3842833450 * ___element0, int32_t ___lockType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m3302433448 (ConfigurationLockCollection_t677452661 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern "C"  void ConfigurationLockCollection_CheckName_m2069114485 (ConfigurationLockCollection_t677452661 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C"  void ConfigurationLockCollection_Add_m1108477191 (ConfigurationLockCollection_t677452661 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C"  void ConfigurationLockCollection_Clear_m747601479 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::Contains(System.String)
extern "C"  bool ConfigurationLockCollection_Contains_m3507883189 (ConfigurationLockCollection_t677452661 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CopyTo(System.String[],System.Int32)
extern "C"  void ConfigurationLockCollection_CopyTo_m429962735 (ConfigurationLockCollection_t677452661 * __this, StringU5BU5D_t4054002952* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationLockCollection_GetEnumerator_m112387898 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::IsReadOnly(System.String)
extern "C"  bool ConfigurationLockCollection_IsReadOnly_m3698623688 (ConfigurationLockCollection_t677452661 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Remove(System.String)
extern "C"  void ConfigurationLockCollection_Remove_m2965454102 (ConfigurationLockCollection_t677452661 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern "C"  void ConfigurationLockCollection_SetFromList_m2634028446 (ConfigurationLockCollection_t677452661 * __this, String_t* ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLockCollection::get_AttributeList()
extern "C"  String_t* ConfigurationLockCollection_get_AttributeList_m3857951528 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C"  int32_t ConfigurationLockCollection_get_Count_m2976157856 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_HasParentElements()
extern "C"  bool ConfigurationLockCollection_get_HasParentElements_m3638052326 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsModified()
extern "C"  bool ConfigurationLockCollection_get_IsModified_m1462524650 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::set_IsModified(System.Boolean)
extern "C"  void ConfigurationLockCollection_set_IsModified_m2412172399 (ConfigurationLockCollection_t677452661 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C"  bool ConfigurationLockCollection_get_IsSynchronized_m9094773 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationLockCollection_get_SyncRoot_m823312131 (ConfigurationLockCollection_t677452661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
