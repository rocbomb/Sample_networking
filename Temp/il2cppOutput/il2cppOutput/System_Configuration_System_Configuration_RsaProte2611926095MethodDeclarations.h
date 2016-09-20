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

// System.Configuration.RsaProtectedConfigurationProvider
struct RsaProtectedConfigurationProvider_t2611926095;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t742318033;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3219890992.h"

// System.Void System.Configuration.RsaProtectedConfigurationProvider::.ctor()
extern "C"  void RsaProtectedConfigurationProvider__ctor_m4164037058 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSACryptoServiceProvider System.Configuration.RsaProtectedConfigurationProvider::GetProvider()
extern "C"  RSACryptoServiceProvider_t742318033 * RsaProtectedConfigurationProvider_GetProvider_m4274042028 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Configuration.RsaProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * RsaProtectedConfigurationProvider_Decrypt_m3039731646 (RsaProtectedConfigurationProvider_t2611926095 * __this, XmlNode_t856910923 * ___encrypted_node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Configuration.RsaProtectedConfigurationProvider::Encrypt(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * RsaProtectedConfigurationProvider_Encrypt_m4280523926 (RsaProtectedConfigurationProvider_t2611926095 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RsaProtectedConfigurationProvider::Initialize(System.String,System.Collections.Specialized.NameValueCollection)
extern "C"  void RsaProtectedConfigurationProvider_Initialize_m2493498511 (RsaProtectedConfigurationProvider_t2611926095 * __this, String_t* ___name0, NameValueCollection_t2791941106 * ___configurationValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RsaProtectedConfigurationProvider::AddKey(System.Int32,System.Boolean)
extern "C"  void RsaProtectedConfigurationProvider_AddKey_m123384972 (RsaProtectedConfigurationProvider_t2611926095 * __this, int32_t ___keySize0, bool ___exportable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RsaProtectedConfigurationProvider::DeleteKey()
extern "C"  void RsaProtectedConfigurationProvider_DeleteKey_m3001116436 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RsaProtectedConfigurationProvider::ExportKey(System.String,System.Boolean)
extern "C"  void RsaProtectedConfigurationProvider_ExportKey_m1805936742 (RsaProtectedConfigurationProvider_t2611926095 * __this, String_t* ___xmlFileName0, bool ___includePrivateParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RsaProtectedConfigurationProvider::ImportKey(System.String,System.Boolean)
extern "C"  void RsaProtectedConfigurationProvider_ImportKey_m1629194901 (RsaProtectedConfigurationProvider_t2611926095 * __this, String_t* ___xmlFileName0, bool ___exportable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.RsaProtectedConfigurationProvider::get_CspProviderName()
extern "C"  String_t* RsaProtectedConfigurationProvider_get_CspProviderName_m1194282928 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.RsaProtectedConfigurationProvider::get_KeyContainerName()
extern "C"  String_t* RsaProtectedConfigurationProvider_get_KeyContainerName_m1913535291 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Configuration.RsaProtectedConfigurationProvider::get_RsaPublicKey()
extern "C"  RSAParameters_t3219890992  RsaProtectedConfigurationProvider_get_RsaPublicKey_m3083151161 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.RsaProtectedConfigurationProvider::get_UseMachineContainer()
extern "C"  bool RsaProtectedConfigurationProvider_get_UseMachineContainer_m448988978 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.RsaProtectedConfigurationProvider::get_UseOAEP()
extern "C"  bool RsaProtectedConfigurationProvider_get_UseOAEP_m980983509 (RsaProtectedConfigurationProvider_t2611926095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
