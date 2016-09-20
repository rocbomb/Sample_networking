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

// System.ComponentModel.Container
struct Container_t1321025191;
// System.ComponentModel.ComponentCollection
struct ComponentCollection_t659278177;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.ComponentModel.Container::.ctor()
extern "C"  void Container__ctor_m2680757516 (Container_t1321025191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentCollection System.ComponentModel.Container::get_Components()
extern "C"  ComponentCollection_t659278177 * Container_get_Components_m536594652 (Container_t1321025191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Add(System.ComponentModel.IComponent)
extern "C"  void Container_Add_m216530164 (Container_t1321025191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Add(System.ComponentModel.IComponent,System.String)
extern "C"  void Container_Add_m2665048624 (Container_t1321025191 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::ValidateName(System.ComponentModel.IComponent,System.String)
extern "C"  void Container_ValidateName_m1145931038 (Container_t1321025191 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Container::CreateSite(System.ComponentModel.IComponent,System.String)
extern "C"  Il2CppObject * Container_CreateSite_m4024673498 (Container_t1321025191 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Dispose()
extern "C"  void Container_Dispose_m3420845641 (Container_t1321025191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Dispose(System.Boolean)
extern "C"  void Container_Dispose_m288847872 (Container_t1321025191 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Finalize()
extern "C"  void Container_Finalize_m1927763926 (Container_t1321025191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Container::GetService(System.Type)
extern "C"  Il2CppObject * Container_GetService_m965086423 (Container_t1321025191 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Remove(System.ComponentModel.IComponent)
extern "C"  void Container_Remove_m777355429 (Container_t1321025191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Remove(System.ComponentModel.IComponent,System.Boolean)
extern "C"  void Container_Remove_m440325176 (Container_t1321025191 * __this, Il2CppObject * ___component0, bool ___unsite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::RemoveWithoutUnsiting(System.ComponentModel.IComponent)
extern "C"  void Container_RemoveWithoutUnsiting_m3617132020 (Container_t1321025191 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
