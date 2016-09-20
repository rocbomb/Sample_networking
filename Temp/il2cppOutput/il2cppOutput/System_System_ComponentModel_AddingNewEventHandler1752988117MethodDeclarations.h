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

// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t1752988117;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AddingNewEventArgs
struct AddingNewEventArgs_t262047460;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_AddingNewEventArgs262047460.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.AddingNewEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AddingNewEventHandler__ctor_m3769267780 (AddingNewEventHandler_t1752988117 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2879799477 (AddingNewEventHandler_t1752988117 * __this, Il2CppObject * ___sender0, AddingNewEventArgs_t262047460 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.AddingNewEventHandler::BeginInvoke(System.Object,System.ComponentModel.AddingNewEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddingNewEventHandler_BeginInvoke_m122420506 (AddingNewEventHandler_t1752988117 * __this, Il2CppObject * ___sender0, AddingNewEventArgs_t262047460 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AddingNewEventHandler_EndInvoke_m3558582868 (AddingNewEventHandler_t1752988117 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
