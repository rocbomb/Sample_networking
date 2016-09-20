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

// System.Net.Configuration.HttpCachePolicyElement
struct  HttpCachePolicyElement_t3335049818  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct HttpCachePolicyElement_t3335049818_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumAgeProp
	ConfigurationProperty_t3009015393 * ___maximumAgeProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumStaleProp
	ConfigurationProperty_t3009015393 * ___maximumStaleProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::minimumFreshProp
	ConfigurationProperty_t3009015393 * ___minimumFreshProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::policyLevelProp
	ConfigurationProperty_t3009015393 * ___policyLevelProp_17;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_18;

public:
	inline static int32_t get_offset_of_maximumAgeProp_14() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t3335049818_StaticFields, ___maximumAgeProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_maximumAgeProp_14() const { return ___maximumAgeProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_maximumAgeProp_14() { return &___maximumAgeProp_14; }
	inline void set_maximumAgeProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___maximumAgeProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___maximumAgeProp_14, value);
	}

	inline static int32_t get_offset_of_maximumStaleProp_15() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t3335049818_StaticFields, ___maximumStaleProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_maximumStaleProp_15() const { return ___maximumStaleProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_maximumStaleProp_15() { return &___maximumStaleProp_15; }
	inline void set_maximumStaleProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___maximumStaleProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___maximumStaleProp_15, value);
	}

	inline static int32_t get_offset_of_minimumFreshProp_16() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t3335049818_StaticFields, ___minimumFreshProp_16)); }
	inline ConfigurationProperty_t3009015393 * get_minimumFreshProp_16() const { return ___minimumFreshProp_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_minimumFreshProp_16() { return &___minimumFreshProp_16; }
	inline void set_minimumFreshProp_16(ConfigurationProperty_t3009015393 * value)
	{
		___minimumFreshProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___minimumFreshProp_16, value);
	}

	inline static int32_t get_offset_of_policyLevelProp_17() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t3335049818_StaticFields, ___policyLevelProp_17)); }
	inline ConfigurationProperty_t3009015393 * get_policyLevelProp_17() const { return ___policyLevelProp_17; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_policyLevelProp_17() { return &___policyLevelProp_17; }
	inline void set_policyLevelProp_17(ConfigurationProperty_t3009015393 * value)
	{
		___policyLevelProp_17 = value;
		Il2CppCodeGenWriteBarrier(&___policyLevelProp_17, value);
	}

	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t3335049818_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
