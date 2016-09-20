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

// System.Configuration.NameValueConfigurationCollection
struct NameValueConfigurationCollection_t1404640306;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Configuration.NameValueConfigurationElement
struct NameValueConfigurationElement_t58957922;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_NameValueC58957922.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Configuration.NameValueConfigurationCollection::.ctor()
extern "C"  void NameValueConfigurationCollection__ctor_m2115459101 (NameValueConfigurationCollection_t1404640306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::.cctor()
extern "C"  void NameValueConfigurationCollection__cctor_m672626480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Configuration.NameValueConfigurationCollection::get_AllKeys()
extern "C"  StringU5BU5D_t4054002952* NameValueConfigurationCollection_get_AllKeys_m865198664 (NameValueConfigurationCollection_t1404640306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.NameValueConfigurationElement System.Configuration.NameValueConfigurationCollection::get_Item(System.String)
extern "C"  NameValueConfigurationElement_t58957922 * NameValueConfigurationCollection_get_Item_m1234245817 (NameValueConfigurationCollection_t1404640306 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::set_Item(System.String,System.Configuration.NameValueConfigurationElement)
extern "C"  void NameValueConfigurationCollection_set_Item_m1323039590 (NameValueConfigurationCollection_t1404640306 * __this, String_t* ___name0, NameValueConfigurationElement_t58957922 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.NameValueConfigurationCollection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * NameValueConfigurationCollection_get_Properties_m3287231878 (NameValueConfigurationCollection_t1404640306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::Add(System.Configuration.NameValueConfigurationElement)
extern "C"  void NameValueConfigurationCollection_Add_m711546983 (NameValueConfigurationCollection_t1404640306 * __this, NameValueConfigurationElement_t58957922 * ___nameValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::Clear()
extern "C"  void NameValueConfigurationCollection_Clear_m3816559688 (NameValueConfigurationCollection_t1404640306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.NameValueConfigurationCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * NameValueConfigurationCollection_CreateNewElement_m3642915401 (NameValueConfigurationCollection_t1404640306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.NameValueConfigurationCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * NameValueConfigurationCollection_GetElementKey_m2742033068 (NameValueConfigurationCollection_t1404640306 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::Remove(System.Configuration.NameValueConfigurationElement)
extern "C"  void NameValueConfigurationCollection_Remove_m4133642774 (NameValueConfigurationCollection_t1404640306 * __this, NameValueConfigurationElement_t58957922 * ___nameValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.NameValueConfigurationCollection::Remove(System.String)
extern "C"  void NameValueConfigurationCollection_Remove_m3301621079 (NameValueConfigurationCollection_t1404640306 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
