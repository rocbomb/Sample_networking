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

#include "System_Xml_System_Xml_XmlNodeList991860617.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeArrayList
struct  XmlNodeArrayList_t543782172  : public XmlNodeList_t991860617
{
public:
	// System.Collections.ArrayList System.Xml.XmlNodeArrayList::_rgNodes
	ArrayList_t3948406897 * ____rgNodes_0;

public:
	inline static int32_t get_offset_of__rgNodes_0() { return static_cast<int32_t>(offsetof(XmlNodeArrayList_t543782172, ____rgNodes_0)); }
	inline ArrayList_t3948406897 * get__rgNodes_0() const { return ____rgNodes_0; }
	inline ArrayList_t3948406897 ** get_address_of__rgNodes_0() { return &____rgNodes_0; }
	inline void set__rgNodes_0(ArrayList_t3948406897 * value)
	{
		____rgNodes_0 = value;
		Il2CppCodeGenWriteBarrier(&____rgNodes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
