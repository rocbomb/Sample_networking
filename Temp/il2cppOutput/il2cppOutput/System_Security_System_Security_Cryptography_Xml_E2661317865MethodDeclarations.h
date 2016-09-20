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

// System.Security.Cryptography.Xml.EncryptedXml
struct EncryptedXml_t2661317865;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.Xml.EncryptedData
struct EncryptedData_t213938800;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3097904804;
// System.Security.Cryptography.Xml.EncryptedKey
struct EncryptedKey_t2661305137;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode2126978938.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Security_System_Security_Cryptography_Xml_En213938800.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg3097904804.h"
#include "System_Security_System_Security_Cryptography_Xml_E2661305137.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.EncryptedXml::.ctor()
extern "C"  void EncryptedXml__ctor_m730838109 (EncryptedXml_t2661317865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::.ctor(System.Xml.XmlDocument)
extern "C"  void EncryptedXml__ctor_m3374170049 (EncryptedXml_t2661317865 * __this, XmlDocument_t730752740 * ___document0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Security.Cryptography.Xml.EncryptedXml::get_Encoding()
extern "C"  Encoding_t2012439129 * EncryptedXml_get_Encoding_m645263769 (EncryptedXml_t2661317865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.Xml.EncryptedXml::get_Padding()
extern "C"  int32_t EncryptedXml_get_Padding_m2150474241 (EncryptedXml_t2661317865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::AddKeyNameMapping(System.String,System.Object)
extern "C"  void EncryptedXml_AddKeyNameMapping_m1202407984 (EncryptedXml_t2661317865 * __this, String_t* ___keyName0, Il2CppObject * ___keyObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptData(System.Security.Cryptography.Xml.EncryptedData,System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_DecryptData_m338751385 (EncryptedXml_t2661317865 * __this, EncryptedData_t213938800 * ___encryptedData0, SymmetricAlgorithm_t3097904804 * ___symAlg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::DecryptDocument()
extern "C"  void EncryptedXml_DecryptDocument_m505587907 (EncryptedXml_t2661317865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptEncryptedKey(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_DecryptEncryptedKey_m4203553120 (EncryptedXml_t2661317865 * __this, EncryptedKey_t2661305137 * ___encryptedKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_DecryptKey_m2816611803 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___keyData0, SymmetricAlgorithm_t3097904804 * ___symAlg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_DecryptKey_m430999582 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___keyData0, RSA_t2466814310 * ___rsa1, bool ___fOAEP2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.EncryptedData System.Security.Cryptography.Xml.EncryptedXml::Encrypt(System.Xml.XmlElement,System.String)
extern "C"  EncryptedData_t213938800 * EncryptedXml_Encrypt_m2680535096 (EncryptedXml_t2661317865 * __this, XmlElement_t280387747 * ___inputElement0, String_t* ___keyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_EncryptData_m1444675158 (EncryptedXml_t2661317865 * __this, ByteU5BU5D_t4260760469* ___plainText0, SymmetricAlgorithm_t3097904804 * ___symAlg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptDataCore(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_EncryptDataCore_m1341435959 (EncryptedXml_t2661317865 * __this, ByteU5BU5D_t4260760469* ___plainText0, SymmetricAlgorithm_t3097904804 * ___symAlg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Xml.XmlElement,System.Security.Cryptography.SymmetricAlgorithm,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_EncryptData_m2479132473 (EncryptedXml_t2661317865 * __this, XmlElement_t280387747 * ___inputElement0, SymmetricAlgorithm_t3097904804 * ___symAlg1, bool ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_EncryptKey_m59660467 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___keyData0, SymmetricAlgorithm_t3097904804 * ___symAlg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_EncryptKey_m1969015542 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___keyData0, RSA_t2466814310 * ___rsa1, bool ___fOAEP2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithm(System.String)
extern "C"  SymmetricAlgorithm_t3097904804 * EncryptedXml_GetAlgorithm_m2549621962 (Il2CppObject * __this /* static, unused */, String_t* ___symAlgUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithmUri(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  String_t* EncryptedXml_GetAlgorithmUri_m709265334 (Il2CppObject * __this /* static, unused */, SymmetricAlgorithm_t3097904804 * ___symAlg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetKeyWrapAlgorithmUri(System.Object)
extern "C"  String_t* EncryptedXml_GetKeyWrapAlgorithmUri_m215939296 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___keyAlg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionIV(System.Security.Cryptography.Xml.EncryptedData,System.String)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_GetDecryptionIV_m590179547 (EncryptedXml_t2661317865 * __this, EncryptedData_t213938800 * ___encryptedData0, String_t* ___symAlgUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionKey(System.Security.Cryptography.Xml.EncryptedData,System.String)
extern "C"  SymmetricAlgorithm_t3097904804 * EncryptedXml_GetDecryptionKey_m1148042629 (EncryptedXml_t2661317865 * __this, EncryptedData_t213938800 * ___encryptedData0, String_t* ___symAlgUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::ReplaceData(System.Xml.XmlElement,System.Byte[])
extern "C"  void EncryptedXml_ReplaceData_m3568610401 (EncryptedXml_t2661317865 * __this, XmlElement_t280387747 * ___inputElement0, ByteU5BU5D_t4260760469* ___decryptedData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_Transform_m2778015791 (EncryptedXml_t2661317865 * __this, ByteU5BU5D_t4260760469* ___data0, Il2CppObject * ___transform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform,System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* EncryptedXml_Transform_m754395509 (EncryptedXml_t2661317865 * __this, ByteU5BU5D_t4260760469* ___data0, Il2CppObject * ___transform1, int32_t ___blockOctetCount2, bool ___trimPadding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
