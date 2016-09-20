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

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t1314853459;
// System.String
struct String_t;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t2591528118;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1000417341;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t4281214715;
// System.Configuration.ProviderSettings
struct ProviderSettings_t1407873976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Protecte1000417341.h"
#include "System_Configuration_System_Configuration_Provider1407873976.h"

// System.Void System.Configuration.ProtectedConfigurationSection::.ctor()
extern "C"  void ProtectedConfigurationSection__ctor_m2766461118 (ProtectedConfigurationSection_t1314853459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C"  void ProtectedConfigurationSection__cctor_m3673819823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProtectedConfigurationSection::get_DefaultProvider()
extern "C"  String_t* ProtectedConfigurationSection_get_DefaultProvider_m1346565058 (ProtectedConfigurationSection_t1314853459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationSection::set_DefaultProvider(System.String)
extern "C"  void ProtectedConfigurationSection_set_DefaultProvider_m362476497 (ProtectedConfigurationSection_t1314853459 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C"  ProviderSettingsCollection_t2591528118 * ProtectedConfigurationSection_get_Providers_m2992613259 (ProtectedConfigurationSection_t1314853459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ProtectedConfigurationSection_get_Properties_m1794991967 (ProtectedConfigurationSection_t1314853459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProtectedConfigurationSection::EncryptSection(System.String,System.Configuration.ProtectedConfigurationProvider)
extern "C"  String_t* ProtectedConfigurationSection_EncryptSection_m451835957 (ProtectedConfigurationSection_t1314853459 * __this, String_t* ___clearXml0, ProtectedConfigurationProvider_t1000417341 * ___protectionProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProtectedConfigurationSection::DecryptSection(System.String,System.Configuration.ProtectedConfigurationProvider)
extern "C"  String_t* ProtectedConfigurationSection_DecryptSection_m1827048797 (ProtectedConfigurationSection_t1314853459 * __this, String_t* ___encryptedXml0, ProtectedConfigurationProvider_t1000417341 * ___protectionProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C"  ProtectedConfigurationProviderCollection_t4281214715 * ProtectedConfigurationSection_GetAllProviders_m625639758 (ProtectedConfigurationSection_t1314853459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C"  ProtectedConfigurationProvider_t1000417341 * ProtectedConfigurationSection_InstantiateProvider_m2857613203 (ProtectedConfigurationSection_t1314853459 * __this, ProviderSettings_t1407873976 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
