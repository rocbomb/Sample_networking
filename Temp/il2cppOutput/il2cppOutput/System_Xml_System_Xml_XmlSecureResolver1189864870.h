#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;

#include "System_Xml_System_Xml_XmlResolver3822670287.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSecureResolver
struct  XmlSecureResolver_t1189864870  : public XmlResolver_t3822670287
{
public:
	// System.Xml.XmlResolver System.Xml.XmlSecureResolver::resolver
	XmlResolver_t3822670287 * ___resolver_0;
	// System.Security.PermissionSet System.Xml.XmlSecureResolver::permissionSet
	PermissionSet_t1199249641 * ___permissionSet_1;

public:
	inline static int32_t get_offset_of_resolver_0() { return static_cast<int32_t>(offsetof(XmlSecureResolver_t1189864870, ___resolver_0)); }
	inline XmlResolver_t3822670287 * get_resolver_0() const { return ___resolver_0; }
	inline XmlResolver_t3822670287 ** get_address_of_resolver_0() { return &___resolver_0; }
	inline void set_resolver_0(XmlResolver_t3822670287 * value)
	{
		___resolver_0 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_0, value);
	}

	inline static int32_t get_offset_of_permissionSet_1() { return static_cast<int32_t>(offsetof(XmlSecureResolver_t1189864870, ___permissionSet_1)); }
	inline PermissionSet_t1199249641 * get_permissionSet_1() const { return ___permissionSet_1; }
	inline PermissionSet_t1199249641 ** get_address_of_permissionSet_1() { return &___permissionSet_1; }
	inline void set_permissionSet_1(PermissionSet_t1199249641 * value)
	{
		___permissionSet_1 = value;
		Il2CppCodeGenWriteBarrier(&___permissionSet_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
