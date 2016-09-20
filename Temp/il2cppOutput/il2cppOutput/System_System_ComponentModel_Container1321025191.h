#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.ComponentModel.IComponent>
struct List_1_t2181462064;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t1321025191  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.ComponentModel.IComponent> System.ComponentModel.Container::c
	List_1_t2181462064 * ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Container_t1321025191, ___c_0)); }
	inline List_1_t2181462064 * get_c_0() const { return ___c_0; }
	inline List_1_t2181462064 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(List_1_t2181462064 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier(&___c_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
