﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.ClientConfigurationSystem
struct ClientConfigurationSystem_t3765224944;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t710589292;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C"  void ClientConfigurationSystem__ctor_m3162148417 (ClientConfigurationSystem_t3765224944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C"  Il2CppObject * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m2078483914 (ClientConfigurationSystem_t3765224944 * __this, String_t* ___configKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.RefreshConfig(System.String)
extern "C"  void ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_RefreshConfig_m1236300119 (ClientConfigurationSystem_t3765224944 * __this, String_t* ___sectionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.get_SupportsUserConfig()
extern "C"  bool ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_get_SupportsUserConfig_m2402003540 (ClientConfigurationSystem_t3765224944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern "C"  Configuration_t710589292 * ClientConfigurationSystem_get_Configuration_m2674420348 (ClientConfigurationSystem_t3765224944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
