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

// System.Configuration.Internal.InternalConfigEventHandler
struct InternalConfigEventHandler_t2734730341;
// System.Object
struct Il2CppObject;
// System.Configuration.Internal.InternalConfigEventArgs
struct InternalConfigEventArgs_t2376771738;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Configuration_System_Configuration_Internal2376771738.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Configuration.Internal.InternalConfigEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalConfigEventHandler__ctor_m1087044231 (InternalConfigEventHandler_t2734730341 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Internal.InternalConfigEventHandler::Invoke(System.Object,System.Configuration.Internal.InternalConfigEventArgs)
extern "C"  void InternalConfigEventHandler_Invoke_m1300052129 (InternalConfigEventHandler_t2734730341 * __this, Il2CppObject * ___sender0, InternalConfigEventArgs_t2376771738 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Configuration.Internal.InternalConfigEventHandler::BeginInvoke(System.Object,System.Configuration.Internal.InternalConfigEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InternalConfigEventHandler_BeginInvoke_m2271095334 (InternalConfigEventHandler_t2734730341 * __this, Il2CppObject * ___sender0, InternalConfigEventArgs_t2376771738 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Internal.InternalConfigEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void InternalConfigEventHandler_EndInvoke_m643221527 (InternalConfigEventHandler_t2734730341 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
