﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.XmlCanonicalizer
struct XmlCanonicalizer_t2826483393;

#include "System_Security_System_Security_Cryptography_Xml_T3619286350.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigC14NTransform
struct  XmlDsigC14NTransform_t880672758  : public Transform_t3619286350
{
public:
	// Mono.Xml.XmlCanonicalizer System.Security.Cryptography.Xml.XmlDsigC14NTransform::canonicalizer
	XmlCanonicalizer_t2826483393 * ___canonicalizer_3;

public:
	inline static int32_t get_offset_of_canonicalizer_3() { return static_cast<int32_t>(offsetof(XmlDsigC14NTransform_t880672758, ___canonicalizer_3)); }
	inline XmlCanonicalizer_t2826483393 * get_canonicalizer_3() const { return ___canonicalizer_3; }
	inline XmlCanonicalizer_t2826483393 ** get_address_of_canonicalizer_3() { return &___canonicalizer_3; }
	inline void set_canonicalizer_3(XmlCanonicalizer_t2826483393 * value)
	{
		___canonicalizer_3 = value;
		Il2CppCodeGenWriteBarrier(&___canonicalizer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
