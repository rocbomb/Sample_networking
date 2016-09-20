#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.DataObjectAttribute
struct DataObjectAttribute_t4208727801;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectAttribute
struct  DataObjectAttribute_t4208727801  : public Attribute_t2523058482
{
public:
	// System.Boolean System.ComponentModel.DataObjectAttribute::_isDataObject
	bool ____isDataObject_3;

public:
	inline static int32_t get_offset_of__isDataObject_3() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t4208727801, ____isDataObject_3)); }
	inline bool get__isDataObject_3() const { return ____isDataObject_3; }
	inline bool* get_address_of__isDataObject_3() { return &____isDataObject_3; }
	inline void set__isDataObject_3(bool value)
	{
		____isDataObject_3 = value;
	}
};

struct DataObjectAttribute_t4208727801_StaticFields
{
public:
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::DataObject
	DataObjectAttribute_t4208727801 * ___DataObject_0;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::Default
	DataObjectAttribute_t4208727801 * ___Default_1;
	// System.ComponentModel.DataObjectAttribute System.ComponentModel.DataObjectAttribute::NonDataObject
	DataObjectAttribute_t4208727801 * ___NonDataObject_2;

public:
	inline static int32_t get_offset_of_DataObject_0() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t4208727801_StaticFields, ___DataObject_0)); }
	inline DataObjectAttribute_t4208727801 * get_DataObject_0() const { return ___DataObject_0; }
	inline DataObjectAttribute_t4208727801 ** get_address_of_DataObject_0() { return &___DataObject_0; }
	inline void set_DataObject_0(DataObjectAttribute_t4208727801 * value)
	{
		___DataObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___DataObject_0, value);
	}

	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t4208727801_StaticFields, ___Default_1)); }
	inline DataObjectAttribute_t4208727801 * get_Default_1() const { return ___Default_1; }
	inline DataObjectAttribute_t4208727801 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DataObjectAttribute_t4208727801 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}

	inline static int32_t get_offset_of_NonDataObject_2() { return static_cast<int32_t>(offsetof(DataObjectAttribute_t4208727801_StaticFields, ___NonDataObject_2)); }
	inline DataObjectAttribute_t4208727801 * get_NonDataObject_2() const { return ___NonDataObject_2; }
	inline DataObjectAttribute_t4208727801 ** get_address_of_NonDataObject_2() { return &___NonDataObject_2; }
	inline void set_NonDataObject_2(DataObjectAttribute_t4208727801 * value)
	{
		___NonDataObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___NonDataObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
