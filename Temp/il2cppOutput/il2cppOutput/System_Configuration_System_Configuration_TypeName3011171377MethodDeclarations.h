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

// System.Configuration.TypeNameConverter
struct TypeNameConverter_t3011171377;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Configuration.TypeNameConverter::.ctor()
extern "C"  void TypeNameConverter__ctor_m257559072 (TypeNameConverter_t3011171377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TypeNameConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * TypeNameConverter_ConvertFrom_m2309722046 (TypeNameConverter_t3011171377 * __this, Il2CppObject * ___ctx0, CultureInfo_t1065375142 * ___ci1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TypeNameConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * TypeNameConverter_ConvertTo_m4006557568 (TypeNameConverter_t3011171377 * __this, Il2CppObject * ___ctx0, CultureInfo_t1065375142 * ___ci1, Il2CppObject * ___value2, Type_t * ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
