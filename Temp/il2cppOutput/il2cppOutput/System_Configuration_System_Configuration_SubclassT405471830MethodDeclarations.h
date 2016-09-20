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

// System.Configuration.SubclassTypeValidator
struct SubclassTypeValidator_t405471830;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.SubclassTypeValidator::.ctor(System.Type)
extern "C"  void SubclassTypeValidator__ctor_m2920448894 (SubclassTypeValidator_t405471830 * __this, Type_t * ___baseClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SubclassTypeValidator::CanValidate(System.Type)
extern "C"  bool SubclassTypeValidator_CanValidate_m2302223680 (SubclassTypeValidator_t405471830 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SubclassTypeValidator::Validate(System.Object)
extern "C"  void SubclassTypeValidator_Validate_m570702741 (SubclassTypeValidator_t405471830 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
