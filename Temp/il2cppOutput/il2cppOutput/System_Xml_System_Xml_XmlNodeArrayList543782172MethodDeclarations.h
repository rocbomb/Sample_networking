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

// System.Xml.XmlNodeArrayList
struct XmlNodeArrayList_t543782172;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Xml.XmlNode
struct XmlNode_t856910923;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Xml.XmlNodeArrayList::.ctor(System.Collections.ArrayList)
extern "C"  void XmlNodeArrayList__ctor_m2661272334 (XmlNodeArrayList_t543782172 * __this, ArrayList_t3948406897 * ___rgNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeArrayList::get_Count()
extern "C"  int32_t XmlNodeArrayList_get_Count_m3406908275 (XmlNodeArrayList_t543782172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNodeArrayList::GetEnumerator()
extern "C"  Il2CppObject * XmlNodeArrayList_GetEnumerator_m921609217 (XmlNodeArrayList_t543782172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNodeArrayList::Item(System.Int32)
extern "C"  XmlNode_t856910923 * XmlNodeArrayList_Item_m311308237 (XmlNodeArrayList_t543782172 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
