#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.DSA
struct DSA_t2466800856;

#include "System_Security_System_Security_Cryptography_Xml_K1521863262.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.DSAKeyValue
struct  DSAKeyValue_t1462531718  : public KeyInfoClause_t1521863262
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.Xml.DSAKeyValue::dsa
	DSA_t2466800856 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSAKeyValue_t1462531718, ___dsa_0)); }
	inline DSA_t2466800856 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2466800856 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2466800856 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___dsa_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
