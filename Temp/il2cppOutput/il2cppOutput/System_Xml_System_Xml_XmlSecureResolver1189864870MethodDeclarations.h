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

// System.Xml.XmlSecureResolver
struct XmlSecureResolver_t1189864870;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlResolver3822670287.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Xml.XmlSecureResolver::.ctor(System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C"  void XmlSecureResolver__ctor_m1867332303 (XmlSecureResolver_t1189864870 * __this, XmlResolver_t3822670287 * ___resolver0, Evidence_t4141397151 * ___evidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlSecureResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  Il2CppObject * XmlSecureResolver_GetEntity_m2219029707 (XmlSecureResolver_t1189864870 * __this, Uri_t1116831938 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlSecureResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t1116831938 * XmlSecureResolver_ResolveUri_m4214515824 (XmlSecureResolver_t1189864870 * __this, Uri_t1116831938 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
