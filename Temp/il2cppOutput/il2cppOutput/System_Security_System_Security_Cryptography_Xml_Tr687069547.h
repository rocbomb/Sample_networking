﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.TransformChain
struct  TransformChain_t687069547  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.TransformChain::chain
	ArrayList_t3948406897 * ___chain_0;

public:
	inline static int32_t get_offset_of_chain_0() { return static_cast<int32_t>(offsetof(TransformChain_t687069547, ___chain_0)); }
	inline ArrayList_t3948406897 * get_chain_0() const { return ___chain_0; }
	inline ArrayList_t3948406897 ** get_address_of_chain_0() { return &___chain_0; }
	inline void set_chain_0(ArrayList_t3948406897 * value)
	{
		___chain_0 = value;
		Il2CppCodeGenWriteBarrier(&___chain_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
