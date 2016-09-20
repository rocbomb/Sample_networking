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

// System.Configuration.AppSettingsSection
struct AppSettingsSection_t3900690853;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.String
struct String_t;
// System.Configuration.KeyValueConfigurationCollection
struct KeyValueConfigurationCollection_t3698263992;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Configur1929345356.h"

// System.Void System.Configuration.AppSettingsSection::.ctor()
extern "C"  void AppSettingsSection__ctor_m601249354 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.AppSettingsSection::.cctor()
extern "C"  void AppSettingsSection__cctor_m976764579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.AppSettingsSection::IsModified()
extern "C"  bool AppSettingsSection_IsModified_m119695911 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.AppSettingsSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void AppSettingsSection_DeserializeElement_m797529450 (AppSettingsSection_t3900690853 * __this, XmlReader_t4123196108 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.AppSettingsSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void AppSettingsSection_Reset_m1873256286 (AppSettingsSection_t3900690853 * __this, ConfigurationElement_t3842833450 * ___parentSection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.AppSettingsSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* AppSettingsSection_SerializeSection_m2228379314 (AppSettingsSection_t3900690853 * __this, ConfigurationElement_t3842833450 * ___parent0, String_t* ___name1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.AppSettingsSection::get_File()
extern "C"  String_t* AppSettingsSection_get_File_m2224251772 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.AppSettingsSection::set_File(System.String)
extern "C"  void AppSettingsSection_set_File_m1673765807 (AppSettingsSection_t3900690853 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.KeyValueConfigurationCollection System.Configuration.AppSettingsSection::get_Settings()
extern "C"  KeyValueConfigurationCollection_t3698263992 * AppSettingsSection_get_Settings_m4088974338 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.AppSettingsSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * AppSettingsSection_get_Properties_m2115834681 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.AppSettingsSection::GetRuntimeObject()
extern "C"  Il2CppObject * AppSettingsSection_GetRuntimeObject_m4052807014 (AppSettingsSection_t3900690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
