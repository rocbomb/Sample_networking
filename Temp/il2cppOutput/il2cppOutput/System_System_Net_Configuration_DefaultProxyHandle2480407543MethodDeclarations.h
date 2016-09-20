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

// System.Net.Configuration.DefaultProxyHandler
struct DefaultProxyHandler_t2480407543;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Net.WebProxy
struct WebProxy_t2877839764;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_System_Net_WebProxy2877839764.h"

// System.Void System.Net.Configuration.DefaultProxyHandler::.ctor()
extern "C"  void DefaultProxyHandler__ctor_m3789261991 (DefaultProxyHandler_t2480407543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.DefaultProxyHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * DefaultProxyHandler_Create_m1548539375 (DefaultProxyHandler_t2480407543 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t856910923 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxyHandler::FillByPassList(System.Xml.XmlNode,System.Net.WebProxy)
extern "C"  void DefaultProxyHandler_FillByPassList_m15794949 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, WebProxy_t2877839764 * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
