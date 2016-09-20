#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Cryptography_CipherMode2662187258.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode2126978938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedXml
struct  EncryptedXml_t2661317865  : public Il2CppObject
{
public:
	// System.Text.Encoding System.Security.Cryptography.Xml.EncryptedXml::encoding
	Encoding_t2012439129 * ___encoding_0;
	// System.Collections.Hashtable System.Security.Cryptography.Xml.EncryptedXml::keyNameMapping
	Hashtable_t1407064410 * ___keyNameMapping_1;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.Xml.EncryptedXml::mode
	int32_t ___mode_2;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.Xml.EncryptedXml::padding
	int32_t ___padding_3;
	// System.Xml.XmlDocument System.Security.Cryptography.Xml.EncryptedXml::document
	XmlDocument_t730752740 * ___document_4;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865, ___encoding_0)); }
	inline Encoding_t2012439129 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t2012439129 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t2012439129 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_0, value);
	}

	inline static int32_t get_offset_of_keyNameMapping_1() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865, ___keyNameMapping_1)); }
	inline Hashtable_t1407064410 * get_keyNameMapping_1() const { return ___keyNameMapping_1; }
	inline Hashtable_t1407064410 ** get_address_of_keyNameMapping_1() { return &___keyNameMapping_1; }
	inline void set_keyNameMapping_1(Hashtable_t1407064410 * value)
	{
		___keyNameMapping_1 = value;
		Il2CppCodeGenWriteBarrier(&___keyNameMapping_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865, ___padding_3)); }
	inline int32_t get_padding_3() const { return ___padding_3; }
	inline int32_t* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(int32_t value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_document_4() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865, ___document_4)); }
	inline XmlDocument_t730752740 * get_document_4() const { return ___document_4; }
	inline XmlDocument_t730752740 ** get_address_of_document_4() { return &___document_4; }
	inline void set_document_4(XmlDocument_t730752740 * value)
	{
		___document_4 = value;
		Il2CppCodeGenWriteBarrier(&___document_4, value);
	}
};

struct EncryptedXml_t2661317865_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedXml::<>f__switch$map8
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map8_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedXml::<>f__switch$map9
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map9_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_5() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865_StaticFields, ___U3CU3Ef__switchU24map8_5)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map8_5() const { return ___U3CU3Ef__switchU24map8_5; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map8_5() { return &___U3CU3Ef__switchU24map8_5; }
	inline void set_U3CU3Ef__switchU24map8_5(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map8_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_6() { return static_cast<int32_t>(offsetof(EncryptedXml_t2661317865_StaticFields, ___U3CU3Ef__switchU24map9_6)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map9_6() const { return ___U3CU3Ef__switchU24map9_6; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map9_6() { return &___U3CU3Ef__switchU24map9_6; }
	inline void set_U3CU3Ef__switchU24map9_6(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map9_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
