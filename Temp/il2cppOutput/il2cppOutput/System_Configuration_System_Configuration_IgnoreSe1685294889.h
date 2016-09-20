#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "System_Configuration_System_Configuration_Configur3180944403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.IgnoreSection
struct  IgnoreSection_t1685294889  : public ConfigurationSection_t3180944403
{
public:
	// System.String System.Configuration.IgnoreSection::xml
	String_t* ___xml_18;

public:
	inline static int32_t get_offset_of_xml_18() { return static_cast<int32_t>(offsetof(IgnoreSection_t1685294889, ___xml_18)); }
	inline String_t* get_xml_18() const { return ___xml_18; }
	inline String_t** get_address_of_xml_18() { return &___xml_18; }
	inline void set_xml_18(String_t* value)
	{
		___xml_18 = value;
		Il2CppCodeGenWriteBarrier(&___xml_18, value);
	}
};

struct IgnoreSection_t1685294889_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_19;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(IgnoreSection_t1685294889_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier(&___properties_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
