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

// System.Configuration.DpapiProtectedConfigurationProvider
struct DpapiProtectedConfigurationProvider_t3407112541;
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

// System.Void System.Configuration.DpapiProtectedConfigurationProvider::.ctor()
extern "C"  void DpapiProtectedConfigurationProvider__ctor_m2318780468 (DpapiProtectedConfigurationProvider_t3407112541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Configuration.DpapiProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * DpapiProtectedConfigurationProvider_Decrypt_m2777941040 (DpapiProtectedConfigurationProvider_t3407112541 * __this, XmlNode_t856910923 * ___encrypted_node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Configuration.DpapiProtectedConfigurationProvider::Encrypt(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * DpapiProtectedConfigurationProvider_Encrypt_m4018733320 (DpapiProtectedConfigurationProvider_t3407112541 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DpapiProtectedConfigurationProvider::Initialize(System.String,System.Collections.Specialized.NameValueCollection)
extern "C"  void DpapiProtectedConfigurationProvider_Initialize_m873065821 (DpapiProtectedConfigurationProvider_t3407112541 * __this, String_t* ___name0, NameValueCollection_t2791941106 * ___configurationValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DpapiProtectedConfigurationProvider::get_UseMachineProtection()
extern "C"  bool DpapiProtectedConfigurationProvider_get_UseMachineProtection_m1874645112 (DpapiProtectedConfigurationProvider_t3407112541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
