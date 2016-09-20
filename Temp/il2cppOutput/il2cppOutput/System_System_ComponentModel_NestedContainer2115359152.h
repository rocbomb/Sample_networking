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

#include "System_System_ComponentModel_Container1321025191.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer
struct  NestedContainer_t2115359152  : public Container_t1321025191
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer::_owner
	Il2CppObject * ____owner_1;

public:
	inline static int32_t get_offset_of__owner_1() { return static_cast<int32_t>(offsetof(NestedContainer_t2115359152, ____owner_1)); }
	inline Il2CppObject * get__owner_1() const { return ____owner_1; }
	inline Il2CppObject ** get_address_of__owner_1() { return &____owner_1; }
	inline void set__owner_1(Il2CppObject * value)
	{
		____owner_1 = value;
		Il2CppCodeGenWriteBarrier(&____owner_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
