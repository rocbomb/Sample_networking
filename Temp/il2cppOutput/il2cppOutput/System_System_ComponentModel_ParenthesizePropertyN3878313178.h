#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ParenthesizePropertyNameAttribute
struct ParenthesizePropertyNameAttribute_t3878313178;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ParenthesizePropertyNameAttribute
struct  ParenthesizePropertyNameAttribute_t3878313178  : public Attribute_t2523058482
{
public:
	// System.Boolean System.ComponentModel.ParenthesizePropertyNameAttribute::parenthesis
	bool ___parenthesis_0;

public:
	inline static int32_t get_offset_of_parenthesis_0() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t3878313178, ___parenthesis_0)); }
	inline bool get_parenthesis_0() const { return ___parenthesis_0; }
	inline bool* get_address_of_parenthesis_0() { return &___parenthesis_0; }
	inline void set_parenthesis_0(bool value)
	{
		___parenthesis_0 = value;
	}
};

struct ParenthesizePropertyNameAttribute_t3878313178_StaticFields
{
public:
	// System.ComponentModel.ParenthesizePropertyNameAttribute System.ComponentModel.ParenthesizePropertyNameAttribute::Default
	ParenthesizePropertyNameAttribute_t3878313178 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t3878313178_StaticFields, ___Default_1)); }
	inline ParenthesizePropertyNameAttribute_t3878313178 * get_Default_1() const { return ___Default_1; }
	inline ParenthesizePropertyNameAttribute_t3878313178 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ParenthesizePropertyNameAttribute_t3878313178 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
