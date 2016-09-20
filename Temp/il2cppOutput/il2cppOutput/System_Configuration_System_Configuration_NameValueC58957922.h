#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;

#include "System_Configuration_System_Configuration_Configur3842833450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.NameValueConfigurationElement
struct  NameValueConfigurationElement_t58957922  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct NameValueConfigurationElement_t58957922_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.NameValueConfigurationElement::_properties
	ConfigurationPropertyCollection_t55611423 * ____properties_14;
	// System.Configuration.ConfigurationProperty System.Configuration.NameValueConfigurationElement::_propName
	ConfigurationProperty_t3009015393 * ____propName_15;
	// System.Configuration.ConfigurationProperty System.Configuration.NameValueConfigurationElement::_propValue
	ConfigurationProperty_t3009015393 * ____propValue_16;

public:
	inline static int32_t get_offset_of__properties_14() { return static_cast<int32_t>(offsetof(NameValueConfigurationElement_t58957922_StaticFields, ____properties_14)); }
	inline ConfigurationPropertyCollection_t55611423 * get__properties_14() const { return ____properties_14; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of__properties_14() { return &____properties_14; }
	inline void set__properties_14(ConfigurationPropertyCollection_t55611423 * value)
	{
		____properties_14 = value;
		Il2CppCodeGenWriteBarrier(&____properties_14, value);
	}

	inline static int32_t get_offset_of__propName_15() { return static_cast<int32_t>(offsetof(NameValueConfigurationElement_t58957922_StaticFields, ____propName_15)); }
	inline ConfigurationProperty_t3009015393 * get__propName_15() const { return ____propName_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propName_15() { return &____propName_15; }
	inline void set__propName_15(ConfigurationProperty_t3009015393 * value)
	{
		____propName_15 = value;
		Il2CppCodeGenWriteBarrier(&____propName_15, value);
	}

	inline static int32_t get_offset_of__propValue_16() { return static_cast<int32_t>(offsetof(NameValueConfigurationElement_t58957922_StaticFields, ____propValue_16)); }
	inline ConfigurationProperty_t3009015393 * get__propValue_16() const { return ____propValue_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propValue_16() { return &____propValue_16; }
	inline void set__propValue_16(ConfigurationProperty_t3009015393 * value)
	{
		____propValue_16 = value;
		Il2CppCodeGenWriteBarrier(&____propValue_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
