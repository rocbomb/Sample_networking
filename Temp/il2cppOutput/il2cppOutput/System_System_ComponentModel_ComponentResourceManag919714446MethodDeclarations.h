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

// System.ComponentModel.ComponentResourceManager
struct ComponentResourceManager_t919714446;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"

// System.Void System.ComponentModel.ComponentResourceManager::.ctor()
extern "C"  void ComponentResourceManager__ctor_m3636322455 (ComponentResourceManager_t919714446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::.ctor(System.Type)
extern "C"  void ComponentResourceManager__ctor_m2651957890 (ComponentResourceManager_t919714446 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::ApplyResources(System.Object,System.String)
extern "C"  void ComponentResourceManager_ApplyResources_m1524903148 (ComponentResourceManager_t919714446 * __this, Il2CppObject * ___value0, String_t* ___objectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::ApplyResources(System.Object,System.String,System.Globalization.CultureInfo)
extern "C"  void ComponentResourceManager_ApplyResources_m3435679178 (ComponentResourceManager_t919714446 * __this, Il2CppObject * ___value0, String_t* ___objectName1, CultureInfo_t1065375142 * ___culture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::BuildResources(System.Globalization.CultureInfo,System.Collections.Hashtable)
extern "C"  void ComponentResourceManager_BuildResources_m76591018 (ComponentResourceManager_t919714446 * __this, CultureInfo_t1065375142 * ___culture0, Hashtable_t1407064410 * ___resources1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
