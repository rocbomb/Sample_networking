﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Configuration.ElementMap
struct ElementMap_t792723588;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1978119848;
// System.Configuration.ElementInformation
struct ElementInformation_t891176276;
// System.Configuration.ConfigurationElementProperty
struct ConfigurationElementProperty_t3264647455;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t677452661;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3842833450  : public Il2CppObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t792723588 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t55611423 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t1978119848 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t891176276 * ___elementInfo_6;
	// System.Configuration.ConfigurationElementProperty System.Configuration.ConfigurationElement::elementProperty
	ConfigurationElementProperty_t3264647455 * ___elementProperty_7;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t710589292 * ____configuration_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t677452661 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t677452661 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t677452661 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t677452661 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier(&___rawXml_0, value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___map_2)); }
	inline ElementMap_t792723588 * get_map_2() const { return ___map_2; }
	inline ElementMap_t792723588 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t792723588 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier(&___map_2, value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t55611423 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t55611423 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyProps_3, value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t1978119848 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t1978119848 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t1978119848 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultCollection_4, value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___elementInfo_6)); }
	inline ElementInformation_t891176276 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t891176276 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t891176276 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___elementInfo_6, value);
	}

	inline static int32_t get_offset_of_elementProperty_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___elementProperty_7)); }
	inline ConfigurationElementProperty_t3264647455 * get_elementProperty_7() const { return ___elementProperty_7; }
	inline ConfigurationElementProperty_t3264647455 ** get_address_of_elementProperty_7() { return &___elementProperty_7; }
	inline void set_elementProperty_7(ConfigurationElementProperty_t3264647455 * value)
	{
		___elementProperty_7 = value;
		Il2CppCodeGenWriteBarrier(&___elementProperty_7, value);
	}

	inline static int32_t get_offset_of__configuration_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ____configuration_8)); }
	inline Configuration_t710589292 * get__configuration_8() const { return ____configuration_8; }
	inline Configuration_t710589292 ** get_address_of__configuration_8() { return &____configuration_8; }
	inline void set__configuration_8(Configuration_t710589292 * value)
	{
		____configuration_8 = value;
		Il2CppCodeGenWriteBarrier(&____configuration_8, value);
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t677452661 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t677452661 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t677452661 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier(&___lockAllAttributesExcept_9, value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t677452661 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t677452661 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t677452661 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier(&___lockAllElementsExcept_10, value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t677452661 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t677452661 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t677452661 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier(&___lockAttributes_11, value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___lockElements_12)); }
	inline ConfigurationLockCollection_t677452661 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t677452661 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t677452661 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier(&___lockElements_12, value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3842833450, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
