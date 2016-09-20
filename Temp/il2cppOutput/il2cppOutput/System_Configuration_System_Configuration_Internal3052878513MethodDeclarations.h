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

// System.Configuration.InternalConfigurationRoot
struct InternalConfigurationRoot_t3052878513;
// System.Configuration.Internal.InternalConfigEventHandler
struct InternalConfigEventHandler_t2734730341;
// System.Configuration.Internal.IInternalConfigRecord
struct IInternalConfigRecord_t822671547;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1755821458;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Internal2734730341.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.InternalConfigurationRoot::.ctor()
extern "C"  void InternalConfigurationRoot__ctor_m4107330208 (InternalConfigurationRoot_t3052878513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::add_ConfigChanged(System.Configuration.Internal.InternalConfigEventHandler)
extern "C"  void InternalConfigurationRoot_add_ConfigChanged_m2893871913 (InternalConfigurationRoot_t3052878513 * __this, InternalConfigEventHandler_t2734730341 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::remove_ConfigChanged(System.Configuration.Internal.InternalConfigEventHandler)
extern "C"  void InternalConfigurationRoot_remove_ConfigChanged_m1008533042 (InternalConfigurationRoot_t3052878513 * __this, InternalConfigEventHandler_t2734730341 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::add_ConfigRemoved(System.Configuration.Internal.InternalConfigEventHandler)
extern "C"  void InternalConfigurationRoot_add_ConfigRemoved_m2876178901 (InternalConfigurationRoot_t3052878513 * __this, InternalConfigEventHandler_t2734730341 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::remove_ConfigRemoved(System.Configuration.Internal.InternalConfigEventHandler)
extern "C"  void InternalConfigurationRoot_remove_ConfigRemoved_m990840030 (InternalConfigurationRoot_t3052878513 * __this, InternalConfigEventHandler_t2734730341 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigRecord System.Configuration.InternalConfigurationRoot::GetConfigRecord(System.String)
extern "C"  Il2CppObject * InternalConfigurationRoot_GetConfigRecord_m1269002863 (InternalConfigurationRoot_t3052878513 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationRoot::GetSection(System.String,System.String)
extern "C"  Il2CppObject * InternalConfigurationRoot_GetSection_m1289862646 (InternalConfigurationRoot_t3052878513 * __this, String_t* ___section0, String_t* ___configPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationRoot::GetUniqueConfigPath(System.String)
extern "C"  String_t* InternalConfigurationRoot_GetUniqueConfigPath_m3211621881 (InternalConfigurationRoot_t3052878513 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigRecord System.Configuration.InternalConfigurationRoot::GetUniqueConfigRecord(System.String)
extern "C"  Il2CppObject * InternalConfigurationRoot_GetUniqueConfigRecord_m3169167134 (InternalConfigurationRoot_t3052878513 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::Init(System.Configuration.Internal.IInternalConfigHost,System.Boolean)
extern "C"  void InternalConfigurationRoot_Init_m2943906069 (InternalConfigurationRoot_t3052878513 * __this, Il2CppObject * ___host0, bool ___isDesignTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationRoot::RemoveConfig(System.String)
extern "C"  void InternalConfigurationRoot_RemoveConfig_m1311172664 (InternalConfigurationRoot_t3052878513 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationRoot::get_IsDesignTime()
extern "C"  bool InternalConfigurationRoot_get_IsDesignTime_m2271702984 (InternalConfigurationRoot_t3052878513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
