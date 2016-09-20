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

// System.ComponentModel.InvalidAsynchronousStateException
struct InvalidAsynchronousStateException_t2012435363;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ComponentModel.InvalidAsynchronousStateException::.ctor()
extern "C"  void InvalidAsynchronousStateException__ctor_m2424225424 (InvalidAsynchronousStateException_t2012435363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidAsynchronousStateException::.ctor(System.String)
extern "C"  void InvalidAsynchronousStateException__ctor_m722012786 (InvalidAsynchronousStateException_t2012435363 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidAsynchronousStateException::.ctor(System.String,System.Exception)
extern "C"  void InvalidAsynchronousStateException__ctor_m1989586180 (InvalidAsynchronousStateException_t2012435363 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.InvalidAsynchronousStateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidAsynchronousStateException__ctor_m1553041361 (InvalidAsynchronousStateException_t2012435363 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
