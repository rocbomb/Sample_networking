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

// System.Configuration.CallbackValidator
struct CallbackValidator_t1440862851;
// System.Type
struct Type_t;
// System.Configuration.ValidatorCallback
struct ValidatorCallback_t151218093;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Configuration_System_Configuration_Validator151218093.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.CallbackValidator::.ctor(System.Type,System.Configuration.ValidatorCallback)
extern "C"  void CallbackValidator__ctor_m1159797467 (CallbackValidator_t1440862851 * __this, Type_t * ___type0, ValidatorCallback_t151218093 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.CallbackValidator::CanValidate(System.Type)
extern "C"  bool CallbackValidator_CanValidate_m1178153389 (CallbackValidator_t1440862851 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.CallbackValidator::Validate(System.Object)
extern "C"  void CallbackValidator_Validate_m3216650376 (CallbackValidator_t1440862851 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
