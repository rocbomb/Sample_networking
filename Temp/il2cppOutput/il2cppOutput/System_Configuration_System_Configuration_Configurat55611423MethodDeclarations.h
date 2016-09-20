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

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Array
struct Il2CppArray;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t3179433724;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur3009015393.h"

// System.Void System.Configuration.ConfigurationPropertyCollection::.ctor()
extern "C"  void ConfigurationPropertyCollection__ctor_m1116431410 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationPropertyCollection_System_Collections_ICollection_CopyTo_m2054733138 (ConfigurationPropertyCollection_t55611423 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count()
extern "C"  int32_t ConfigurationPropertyCollection_get_Count_m2341205942 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.ConfigurationPropertyCollection::get_Item(System.String)
extern "C"  ConfigurationProperty_t3009015393 * ConfigurationPropertyCollection_get_Item_m1843256281 (ConfigurationPropertyCollection_t55611423 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPropertyCollection::get_IsSynchronized()
extern "C"  bool ConfigurationPropertyCollection_get_IsSynchronized_m741315871 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationPropertyCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationPropertyCollection_get_SyncRoot_m1512912301 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::Add(System.Configuration.ConfigurationProperty)
extern "C"  void ConfigurationPropertyCollection_Add_m2609791069 (ConfigurationPropertyCollection_t55611423 * __this, ConfigurationProperty_t3009015393 * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPropertyCollection::Contains(System.String)
extern "C"  bool ConfigurationPropertyCollection_Contains_m2967717323 (ConfigurationPropertyCollection_t55611423 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::CopyTo(System.Configuration.ConfigurationProperty[],System.Int32)
extern "C"  void ConfigurationPropertyCollection_CopyTo_m3073799083 (ConfigurationPropertyCollection_t55611423 * __this, ConfigurationPropertyU5BU5D_t3179433724* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationPropertyCollection_GetEnumerator_m667009104 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPropertyCollection::Remove(System.String)
extern "C"  bool ConfigurationPropertyCollection_Remove_m3412132614 (ConfigurationPropertyCollection_t55611423 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::Clear()
extern "C"  void ConfigurationPropertyCollection_Clear_m2817531997 (ConfigurationPropertyCollection_t55611423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
