﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3847365013;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.String
struct String_t;
// System.Configuration.Internal.IConfigErrorInfo
struct IConfigErrorInfo_t27028897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C"  void InternalConfigurationFactory__ctor_m1553217946 (InternalConfigurationFactory_t3847365013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C"  Configuration_t710589292 * InternalConfigurationFactory_Create_m1322271343 (InternalConfigurationFactory_t3847365013 * __this, Type_t * ___typeConfigHost0, ObjectU5BU5D_t1108656482* ___hostInitConfigurationParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationFactory::NormalizeLocationSubPath(System.String,System.Configuration.Internal.IConfigErrorInfo)
extern "C"  String_t* InternalConfigurationFactory_NormalizeLocationSubPath_m435816105 (InternalConfigurationFactory_t3847365013 * __this, String_t* ___subPath0, Il2CppObject * ___errorInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;