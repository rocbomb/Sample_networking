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

// System.Configuration.ConnectionStringSettings
struct  ConnectionStringSettings_t499840342  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct ConnectionStringSettings_t499840342_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConnectionStringSettings::_properties
	ConfigurationPropertyCollection_t55611423 * ____properties_14;
	// System.Configuration.ConfigurationProperty System.Configuration.ConnectionStringSettings::_propConnectionString
	ConfigurationProperty_t3009015393 * ____propConnectionString_15;
	// System.Configuration.ConfigurationProperty System.Configuration.ConnectionStringSettings::_propName
	ConfigurationProperty_t3009015393 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Configuration.ConnectionStringSettings::_propProviderName
	ConfigurationProperty_t3009015393 * ____propProviderName_17;

public:
	inline static int32_t get_offset_of__properties_14() { return static_cast<int32_t>(offsetof(ConnectionStringSettings_t499840342_StaticFields, ____properties_14)); }
	inline ConfigurationPropertyCollection_t55611423 * get__properties_14() const { return ____properties_14; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of__properties_14() { return &____properties_14; }
	inline void set__properties_14(ConfigurationPropertyCollection_t55611423 * value)
	{
		____properties_14 = value;
		Il2CppCodeGenWriteBarrier(&____properties_14, value);
	}

	inline static int32_t get_offset_of__propConnectionString_15() { return static_cast<int32_t>(offsetof(ConnectionStringSettings_t499840342_StaticFields, ____propConnectionString_15)); }
	inline ConfigurationProperty_t3009015393 * get__propConnectionString_15() const { return ____propConnectionString_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propConnectionString_15() { return &____propConnectionString_15; }
	inline void set__propConnectionString_15(ConfigurationProperty_t3009015393 * value)
	{
		____propConnectionString_15 = value;
		Il2CppCodeGenWriteBarrier(&____propConnectionString_15, value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(ConnectionStringSettings_t499840342_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t3009015393 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t3009015393 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier(&____propName_16, value);
	}

	inline static int32_t get_offset_of__propProviderName_17() { return static_cast<int32_t>(offsetof(ConnectionStringSettings_t499840342_StaticFields, ____propProviderName_17)); }
	inline ConfigurationProperty_t3009015393 * get__propProviderName_17() const { return ____propProviderName_17; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propProviderName_17() { return &____propProviderName_17; }
	inline void set__propProviderName_17(ConfigurationProperty_t3009015393 * value)
	{
		____propProviderName_17 = value;
		Il2CppCodeGenWriteBarrier(&____propProviderName_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
