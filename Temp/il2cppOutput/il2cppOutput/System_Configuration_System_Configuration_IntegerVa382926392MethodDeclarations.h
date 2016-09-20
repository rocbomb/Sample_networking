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

// System.Configuration.IntegerValidator
struct IntegerValidator_t382926392;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.IntegerValidator::.ctor(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  void IntegerValidator__ctor_m662009897 (IntegerValidator_t382926392 * __this, int32_t ___minValue0, int32_t ___maxValue1, bool ___rangeIsExclusive2, int32_t ___resolution3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IntegerValidator::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void IntegerValidator__ctor_m555853678 (IntegerValidator_t382926392 * __this, int32_t ___minValue0, int32_t ___maxValue1, bool ___rangeIsExclusive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IntegerValidator::.ctor(System.Int32,System.Int32)
extern "C"  void IntegerValidator__ctor_m3337185327 (IntegerValidator_t382926392 * __this, int32_t ___minValue0, int32_t ___maxValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IntegerValidator::CanValidate(System.Type)
extern "C"  bool IntegerValidator_CanValidate_m2501267832 (IntegerValidator_t382926392 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IntegerValidator::Validate(System.Object)
extern "C"  void IntegerValidator_Validate_m3870781777 (IntegerValidator_t382926392 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
