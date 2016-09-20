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

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t3021090479;
// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t3660269092;
// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t3335049818;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cache_RequestCacheLevel3182319227.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Net.Configuration.RequestCachingSection::.ctor()
extern "C"  void RequestCachingSection__ctor_m843787951 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C"  void RequestCachingSection__cctor_m4200493790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.FtpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultFtpCachePolicy()
extern "C"  FtpCachePolicyElement_t3660269092 * RequestCachingSection_get_DefaultFtpCachePolicy_m702999386 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.HttpCachePolicyElement System.Net.Configuration.RequestCachingSection::get_DefaultHttpCachePolicy()
extern "C"  HttpCachePolicyElement_t3335049818 * RequestCachingSection_get_DefaultHttpCachePolicy_m3438096260 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCacheLevel System.Net.Configuration.RequestCachingSection::get_DefaultPolicyLevel()
extern "C"  int32_t RequestCachingSection_get_DefaultPolicyLevel_m4004934873 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_DefaultPolicyLevel(System.Net.Cache.RequestCacheLevel)
extern "C"  void RequestCachingSection_set_DefaultPolicyLevel_m4018713326 (RequestCachingSection_t3021090479 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.RequestCachingSection::get_DisableAllCaching()
extern "C"  bool RequestCachingSection_get_DisableAllCaching_m3239828084 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_DisableAllCaching(System.Boolean)
extern "C"  void RequestCachingSection_set_DisableAllCaching_m4259053005 (RequestCachingSection_t3021090479 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.RequestCachingSection::get_IsPrivateCache()
extern "C"  bool RequestCachingSection_get_IsPrivateCache_m711114973 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_IsPrivateCache(System.Boolean)
extern "C"  void RequestCachingSection_set_IsPrivateCache_m193389042 (RequestCachingSection_t3021090479 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Configuration.RequestCachingSection::get_UnspecifiedMaximumAge()
extern "C"  TimeSpan_t413522987  RequestCachingSection_get_UnspecifiedMaximumAge_m3744042717 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::set_UnspecifiedMaximumAge(System.TimeSpan)
extern "C"  void RequestCachingSection_set_UnspecifiedMaximumAge_m1501785110 (RequestCachingSection_t3021090479 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * RequestCachingSection_get_Properties_m479701950 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C"  void RequestCachingSection_PostDeserialize_m437983180 (RequestCachingSection_t3021090479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void RequestCachingSection_DeserializeElement_m4046974927 (RequestCachingSection_t3021090479 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
