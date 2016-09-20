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

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t4025521199  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct WebRequestModuleElement_t4025521199_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t3009015393 * ___prefixProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t3009015393 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4025521199_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}

	inline static int32_t get_offset_of_prefixProp_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4025521199_StaticFields, ___prefixProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_prefixProp_15() const { return ___prefixProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_prefixProp_15() { return &___prefixProp_15; }
	inline void set_prefixProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___prefixProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___prefixProp_15, value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4025521199_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3009015393 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3009015393 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___typeProp_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
