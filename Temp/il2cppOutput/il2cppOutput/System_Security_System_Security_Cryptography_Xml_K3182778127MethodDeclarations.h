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

// System.Security.Cryptography.Xml.KeyInfo
struct KeyInfo_t3182778127;
// System.String
struct String_t;
// System.Security.Cryptography.Xml.KeyInfoClause
struct KeyInfoClause_t1521863262;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Xml.XmlElement
struct XmlElement_t280387747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Security_System_Security_Cryptography_Xml_K1521863262.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Security.Cryptography.Xml.KeyInfo::.ctor()
extern "C"  void KeyInfo__ctor_m3797383465 (KeyInfo_t3182778127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::set_Id(System.String)
extern "C"  void KeyInfo_set_Id_m517629263 (KeyInfo_t3182778127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::AddClause(System.Security.Cryptography.Xml.KeyInfoClause)
extern "C"  void KeyInfo_AddClause_m4008530309 (KeyInfo_t3182778127 * __this, KeyInfoClause_t1521863262 * ___clause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.KeyInfo::GetEnumerator()
extern "C"  Il2CppObject * KeyInfo_GetEnumerator_m1810241783 (KeyInfo_t3182778127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfo::GetXml()
extern "C"  XmlElement_t280387747 * KeyInfo_GetXml_m308867764 (KeyInfo_t3182778127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfo_LoadXml_m1081583199 (KeyInfo_t3182778127 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
