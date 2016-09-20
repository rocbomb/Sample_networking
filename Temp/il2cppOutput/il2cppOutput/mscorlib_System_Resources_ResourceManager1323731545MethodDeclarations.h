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

// System.Resources.ResourceManager
struct ResourceManager_t1323731545;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.String
struct String_t;
// System.Resources.ResourceSet
struct ResourceSet_t3047644174;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.IO.Stream
struct Stream_t1561764144;
// System.Version
struct Version_t763695022;
// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t1714621974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Void System.Resources.ResourceManager::.ctor()
extern "C"  void ResourceManager__ctor_m1041657915 (ResourceManager_t1323731545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
extern "C"  void ResourceManager__ctor_m451390558 (ResourceManager_t1323731545 * __this, Type_t * ___resourceSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.cctor()
extern "C"  void ResourceManager__cctor_m1744528082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Resources.ResourceManager::GetResourceSets(System.Reflection.Assembly,System.String)
extern "C"  Hashtable_t1407064410 * ResourceManager_GetResourceSets_m3015585469 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___assembly0, String_t* ___basename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceManager::get_IgnoreCase()
extern "C"  bool ResourceManager_get_IgnoreCase_m564341782 (ResourceManager_t1323731545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::GetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
extern "C"  ResourceSet_t3047644174 * ResourceManager_GetResourceSet_m1116469366 (ResourceManager_t1323731545 * __this, CultureInfo_t1065375142 * ___culture0, bool ___createIfNotExists1, bool ___tryParents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFileName(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFileName_m2700287441 (ResourceManager_t1323731545 * __this, CultureInfo_t1065375142 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFilePath(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFilePath_m3319603435 (ResourceManager_t1323731545 * __this, CultureInfo_t1065375142 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Resources.ResourceManager::GetManifestResourceStreamNoCase(System.Reflection.Assembly,System.String)
extern "C"  Stream_t1561764144 * ResourceManager_GetManifestResourceStreamNoCase_m1178585581 (ResourceManager_t1323731545 * __this, Assembly_t1418687608 * ___ass0, String_t* ___fn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::InternalGetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
extern "C"  ResourceSet_t3047644174 * ResourceManager_InternalGetResourceSet_m21708179 (ResourceManager_t1323731545 * __this, CultureInfo_t1065375142 * ___culture0, bool ___createIfNotExists1, bool ___tryParents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Resources.ResourceManager::GetNeutralResourcesLanguage(System.Reflection.Assembly)
extern "C"  CultureInfo_t1065375142 * ResourceManager_GetNeutralResourcesLanguage_m2512021728 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Resources.ResourceManager::GetSatelliteContractVersion(System.Reflection.Assembly)
extern "C"  Version_t763695022 * ResourceManager_GetSatelliteContractVersion_m1327211774 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.MissingManifestResourceException System.Resources.ResourceManager::AssemblyResourceMissing(System.String)
extern "C"  MissingManifestResourceException_t1714621974 * ResourceManager_AssemblyResourceMissing_m421195990 (ResourceManager_t1323731545 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetManifestResourceName(System.String)
extern "C"  String_t* ResourceManager_GetManifestResourceName_m4074426734 (ResourceManager_t1323731545 * __this, String_t* ___fn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
