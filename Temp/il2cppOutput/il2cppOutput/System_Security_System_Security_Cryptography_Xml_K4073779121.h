#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlElement
struct XmlElement_t280387747;

#include "System_Security_System_Security_Cryptography_Xml_K1521863262.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoNode
struct  KeyInfoNode_t4073779121  : public KeyInfoClause_t1521863262
{
public:
	// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoNode::Node
	XmlElement_t280387747 * ___Node_0;

public:
	inline static int32_t get_offset_of_Node_0() { return static_cast<int32_t>(offsetof(KeyInfoNode_t4073779121, ___Node_0)); }
	inline XmlElement_t280387747 * get_Node_0() const { return ___Node_0; }
	inline XmlElement_t280387747 ** get_address_of_Node_0() { return &___Node_0; }
	inline void set_Node_0(XmlElement_t280387747 * value)
	{
		___Node_0 = value;
		Il2CppCodeGenWriteBarrier(&___Node_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
