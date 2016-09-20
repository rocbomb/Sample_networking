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

// System.Configuration.ExeContext
struct ExeContext_t2243972865;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configura664448871.h"

// System.Void System.Configuration.ExeContext::.ctor(System.String,System.Configuration.ConfigurationUserLevel)
extern "C"  void ExeContext__ctor_m1963384998 (ExeContext_t2243972865 * __this, String_t* ___path0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeContext::get_ExePath()
extern "C"  String_t* ExeContext_get_ExePath_m272894301 (ExeContext_t2243972865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationUserLevel System.Configuration.ExeContext::get_UserLevel()
extern "C"  int32_t ExeContext_get_UserLevel_m3028542613 (ExeContext_t2243972865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
