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

// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t1139934645;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.Configuration.ConnectionManagementData::.ctor(System.Object)
extern "C"  void ConnectionManagementData__ctor_m3402608605 (ConnectionManagementData_t1139934645 * __this, Il2CppObject * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.String)
extern "C"  void ConnectionManagementData_Add_m3672017000 (ConnectionManagementData_t1139934645 * __this, String_t* ___address0, String_t* ___nconns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.Int32)
extern "C"  void ConnectionManagementData_Add_m935003947 (ConnectionManagementData_t1139934645 * __this, String_t* ___address0, int32_t ___nconns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Remove(System.String)
extern "C"  void ConnectionManagementData_Remove_m2675914449 (ConnectionManagementData_t1139934645 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Clear()
extern "C"  void ConnectionManagementData_Clear_m1916881730 (ConnectionManagementData_t1139934645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Net.Configuration.ConnectionManagementData::GetMaxConnections(System.String)
extern "C"  uint32_t ConnectionManagementData_GetMaxConnections_m3353130379 (ConnectionManagementData_t1139934645 * __this, String_t* ___hostOrIP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::get_Data()
extern "C"  Hashtable_t1407064410 * ConnectionManagementData_get_Data_m2620342601 (ConnectionManagementData_t1139934645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
