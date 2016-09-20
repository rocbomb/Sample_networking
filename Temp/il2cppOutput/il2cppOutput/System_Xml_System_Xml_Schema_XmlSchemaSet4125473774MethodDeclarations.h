﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t4125473774;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t1577913490;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Collections.ICollection
struct ICollection_t2643922881;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C"  void XmlSchemaSet__ctor_m1520080836 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaSet__ctor_m2873214540 (XmlSchemaSet_t4125473774 * __this, XmlNameTable_t1216706026 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_add_ValidationEventHandler_m4289829383 (XmlSchemaSet_t4125473774 * __this, ValidationEventHandler_t4231404781 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_remove_ValidationEventHandler_m2166716134 (XmlSchemaSet_t4125473774 * __this, ValidationEventHandler_t4231404781 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C"  int32_t XmlSchemaSet_get_Count_m3097640102 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchemaSet_get_GlobalAttributes_m3897313542 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchemaSet_get_GlobalElements_m1582185510 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchemaSet_get_GlobalTypes_m4101505548 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
extern "C"  bool XmlSchemaSet_get_IsCompiled_m3982681004 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
extern "C"  XmlSchemaCompilationSettings_t1577913490 * XmlSchemaSet_get_CompilationSettings_m3517217267 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
extern "C"  Hashtable_t1407064410 * XmlSchemaSet_get_IDCollection_m1977632075 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchemaSet_get_NamedIdentities_m3815848747 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
extern "C"  XmlSchema_t1010706190 * XmlSchemaSet_Add_m305966240 (XmlSchemaSet_t4125473774 * __this, XmlSchema_t1010706190 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
extern "C"  void XmlSchemaSet_Compile_m3045663253 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
extern "C"  void XmlSchemaSet_ClearGlobalComponents_m2185790696 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSet_AddGlobalComponents_m1311651381 (XmlSchemaSet_t4125473774 * __this, XmlSchema_t1010706190 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
extern "C"  bool XmlSchemaSet_Contains_m953675387 (XmlSchemaSet_t4125473774 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaSet_Contains_m2501675498 (XmlSchemaSet_t4125473774 * __this, XmlSchema_t1010706190 * ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaSet_CopyTo_m1918407585 (XmlSchemaSet_t4125473774 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
extern "C"  String_t* XmlSchemaSet_GetSafeNs_m912533339 (XmlSchemaSet_t4125473774 * __this, String_t* ___ns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
extern "C"  void XmlSchemaSet_ResetCompile_m3289826020 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
extern "C"  Il2CppObject * XmlSchemaSet_Schemas_m3849278290 (XmlSchemaSet_t4125473774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
extern "C"  Il2CppObject * XmlSchemaSet_Schemas_m3199975664 (XmlSchemaSet_t4125473774 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
extern "C"  bool XmlSchemaSet_MissedSubComponents_m1738495789 (XmlSchemaSet_t4125473774 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
