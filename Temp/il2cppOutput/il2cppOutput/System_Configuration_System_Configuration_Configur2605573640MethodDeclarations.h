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

// System.Configuration.ConfigurationSaveEventArgs
struct ConfigurationSaveEventArgs_t2605573640;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Configuration.ConfigurationSaveEventArgs::.ctor(System.String,System.Boolean,System.Exception,System.Object)
extern "C"  void ConfigurationSaveEventArgs__ctor_m4009006914 (ConfigurationSaveEventArgs_t2605573640 * __this, String_t* ___streamPath0, bool ___start1, Exception_t3991598821 * ___ex2, Il2CppObject * ___context3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSaveEventArgs::get_StreamPath()
extern "C"  String_t* ConfigurationSaveEventArgs_get_StreamPath_m3630624744 (ConfigurationSaveEventArgs_t2605573640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventArgs::set_StreamPath(System.String)
extern "C"  void ConfigurationSaveEventArgs_set_StreamPath_m100800259 (ConfigurationSaveEventArgs_t2605573640 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSaveEventArgs::get_Start()
extern "C"  bool ConfigurationSaveEventArgs_get_Start_m1645477444 (ConfigurationSaveEventArgs_t2605573640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventArgs::set_Start(System.Boolean)
extern "C"  void ConfigurationSaveEventArgs_set_Start_m1579171425 (ConfigurationSaveEventArgs_t2605573640 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSaveEventArgs::get_Context()
extern "C"  Il2CppObject * ConfigurationSaveEventArgs_get_Context_m1058399456 (ConfigurationSaveEventArgs_t2605573640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventArgs::set_Context(System.Object)
extern "C"  void ConfigurationSaveEventArgs_set_Context_m3009252413 (ConfigurationSaveEventArgs_t2605573640 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSaveEventArgs::get_Failed()
extern "C"  bool ConfigurationSaveEventArgs_get_Failed_m3123864765 (ConfigurationSaveEventArgs_t2605573640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventArgs::set_Failed(System.Boolean)
extern "C"  void ConfigurationSaveEventArgs_set_Failed_m2862608014 (ConfigurationSaveEventArgs_t2605573640 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Configuration.ConfigurationSaveEventArgs::get_Exception()
extern "C"  Exception_t3991598821 * ConfigurationSaveEventArgs_get_Exception_m1220842474 (ConfigurationSaveEventArgs_t2605573640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSaveEventArgs::set_Exception(System.Exception)
extern "C"  void ConfigurationSaveEventArgs_set_Exception_m4018026055 (ConfigurationSaveEventArgs_t2605573640 * __this, Exception_t3991598821 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
