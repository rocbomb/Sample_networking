﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.WebProxy
struct WebProxy_t2877839764;
// System.Uri
struct Uri_t1116831938;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C"  void WebProxy__ctor_m2333292256 (WebProxy_t2877839764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri)
extern "C"  void WebProxy__ctor_m3249294995 (WebProxy_t2877839764 * __this, Uri_t1116831938 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C"  void WebProxy__ctor_m1295075053 (WebProxy_t2877839764 * __this, Uri_t1116831938 * ___address0, bool ___bypassOnLocal1, StringU5BU5D_t4054002952* ___bypassList2, Il2CppObject * ___credentials3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy__ctor_m3926845473 (WebProxy_t2877839764 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1269108139 (WebProxy_t2877839764 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_Address(System.Uri)
extern "C"  void WebProxy_set_Address_m125708040 (WebProxy_t2877839764 * __this, Uri_t1116831938 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Net.WebProxy::get_BypassArrayList()
extern "C"  ArrayList_t3948406897 * WebProxy_get_BypassArrayList_m3025434820 (WebProxy_t2877839764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassList(System.String[])
extern "C"  void WebProxy_set_BypassList_m642702137 (WebProxy_t2877839764 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassProxyOnLocal(System.Boolean)
extern "C"  void WebProxy_set_BypassProxyOnLocal_m1093149342 (WebProxy_t2877839764 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C"  Il2CppObject * WebProxy_get_Credentials_m3075169793 (WebProxy_t2877839764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C"  bool WebProxy_get_UseDefaultCredentials_m2666418573 (WebProxy_t2877839764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C"  Uri_t1116831938 * WebProxy_GetProxy_m1799832125 (WebProxy_t2877839764 * __this, Uri_t1116831938 * ___destination0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C"  bool WebProxy_IsBypassed_m2441560530 (WebProxy_t2877839764 * __this, Uri_t1116831938 * ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_GetObjectData_m2646244990 (WebProxy_t2877839764 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C"  void WebProxy_CheckBypassList_m2380971276 (WebProxy_t2877839764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
