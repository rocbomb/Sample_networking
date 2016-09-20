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

// System.Configuration.StringValidator
struct StringValidator_t1193004663;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.StringValidator::.ctor(System.Int32)
extern "C"  void StringValidator__ctor_m33990955 (StringValidator_t1193004663 * __this, int32_t ___minLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.StringValidator::.ctor(System.Int32,System.Int32)
extern "C"  void StringValidator__ctor_m1094185356 (StringValidator_t1193004663 * __this, int32_t ___minLength0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.StringValidator::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void StringValidator__ctor_m410350792 (StringValidator_t1193004663 * __this, int32_t ___minLength0, int32_t ___maxLength1, String_t* ___invalidCharacters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.StringValidator::CanValidate(System.Type)
extern "C"  bool StringValidator_CanValidate_m2727051745 (StringValidator_t1193004663 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.StringValidator::Validate(System.Object)
extern "C"  void StringValidator_Validate_m3553655636 (StringValidator_t1193004663 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
