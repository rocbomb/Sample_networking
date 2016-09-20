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

// System.Configuration.LongValidator
struct LongValidator_t630339244;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.LongValidator::.ctor(System.Int64,System.Int64,System.Boolean,System.Int64)
extern "C"  void LongValidator__ctor_m1484197468 (LongValidator_t630339244 * __this, int64_t ___minValue0, int64_t ___maxValue1, bool ___rangeIsExclusive2, int64_t ___resolution3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.LongValidator::.ctor(System.Int64,System.Int64,System.Boolean)
extern "C"  void LongValidator__ctor_m2478482300 (LongValidator_t630339244 * __this, int64_t ___minValue0, int64_t ___maxValue1, bool ___rangeIsExclusive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.LongValidator::.ctor(System.Int64,System.Int64)
extern "C"  void LongValidator__ctor_m2495975905 (LongValidator_t630339244 * __this, int64_t ___minValue0, int64_t ___maxValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.LongValidator::CanValidate(System.Type)
extern "C"  bool LongValidator_CanValidate_m2208747286 (LongValidator_t630339244 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.LongValidator::Validate(System.Object)
extern "C"  void LongValidator_Validate_m3844605183 (LongValidator_t630339244 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
