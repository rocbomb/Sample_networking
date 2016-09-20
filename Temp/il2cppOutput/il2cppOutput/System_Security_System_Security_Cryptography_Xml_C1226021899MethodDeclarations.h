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

// System.Security.Cryptography.Xml.CipherData
struct CipherData_t1226021899;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.Xml.CipherReference
struct CipherReference_t3037652706;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;

#include "codegen/il2cpp-codegen.h"
#include "System_Security_System_Security_Cryptography_Xml_C3037652706.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.CipherData::.ctor()
extern "C"  void CipherData__ctor_m3849960763 (CipherData_t1226021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::.ctor(System.Byte[])
extern "C"  void CipherData__ctor_m2933447278 (CipherData_t1226021899 * __this, ByteU5BU5D_t4260760469* ___cipherValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.CipherReference System.Security.Cryptography.Xml.CipherData::get_CipherReference()
extern "C"  CipherReference_t3037652706 * CipherData_get_CipherReference_m1541159737 (CipherData_t1226021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherReference(System.Security.Cryptography.Xml.CipherReference)
extern "C"  void CipherData_set_CipherReference_m3695916678 (CipherData_t1226021899 * __this, CipherReference_t3037652706 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.CipherData::get_CipherValue()
extern "C"  ByteU5BU5D_t4260760469* CipherData_get_CipherValue_m3441882496 (CipherData_t1226021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherValue(System.Byte[])
extern "C"  void CipherData_set_CipherValue_m878184231 (CipherData_t1226021899 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherData::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t280387747 * CipherData_GetXml_m2048488534 (CipherData_t1226021899 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::LoadXml(System.Xml.XmlElement)
extern "C"  void CipherData_LoadXml_m4179947021 (CipherData_t1226021899 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
