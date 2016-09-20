#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.Xml.EncryptedKey
struct EncryptedKey_t2661305137;

#include "System_Security_System_Security_Cryptography_Xml_K1521863262.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoEncryptedKey
struct  KeyInfoEncryptedKey_t1689892010  : public KeyInfoClause_t1521863262
{
public:
	// System.Security.Cryptography.Xml.EncryptedKey System.Security.Cryptography.Xml.KeyInfoEncryptedKey::encryptedKey
	EncryptedKey_t2661305137 * ___encryptedKey_0;

public:
	inline static int32_t get_offset_of_encryptedKey_0() { return static_cast<int32_t>(offsetof(KeyInfoEncryptedKey_t1689892010, ___encryptedKey_0)); }
	inline EncryptedKey_t2661305137 * get_encryptedKey_0() const { return ___encryptedKey_0; }
	inline EncryptedKey_t2661305137 ** get_address_of_encryptedKey_0() { return &___encryptedKey_0; }
	inline void set_encryptedKey_0(EncryptedKey_t2661305137 * value)
	{
		___encryptedKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___encryptedKey_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
