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
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t2272995238  : public Il2CppObject
{
public:
	// System.Boolean System.Configuration.ConfigurationSectionGroup::require_declaration
	bool ___require_declaration_0;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::declared
	bool ___declared_1;
	// System.String System.Configuration.ConfigurationSectionGroup::name
	String_t* ___name_2;
	// System.String System.Configuration.ConfigurationSectionGroup::type_name
	String_t* ___type_name_3;
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t1911555921 * ___sections_4;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t4020418340 * ___groups_5;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t710589292 * ___config_6;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t2963986668 * ___group_7;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_8;

public:
	inline static int32_t get_offset_of_require_declaration_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___require_declaration_0)); }
	inline bool get_require_declaration_0() const { return ___require_declaration_0; }
	inline bool* get_address_of_require_declaration_0() { return &___require_declaration_0; }
	inline void set_require_declaration_0(bool value)
	{
		___require_declaration_0 = value;
	}

	inline static int32_t get_offset_of_declared_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___declared_1)); }
	inline bool get_declared_1() const { return ___declared_1; }
	inline bool* get_address_of_declared_1() { return &___declared_1; }
	inline void set_declared_1(bool value)
	{
		___declared_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_type_name_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___type_name_3)); }
	inline String_t* get_type_name_3() const { return ___type_name_3; }
	inline String_t** get_address_of_type_name_3() { return &___type_name_3; }
	inline void set_type_name_3(String_t* value)
	{
		___type_name_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_name_3, value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___sections_4)); }
	inline ConfigurationSectionCollection_t1911555921 * get_sections_4() const { return ___sections_4; }
	inline ConfigurationSectionCollection_t1911555921 ** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(ConfigurationSectionCollection_t1911555921 * value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier(&___sections_4, value);
	}

	inline static int32_t get_offset_of_groups_5() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___groups_5)); }
	inline ConfigurationSectionGroupCollection_t4020418340 * get_groups_5() const { return ___groups_5; }
	inline ConfigurationSectionGroupCollection_t4020418340 ** get_address_of_groups_5() { return &___groups_5; }
	inline void set_groups_5(ConfigurationSectionGroupCollection_t4020418340 * value)
	{
		___groups_5 = value;
		Il2CppCodeGenWriteBarrier(&___groups_5, value);
	}

	inline static int32_t get_offset_of_config_6() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___config_6)); }
	inline Configuration_t710589292 * get_config_6() const { return ___config_6; }
	inline Configuration_t710589292 ** get_address_of_config_6() { return &___config_6; }
	inline void set_config_6(Configuration_t710589292 * value)
	{
		___config_6 = value;
		Il2CppCodeGenWriteBarrier(&___config_6, value);
	}

	inline static int32_t get_offset_of_group_7() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___group_7)); }
	inline SectionGroupInfo_t2963986668 * get_group_7() const { return ___group_7; }
	inline SectionGroupInfo_t2963986668 ** get_address_of_group_7() { return &___group_7; }
	inline void set_group_7(SectionGroupInfo_t2963986668 * value)
	{
		___group_7 = value;
		Il2CppCodeGenWriteBarrier(&___group_7, value);
	}

	inline static int32_t get_offset_of_initialized_8() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2272995238, ___initialized_8)); }
	inline bool get_initialized_8() const { return ___initialized_8; }
	inline bool* get_address_of_initialized_8() { return &___initialized_8; }
	inline void set_initialized_8(bool value)
	{
		___initialized_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
