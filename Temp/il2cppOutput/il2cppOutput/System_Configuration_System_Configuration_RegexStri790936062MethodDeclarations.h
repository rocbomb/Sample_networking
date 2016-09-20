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

// System.Configuration.RegexStringValidator
struct RegexStringValidator_t790936062;
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

// System.Void System.Configuration.RegexStringValidator::.ctor(System.String)
extern "C"  void RegexStringValidator__ctor_m274453585 (RegexStringValidator_t790936062 * __this, String_t* ___regex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.RegexStringValidator::CanValidate(System.Type)
extern "C"  bool RegexStringValidator_CanValidate_m739761214 (RegexStringValidator_t790936062 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.RegexStringValidator::Validate(System.Object)
extern "C"  void RegexStringValidator_Validate_m3691681995 (RegexStringValidator_t790936062 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
