#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3324145743;

#include "System_Configuration_System_Configuration_Configur4042579377.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.StringValidator
struct  StringValidator_t1193004663  : public ConfigurationValidatorBase_t4042579377
{
public:
	// System.Char[] System.Configuration.StringValidator::invalidCharacters
	CharU5BU5D_t3324145743* ___invalidCharacters_0;
	// System.Int32 System.Configuration.StringValidator::maxLength
	int32_t ___maxLength_1;
	// System.Int32 System.Configuration.StringValidator::minLength
	int32_t ___minLength_2;

public:
	inline static int32_t get_offset_of_invalidCharacters_0() { return static_cast<int32_t>(offsetof(StringValidator_t1193004663, ___invalidCharacters_0)); }
	inline CharU5BU5D_t3324145743* get_invalidCharacters_0() const { return ___invalidCharacters_0; }
	inline CharU5BU5D_t3324145743** get_address_of_invalidCharacters_0() { return &___invalidCharacters_0; }
	inline void set_invalidCharacters_0(CharU5BU5D_t3324145743* value)
	{
		___invalidCharacters_0 = value;
		Il2CppCodeGenWriteBarrier(&___invalidCharacters_0, value);
	}

	inline static int32_t get_offset_of_maxLength_1() { return static_cast<int32_t>(offsetof(StringValidator_t1193004663, ___maxLength_1)); }
	inline int32_t get_maxLength_1() const { return ___maxLength_1; }
	inline int32_t* get_address_of_maxLength_1() { return &___maxLength_1; }
	inline void set_maxLength_1(int32_t value)
	{
		___maxLength_1 = value;
	}

	inline static int32_t get_offset_of_minLength_2() { return static_cast<int32_t>(offsetof(StringValidator_t1193004663, ___minLength_2)); }
	inline int32_t get_minLength_2() const { return ___minLength_2; }
	inline int32_t* get_address_of_minLength_2() { return &___minLength_2; }
	inline void set_minLength_2(int32_t value)
	{
		___minLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
