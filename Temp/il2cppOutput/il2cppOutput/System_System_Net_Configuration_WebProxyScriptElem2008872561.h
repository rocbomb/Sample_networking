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

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t2008872561  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct WebProxyScriptElement_t2008872561_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t3009015393 * ___downloadTimeoutProp_14;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_15;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_14() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t2008872561_StaticFields, ___downloadTimeoutProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_downloadTimeoutProp_14() const { return ___downloadTimeoutProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_downloadTimeoutProp_14() { return &___downloadTimeoutProp_14; }
	inline void set_downloadTimeoutProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___downloadTimeoutProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___downloadTimeoutProp_14, value);
	}

	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t2008872561_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier(&___properties_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
