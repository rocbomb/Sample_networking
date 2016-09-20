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

// System.Security.Cryptography.Xml.EncryptionMethod
struct EncryptionMethod_t2554121850;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor()
extern "C"  void EncryptionMethod__ctor_m2919588460 (EncryptionMethod_t2554121850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor(System.String)
extern "C"  void EncryptionMethod__ctor_m154962966 (EncryptionMethod_t2554121850 * __this, String_t* ___strAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionMethod::get_KeyAlgorithm()
extern "C"  String_t* EncryptionMethod_get_KeyAlgorithm_m3304358702 (EncryptionMethod_t2554121850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeyAlgorithm(System.String)
extern "C"  void EncryptionMethod_set_KeyAlgorithm_m1547416061 (EncryptionMethod_t2554121850 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.EncryptionMethod::get_KeySize()
extern "C"  int32_t EncryptionMethod_get_KeySize_m70208497 (EncryptionMethod_t2554121850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeySize(System.Int32)
extern "C"  void EncryptionMethod_set_KeySize_m679335422 (EncryptionMethod_t2554121850 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionMethod::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * EncryptionMethod_GetXml_m2255870469 (EncryptionMethod_t2554121850 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionMethod_LoadXml_m27001276 (EncryptionMethod_t2554121850 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
