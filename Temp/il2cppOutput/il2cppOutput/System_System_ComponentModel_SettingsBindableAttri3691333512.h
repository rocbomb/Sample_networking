﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.SettingsBindableAttribute
struct SettingsBindableAttribute_t3691333512;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SettingsBindableAttribute
struct  SettingsBindableAttribute_t3691333512  : public Attribute_t2523058482
{
public:
	// System.Boolean System.ComponentModel.SettingsBindableAttribute::bindable
	bool ___bindable_2;

public:
	inline static int32_t get_offset_of_bindable_2() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3691333512, ___bindable_2)); }
	inline bool get_bindable_2() const { return ___bindable_2; }
	inline bool* get_address_of_bindable_2() { return &___bindable_2; }
	inline void set_bindable_2(bool value)
	{
		___bindable_2 = value;
	}
};

struct SettingsBindableAttribute_t3691333512_StaticFields
{
public:
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::Yes
	SettingsBindableAttribute_t3691333512 * ___Yes_0;
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::No
	SettingsBindableAttribute_t3691333512 * ___No_1;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3691333512_StaticFields, ___Yes_0)); }
	inline SettingsBindableAttribute_t3691333512 * get_Yes_0() const { return ___Yes_0; }
	inline SettingsBindableAttribute_t3691333512 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(SettingsBindableAttribute_t3691333512 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Yes_0, value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3691333512_StaticFields, ___No_1)); }
	inline SettingsBindableAttribute_t3691333512 * get_No_1() const { return ___No_1; }
	inline SettingsBindableAttribute_t3691333512 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(SettingsBindableAttribute_t3691333512 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier(&___No_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
