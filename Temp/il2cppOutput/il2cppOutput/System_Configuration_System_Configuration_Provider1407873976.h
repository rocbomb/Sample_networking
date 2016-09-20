#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigNameValueCollection
struct ConfigNameValueCollection_t4110742328;
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

// System.Configuration.ProviderSettings
struct  ProviderSettings_t1407873976  : public ConfigurationElement_t3842833450
{
public:
	// System.Configuration.ConfigNameValueCollection System.Configuration.ProviderSettings::parameters
	ConfigNameValueCollection_t4110742328 * ___parameters_14;

public:
	inline static int32_t get_offset_of_parameters_14() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976, ___parameters_14)); }
	inline ConfigNameValueCollection_t4110742328 * get_parameters_14() const { return ___parameters_14; }
	inline ConfigNameValueCollection_t4110742328 ** get_address_of_parameters_14() { return &___parameters_14; }
	inline void set_parameters_14(ConfigNameValueCollection_t4110742328 * value)
	{
		___parameters_14 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_14, value);
	}
};

struct ProviderSettings_t1407873976_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::nameProp
	ConfigurationProperty_t3009015393 * ___nameProp_15;
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::typeProp
	ConfigurationProperty_t3009015393 * ___typeProp_16;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_17;

public:
	inline static int32_t get_offset_of_nameProp_15() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___nameProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_nameProp_15() const { return ___nameProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_nameProp_15() { return &___nameProp_15; }
	inline void set_nameProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___nameProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___nameProp_15, value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3009015393 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3009015393 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___typeProp_16, value);
	}

	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
