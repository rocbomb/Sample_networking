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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_AESKeyWrapEncrypt_m2343211771 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbWrappedKeyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_AESKeyWrapDecrypt_m2043452627 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbEncryptedWrappedKeyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m3219490710 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbWrappedKeyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m2919731566 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbEncryptedWrappedKeyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_Transform_m4236161294 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, Il2CppObject * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::ComputeCMSKeyChecksum(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_ComputeCMSKeyChecksum_m2726735507 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Concatenate(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_Concatenate_m655675985 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buf10, ByteU5BU5D_t4260760469* ___buf21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_MSB_m321937703 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_MSB_m4230091536 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, int32_t ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_LSB_m1319010056 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_LSB_m3879291599 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, int32_t ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Xor(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* SymmetricKeyWrap_Xor_m1822043499 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___x0, ByteU5BU5D_t4260760469* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
