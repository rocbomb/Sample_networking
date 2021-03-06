﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t4042579377;

#include "System_Configuration_System_Configuration_Configur3525642550.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SubclassTypeValidatorAttribute
struct  SubclassTypeValidatorAttribute_t293065696  : public ConfigurationValidatorAttribute_t3525642550
{
public:
	// System.Type System.Configuration.SubclassTypeValidatorAttribute::baseClass
	Type_t * ___baseClass_2;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.SubclassTypeValidatorAttribute::instance
	ConfigurationValidatorBase_t4042579377 * ___instance_3;

public:
	inline static int32_t get_offset_of_baseClass_2() { return static_cast<int32_t>(offsetof(SubclassTypeValidatorAttribute_t293065696, ___baseClass_2)); }
	inline Type_t * get_baseClass_2() const { return ___baseClass_2; }
	inline Type_t ** get_address_of_baseClass_2() { return &___baseClass_2; }
	inline void set_baseClass_2(Type_t * value)
	{
		___baseClass_2 = value;
		Il2CppCodeGenWriteBarrier(&___baseClass_2, value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(SubclassTypeValidatorAttribute_t293065696, ___instance_3)); }
	inline ConfigurationValidatorBase_t4042579377 * get_instance_3() const { return ___instance_3; }
	inline ConfigurationValidatorBase_t4042579377 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(ConfigurationValidatorBase_t4042579377 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
