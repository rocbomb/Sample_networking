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

// System.Configuration.ConfigurationPermission
struct ConfigurationPermission_t2352538267;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Configuration.ConfigurationPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void ConfigurationPermission__ctor_m2995713043 (ConfigurationPermission_t2352538267 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Configuration.ConfigurationPermission::Copy()
extern "C"  Il2CppObject * ConfigurationPermission_Copy_m1732284045 (ConfigurationPermission_t2352538267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ConfigurationPermission_FromXml_m3270804452 (ConfigurationPermission_t2352538267 * __this, SecurityElement_t2125293618 * ___securityElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Configuration.ConfigurationPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * ConfigurationPermission_Intersect_m2286633056 (ConfigurationPermission_t2352538267 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Configuration.ConfigurationPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * ConfigurationPermission_Union_m3995676720 (ConfigurationPermission_t2352538267 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ConfigurationPermission_IsSubsetOf_m4064836082 (ConfigurationPermission_t2352538267 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPermission::IsUnrestricted()
extern "C"  bool ConfigurationPermission_IsUnrestricted_m1845374450 (ConfigurationPermission_t2352538267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Configuration.ConfigurationPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * ConfigurationPermission_ToXml_m1279855402 (ConfigurationPermission_t2352538267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
