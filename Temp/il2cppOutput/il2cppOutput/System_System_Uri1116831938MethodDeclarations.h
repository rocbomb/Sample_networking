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

// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.UriParser
struct UriParser_t3685110593;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "System_System_UriKind238866934.h"
#include "System_System_Uri1116831938.h"
#include "System_System_UriHostNameType959572879.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_UriPartial875461417.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m2693266474 (Uri_t1116831938 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri__ctor_m4101815696 (Uri_t1116831938 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C"  void Uri__ctor_m1284254235 (Uri_t1116831938 * __this, String_t* ___uriString0, int32_t ___uriKind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m70204947 (Uri_t1116831938 * __this, String_t* ___uriString0, bool ___dontEscape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C"  void Uri__ctor_m182303879 (Uri_t1116831938 * __this, Uri_t1116831938 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C"  void Uri__cctor_m2145170622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m3581151196 (Uri_t1116831938 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C"  void Uri_Merge_m1925025748 (Uri_t1116831938 * __this, Uri_t1116831938 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m1170417812 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C"  String_t* Uri_get_AbsoluteUri_m2228269430 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C"  String_t* Uri_get_Authority_m1914393796 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C"  String_t* Uri_get_Fragment_m219209233 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m3136333645 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
extern "C"  int32_t Uri_get_HostNameType_m3669497072 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsDefaultPort()
extern "C"  bool Uri_get_IsDefaultPort_m1824629382 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m1860057402 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m224603913 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m766729742 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m2374994490 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C"  String_t* Uri_get_PathAndQuery_m3621173943 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
extern "C"  int32_t Uri_get_Port_m2253782543 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
extern "C"  String_t* Uri_get_Query_m1454422281 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m1248371453 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_UserInfo()
extern "C"  String_t* Uri_get_UserInfo_m2585318554 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m2228437936 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C"  String_t* Uri_get_OriginalString_m1931405402 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C"  int32_t Uri_CheckHostName_m294200959 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C"  bool Uri_IsIPv4Address_m3490090822 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C"  bool Uri_IsDomainAddress_m740222981 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C"  bool Uri_CheckSchemeName_m3839723091 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C"  bool Uri_IsAlpha_m171894930 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m2208061098 (Uri_t1116831938 * __this, Il2CppObject * ___comparant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C"  bool Uri_InternalEquals_m2509473274 (Uri_t1116831938 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m629619726 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m2866425188 (Uri_t1116831938 * __this, int32_t ___part0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m2865381007 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m2779785335 (Il2CppObject * __this /* static, unused */, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m4109487926 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m3196775920 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C"  void Uri_AppendQueryAndFragment_m1562004088 (Uri_t1116831938 * __this, String_t** ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C"  String_t* Uri_ToString_m967075364 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m2453046424 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m1653334917 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C"  void Uri_ParseUri_m3771462925 (Uri_t1116831938 * __this, int32_t ___kind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m4097037232 (Uri_t1116831938 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m416590285 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___excludeSpecial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m3032435497 (Uri_t1116831938 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  String_t* Uri_ParseAsWindowsAbsoluteFilePath_m1155471572 (Uri_t1116831938 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m1730599600 (Uri_t1116831938 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C"  void Uri_Parse_m561053531 (Uri_t1116831938 * __this, int32_t ___kind0, String_t* ___uriString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C"  String_t* Uri_ParseNoExceptions_m2517263517 (Uri_t1116831938 * __this, int32_t ___kind0, String_t* ___uriString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C"  bool Uri_CompactEscaped_m2021013591 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C"  String_t* Uri_Reduce_m1169795993 (Il2CppObject * __this /* static, unused */, String_t* ___path0, bool ___compact_escaped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C"  Il2CppChar Uri_HexUnescapeMultiByte_m3269245053 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t* ___index1, Il2CppChar* ___surrogate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m1914409694 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m711645873 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m3781205887 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m2987522946 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C"  UriParser_t3685110593 * Uri_get_Parser_m533607664 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
extern "C"  bool Uri_NeedToEscapeDataChar_m2713938880 (Il2CppObject * __this /* static, unused */, Il2CppChar ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
extern "C"  String_t* Uri_EscapeDataString_m3238747918 (Il2CppObject * __this /* static, unused */, String_t* ___stringToEscape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
extern "C"  String_t* Uri_UnescapeDataString_m207009557 (Il2CppObject * __this /* static, unused */, String_t* ___stringToUnescape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
extern "C"  int32_t Uri_GetInt_m2652275821 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t Uri_GetChar_m979940409 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t3324145743* Uri_GetChars_m731438051 (Il2CppObject * __this /* static, unused */, MemoryStream_t418716369 * ___b0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C"  void Uri_EnsureAbsoluteUri_m3407571844 (Uri_t1116831938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m4072520928 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___u10, Uri_t1116831938 * ___u21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Inequality_m2875066843 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___u10, Uri_t1116831938 * ___u21, const MethodInfo* method) IL2CPP_METHOD_ATTR;