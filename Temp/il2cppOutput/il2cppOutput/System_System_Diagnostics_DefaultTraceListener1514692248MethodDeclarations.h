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

// System.Diagnostics.DefaultTraceListener
struct DefaultTraceListener_t1514692248;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Diagnostics.DefaultTraceListener::.ctor()
extern "C"  void DefaultTraceListener__ctor_m923581713 (DefaultTraceListener_t1514692248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::.cctor()
extern "C"  void DefaultTraceListener__cctor_m2379133116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DefaultTraceListener::GetPrefix(System.String,System.String)
extern "C"  String_t* DefaultTraceListener_GetPrefix_m3121650148 (Il2CppObject * __this /* static, unused */, String_t* ___var0, String_t* ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::set_AssertUiEnabled(System.Boolean)
extern "C"  void DefaultTraceListener_set_AssertUiEnabled_m1365900400 (DefaultTraceListener_t1514692248 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DefaultTraceListener::get_LogFileName()
extern "C"  String_t* DefaultTraceListener_get_LogFileName_m2062746356 (DefaultTraceListener_t1514692248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::set_LogFileName(System.String)
extern "C"  void DefaultTraceListener_set_LogFileName_m2293260229 (DefaultTraceListener_t1514692248 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteWindowsDebugString(System.String)
extern "C"  void DefaultTraceListener_WriteWindowsDebugString_m377407667 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteDebugString(System.String)
extern "C"  void DefaultTraceListener_WriteDebugString_m330406218 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteMonoTrace(System.String)
extern "C"  void DefaultTraceListener_WriteMonoTrace_m2434127084 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WritePrefix()
extern "C"  void DefaultTraceListener_WritePrefix_m3164195520 (DefaultTraceListener_t1514692248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteImpl(System.String)
extern "C"  void DefaultTraceListener_WriteImpl_m2818805684 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLogFile(System.String,System.String)
extern "C"  void DefaultTraceListener_WriteLogFile_m1195915626 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, String_t* ___logFile1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLogFileImpl(System.String,System.String)
extern "C"  void DefaultTraceListener_WriteLogFileImpl_m3645873322 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, String_t* ___logFile1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::Write(System.String)
extern "C"  void DefaultTraceListener_Write_m49663860 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DefaultTraceListener::WriteLine(System.String)
extern "C"  void DefaultTraceListener_WriteLine_m845832032 (DefaultTraceListener_t1514692248 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
