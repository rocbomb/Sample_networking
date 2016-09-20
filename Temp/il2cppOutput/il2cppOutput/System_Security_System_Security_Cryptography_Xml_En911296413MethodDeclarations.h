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

// System.Security.Cryptography.Xml.EncryptedReference
struct EncryptedReference_t911296413;
// System.String
struct String_t;
// System.Security.Cryptography.Xml.TransformChain
struct TransformChain_t687069547;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Security_System_Security_Cryptography_Xml_Tr687069547.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.EncryptedReference::.ctor()
extern "C"  void EncryptedReference__ctor_m4017262313 (EncryptedReference_t911296413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_ReferenceType()
extern "C"  String_t* EncryptedReference_get_ReferenceType_m579042150 (EncryptedReference_t911296413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_ReferenceType(System.String)
extern "C"  void EncryptedReference_set_ReferenceType_m3895756371 (EncryptedReference_t911296413 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.TransformChain System.Security.Cryptography.Xml.EncryptedReference::get_TransformChain()
extern "C"  TransformChain_t687069547 * EncryptedReference_get_TransformChain_m1371527941 (EncryptedReference_t911296413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_TransformChain(System.Security.Cryptography.Xml.TransformChain)
extern "C"  void EncryptedReference_set_TransformChain_m2593147974 (EncryptedReference_t911296413 * __this, TransformChain_t687069547 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_Uri()
extern "C"  String_t* EncryptedReference_get_Uri_m860866029 (EncryptedReference_t911296413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_Uri(System.String)
extern "C"  void EncryptedReference_set_Uri_m871647212 (EncryptedReference_t911296413 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml()
extern "C"  XmlElement_t280387747 * EncryptedReference_GetXml_m2719253188 (EncryptedReference_t911296413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * EncryptedReference_GetXml_m2280175336 (EncryptedReference_t911296413 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedReference_LoadXml_m3336575135 (EncryptedReference_t911296413 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
