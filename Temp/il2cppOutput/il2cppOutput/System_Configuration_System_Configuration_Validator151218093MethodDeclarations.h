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

// System.Configuration.ValidatorCallback
struct ValidatorCallback_t151218093;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Configuration.ValidatorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidatorCallback__ctor_m209142654 (ValidatorCallback_t151218093 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ValidatorCallback::Invoke(System.Object)
extern "C"  void ValidatorCallback_Invoke_m58810172 (ValidatorCallback_t151218093 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Configuration.ValidatorCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ValidatorCallback_BeginInvoke_m260564317 (ValidatorCallback_t151218093 * __this, Il2CppObject * ___o0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ValidatorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ValidatorCallback_EndInvoke_m964961422 (ValidatorCallback_t151218093 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
