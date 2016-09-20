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

// System.ComponentModel.NestedContainer
struct NestedContainer_t2115359152;
// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.String
struct String_t;
// System.ComponentModel.ISite
struct ISite_t1541550070;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.EventArgs
struct EventArgs_t2540831021;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void System.ComponentModel.NestedContainer::.ctor(System.ComponentModel.IComponent)
extern "C"  void NestedContainer__ctor_m961184524 (NestedContainer_t2115359152 * __this, Il2CppObject * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.NestedContainer::get_Owner()
extern "C"  Il2CppObject * NestedContainer_get_Owner_m1332820371 (NestedContainer_t2115359152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.NestedContainer::get_OwnerName()
extern "C"  String_t* NestedContainer_get_OwnerName_m650259225 (NestedContainer_t2115359152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.NestedContainer::CreateSite(System.ComponentModel.IComponent,System.String)
extern "C"  Il2CppObject * NestedContainer_CreateSite_m3270683171 (NestedContainer_t2115359152 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NestedContainer::GetService(System.Type)
extern "C"  Il2CppObject * NestedContainer_GetService_m1645463790 (NestedContainer_t2115359152 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NestedContainer::Dispose(System.Boolean)
extern "C"  void NestedContainer_Dispose_m164642775 (NestedContainer_t2115359152 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NestedContainer::OnOwnerDisposed(System.Object,System.EventArgs)
extern "C"  void NestedContainer_OnOwnerDisposed_m826658676 (NestedContainer_t2115359152 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
