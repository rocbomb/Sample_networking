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
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t4042579377;

#include "System_Configuration_System_Configuration_Configur3525642550.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanValidatorAttribute
struct  TimeSpanValidatorAttribute_t667360581  : public ConfigurationValidatorAttribute_t3525642550
{
public:
	// System.Boolean System.Configuration.TimeSpanValidatorAttribute::excludeRange
	bool ___excludeRange_4;
	// System.String System.Configuration.TimeSpanValidatorAttribute::maxValueString
	String_t* ___maxValueString_5;
	// System.String System.Configuration.TimeSpanValidatorAttribute::minValueString
	String_t* ___minValueString_6;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.TimeSpanValidatorAttribute::instance
	ConfigurationValidatorBase_t4042579377 * ___instance_7;

public:
	inline static int32_t get_offset_of_excludeRange_4() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t667360581, ___excludeRange_4)); }
	inline bool get_excludeRange_4() const { return ___excludeRange_4; }
	inline bool* get_address_of_excludeRange_4() { return &___excludeRange_4; }
	inline void set_excludeRange_4(bool value)
	{
		___excludeRange_4 = value;
	}

	inline static int32_t get_offset_of_maxValueString_5() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t667360581, ___maxValueString_5)); }
	inline String_t* get_maxValueString_5() const { return ___maxValueString_5; }
	inline String_t** get_address_of_maxValueString_5() { return &___maxValueString_5; }
	inline void set_maxValueString_5(String_t* value)
	{
		___maxValueString_5 = value;
		Il2CppCodeGenWriteBarrier(&___maxValueString_5, value);
	}

	inline static int32_t get_offset_of_minValueString_6() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t667360581, ___minValueString_6)); }
	inline String_t* get_minValueString_6() const { return ___minValueString_6; }
	inline String_t** get_address_of_minValueString_6() { return &___minValueString_6; }
	inline void set_minValueString_6(String_t* value)
	{
		___minValueString_6 = value;
		Il2CppCodeGenWriteBarrier(&___minValueString_6, value);
	}

	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t667360581, ___instance_7)); }
	inline ConfigurationValidatorBase_t4042579377 * get_instance_7() const { return ___instance_7; }
	inline ConfigurationValidatorBase_t4042579377 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(ConfigurationValidatorBase_t4042579377 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
