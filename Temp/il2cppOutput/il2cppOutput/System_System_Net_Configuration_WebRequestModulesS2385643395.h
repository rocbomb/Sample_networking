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

#include "System_Configuration_System_Configuration_Configur3180944403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t2385643395  : public ConfigurationSection_t3180944403
{
public:

public:
};

struct WebRequestModulesSection_t2385643395_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t3009015393 * ___webRequestModulesProp_19;

public:
	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t2385643395_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t2385643395_StaticFields, ___webRequestModulesProp_19)); }
	inline ConfigurationProperty_t3009015393 * get_webRequestModulesProp_19() const { return ___webRequestModulesProp_19; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_webRequestModulesProp_19() { return &___webRequestModulesProp_19; }
	inline void set_webRequestModulesProp_19(ConfigurationProperty_t3009015393 * value)
	{
		___webRequestModulesProp_19 = value;
		Il2CppCodeGenWriteBarrier(&___webRequestModulesProp_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
