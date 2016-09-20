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

// System.Security.Cryptography.Xml.EncryptionProperty
struct EncryptionProperty_t1187939374;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"

// System.Void System.Security.Cryptography.Xml.EncryptionProperty::.ctor(System.Xml.XmlElement)
extern "C"  void EncryptionProperty__ctor_m3975477951 (EncryptionProperty_t1187939374 * __this, XmlElement_t280387747 * ___elemProp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Id()
extern "C"  String_t* EncryptionProperty_get_Id_m2753838125 (EncryptionProperty_t1187939374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Target()
extern "C"  String_t* EncryptionProperty_get_Target_m2616887971 (EncryptionProperty_t1187939374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionProperty::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * EncryptionProperty_GetXml_m1000828793 (EncryptionProperty_t1187939374 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionProperty::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionProperty_LoadXml_m2057228592 (EncryptionProperty_t1187939374 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
