#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XmlCanonicalizer
struct  XmlCanonicalizer_t2826483393  : public Il2CppObject
{
public:
	// System.Boolean Mono.Xml.XmlCanonicalizer::comments
	bool ___comments_0;
	// System.Boolean Mono.Xml.XmlCanonicalizer::exclusive
	bool ___exclusive_1;
	// System.Text.StringBuilder Mono.Xml.XmlCanonicalizer::res
	StringBuilder_t243639308 * ___res_2;
	// System.Collections.Hashtable Mono.Xml.XmlCanonicalizer::propagatedNss
	Hashtable_t1407064410 * ___propagatedNss_3;

public:
	inline static int32_t get_offset_of_comments_0() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t2826483393, ___comments_0)); }
	inline bool get_comments_0() const { return ___comments_0; }
	inline bool* get_address_of_comments_0() { return &___comments_0; }
	inline void set_comments_0(bool value)
	{
		___comments_0 = value;
	}

	inline static int32_t get_offset_of_exclusive_1() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t2826483393, ___exclusive_1)); }
	inline bool get_exclusive_1() const { return ___exclusive_1; }
	inline bool* get_address_of_exclusive_1() { return &___exclusive_1; }
	inline void set_exclusive_1(bool value)
	{
		___exclusive_1 = value;
	}

	inline static int32_t get_offset_of_res_2() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t2826483393, ___res_2)); }
	inline StringBuilder_t243639308 * get_res_2() const { return ___res_2; }
	inline StringBuilder_t243639308 ** get_address_of_res_2() { return &___res_2; }
	inline void set_res_2(StringBuilder_t243639308 * value)
	{
		___res_2 = value;
		Il2CppCodeGenWriteBarrier(&___res_2, value);
	}

	inline static int32_t get_offset_of_propagatedNss_3() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t2826483393, ___propagatedNss_3)); }
	inline Hashtable_t1407064410 * get_propagatedNss_3() const { return ___propagatedNss_3; }
	inline Hashtable_t1407064410 ** get_address_of_propagatedNss_3() { return &___propagatedNss_3; }
	inline void set_propagatedNss_3(Hashtable_t1407064410 * value)
	{
		___propagatedNss_3 = value;
		Il2CppCodeGenWriteBarrier(&___propagatedNss_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
