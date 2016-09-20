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

// System.Configuration.Configuration
struct Configuration_t710589292;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t1184887678;
// System.Configuration.ConfigurationSaveEventHandler
struct ConfigurationSaveEventHandler_t790355705;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t2740352572;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1755821458;
// System.Configuration.AppSettingsSection
struct AppSettingsSection_t3900690853;
// System.Configuration.ConnectionStringsSection
struct ConnectionStringsSection_t1195185157;
// System.Configuration.ContextInformation
struct ContextInformation_t1379340481;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1970371071;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2272995238;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t4020418340;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1911555921;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3180944403;
// System.Configuration.SectionInfo
struct SectionInfo_t3830512105;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1047989972;
// System.IO.Stream
struct Stream_t1561764144;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t1523325321;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura710589292.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Internal1184887678.h"
#include "System_Configuration_System_Configuration_Configura790355705.h"
#include "System_Configuration_System_Configuration_SectionI3830512105.h"
#include "System_Configuration_System_Configuration_SectionG2963986668.h"
#include "System_Configuration_System_Configuration_Configur3180944403.h"
#include "System_Configuration_System_Configuration_Configur2272995238.h"
#include "System_Configuration_System_Configuration_ConfigIn1047989972.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_Xml_System_Xml_XmlTextWriter1523325321.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m1712686530 (Configuration_t710589292 * __this, Configuration_t710589292 * ___parent0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m2511791728 (Configuration_t710589292 * __this, InternalConfigurationSystem_t1184887678 * ___system0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::add_SaveStart(System.Configuration.ConfigurationSaveEventHandler)
extern "C"  void Configuration_add_SaveStart_m4026980094 (Il2CppObject * __this /* static, unused */, ConfigurationSaveEventHandler_t790355705 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::remove_SaveStart(System.Configuration.ConfigurationSaveEventHandler)
extern "C"  void Configuration_remove_SaveStart_m2297189725 (Il2CppObject * __this /* static, unused */, ConfigurationSaveEventHandler_t790355705 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::add_SaveEnd(System.Configuration.ConfigurationSaveEventHandler)
extern "C"  void Configuration_add_SaveEnd_m298395319 (Il2CppObject * __this /* static, unused */, ConfigurationSaveEventHandler_t790355705 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::remove_SaveEnd(System.Configuration.ConfigurationSaveEventHandler)
extern "C"  void Configuration_remove_SaveEnd_m3563630806 (Il2CppObject * __this /* static, unused */, ConfigurationSaveEventHandler_t790355705 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t710589292 * Configuration_FindLocationConfiguration_m2344389824 (Configuration_t710589292 * __this, String_t* ___relativePath0, Configuration_t710589292 * ___defaultConfiguration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m2756324488 (Configuration_t710589292 * __this, Il2CppObject * ___system0, String_t* ___configPath1, Configuration_t710589292 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t710589292 * Configuration_get_Parent_m4109634498 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m1155432391 (Configuration_t710589292 * __this, Configuration_t710589292 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t710589292 * Configuration_GetParentWithFile_m3380709909 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FileName()
extern "C"  String_t* Configuration_get_FileName_m2006870898 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Il2CppObject * Configuration_get_ConfigHost_m418627631 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m1991016359 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetLocationSubPath()
extern "C"  String_t* Configuration_GetLocationSubPath_m4223039004 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m3982728530 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.AppSettingsSection System.Configuration.Configuration::get_AppSettings()
extern "C"  AppSettingsSection_t3900690853 * Configuration_get_AppSettings_m2661583811 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConnectionStringsSection System.Configuration.Configuration::get_ConnectionStrings()
extern "C"  ConnectionStringsSection_t1195185157 * Configuration_get_ConnectionStrings_m272263555 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m2064340620 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1182408778 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ContextInformation System.Configuration.Configuration::get_EvaluationContext()
extern "C"  ContextInformation_t1379340481 * Configuration_get_EvaluationContext_m2863725582 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1970371071 * Configuration_get_Locations_m4165667707 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_NamespaceDeclared()
extern "C"  bool Configuration_get_NamespaceDeclared_m1549146185 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_NamespaceDeclared(System.Boolean)
extern "C"  void Configuration_set_NamespaceDeclared_m464106290 (Configuration_t710589292 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t2272995238 * Configuration_get_RootSectionGroup_m3061559546 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t4020418340 * Configuration_get_SectionGroups_m614791579 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t1911555921 * Configuration_get_Sections_m2367917541 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t3180944403 * Configuration_GetSection_m598223879 (Configuration_t710589292 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroup(System.String)
extern "C"  ConfigurationSectionGroup_t2272995238 * Configuration_GetSectionGroup_m3533169509 (Configuration_t710589292 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t3180944403 * Configuration_GetSectionInstance_m1119437385 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, bool ___createDefaultInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t2272995238 * Configuration_GetSectionGroupInstance_m1836884865 (Configuration_t710589292 * __this, SectionGroupInfo_t2963986668 * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetConfigurationSection(System.Configuration.SectionInfo,System.Configuration.ConfigurationSection)
extern "C"  void Configuration_SetConfigurationSection_m3948434686 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, ConfigurationSection_t3180944403 * ___sec1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m435041335 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1601149676 (Configuration_t710589292 * __this, SectionInfo_t3830512105 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::CreateSection(System.Configuration.SectionGroupInfo,System.String,System.Configuration.ConfigurationSection)
extern "C"  void Configuration_CreateSection_m2404383529 (Configuration_t710589292 * __this, SectionGroupInfo_t2963986668 * ___group0, String_t* ___name1, ConfigurationSection_t3180944403 * ___sec2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::CreateSectionGroup(System.Configuration.SectionGroupInfo,System.String,System.Configuration.ConfigurationSectionGroup)
extern "C"  void Configuration_CreateSectionGroup_m212942355 (Configuration_t710589292 * __this, SectionGroupInfo_t2963986668 * ___parentGroup0, String_t* ___name1, ConfigurationSectionGroup_t2272995238 * ___sec2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::RemoveConfigInfo(System.Configuration.ConfigInfo)
extern "C"  void Configuration_RemoveConfigInfo_m1998447192 (Configuration_t710589292 * __this, ConfigInfo_t1047989972 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Save()
extern "C"  void Configuration_Save_m822098204 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Save(System.Configuration.ConfigurationSaveMode)
extern "C"  void Configuration_Save_m402661565 (Configuration_t710589292 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Save(System.Configuration.ConfigurationSaveMode,System.Boolean)
extern "C"  void Configuration_Save_m3081568544 (Configuration_t710589292 * __this, int32_t ___mode0, bool ___forceUpdateAll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SaveAs(System.String)
extern "C"  void Configuration_SaveAs_m4148903828 (Configuration_t710589292 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SaveAs(System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  void Configuration_SaveAs_m3906949011 (Configuration_t710589292 * __this, String_t* ___filename0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SaveAs(System.String,System.Configuration.ConfigurationSaveMode,System.Boolean)
extern "C"  void Configuration_SaveAs_m4072377226 (Configuration_t710589292 * __this, String_t* ___filename0, int32_t ___mode1, bool ___forceUpdateAll2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Save(System.IO.Stream,System.Configuration.ConfigurationSaveMode,System.Boolean)
extern "C"  void Configuration_Save_m710729449 (Configuration_t710589292 * __this, Stream_t1561764144 * ___stream0, int32_t ___mode1, bool ___forceUpdateAll2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SaveData(System.Xml.XmlTextWriter,System.Configuration.ConfigurationSaveMode,System.Boolean)
extern "C"  void Configuration_SaveData_m2749435643 (Configuration_t710589292 * __this, XmlTextWriter_t1523325321 * ___tw0, int32_t ___mode1, bool ___forceUpdateAll2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m1257171115 (Configuration_t710589292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m126468843 (Configuration_t710589292 * __this, XmlReader_t4123196108 * ___reader0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m2502527842 (Configuration_t710589292 * __this, XmlReader_t4123196108 * ___reader0, bool ___allowOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m4045333224 (Configuration_t710589292 * __this, String_t* ___text0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
