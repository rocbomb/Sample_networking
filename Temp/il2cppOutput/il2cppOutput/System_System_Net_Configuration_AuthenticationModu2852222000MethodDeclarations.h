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

// System.Net.Configuration.AuthenticationModuleElementCollection
struct AuthenticationModuleElementCollection_t2852222000;
// System.Net.Configuration.AuthenticationModuleElement
struct AuthenticationModuleElement_t2100993394;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_AuthenticationModu2100993394.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"

// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::.ctor()
extern "C"  void AuthenticationModuleElementCollection__ctor_m1644542030 (AuthenticationModuleElementCollection_t2852222000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.Int32)
extern "C"  AuthenticationModuleElement_t2100993394 * AuthenticationModuleElementCollection_get_Item_m2256260082 (AuthenticationModuleElementCollection_t2852222000 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_set_Item_m4210890495 (AuthenticationModuleElementCollection_t2852222000 * __this, int32_t ___index0, AuthenticationModuleElement_t2100993394 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.String)
extern "C"  AuthenticationModuleElement_t2100993394 * AuthenticationModuleElementCollection_get_Item_m1681284225 (AuthenticationModuleElementCollection_t2852222000 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.String,System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_set_Item_m578790074 (AuthenticationModuleElementCollection_t2852222000 * __this, String_t* ___name0, AuthenticationModuleElement_t2100993394 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Add(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_Add_m1566619389 (AuthenticationModuleElementCollection_t2852222000 * __this, AuthenticationModuleElement_t2100993394 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Clear()
extern "C"  void AuthenticationModuleElementCollection_Clear_m3345642617 (AuthenticationModuleElementCollection_t2852222000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.AuthenticationModuleElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3842833450 * AuthenticationModuleElementCollection_CreateNewElement_m3206930916 (AuthenticationModuleElementCollection_t2852222000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.AuthenticationModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * AuthenticationModuleElementCollection_GetElementKey_m2645677093 (AuthenticationModuleElementCollection_t2852222000 * __this, ConfigurationElement_t3842833450 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.AuthenticationModuleElementCollection::IndexOf(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  int32_t AuthenticationModuleElementCollection_IndexOf_m4220059381 (AuthenticationModuleElementCollection_t2852222000 * __this, AuthenticationModuleElement_t2100993394 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_Remove_m764926826 (AuthenticationModuleElementCollection_t2852222000 * __this, AuthenticationModuleElement_t2100993394 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.String)
extern "C"  void AuthenticationModuleElementCollection_Remove_m2869982152 (AuthenticationModuleElementCollection_t2852222000 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::RemoveAt(System.Int32)
extern "C"  void AuthenticationModuleElementCollection_RemoveAt_m2950942878 (AuthenticationModuleElementCollection_t2852222000 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
