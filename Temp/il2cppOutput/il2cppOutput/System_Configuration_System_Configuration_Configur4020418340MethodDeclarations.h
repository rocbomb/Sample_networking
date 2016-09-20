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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.String
struct String_t;
// System.Configuration.ConfigurationSectionGroup[]
struct ConfigurationSectionGroupU5BU5D_t3045979907;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur2272995238.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m2539860411 (ConfigurationSectionGroupCollection_t4020418340 * __this, Configuration_t710589292 * ___config0, SectionGroupInfo_t2963986668 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t1246329035 * ConfigurationSectionGroupCollection_get_Keys_m1573863704 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m3734034513 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t2272995238 * ConfigurationSectionGroupCollection_get_Item_m732451449 (ConfigurationSectionGroupCollection_t4020418340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.Int32)
extern "C"  ConfigurationSectionGroup_t2272995238 * ConfigurationSectionGroupCollection_get_Item_m3195483898 (ConfigurationSectionGroupCollection_t4020418340 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::Add(System.String,System.Configuration.ConfigurationSectionGroup)
extern "C"  void ConfigurationSectionGroupCollection_Add_m1973553943 (ConfigurationSectionGroupCollection_t4020418340 * __this, String_t* ___name0, ConfigurationSectionGroup_t2272995238 * ___sectionGroup1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::Clear()
extern "C"  void ConfigurationSectionGroupCollection_Clear_m115983992 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::CopyTo(System.Configuration.ConfigurationSectionGroup[],System.Int32)
extern "C"  void ConfigurationSectionGroupCollection_CopyTo_m3254046795 (ConfigurationSectionGroupCollection_t4020418340 * __this, ConfigurationSectionGroupU5BU5D_t3045979907* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::Get(System.Int32)
extern "C"  ConfigurationSectionGroup_t2272995238 * ConfigurationSectionGroupCollection_Get_m3453945180 (ConfigurationSectionGroupCollection_t4020418340 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::Get(System.String)
extern "C"  ConfigurationSectionGroup_t2272995238 * ConfigurationSectionGroupCollection_Get_m154816599 (ConfigurationSectionGroupCollection_t4020418340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionGroupCollection_GetEnumerator_m2304591979 (ConfigurationSectionGroupCollection_t4020418340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSectionGroupCollection::GetKey(System.Int32)
extern "C"  String_t* ConfigurationSectionGroupCollection_GetKey_m2580745524 (ConfigurationSectionGroupCollection_t4020418340 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::Remove(System.String)
extern "C"  void ConfigurationSectionGroupCollection_Remove_m1316805511 (ConfigurationSectionGroupCollection_t4020418340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::RemoveAt(System.Int32)
extern "C"  void ConfigurationSectionGroupCollection_RemoveAt_m2047107263 (ConfigurationSectionGroupCollection_t4020418340 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m1085667179 (ConfigurationSectionGroupCollection_t4020418340 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
