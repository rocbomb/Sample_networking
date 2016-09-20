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

// System.Security.Cryptography.Xml.KeyInfoX509Data
struct KeyInfoX509Data_t1086386815;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Xml.XmlElement
struct XmlElement_t280387747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::.ctor()
extern "C"  void KeyInfoX509Data__ctor_m1618395833 (KeyInfoX509Data_t1086386815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void KeyInfoX509Data_AddCertificate_m444002553 (KeyInfoX509Data_t1086386815 * __this, X509Certificate_t3076817455 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddIssuerSerial(System.String,System.String)
extern "C"  void KeyInfoX509Data_AddIssuerSerial_m2787615353 (KeyInfoX509Data_t1086386815 * __this, String_t* ___issuerName0, String_t* ___serialNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectKeyId(System.Byte[])
extern "C"  void KeyInfoX509Data_AddSubjectKeyId_m962937763 (KeyInfoX509Data_t1086386815 * __this, ByteU5BU5D_t4260760469* ___subjectKeyId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectName(System.String)
extern "C"  void KeyInfoX509Data_AddSubjectName_m1557907649 (KeyInfoX509Data_t1086386815 * __this, String_t* ___subjectName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoX509Data::GetXml()
extern "C"  XmlElement_t280387747 * KeyInfoX509Data_GetXml_m863224612 (KeyInfoX509Data_t1086386815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoX509Data_LoadXml_m2182519503 (KeyInfoX509Data_t1086386815 * __this, XmlElement_t280387747 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
