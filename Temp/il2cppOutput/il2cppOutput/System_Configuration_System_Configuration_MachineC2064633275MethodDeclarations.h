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

// System.Configuration.MachineConfigurationHost
struct MachineConfigurationHost_t2064633275;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t1756119244;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3008879018.h"
#include "System_Configuration_System_Configuration_Configura956581384.h"

// System.Void System.Configuration.MachineConfigurationHost::.ctor()
extern "C"  void MachineConfigurationHost__ctor_m799547316 (MachineConfigurationHost_t2064633275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.MachineConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void MachineConfigurationHost_Init_m1758451950 (MachineConfigurationHost_t2064633275 * __this, Il2CppObject * ___root0, ObjectU5BU5D_t1108656482* ___hostInitParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.MachineConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* MachineConfigurationHost_GetStreamName_m2261190636 (MachineConfigurationHost_t2064633275 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.MachineConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void MachineConfigurationHost_InitForConfiguration_m3514428223 (MachineConfigurationHost_t2064633275 * __this, String_t** ___locationSubPath0, String_t** ___configPath1, String_t** ___locationConfigPath2, Il2CppObject * ___root3, ObjectU5BU5D_t1108656482* ___hostInitConfigurationParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.MachineConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  bool MachineConfigurationHost_IsDefinitionAllowed_m1942435997 (MachineConfigurationHost_t2064633275 * __this, String_t* ___configPath0, int32_t ___allowDefinition1, int32_t ___allowExeDefinition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
