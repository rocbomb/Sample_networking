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

// System.Configuration.KeyValueConfigurationCollection
struct KeyValueConfigurationCollection_t3698263992;
// System.Configuration.KeyValueConfigurationElement
struct KeyValueConfigurationElement_t3309490844;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_KeyValue3309490844.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Configuration.KeyValueConfigurationCollection::.ctor()
extern "C"  void KeyValueConfigurationCollection__ctor_m4003948729 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.KeyValueConfigurationCollection::Add(System.Configuration.KeyValueConfigurationElement)
extern "C"  void KeyValueConfigurationCollection_Add_m1193436299 (KeyValueConfigurationCollection_t3698263992 * __this, KeyValueConfigurationElement_t3309490844 * ___keyValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.KeyValueConfigurationCollection::Add(System.String,System.String)
extern "C"  void KeyValueConfigurationCollection_Add_m324036870 (KeyValueConfigurationCollection_t3698263992 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.KeyValueConfigurationCollection::Clear()
extern "C"  void KeyValueConfigurationCollection_Clear_m1410082020 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.KeyValueConfigurationCollection::Remove(System.String)
extern "C"  void KeyValueConfigurationCollection_Remove_m1907592435 (KeyValueConfigurationCollection_t3698263992 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Configuration.KeyValueConfigurationCollection::get_AllKeys()
extern "C"  StringU5BU5D_t4054002952* KeyValueConfigurationCollection_get_AllKeys_m37253442 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.KeyValueConfigurationElement System.Configuration.KeyValueConfigurationCollection::get_Item(System.String)
extern "C"  KeyValueConfigurationElement_t3309490844 * KeyValueConfigurationCollection_get_Item_m1723434743 (KeyValueConfigurationCollection_t3698263992 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.KeyValueConfigurationCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * KeyValueConfigurationCollection_CreateNewElement_m566819353 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.KeyValueConfigurationCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * KeyValueConfigurationCollection_GetElementKey_m3986783066 (KeyValueConfigurationCollection_t3698263992 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.KeyValueConfigurationCollection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * KeyValueConfigurationCollection_get_Properties_m293965444 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.KeyValueConfigurationCollection::get_ThrowOnDuplicate()
extern "C"  bool KeyValueConfigurationCollection_get_ThrowOnDuplicate_m1245845376 (KeyValueConfigurationCollection_t3698263992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
