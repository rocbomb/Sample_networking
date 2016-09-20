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

// System.Configuration.InternalConfigurationHost
struct InternalConfigurationHost_t3052580727;
// System.String
struct String_t;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1000417341;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t1314853459;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Configuration.Internal.IInternalConfigRecord
struct IInternalConfigRecord_t822671547;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.IDisposable
struct IDisposable_t1423340799;
// System.IO.Stream
struct Stream_t1561764144;
// System.Configuration.Internal.StreamChangeCallback
struct StreamChangeCallback_t956681803;
// System.Configuration.Internal.IConfigErrorInfo
struct IConfigErrorInfo_t27028897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Configuration_System_Configuration_Protecte1000417341.h"
#include "System_Configuration_System_Configuration_Protecte1314853459.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Security_PermissionSet1199249641.h"
#include "System_Configuration_System_Configuration_Configur3008879018.h"
#include "System_Configuration_System_Configuration_Configura956581384.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Configuration_System_Configuration_Internal_956681803.h"

// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C"  void InternalConfigurationHost__ctor_m4148522138 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::System.Configuration.Internal.IInternalConfigHost.DecryptSection(System.String,System.Configuration.ProtectedConfigurationProvider,System.Configuration.ProtectedConfigurationSection)
extern "C"  String_t* InternalConfigurationHost_System_Configuration_Internal_IInternalConfigHost_DecryptSection_m2313827263 (InternalConfigurationHost_t3052580727 * __this, String_t* ___encryptedXml0, ProtectedConfigurationProvider_t1000417341 * ___protectionProvider1, ProtectedConfigurationSection_t1314853459 * ___protectedSection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::System.Configuration.Internal.IInternalConfigHost.EncryptSection(System.String,System.Configuration.ProtectedConfigurationProvider,System.Configuration.ProtectedConfigurationSection)
extern "C"  String_t* InternalConfigurationHost_System_Configuration_Internal_IInternalConfigHost_EncryptSection_m6310375 (InternalConfigurationHost_t3052580727 * __this, String_t* ___clearXml0, ProtectedConfigurationProvider_t1000417341 * ___protectionProvider1, ProtectedConfigurationSection_t1314853459 * ___protectedSection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::CreateConfigurationContext(System.String,System.String)
extern "C"  Il2CppObject * InternalConfigurationHost_CreateConfigurationContext_m240717162 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C"  Il2CppObject * InternalConfigurationHost_CreateDeprecatedConfigContext_m1830237825 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::DeleteStream(System.String)
extern "C"  void InternalConfigurationHost_DeleteStream_m708256365 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C"  String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m1221308008 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern "C"  Type_t * InternalConfigurationHost_GetConfigType_m4045926827 (InternalConfigurationHost_t3052580727 * __this, String_t* ___typeName0, bool ___throwOnError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetConfigTypeName(System.Type)
extern "C"  String_t* InternalConfigurationHost_GetConfigTypeName_m2732196935 (InternalConfigurationHost_t3052580727 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::GetRestrictedPermissions(System.Configuration.Internal.IInternalConfigRecord,System.Security.PermissionSet&,System.Boolean&)
extern "C"  void InternalConfigurationHost_GetRestrictedPermissions_m1948866397 (InternalConfigurationHost_t3052580727 * __this, Il2CppObject * ___configRecord0, PermissionSet_t1199249641 ** ___permissionSet1, bool* ___isHostReady2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetStreamNameForConfigSource(System.String,System.String)
extern "C"  String_t* InternalConfigurationHost_GetStreamNameForConfigSource_m2772619052 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, String_t* ___configSource1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::GetStreamVersion(System.String)
extern "C"  Il2CppObject * InternalConfigurationHost_GetStreamVersion_m3721619969 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IDisposable System.Configuration.InternalConfigurationHost::Impersonate()
extern "C"  Il2CppObject * InternalConfigurationHost_Impersonate_m1072175564 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsAboveApplication(System.String)
extern "C"  bool InternalConfigurationHost_IsAboveApplication_m4294302741 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsConfigRecordRequired(System.String)
extern "C"  bool InternalConfigurationHost_IsConfigRecordRequired_m934074678 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  bool InternalConfigurationHost_IsDefinitionAllowed_m1273024759 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, int32_t ___allowDefinition1, int32_t ___allowExeDefinition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsFile(System.String)
extern "C"  bool InternalConfigurationHost_IsFile_m4236622700 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsFullTrustSectionWithoutAptcaAllowed(System.Configuration.Internal.IInternalConfigRecord)
extern "C"  bool InternalConfigurationHost_IsFullTrustSectionWithoutAptcaAllowed_m1081297754 (InternalConfigurationHost_t3052580727 * __this, Il2CppObject * ___configRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsInitDelayed(System.Configuration.Internal.IInternalConfigRecord)
extern "C"  bool InternalConfigurationHost_IsInitDelayed_m4272026457 (InternalConfigurationHost_t3052580727 * __this, Il2CppObject * ___configRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsLocationApplicable(System.String)
extern "C"  bool InternalConfigurationHost_IsLocationApplicable_m1419554932 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::get_IsRemote()
extern "C"  bool InternalConfigurationHost_get_IsRemote_m1642998377 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsSecondaryRoot(System.String)
extern "C"  bool InternalConfigurationHost_IsSecondaryRoot_m2325927812 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsTrustedConfigPath(System.String)
extern "C"  bool InternalConfigurationHost_IsTrustedConfigPath_m2351382428 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C"  String_t* InternalConfigurationHost_get_bundled_machine_config_m2647966573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern "C"  Stream_t1561764144 * InternalConfigurationHost_OpenStreamForRead_m3069798203 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String,System.Boolean)
extern "C"  Stream_t1561764144 * InternalConfigurationHost_OpenStreamForRead_m269102818 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, bool ___assertPermissions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForWrite(System.String,System.String,System.Object&)
extern "C"  Stream_t1561764144 * InternalConfigurationHost_OpenStreamForWrite_m3242479696 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, String_t* ___templateStreamName1, Il2CppObject ** ___writeContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForWrite(System.String,System.String,System.Object&,System.Boolean)
extern "C"  Stream_t1561764144 * InternalConfigurationHost_OpenStreamForWrite_m744970541 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, String_t* ___templateStreamName1, Il2CppObject ** ___writeContext2, bool ___assertPermissions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::PrefetchAll(System.String,System.String)
extern "C"  bool InternalConfigurationHost_PrefetchAll_m1126155330 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, String_t* ___streamName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::PrefetchSection(System.String,System.String)
extern "C"  bool InternalConfigurationHost_PrefetchSection_m3683185278 (InternalConfigurationHost_t3052580727 * __this, String_t* ___sectionGroupName0, String_t* ___sectionName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::RequireCompleteInit(System.Configuration.Internal.IInternalConfigRecord)
extern "C"  void InternalConfigurationHost_RequireCompleteInit_m1263335085 (InternalConfigurationHost_t3052580727 * __this, Il2CppObject * ___configRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::StartMonitoringStreamForChanges(System.String,System.Configuration.Internal.StreamChangeCallback)
extern "C"  Il2CppObject * InternalConfigurationHost_StartMonitoringStreamForChanges_m47627324 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, StreamChangeCallback_t956681803 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::StopMonitoringStreamForChanges(System.String,System.Configuration.Internal.StreamChangeCallback)
extern "C"  void InternalConfigurationHost_StopMonitoringStreamForChanges_m4138871651 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, StreamChangeCallback_t956681803 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::VerifyDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition,System.Configuration.Internal.IConfigErrorInfo)
extern "C"  void InternalConfigurationHost_VerifyDefinitionAllowed_m1576919251 (InternalConfigurationHost_t3052580727 * __this, String_t* ___configPath0, int32_t ___allowDefinition1, int32_t ___allowExeDefinition2, Il2CppObject * ___errorInfo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::WriteCompleted(System.String,System.Boolean,System.Object)
extern "C"  void InternalConfigurationHost_WriteCompleted_m2616045727 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, bool ___success1, Il2CppObject * ___writeContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationHost::WriteCompleted(System.String,System.Boolean,System.Object,System.Boolean)
extern "C"  void InternalConfigurationHost_WriteCompleted_m3654643966 (InternalConfigurationHost_t3052580727 * __this, String_t* ___streamName0, bool ___success1, Il2CppObject * ___writeContext2, bool ___assertPermissions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::get_SupportsChangeNotifications()
extern "C"  bool InternalConfigurationHost_get_SupportsChangeNotifications_m492564381 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::get_SupportsLocation()
extern "C"  bool InternalConfigurationHost_get_SupportsLocation_m3570480242 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::get_SupportsPath()
extern "C"  bool InternalConfigurationHost_get_SupportsPath_m3731520226 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::get_SupportsRefresh()
extern "C"  bool InternalConfigurationHost_get_SupportsRefresh_m3241645216 (InternalConfigurationHost_t3052580727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
