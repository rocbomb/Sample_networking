#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t2466814310;

#include "System_Security_System_Security_Cryptography_Xml_K1521863262.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.RSAKeyValue
struct  RSAKeyValue_t2075016468  : public KeyInfoClause_t1521863262
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.Xml.RSAKeyValue::rsa
	RSA_t2466814310 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAKeyValue_t2075016468, ___rsa_0)); }
	inline RSA_t2466814310 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2466814310 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2466814310 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
