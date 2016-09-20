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

// System.Configuration.Internal.StreamChangeCallback
struct StreamChangeCallback_t956681803;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Configuration.Internal.StreamChangeCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void StreamChangeCallback__ctor_m2819925165 (StreamChangeCallback_t956681803 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Internal.StreamChangeCallback::Invoke(System.String)
extern "C"  void StreamChangeCallback_Invoke_m221616923 (StreamChangeCallback_t956681803 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Configuration.Internal.StreamChangeCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StreamChangeCallback_BeginInvoke_m3035979936 (StreamChangeCallback_t956681803 * __this, String_t* ___streamName0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Internal.StreamChangeCallback::EndInvoke(System.IAsyncResult)
extern "C"  void StreamChangeCallback_EndInvoke_m765949245 (StreamChangeCallback_t956681803 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
