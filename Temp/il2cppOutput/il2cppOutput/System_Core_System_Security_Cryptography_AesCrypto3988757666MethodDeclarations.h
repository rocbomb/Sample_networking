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

// System.Security.Cryptography.AesCryptoServiceProvider
struct AesCryptoServiceProvider_t3988757666;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesCryptoServiceProvider::.ctor()
extern "C"  void AesCryptoServiceProvider__ctor_m762799410 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateIV()
extern "C"  void AesCryptoServiceProvider_GenerateIV_m106954228 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateKey()
extern "C"  void AesCryptoServiceProvider_GenerateKey_m3317952826 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateDecryptor_m821514346 (AesCryptoServiceProvider_t3988757666 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateEncryptor_m1127242898 (AesCryptoServiceProvider_t3988757666 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_IV()
extern "C"  ByteU5BU5D_t4260760469* AesCryptoServiceProvider_get_IV_m1148516990 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_IV(System.Byte[])
extern "C"  void AesCryptoServiceProvider_set_IV_m2780974125 (AesCryptoServiceProvider_t3988757666 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_Key()
extern "C"  ByteU5BU5D_t4260760469* AesCryptoServiceProvider_get_Key_m1246660080 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_Key(System.Byte[])
extern "C"  void AesCryptoServiceProvider_set_Key_m3349420535 (AesCryptoServiceProvider_t3988757666 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesCryptoServiceProvider::get_KeySize()
extern "C"  int32_t AesCryptoServiceProvider_get_KeySize_m1006737237 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_KeySize(System.Int32)
extern "C"  void AesCryptoServiceProvider_set_KeySize_m3589993284 (AesCryptoServiceProvider_t3988757666 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor()
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateDecryptor_m3529955170 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor()
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateEncryptor_m4259349562 (AesCryptoServiceProvider_t3988757666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void AesCryptoServiceProvider_Dispose_m1116517414 (AesCryptoServiceProvider_t3988757666 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
