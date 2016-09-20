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

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t3335049818;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "System_System_Net_Cache_HttpRequestCacheLevel1130966227.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.HttpCachePolicyElement::.ctor()
extern "C"  void HttpCachePolicyElement__ctor_m1809859026 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C"  void HttpCachePolicyElement__cctor_m4083926043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumAge()
extern "C"  TimeSpan_t413522987  HttpCachePolicyElement_get_MaximumAge_m1893029917 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumAge(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MaximumAge_m1996838958 (HttpCachePolicyElement_t3335049818 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MaximumStale()
extern "C"  TimeSpan_t413522987  HttpCachePolicyElement_get_MaximumStale_m1596350711 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MaximumStale(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MaximumStale_m4152256596 (HttpCachePolicyElement_t3335049818 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.HttpCachePolicyElement::get_MinimumFresh()
extern "C"  TimeSpan_t413522987  HttpCachePolicyElement_get_MinimumFresh_m3547267998 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_MinimumFresh(System.TimeSpan)
extern "C"  void HttpCachePolicyElement_set_MinimumFresh_m3737469645 (HttpCachePolicyElement_t3335049818 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.HttpRequestCacheLevel System.Net.Configuration.HttpCachePolicyElement::get_PolicyLevel()
extern "C"  int32_t HttpCachePolicyElement_get_PolicyLevel_m1550409419 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::set_PolicyLevel(System.Net.Cache.HttpRequestCacheLevel)
extern "C"  void HttpCachePolicyElement_set_PolicyLevel_m2851840376 (HttpCachePolicyElement_t3335049818 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * HttpCachePolicyElement_get_Properties_m1493540609 (HttpCachePolicyElement_t3335049818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void HttpCachePolicyElement_DeserializeElement_m4077588722 (HttpCachePolicyElement_t3335049818 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void HttpCachePolicyElement_Reset_m3678817494 (HttpCachePolicyElement_t3335049818 * __this, ConfigurationElement_t3842833450 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
