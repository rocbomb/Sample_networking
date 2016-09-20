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

// System.Configuration.TimeSpanValidator
struct TimeSpanValidator_t391226193;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan)
extern "C"  void TimeSpanValidator__ctor_m3743416050 (TimeSpanValidator_t391226193 * __this, TimeSpan_t413522987  ___minValue0, TimeSpan_t413522987  ___maxValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean)
extern "C"  void TimeSpanValidator__ctor_m541610571 (TimeSpanValidator_t391226193 * __this, TimeSpan_t413522987  ___minValue0, TimeSpan_t413522987  ___maxValue1, bool ___rangeIsExclusive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean,System.Int64)
extern "C"  void TimeSpanValidator__ctor_m3127519213 (TimeSpanValidator_t391226193 * __this, TimeSpan_t413522987  ___minValue0, TimeSpan_t413522987  ___maxValue1, bool ___rangeIsExclusive2, int64_t ___resolutionInSeconds3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.TimeSpanValidator::CanValidate(System.Type)
extern "C"  bool TimeSpanValidator_CanValidate_m130055419 (TimeSpanValidator_t391226193 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanValidator::Validate(System.Object)
extern "C"  void TimeSpanValidator_Validate_m966083450 (TimeSpanValidator_t391226193 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
