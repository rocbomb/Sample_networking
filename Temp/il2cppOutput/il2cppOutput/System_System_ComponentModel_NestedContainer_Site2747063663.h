#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.ComponentModel.NestedContainer
struct NestedContainer_t2115359152;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer/Site
struct  Site_t2747063663  : public Il2CppObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer/Site::_component
	Il2CppObject * ____component_0;
	// System.ComponentModel.NestedContainer System.ComponentModel.NestedContainer/Site::_nestedContainer
	NestedContainer_t2115359152 * ____nestedContainer_1;
	// System.String System.ComponentModel.NestedContainer/Site::_siteName
	String_t* ____siteName_2;

public:
	inline static int32_t get_offset_of__component_0() { return static_cast<int32_t>(offsetof(Site_t2747063663, ____component_0)); }
	inline Il2CppObject * get__component_0() const { return ____component_0; }
	inline Il2CppObject ** get_address_of__component_0() { return &____component_0; }
	inline void set__component_0(Il2CppObject * value)
	{
		____component_0 = value;
		Il2CppCodeGenWriteBarrier(&____component_0, value);
	}

	inline static int32_t get_offset_of__nestedContainer_1() { return static_cast<int32_t>(offsetof(Site_t2747063663, ____nestedContainer_1)); }
	inline NestedContainer_t2115359152 * get__nestedContainer_1() const { return ____nestedContainer_1; }
	inline NestedContainer_t2115359152 ** get_address_of__nestedContainer_1() { return &____nestedContainer_1; }
	inline void set__nestedContainer_1(NestedContainer_t2115359152 * value)
	{
		____nestedContainer_1 = value;
		Il2CppCodeGenWriteBarrier(&____nestedContainer_1, value);
	}

	inline static int32_t get_offset_of__siteName_2() { return static_cast<int32_t>(offsetof(Site_t2747063663, ____siteName_2)); }
	inline String_t* get__siteName_2() const { return ____siteName_2; }
	inline String_t** get_address_of__siteName_2() { return &____siteName_2; }
	inline void set__siteName_2(String_t* value)
	{
		____siteName_2 = value;
		Il2CppCodeGenWriteBarrier(&____siteName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
