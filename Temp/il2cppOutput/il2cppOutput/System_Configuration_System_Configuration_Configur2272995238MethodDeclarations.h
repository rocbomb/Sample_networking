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

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.Configuration.Configuration
struct Configuration_t710589292;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.String
struct String_t;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C"  void ConfigurationSectionGroup__ctor_m2772416843 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C"  Configuration_t710589292 * ConfigurationSectionGroup_get_Config_m2807832724 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroup_Initialize_m816537495 (ConfigurationSectionGroup_t2272995238 * __this, Configuration_t710589292 * ___config0, SectionGroupInfo_t2963986668 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::SetName(System.String)
extern "C"  void ConfigurationSectionGroup_SetName_m1996146572 (ConfigurationSectionGroup_t2272995238 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::ForceDeclaration(System.Boolean)
extern "C"  void ConfigurationSectionGroup_ForceDeclaration_m1649628127 (ConfigurationSectionGroup_t2272995238 * __this, bool ___require0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::ForceDeclaration()
extern "C"  void ConfigurationSectionGroup_ForceDeclaration_m564425832 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSectionGroup::get_IsDeclared()
extern "C"  bool ConfigurationSectionGroup_get_IsDeclared_m2509551436 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSectionGroup::get_IsDeclarationRequired()
extern "C"  bool ConfigurationSectionGroup_get_IsDeclarationRequired_m103956681 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSectionGroup::get_Name()
extern "C"  String_t* ConfigurationSectionGroup_get_Name_m4138032656 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSectionGroup::get_SectionGroupName()
extern "C"  String_t* ConfigurationSectionGroup_get_SectionGroupName_m535869258 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t4020418340 * ConfigurationSectionGroup_get_SectionGroups_m3361189921 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C"  ConfigurationSectionCollection_t1911555921 * ConfigurationSectionGroup_get_Sections_m3835769119 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSectionGroup::get_Type()
extern "C"  String_t* ConfigurationSectionGroup_get_Type_m37094143 (ConfigurationSectionGroup_t2272995238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::set_Type(System.String)
extern "C"  void ConfigurationSectionGroup_set_Type_m3217545010 (ConfigurationSectionGroup_t2272995238 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
