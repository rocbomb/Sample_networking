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

// System.ComponentModel.CancelEventHandler
struct CancelEventHandler_t1585970870;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CancelEventArgs
struct CancelEventArgs_t2876708259;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_ComponentModel_CancelEventArgs2876708259.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ComponentModel.CancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CancelEventHandler__ctor_m2477307539 (CancelEventHandler_t1585970870 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CancelEventHandler::Invoke(System.Object,System.ComponentModel.CancelEventArgs)
extern "C"  void CancelEventHandler_Invoke_m1465630457 (CancelEventHandler_t1585970870 * __this, Il2CppObject * ___sender0, CancelEventArgs_t2876708259 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.CancelEventHandler::BeginInvoke(System.Object,System.ComponentModel.CancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CancelEventHandler_BeginInvoke_m1585926710 (CancelEventHandler_t1585970870 * __this, Il2CppObject * ___sender0, CancelEventArgs_t2876708259 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CancelEventHandler_EndInvoke_m2150394403 (CancelEventHandler_t1585970870 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
