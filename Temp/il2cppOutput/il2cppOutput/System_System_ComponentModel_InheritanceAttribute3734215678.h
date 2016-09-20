#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.InheritanceAttribute
struct InheritanceAttribute_t3734215678;

#include "mscorlib_System_Attribute2523058482.h"
#include "System_System_ComponentModel_InheritanceLevel639488358.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InheritanceAttribute
struct  InheritanceAttribute_t3734215678  : public Attribute_t2523058482
{
public:
	// System.ComponentModel.InheritanceLevel System.ComponentModel.InheritanceAttribute::level
	int32_t ___level_0;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3734215678, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}
};

struct InheritanceAttribute_t3734215678_StaticFields
{
public:
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Default
	InheritanceAttribute_t3734215678 * ___Default_1;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Inherited
	InheritanceAttribute_t3734215678 * ___Inherited_2;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::InheritedReadOnly
	InheritanceAttribute_t3734215678 * ___InheritedReadOnly_3;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::NotInherited
	InheritanceAttribute_t3734215678 * ___NotInherited_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3734215678_StaticFields, ___Default_1)); }
	inline InheritanceAttribute_t3734215678 * get_Default_1() const { return ___Default_1; }
	inline InheritanceAttribute_t3734215678 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(InheritanceAttribute_t3734215678 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}

	inline static int32_t get_offset_of_Inherited_2() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3734215678_StaticFields, ___Inherited_2)); }
	inline InheritanceAttribute_t3734215678 * get_Inherited_2() const { return ___Inherited_2; }
	inline InheritanceAttribute_t3734215678 ** get_address_of_Inherited_2() { return &___Inherited_2; }
	inline void set_Inherited_2(InheritanceAttribute_t3734215678 * value)
	{
		___Inherited_2 = value;
		Il2CppCodeGenWriteBarrier(&___Inherited_2, value);
	}

	inline static int32_t get_offset_of_InheritedReadOnly_3() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3734215678_StaticFields, ___InheritedReadOnly_3)); }
	inline InheritanceAttribute_t3734215678 * get_InheritedReadOnly_3() const { return ___InheritedReadOnly_3; }
	inline InheritanceAttribute_t3734215678 ** get_address_of_InheritedReadOnly_3() { return &___InheritedReadOnly_3; }
	inline void set_InheritedReadOnly_3(InheritanceAttribute_t3734215678 * value)
	{
		___InheritedReadOnly_3 = value;
		Il2CppCodeGenWriteBarrier(&___InheritedReadOnly_3, value);
	}

	inline static int32_t get_offset_of_NotInherited_4() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3734215678_StaticFields, ___NotInherited_4)); }
	inline InheritanceAttribute_t3734215678 * get_NotInherited_4() const { return ___NotInherited_4; }
	inline InheritanceAttribute_t3734215678 ** get_address_of_NotInherited_4() { return &___NotInherited_4; }
	inline void set_NotInherited_4(InheritanceAttribute_t3734215678 * value)
	{
		___NotInherited_4 = value;
		Il2CppCodeGenWriteBarrier(&___NotInherited_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
