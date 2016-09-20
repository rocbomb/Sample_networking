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

#include "System_Configuration_System_Configuration_Configur1978119848.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.NameValueConfigurationCollection
struct  NameValueConfigurationCollection_t1404640306  : public ConfigurationElementCollection_t1978119848
{
public:

public:
};

struct NameValueConfigurationCollection_t1404640306_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.NameValueConfigurationCollection::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_24;

public:
	inline static int32_t get_offset_of_properties_24() { return static_cast<int32_t>(offsetof(NameValueConfigurationCollection_t1404640306_StaticFields, ___properties_24)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_24() const { return ___properties_24; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_24() { return &___properties_24; }
	inline void set_properties_24(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_24 = value;
		Il2CppCodeGenWriteBarrier(&___properties_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
