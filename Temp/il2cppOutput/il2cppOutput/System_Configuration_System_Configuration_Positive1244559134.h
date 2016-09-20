#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t4042579377;

#include "System_Configuration_System_Configuration_Configur3525642550.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PositiveTimeSpanValidatorAttribute
struct  PositiveTimeSpanValidatorAttribute_t1244559134  : public ConfigurationValidatorAttribute_t3525642550
{
public:
	// System.Configuration.ConfigurationValidatorBase System.Configuration.PositiveTimeSpanValidatorAttribute::instance
	ConfigurationValidatorBase_t4042579377 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PositiveTimeSpanValidatorAttribute_t1244559134, ___instance_2)); }
	inline ConfigurationValidatorBase_t4042579377 * get_instance_2() const { return ___instance_2; }
	inline ConfigurationValidatorBase_t4042579377 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ConfigurationValidatorBase_t4042579377 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
