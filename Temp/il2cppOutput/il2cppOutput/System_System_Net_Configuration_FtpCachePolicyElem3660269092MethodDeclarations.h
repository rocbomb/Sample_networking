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

// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t3660269092;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cache_RequestCacheLevel3182319227.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.FtpCachePolicyElement::.ctor()
extern "C"  void FtpCachePolicyElement__ctor_m386706138 (FtpCachePolicyElement_t3660269092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::.cctor()
extern "C"  void FtpCachePolicyElement__cctor_m2915859475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCacheLevel System.Net.Configuration.FtpCachePolicyElement::get_PolicyLevel()
extern "C"  int32_t FtpCachePolicyElement_get_PolicyLevel_m636281495 (FtpCachePolicyElement_t3660269092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::set_PolicyLevel(System.Net.Cache.RequestCacheLevel)
extern "C"  void FtpCachePolicyElement_set_PolicyLevel_m3620108248 (FtpCachePolicyElement_t3660269092 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * FtpCachePolicyElement_get_Properties_m2618798067 (FtpCachePolicyElement_t3660269092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void FtpCachePolicyElement_DeserializeElement_m2192460282 (FtpCachePolicyElement_t3660269092 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void FtpCachePolicyElement_Reset_m1871555790 (FtpCachePolicyElement_t3660269092 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
