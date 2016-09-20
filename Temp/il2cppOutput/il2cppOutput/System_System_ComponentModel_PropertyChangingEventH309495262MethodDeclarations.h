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

// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t309495262;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2577801083;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_PropertyChangingEvent2577801083.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m1798806779 (PropertyChangingEventHandler_t309495262 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m1869679673 (PropertyChangingEventHandler_t309495262 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2577801083 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangingEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangingEventHandler_BeginInvoke_m3020161510 (PropertyChangingEventHandler_t309495262 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2577801083 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m4139697291 (PropertyChangingEventHandler_t309495262 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
