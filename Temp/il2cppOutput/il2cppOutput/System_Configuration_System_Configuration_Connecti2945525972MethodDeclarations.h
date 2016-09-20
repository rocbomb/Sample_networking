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

// System.Configuration.ConnectionStringSettingsCollection
struct ConnectionStringSettingsCollection_t2945525972;
// System.Configuration.ConnectionStringSettings
struct ConnectionStringSettings_t499840342;
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
#include "System_Configuration_System_Configuration_Connectio499840342.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Configuration.ConnectionStringSettingsCollection::.ctor()
extern "C"  void ConnectionStringSettingsCollection__ctor_m385713659 (ConnectionStringSettingsCollection_t2945525972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConnectionStringSettings System.Configuration.ConnectionStringSettingsCollection::get_Item(System.String)
extern "C"  ConnectionStringSettings_t499840342 * ConnectionStringSettingsCollection_get_Item_m3481795463 (ConnectionStringSettingsCollection_t2945525972 * __this, String_t* ___Name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConnectionStringSettings System.Configuration.ConnectionStringSettingsCollection::get_Item(System.Int32)
extern "C"  ConnectionStringSettings_t499840342 * ConnectionStringSettingsCollection_get_Item_m513225772 (ConnectionStringSettingsCollection_t2945525972 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::set_Item(System.Int32,System.Configuration.ConnectionStringSettings)
extern "C"  void ConnectionStringSettingsCollection_set_Item_m323128973 (ConnectionStringSettingsCollection_t2945525972 * __this, int32_t ___index0, ConnectionStringSettings_t499840342 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConnectionStringSettingsCollection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ConnectionStringSettingsCollection_get_Properties_m1254331560 (ConnectionStringSettingsCollection_t2945525972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConnectionStringSettingsCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * ConnectionStringSettingsCollection_CreateNewElement_m1332552491 (ConnectionStringSettingsCollection_t2945525972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConnectionStringSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * ConnectionStringSettingsCollection_GetElementKey_m361442766 (ConnectionStringSettingsCollection_t2945525972 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::Add(System.Configuration.ConnectionStringSettings)
extern "C"  void ConnectionStringSettingsCollection_Add_m3944240911 (ConnectionStringSettingsCollection_t2945525972 * __this, ConnectionStringSettings_t499840342 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::Clear()
extern "C"  void ConnectionStringSettingsCollection_Clear_m2086814246 (ConnectionStringSettingsCollection_t2945525972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConnectionStringSettingsCollection::IndexOf(System.Configuration.ConnectionStringSettings)
extern "C"  int32_t ConnectionStringSettingsCollection_IndexOf_m4092642535 (ConnectionStringSettingsCollection_t2945525972 * __this, ConnectionStringSettings_t499840342 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::Remove(System.Configuration.ConnectionStringSettings)
extern "C"  void ConnectionStringSettingsCollection_Remove_m2655470076 (ConnectionStringSettingsCollection_t2945525972 * __this, ConnectionStringSettings_t499840342 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::Remove(System.String)
extern "C"  void ConnectionStringSettingsCollection_Remove_m1361333941 (ConnectionStringSettingsCollection_t2945525972 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::RemoveAt(System.Int32)
extern "C"  void ConnectionStringSettingsCollection_RemoveAt_m3427488593 (ConnectionStringSettingsCollection_t2945525972 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettingsCollection::BaseAdd(System.Int32,System.Configuration.ConfigurationElement)
extern "C"  void ConnectionStringSettingsCollection_BaseAdd_m237998377 (ConnectionStringSettingsCollection_t2945525972 * __this, int32_t ___index0, ConfigurationElement_t3842833450 * ___element1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
