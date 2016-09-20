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

// System.ComponentModel.HandledEventHandler
struct HandledEventHandler_t3503515282;
// System.Object
struct Il2CppObject;
// System.ComponentModel.HandledEventArgs
struct HandledEventArgs_t3449559879;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_HandledEventArgs3449559879.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.HandledEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void HandledEventHandler__ctor_m2654898881 (HandledEventHandler_t3503515282 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.HandledEventHandler::Invoke(System.Object,System.ComponentModel.HandledEventArgs)
extern "C"  void HandledEventHandler_Invoke_m2684528815 (HandledEventHandler_t3503515282 * __this, Il2CppObject * ___sender0, HandledEventArgs_t3449559879 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.HandledEventHandler::BeginInvoke(System.Object,System.ComponentModel.HandledEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HandledEventHandler_BeginInvoke_m3030340026 (HandledEventHandler_t3503515282 * __this, Il2CppObject * ___sender0, HandledEventArgs_t3449559879 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.HandledEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void HandledEventHandler_EndInvoke_m3443492177 (HandledEventHandler_t3503515282 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
