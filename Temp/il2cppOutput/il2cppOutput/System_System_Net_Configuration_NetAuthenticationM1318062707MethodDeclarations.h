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

// System.Net.Configuration.NetAuthenticationModuleHandler
struct NetAuthenticationModuleHandler_t1318062707;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t1766311879;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.Configuration.NetAuthenticationModuleHandler::.ctor()
extern "C"  void NetAuthenticationModuleHandler__ctor_m1166958297 (NetAuthenticationModuleHandler_t1318062707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.NetAuthenticationModuleHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * NetAuthenticationModuleHandler_Create_m1727328627 (NetAuthenticationModuleHandler_t1318062707 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t856910923 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Configuration.NetAuthenticationModuleHandler::CreateInstance(System.String,System.Xml.XmlNode)
extern "C"  Il2CppObject * NetAuthenticationModuleHandler_CreateInstance_m3657581755 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
