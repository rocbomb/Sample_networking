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

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t3178920531  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct HttpWebRequestElement_t3178920531_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3009015393 * ___maximumErrorResponseLengthProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3009015393 * ___maximumResponseHeadersLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3009015393 * ___maximumUnauthorizedUploadLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3009015393 * ___useUnsafeHeaderParsingProp_17;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_18;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_14() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t3178920531_StaticFields, ___maximumErrorResponseLengthProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_maximumErrorResponseLengthProp_14() const { return ___maximumErrorResponseLengthProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_maximumErrorResponseLengthProp_14() { return &___maximumErrorResponseLengthProp_14; }
	inline void set_maximumErrorResponseLengthProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___maximumErrorResponseLengthProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___maximumErrorResponseLengthProp_14, value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t3178920531_StaticFields, ___maximumResponseHeadersLengthProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_maximumResponseHeadersLengthProp_15() const { return ___maximumResponseHeadersLengthProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_maximumResponseHeadersLengthProp_15() { return &___maximumResponseHeadersLengthProp_15; }
	inline void set_maximumResponseHeadersLengthProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___maximumResponseHeadersLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___maximumResponseHeadersLengthProp_15, value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t3178920531_StaticFields, ___maximumUnauthorizedUploadLengthProp_16)); }
	inline ConfigurationProperty_t3009015393 * get_maximumUnauthorizedUploadLengthProp_16() const { return ___maximumUnauthorizedUploadLengthProp_16; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_maximumUnauthorizedUploadLengthProp_16() { return &___maximumUnauthorizedUploadLengthProp_16; }
	inline void set_maximumUnauthorizedUploadLengthProp_16(ConfigurationProperty_t3009015393 * value)
	{
		___maximumUnauthorizedUploadLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___maximumUnauthorizedUploadLengthProp_16, value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t3178920531_StaticFields, ___useUnsafeHeaderParsingProp_17)); }
	inline ConfigurationProperty_t3009015393 * get_useUnsafeHeaderParsingProp_17() const { return ___useUnsafeHeaderParsingProp_17; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_useUnsafeHeaderParsingProp_17() { return &___useUnsafeHeaderParsingProp_17; }
	inline void set_useUnsafeHeaderParsingProp_17(ConfigurationProperty_t3009015393 * value)
	{
		___useUnsafeHeaderParsingProp_17 = value;
		Il2CppCodeGenWriteBarrier(&___useUnsafeHeaderParsingProp_17, value);
	}

	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t3178920531_StaticFields, ___properties_18)); }
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
