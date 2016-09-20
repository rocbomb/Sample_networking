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

// System.ComponentModel.WarningException
struct WarningException_t906503327;
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

// System.Void System.ComponentModel.WarningException::.ctor(System.String)
extern "C"  void WarningException__ctor_m3877239324 (WarningException_t906503327 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.String)
extern "C"  void WarningException__ctor_m831865176 (WarningException_t906503327 * __this, String_t* ___message0, String_t* ___helpUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.String,System.String)
extern "C"  void WarningException__ctor_m4071960468 (WarningException_t906503327 * __this, String_t* ___message0, String_t* ___helpUrl1, String_t* ___helpTopic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor()
extern "C"  void WarningException__ctor_m4010779302 (WarningException_t906503327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.String,System.Exception)
extern "C"  void WarningException__ctor_m394380954 (WarningException_t906503327 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WarningException__ctor_m507404007 (WarningException_t906503327 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.WarningException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WarningException_GetObjectData_m1795280708 (WarningException_t906503327 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.WarningException::get_HelpTopic()
extern "C"  String_t* WarningException_get_HelpTopic_m3933305478 (WarningException_t906503327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.WarningException::get_HelpUrl()
extern "C"  String_t* WarningException_get_HelpUrl_m2029678662 (WarningException_t906503327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
