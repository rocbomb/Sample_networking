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

// System.ComponentModel.ExpandableObjectConverter
struct ExpandableObjectConverter_t207908787;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1100518537;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.ExpandableObjectConverter::.ctor()
extern "C"  void ExpandableObjectConverter__ctor_m309980032 (ExpandableObjectConverter_t207908787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ExpandableObjectConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3344846062 * ExpandableObjectConverter_GetProperties_m2088821016 (ExpandableObjectConverter_t207908787 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4055800263* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExpandableObjectConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ExpandableObjectConverter_GetPropertiesSupported_m835851923 (ExpandableObjectConverter_t207908787 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
