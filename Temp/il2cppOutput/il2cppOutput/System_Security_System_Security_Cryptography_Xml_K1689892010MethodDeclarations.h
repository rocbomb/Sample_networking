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

// System.Security.Cryptography.Xml.KeyInfoEncryptedKey
struct KeyInfoEncryptedKey_t1689892010;
// System.Security.Cryptography.Xml.EncryptedKey
struct EncryptedKey_t2661305137;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "System_Security_System_Security_Cryptography_Xml_E2661305137.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor()
extern "C"  void KeyInfoEncryptedKey__ctor_m2738300014 (KeyInfoEncryptedKey_t1689892010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey__ctor_m2049758943 (KeyInfoEncryptedKey_t1689892010 * __this, EncryptedKey_t2661305137 * ___ek0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.EncryptedKey System.Security.Cryptography.Xml.KeyInfoEncryptedKey::get_EncryptedKey()
extern "C"  EncryptedKey_t2661305137 * KeyInfoEncryptedKey_get_EncryptedKey_m3356649672 (KeyInfoEncryptedKey_t1689892010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::set_EncryptedKey(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey_set_EncryptedKey_m1453520639 (KeyInfoEncryptedKey_t1689892010 * __this, EncryptedKey_t2661305137 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoEncryptedKey::GetXml()
extern "C"  XmlElement_t280387747 * KeyInfoEncryptedKey_GetXml_m4053339151 (KeyInfoEncryptedKey_t1689892010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoEncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * KeyInfoEncryptedKey_GetXml_m3824707059 (KeyInfoEncryptedKey_t1689892010 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoEncryptedKey_LoadXml_m3952287098 (KeyInfoEncryptedKey_t1689892010 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
