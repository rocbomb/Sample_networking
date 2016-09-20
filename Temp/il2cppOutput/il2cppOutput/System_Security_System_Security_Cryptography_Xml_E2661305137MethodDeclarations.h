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

// System.Security.Cryptography.Xml.EncryptedKey
struct EncryptedKey_t2661305137;
// System.String
struct String_t;
// System.Security.Cryptography.Xml.ReferenceList
struct ReferenceList_t1976769899;
// System.Security.Cryptography.Xml.DataReference
struct DataReference_t1940571555;
// System.Security.Cryptography.Xml.KeyReference
struct KeyReference_t3205193954;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Security_System_Security_Cryptography_Xml_D1940571555.h"
#include "System_Security_System_Security_Cryptography_Xml_K3205193954.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.EncryptedKey::.ctor()
extern "C"  void EncryptedKey__ctor_m2283763477 (EncryptedKey_t2661305137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_CarriedKeyName()
extern "C"  String_t* EncryptedKey_get_CarriedKeyName_m1106526933 (EncryptedKey_t2661305137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_CarriedKeyName(System.String)
extern "C"  void EncryptedKey_set_CarriedKeyName_m476101110 (EncryptedKey_t2661305137 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_Recipient()
extern "C"  String_t* EncryptedKey_get_Recipient_m2253077958 (EncryptedKey_t2661305137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_Recipient(System.String)
extern "C"  void EncryptedKey_set_Recipient_m1511633331 (EncryptedKey_t2661305137 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.ReferenceList System.Security.Cryptography.Xml.EncryptedKey::get_ReferenceList()
extern "C"  ReferenceList_t1976769899 * EncryptedKey_get_ReferenceList_m1754097395 (EncryptedKey_t2661305137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.DataReference)
extern "C"  void EncryptedKey_AddReference_m1509163362 (EncryptedKey_t2661305137 * __this, DataReference_t1940571555 * ___dataReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.KeyReference)
extern "C"  void EncryptedKey_AddReference_m1466629859 (EncryptedKey_t2661305137 * __this, KeyReference_t3205193954 * ___keyReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedKey::GetXml()
extern "C"  XmlElement_t280387747 * EncryptedKey_GetXml_m1690455576 (EncryptedKey_t2661305137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * EncryptedKey_GetXml_m128092988 (EncryptedKey_t2661305137 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedKey_LoadXml_m3866279667 (EncryptedKey_t2661305137 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
