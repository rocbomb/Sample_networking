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

// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Net.Authorization
struct Authorization_t3486603059;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t1766311879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_WebRequest51806901.h"

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C"  void AuthenticationManager__cctor_m4133232566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C"  void AuthenticationManager_EnsureModules_m3823797022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.AuthenticationManager::get_RegisteredModules()
extern "C"  Il2CppObject * AuthenticationManager_get_RegisteredModules_m17421319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Clear()
extern "C"  void AuthenticationManager_Clear_m3512550146 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * AuthenticationManager_Authenticate_m926148532 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, WebRequest_t51806901 * ___request1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * AuthenticationManager_DoAuthenticate_m3748190185 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, WebRequest_t51806901 * ___request1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * AuthenticationManager_PreAuthenticate_m2542705561 (Il2CppObject * __this /* static, unused */, WebRequest_t51806901 * ___request0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Register(System.Net.IAuthenticationModule)
extern "C"  void AuthenticationManager_Register_m345494195 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___authenticationModule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.Net.IAuthenticationModule)
extern "C"  void AuthenticationManager_Unregister_m3993935628 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___authenticationModule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::DoUnregister(System.String,System.Boolean)
extern "C"  void AuthenticationManager_DoUnregister_m345561903 (Il2CppObject * __this /* static, unused */, String_t* ___authenticationScheme0, bool ___throwEx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
