﻿#pragma once

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

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t2800213852  : public ConfigurationSection_t3180944403
{
public:

public:
};

struct SettingsSection_t2800213852_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3009015393 * ___httpWebRequestProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3009015393 * ___ipv6Prop_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3009015393 * ___performanceCountersProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3009015393 * ___servicePointManagerProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3009015393 * ___webProxyScriptProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3009015393 * ___socketProp_24;

public:
	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_19() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___httpWebRequestProp_19)); }
	inline ConfigurationProperty_t3009015393 * get_httpWebRequestProp_19() const { return ___httpWebRequestProp_19; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_httpWebRequestProp_19() { return &___httpWebRequestProp_19; }
	inline void set_httpWebRequestProp_19(ConfigurationProperty_t3009015393 * value)
	{
		___httpWebRequestProp_19 = value;
		Il2CppCodeGenWriteBarrier(&___httpWebRequestProp_19, value);
	}

	inline static int32_t get_offset_of_ipv6Prop_20() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___ipv6Prop_20)); }
	inline ConfigurationProperty_t3009015393 * get_ipv6Prop_20() const { return ___ipv6Prop_20; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_ipv6Prop_20() { return &___ipv6Prop_20; }
	inline void set_ipv6Prop_20(ConfigurationProperty_t3009015393 * value)
	{
		___ipv6Prop_20 = value;
		Il2CppCodeGenWriteBarrier(&___ipv6Prop_20, value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_21() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___performanceCountersProp_21)); }
	inline ConfigurationProperty_t3009015393 * get_performanceCountersProp_21() const { return ___performanceCountersProp_21; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_performanceCountersProp_21() { return &___performanceCountersProp_21; }
	inline void set_performanceCountersProp_21(ConfigurationProperty_t3009015393 * value)
	{
		___performanceCountersProp_21 = value;
		Il2CppCodeGenWriteBarrier(&___performanceCountersProp_21, value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___servicePointManagerProp_22)); }
	inline ConfigurationProperty_t3009015393 * get_servicePointManagerProp_22() const { return ___servicePointManagerProp_22; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_servicePointManagerProp_22() { return &___servicePointManagerProp_22; }
	inline void set_servicePointManagerProp_22(ConfigurationProperty_t3009015393 * value)
	{
		___servicePointManagerProp_22 = value;
		Il2CppCodeGenWriteBarrier(&___servicePointManagerProp_22, value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___webProxyScriptProp_23)); }
	inline ConfigurationProperty_t3009015393 * get_webProxyScriptProp_23() const { return ___webProxyScriptProp_23; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_webProxyScriptProp_23() { return &___webProxyScriptProp_23; }
	inline void set_webProxyScriptProp_23(ConfigurationProperty_t3009015393 * value)
	{
		___webProxyScriptProp_23 = value;
		Il2CppCodeGenWriteBarrier(&___webProxyScriptProp_23, value);
	}

	inline static int32_t get_offset_of_socketProp_24() { return static_cast<int32_t>(offsetof(SettingsSection_t2800213852_StaticFields, ___socketProp_24)); }
	inline ConfigurationProperty_t3009015393 * get_socketProp_24() const { return ___socketProp_24; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_socketProp_24() { return &___socketProp_24; }
	inline void set_socketProp_24(ConfigurationProperty_t3009015393 * value)
	{
		___socketProp_24 = value;
		Il2CppCodeGenWriteBarrier(&___socketProp_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif