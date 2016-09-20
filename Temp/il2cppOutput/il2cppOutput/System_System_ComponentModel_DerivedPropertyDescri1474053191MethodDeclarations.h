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

// System.ComponentModel.DerivedPropertyDescriptor
struct DerivedPropertyDescriptor_t1474053191;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4055800263;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ComponentModel.DerivedPropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void DerivedPropertyDescriptor__ctor_m3229218961 (DerivedPropertyDescriptor_t1474053191 * __this, String_t* ___name0, AttributeU5BU5D_t4055800263* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::.ctor(System.String,System.Attribute[],System.Int32)
extern "C"  void DerivedPropertyDescriptor__ctor_m1161517030 (DerivedPropertyDescriptor_t1474053191 * __this, String_t* ___name0, AttributeU5BU5D_t4055800263* ___attrs1, int32_t ___dummy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetReadOnly(System.Boolean)
extern "C"  void DerivedPropertyDescriptor_SetReadOnly_m4089326757 (DerivedPropertyDescriptor_t1474053191 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetComponentType(System.Type)
extern "C"  void DerivedPropertyDescriptor_SetComponentType_m3447946796 (DerivedPropertyDescriptor_t1474053191 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetPropertyType(System.Type)
extern "C"  void DerivedPropertyDescriptor_SetPropertyType_m652983646 (DerivedPropertyDescriptor_t1474053191 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DerivedPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * DerivedPropertyDescriptor_GetValue_m348094614 (DerivedPropertyDescriptor_t1474053191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void DerivedPropertyDescriptor_SetValue_m2642334651 (DerivedPropertyDescriptor_t1474053191 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::ResetValue(System.Object)
extern "C"  void DerivedPropertyDescriptor_ResetValue_m894952922 (DerivedPropertyDescriptor_t1474053191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool DerivedPropertyDescriptor_CanResetValue_m1260539874 (DerivedPropertyDescriptor_t1474053191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool DerivedPropertyDescriptor_ShouldSerializeValue_m2515141198 (DerivedPropertyDescriptor_t1474053191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.DerivedPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * DerivedPropertyDescriptor_get_ComponentType_m3453325394 (DerivedPropertyDescriptor_t1474053191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::get_IsReadOnly()
extern "C"  bool DerivedPropertyDescriptor_get_IsReadOnly_m243781815 (DerivedPropertyDescriptor_t1474053191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.DerivedPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * DerivedPropertyDescriptor_get_PropertyType_m91646326 (DerivedPropertyDescriptor_t1474053191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
