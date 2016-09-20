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

// System.Configuration.ConnectionStringSettings
struct ConnectionStringSettings_t499840342;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ConnectionStringSettings::.ctor()
extern "C"  void ConnectionStringSettings__ctor_m2281723513 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::.ctor(System.String,System.String)
extern "C"  void ConnectionStringSettings__ctor_m655737253 (ConnectionStringSettings_t499840342 * __this, String_t* ___name0, String_t* ___connectionString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::.ctor(System.String,System.String,System.String)
extern "C"  void ConnectionStringSettings__ctor_m72656161 (ConnectionStringSettings_t499840342 * __this, String_t* ___name0, String_t* ___connectionString1, String_t* ___providerName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::.cctor()
extern "C"  void ConnectionStringSettings__cctor_m1531855956 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConnectionStringSettings::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ConnectionStringSettings_get_Properties_m362219946 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConnectionStringSettings::get_Name()
extern "C"  String_t* ConnectionStringSettings_get_Name_m493845628 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::set_Name(System.String)
extern "C"  void ConnectionStringSettings_set_Name_m2626371823 (ConnectionStringSettings_t499840342 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConnectionStringSettings::get_ProviderName()
extern "C"  String_t* ConnectionStringSettings_get_ProviderName_m164087245 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::set_ProviderName(System.String)
extern "C"  void ConnectionStringSettings_set_ProviderName_m2951965246 (ConnectionStringSettings_t499840342 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConnectionStringSettings::get_ConnectionString()
extern "C"  String_t* ConnectionStringSettings_get_ConnectionString_m3905369472 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConnectionStringSettings::set_ConnectionString(System.String)
extern "C"  void ConnectionStringSettings_set_ConnectionString_m3534895339 (ConnectionStringSettings_t499840342 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConnectionStringSettings::ToString()
extern "C"  String_t* ConnectionStringSettings_ToString_m4150538004 (ConnectionStringSettings_t499840342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
