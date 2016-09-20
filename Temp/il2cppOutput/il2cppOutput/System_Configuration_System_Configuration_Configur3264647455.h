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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementProperty
struct  ConfigurationElementProperty_t3264647455  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationElementProperty::validator
	ConfigurationValidatorBase_t4042579377 * ___validator_0;

public:
	inline static int32_t get_offset_of_validator_0() { return static_cast<int32_t>(offsetof(ConfigurationElementProperty_t3264647455, ___validator_0)); }
	inline ConfigurationValidatorBase_t4042579377 * get_validator_0() const { return ___validator_0; }
	inline ConfigurationValidatorBase_t4042579377 ** get_address_of_validator_0() { return &___validator_0; }
	inline void set_validator_0(ConfigurationValidatorBase_t4042579377 * value)
	{
		___validator_0 = value;
		Il2CppCodeGenWriteBarrier(&___validator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
