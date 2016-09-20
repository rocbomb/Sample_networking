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

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t2236605461;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor()
extern "C"  void ConnectionManagementElement__ctor_m4034741577 (ConnectionManagementElement_t2236605461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::.ctor(System.String,System.Int32)
extern "C"  void ConnectionManagementElement__ctor_m305544478 (ConnectionManagementElement_t2236605461 * __this, String_t* ___address0, int32_t ___maxConnection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::.cctor()
extern "C"  void ConnectionManagementElement__cctor_m40841092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.ConnectionManagementElement::get_Address()
extern "C"  String_t* ConnectionManagementElement_get_Address_m3571652079 (ConnectionManagementElement_t2236605461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::set_Address(System.String)
extern "C"  void ConnectionManagementElement_set_Address_m2771061380 (ConnectionManagementElement_t2236605461 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElement::get_MaxConnection()
extern "C"  int32_t ConnectionManagementElement_get_MaxConnection_m2958412592 (ConnectionManagementElement_t2236605461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElement::set_MaxConnection(System.Int32)
extern "C"  void ConnectionManagementElement_set_MaxConnection_m737441213 (ConnectionManagementElement_t2236605461 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * ConnectionManagementElement_get_Properties_m4167726244 (ConnectionManagementElement_t2236605461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
