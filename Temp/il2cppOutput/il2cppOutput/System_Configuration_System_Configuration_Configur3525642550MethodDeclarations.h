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

// System.Configuration.ConfigurationValidatorAttribute
struct ConfigurationValidatorAttribute_t3525642550;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t4042579377;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Configuration.ConfigurationValidatorAttribute::.ctor()
extern "C"  void ConfigurationValidatorAttribute__ctor_m2336765179 (ConfigurationValidatorAttribute_t3525642550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationValidatorAttribute::.ctor(System.Type)
extern "C"  void ConfigurationValidatorAttribute__ctor_m485453726 (ConfigurationValidatorAttribute_t3525642550 * __this, Type_t * ___validator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::get_ValidatorInstance()
extern "C"  ConfigurationValidatorBase_t4042579377 * ConfigurationValidatorAttribute_get_ValidatorInstance_m1672777256 (ConfigurationValidatorAttribute_t3525642550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationValidatorAttribute::get_ValidatorType()
extern "C"  Type_t * ConfigurationValidatorAttribute_get_ValidatorType_m2356752386 (ConfigurationValidatorAttribute_t3525642550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
