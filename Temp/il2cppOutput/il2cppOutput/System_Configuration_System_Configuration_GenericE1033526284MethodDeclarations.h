#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.GenericEnumConverter
struct GenericEnumConverter_t1033526284;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.GenericEnumConverter::.ctor(System.Type)
extern "C"  void GenericEnumConverter__ctor_m2624998294 (GenericEnumConverter_t1033526284 * __this, Type_t * ___typeEnum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.GenericEnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * GenericEnumConverter_ConvertFrom_m1960121393 (GenericEnumConverter_t1033526284 * __this, Il2CppObject * ___ctx0, CultureInfo_t1065375142 * ___ci1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.GenericEnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * GenericEnumConverter_ConvertTo_m2308966451 (GenericEnumConverter_t1033526284 * __this, Il2CppObject * ___ctx0, CultureInfo_t1065375142 * ___ci1, Il2CppObject * ___value2, Type_t * ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
