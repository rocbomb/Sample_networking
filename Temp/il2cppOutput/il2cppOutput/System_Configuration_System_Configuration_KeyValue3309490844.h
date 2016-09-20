#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "System_Configuration_System_Configuration_Configur3842833450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.KeyValueConfigurationElement
struct  KeyValueConfigurationElement_t3309490844  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct KeyValueConfigurationElement_t3309490844_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.KeyValueConfigurationElement::keyProp
	ConfigurationProperty_t3009015393 * ___keyProp_14;
	// System.Configuration.ConfigurationProperty System.Configuration.KeyValueConfigurationElement::valueProp
	ConfigurationProperty_t3009015393 * ___valueProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.KeyValueConfigurationElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_16;

public:
	inline static int32_t get_offset_of_keyProp_14() { return static_cast<int32_t>(offsetof(KeyValueConfigurationElement_t3309490844_StaticFields, ___keyProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_keyProp_14() const { return ___keyProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_keyProp_14() { return &___keyProp_14; }
	inline void set_keyProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___keyProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___keyProp_14, value);
	}

	inline static int32_t get_offset_of_valueProp_15() { return static_cast<int32_t>(offsetof(KeyValueConfigurationElement_t3309490844_StaticFields, ___valueProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_valueProp_15() const { return ___valueProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_valueProp_15() { return &___valueProp_15; }
	inline void set_valueProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___valueProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___valueProp_15, value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(KeyValueConfigurationElement_t3309490844_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier(&___properties_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
