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

// System.Security.Cryptography.Xml.TransformChain
struct TransformChain_t687069547;
// System.Security.Cryptography.Xml.Transform
struct Transform_t3619286350;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_Security_System_Security_Cryptography_Xml_T3619286350.h"

// System.Void System.Security.Cryptography.Xml.TransformChain::.ctor()
extern "C"  void TransformChain__ctor_m21985371 (TransformChain_t687069547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.TransformChain::get_Count()
extern "C"  int32_t TransformChain_get_Count_m326148271 (TransformChain_t687069547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.TransformChain::Add(System.Security.Cryptography.Xml.Transform)
extern "C"  void TransformChain_Add_m934425336 (TransformChain_t687069547 * __this, Transform_t3619286350 * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.TransformChain::GetEnumerator()
extern "C"  Il2CppObject * TransformChain_GetEnumerator_m4055033469 (TransformChain_t687069547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
