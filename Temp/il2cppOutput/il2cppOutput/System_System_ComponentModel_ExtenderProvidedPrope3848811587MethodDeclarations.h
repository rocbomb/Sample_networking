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

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct ExtenderProvidedPropertyAttribute_t3848811587;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2073374448;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t3311867911;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_PropertyDescriptor2073374448.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.ExtenderProvidedPropertyAttribute::.ctor()
extern "C"  void ExtenderProvidedPropertyAttribute__ctor_m4134310384 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ExtenderProvidedPropertyAttribute System.ComponentModel.ExtenderProvidedPropertyAttribute::CreateAttribute(System.ComponentModel.PropertyDescriptor,System.ComponentModel.IExtenderProvider,System.Type)
extern "C"  ExtenderProvidedPropertyAttribute_t3848811587 * ExtenderProvidedPropertyAttribute_CreateAttribute_m287133473 (Il2CppObject * __this /* static, unused */, PropertyDescriptor_t2073374448 * ___extenderProperty0, Il2CppObject * ___provider1, Type_t * ___receiverType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::get_ExtenderProperty()
extern "C"  PropertyDescriptor_t2073374448 * ExtenderProvidedPropertyAttribute_get_ExtenderProperty_m297410849 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::get_Provider()
extern "C"  Il2CppObject * ExtenderProvidedPropertyAttribute_get_Provider_m4054627321 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::get_ReceiverType()
extern "C"  Type_t * ExtenderProvidedPropertyAttribute_get_ReceiverType_m2804000012 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExtenderProvidedPropertyAttribute::IsDefaultAttribute()
extern "C"  bool ExtenderProvidedPropertyAttribute_IsDefaultAttribute_m881692835 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExtenderProvidedPropertyAttribute::Equals(System.Object)
extern "C"  bool ExtenderProvidedPropertyAttribute_Equals_m1175527927 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ExtenderProvidedPropertyAttribute::GetHashCode()
extern "C"  int32_t ExtenderProvidedPropertyAttribute_GetHashCode_m1260992207 (ExtenderProvidedPropertyAttribute_t3848811587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
