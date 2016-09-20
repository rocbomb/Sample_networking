#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfo
struct  KeyInfo_t3182778127  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfo::Info
	ArrayList_t3948406897 * ___Info_0;
	// System.String System.Security.Cryptography.Xml.KeyInfo::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(KeyInfo_t3182778127, ___Info_0)); }
	inline ArrayList_t3948406897 * get_Info_0() const { return ___Info_0; }
	inline ArrayList_t3948406897 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(ArrayList_t3948406897 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier(&___Info_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(KeyInfo_t3182778127, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}
};

struct KeyInfo_t3182778127_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.KeyInfo::<>f__switch$mapB
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapB_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.KeyInfo::<>f__switch$mapC
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapC_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_2() { return static_cast<int32_t>(offsetof(KeyInfo_t3182778127_StaticFields, ___U3CU3Ef__switchU24mapB_2)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapB_2() const { return ___U3CU3Ef__switchU24mapB_2; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapB_2() { return &___U3CU3Ef__switchU24mapB_2; }
	inline void set_U3CU3Ef__switchU24mapB_2(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapB_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_3() { return static_cast<int32_t>(offsetof(KeyInfo_t3182778127_StaticFields, ___U3CU3Ef__switchU24mapC_3)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapC_3() const { return ___U3CU3Ef__switchU24mapC_3; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapC_3() { return &___U3CU3Ef__switchU24mapC_3; }
	inline void set_U3CU3Ef__switchU24mapC_3(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapC_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
