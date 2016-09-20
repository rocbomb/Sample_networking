#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.Transform
struct  Transform_t3619286350  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.Xml.Transform::algo
	String_t* ___algo_0;
	// System.Xml.XmlResolver System.Security.Cryptography.Xml.Transform::xmlResolver
	XmlResolver_t3822670287 * ___xmlResolver_1;
	// System.Collections.Hashtable System.Security.Cryptography.Xml.Transform::propagated_namespaces
	Hashtable_t1407064410 * ___propagated_namespaces_2;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(Transform_t3619286350, ___algo_0)); }
	inline String_t* get_algo_0() const { return ___algo_0; }
	inline String_t** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(String_t* value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier(&___algo_0, value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(Transform_t3619286350, ___xmlResolver_1)); }
	inline XmlResolver_t3822670287 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t3822670287 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t3822670287 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier(&___xmlResolver_1, value);
	}

	inline static int32_t get_offset_of_propagated_namespaces_2() { return static_cast<int32_t>(offsetof(Transform_t3619286350, ___propagated_namespaces_2)); }
	inline Hashtable_t1407064410 * get_propagated_namespaces_2() const { return ___propagated_namespaces_2; }
	inline Hashtable_t1407064410 ** get_address_of_propagated_namespaces_2() { return &___propagated_namespaces_2; }
	inline void set_propagated_namespaces_2(Hashtable_t1407064410 * value)
	{
		___propagated_namespaces_2 = value;
		Il2CppCodeGenWriteBarrier(&___propagated_namespaces_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
