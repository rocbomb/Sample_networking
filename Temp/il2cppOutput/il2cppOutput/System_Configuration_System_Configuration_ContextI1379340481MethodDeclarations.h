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

// System.Configuration.ContextInformation
struct ContextInformation_t1379340481;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ContextInformation::.ctor(System.Configuration.Configuration,System.Object)
extern "C"  void ContextInformation__ctor_m3679103805 (ContextInformation_t1379340481 * __this, Configuration_t710589292 * ___config0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ContextInformation::GetSection(System.String)
extern "C"  Il2CppObject * ContextInformation_GetSection_m1602283730 (ContextInformation_t1379340481 * __this, String_t* ___sectionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ContextInformation::get_HostingContext()
extern "C"  Il2CppObject * ContextInformation_get_HostingContext_m2267756767 (ContextInformation_t1379340481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ContextInformation::get_IsMachineLevel()
extern "C"  bool ContextInformation_get_IsMachineLevel_m3780086208 (ContextInformation_t1379340481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
