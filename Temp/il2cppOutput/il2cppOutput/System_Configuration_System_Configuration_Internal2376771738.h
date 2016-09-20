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

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Internal.InternalConfigEventArgs
struct  InternalConfigEventArgs_t2376771738  : public EventArgs_t2540831021
{
public:
	// System.String System.Configuration.Internal.InternalConfigEventArgs::configPath
	String_t* ___configPath_1;

public:
	inline static int32_t get_offset_of_configPath_1() { return static_cast<int32_t>(offsetof(InternalConfigEventArgs_t2376771738, ___configPath_1)); }
	inline String_t* get_configPath_1() const { return ___configPath_1; }
	inline String_t** get_address_of_configPath_1() { return &___configPath_1; }
	inline void set_configPath_1(String_t* value)
	{
		___configPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___configPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
