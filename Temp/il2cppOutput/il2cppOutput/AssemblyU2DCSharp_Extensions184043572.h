#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct Dictionary_2_t1606075314;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Extensions
struct  Extensions_t184043572  : public Il2CppObject
{
public:

public:
};

struct Extensions_t184043572_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]> Extensions::parametersOfMethods
	Dictionary_2_t1606075314 * ___parametersOfMethods_0;

public:
	inline static int32_t get_offset_of_parametersOfMethods_0() { return static_cast<int32_t>(offsetof(Extensions_t184043572_StaticFields, ___parametersOfMethods_0)); }
	inline Dictionary_2_t1606075314 * get_parametersOfMethods_0() const { return ___parametersOfMethods_0; }
	inline Dictionary_2_t1606075314 ** get_address_of_parametersOfMethods_0() { return &___parametersOfMethods_0; }
	inline void set_parametersOfMethods_0(Dictionary_2_t1606075314 * value)
	{
		___parametersOfMethods_0 = value;
		Il2CppCodeGenWriteBarrier(&___parametersOfMethods_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
