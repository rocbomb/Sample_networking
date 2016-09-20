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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1716455733;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Diagnostics.TraceImpl::.cctor()
extern "C"  void TraceImpl__cctor_m567859125 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceImpl::get_AutoFlush()
extern "C"  bool TraceImpl_get_AutoFlush_m2449720364 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentLevel()
extern "C"  int32_t TraceImpl_get_IndentLevel_m1877343925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentSize()
extern "C"  int32_t TraceImpl_get_IndentSize_m126227346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::get_Listeners()
extern "C"  TraceListenerCollection_t1716455733 * TraceImpl_get_Listeners_m1282358819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceImpl::get_ListenersSyncRoot()
extern "C"  Il2CppObject * TraceImpl_get_ListenersSyncRoot_m291365972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::InitOnce()
extern "C"  void TraceImpl_InitOnce_m1782629693 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.String)
extern "C"  void TraceImpl_WriteLine_m513897561 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
