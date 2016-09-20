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

// System.Configuration.ElementInformation
struct ElementInformation_t891176276;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t4042579377;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t2683512459;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Property2703580109.h"
#include "System_Configuration_System_Configuration_ElementIn891176276.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m761476204 (ElementInformation_t891176276 * __this, ConfigurationElement_t3842833450 * ___owner0, PropertyInformation_t2703580109 * ___propertyInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ElementInformation::get_Errors()
extern "C"  Il2CppObject * ElementInformation_get_Errors_m1342064637 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ElementInformation::get_IsCollection()
extern "C"  bool ElementInformation_get_IsCollection_m1421237812 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ElementInformation::get_IsLocked()
extern "C"  bool ElementInformation_get_IsLocked_m2328480288 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ElementInformation::get_IsPresent()
extern "C"  bool ElementInformation_get_IsPresent_m3466436871 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ElementInformation::get_LineNumber()
extern "C"  int32_t ElementInformation_get_LineNumber_m925556815 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ElementInformation::get_Source()
extern "C"  String_t* ElementInformation_get_Source_m522353674 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ElementInformation::get_Type()
extern "C"  Type_t * ElementInformation_get_Type_m2440951506 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ElementInformation::get_Validator()
extern "C"  ConfigurationValidatorBase_t4042579377 * ElementInformation_get_Validator_m2162024753 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t2683512459 * ElementInformation_get_Properties_m2638548244 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m1439910307 (ElementInformation_t891176276 * __this, ElementInformation_t891176276 * ___parentInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
