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

// System.Configuration.ConfigurationSaveEventHandler
struct ConfigurationSaveEventHandler_t790355705;
// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.ConfigurationSaveEventArgs
struct ConfigurationSaveEventArgs_t2605573640;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_Configur2605573640.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Configuration.ConfigurationSaveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConfigurationSaveEventHandler__ctor_m3195186762 (ConfigurationSaveEventHandler_t790355705 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventHandler::Invoke(System.Configuration.Configuration,System.Configuration.ConfigurationSaveEventArgs)
extern "C"  void ConfigurationSaveEventHandler_Invoke_m1209397238 (ConfigurationSaveEventHandler_t790355705 * __this, Configuration_t710589292 * ___sender0, ConfigurationSaveEventArgs_t2605573640 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Configuration.ConfigurationSaveEventHandler::BeginInvoke(System.Configuration.Configuration,System.Configuration.ConfigurationSaveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConfigurationSaveEventHandler_BeginInvoke_m4265288461 (ConfigurationSaveEventHandler_t790355705 * __this, Configuration_t710589292 * ___sender0, ConfigurationSaveEventArgs_t2605573640 * ___args1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConfigurationSaveEventHandler_EndInvoke_m1008522586 (ConfigurationSaveEventHandler_t790355705 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
