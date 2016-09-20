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

#include "System_Configuration_System_Configuration_Configur3180944403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConnectionStringsSection
struct  ConnectionStringsSection_t1195185157  : public ConfigurationSection_t3180944403
{
public:

public:
};

struct ConnectionStringsSection_t1195185157_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ConnectionStringsSection::_propConnectionStrings
	ConfigurationProperty_t3009015393 * ____propConnectionStrings_18;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConnectionStringsSection::_properties
	ConfigurationPropertyCollection_t55611423 * ____properties_19;

public:
	inline static int32_t get_offset_of__propConnectionStrings_18() { return static_cast<int32_t>(offsetof(ConnectionStringsSection_t1195185157_StaticFields, ____propConnectionStrings_18)); }
	inline ConfigurationProperty_t3009015393 * get__propConnectionStrings_18() const { return ____propConnectionStrings_18; }
	inline ConfigurationProperty_t3009015393 ** get_address_of__propConnectionStrings_18() { return &____propConnectionStrings_18; }
	inline void set__propConnectionStrings_18(ConfigurationProperty_t3009015393 * value)
	{
		____propConnectionStrings_18 = value;
		Il2CppCodeGenWriteBarrier(&____propConnectionStrings_18, value);
	}

	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(ConnectionStringsSection_t1195185157_StaticFields, ____properties_19)); }
	inline ConfigurationPropertyCollection_t55611423 * get__properties_19() const { return ____properties_19; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(ConfigurationPropertyCollection_t55611423 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier(&____properties_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
