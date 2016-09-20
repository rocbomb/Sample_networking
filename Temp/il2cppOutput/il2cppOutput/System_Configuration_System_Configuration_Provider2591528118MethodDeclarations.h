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

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t2591528118;
// System.Configuration.ProviderSettings
struct ProviderSettings_t1407873976;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Provider1407873976.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ProviderSettingsCollection::.ctor()
extern "C"  void ProviderSettingsCollection__ctor_m35678041 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C"  void ProviderSettingsCollection__cctor_m623923060 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettingsCollection::Add(System.Configuration.ProviderSettings)
extern "C"  void ProviderSettingsCollection_Add_m4202927567 (ProviderSettingsCollection_t2591528118 * __this, ProviderSettings_t1407873976 * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettingsCollection::Clear()
extern "C"  void ProviderSettingsCollection_Clear_m1736778628 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * ProviderSettingsCollection_CreateNewElement_m1675093261 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * ProviderSettingsCollection_GetElementKey_m2142455600 (ProviderSettingsCollection_t2591528118 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettingsCollection::Remove(System.String)
extern "C"  void ProviderSettingsCollection_Remove_m4021973907 (ProviderSettingsCollection_t2591528118 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettings System.Configuration.ProviderSettingsCollection::get_Item(System.Int32)
extern "C"  ProviderSettings_t1407873976 * ProviderSettingsCollection_get_Item_m1962548080 (ProviderSettingsCollection_t2591528118 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettingsCollection::set_Item(System.Int32,System.Configuration.ProviderSettings)
extern "C"  void ProviderSettingsCollection_set_Item_m3380885197 (ProviderSettingsCollection_t2591528118 * __this, int32_t ___n0, ProviderSettings_t1407873976 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettings System.Configuration.ProviderSettingsCollection::get_Item(System.String)
extern "C"  ProviderSettings_t1407873976 * ProviderSettingsCollection_get_Item_m1166146755 (ProviderSettingsCollection_t2591528118 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ProviderSettingsCollection_get_Properties_m1365446666 (ProviderSettingsCollection_t2591528118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
