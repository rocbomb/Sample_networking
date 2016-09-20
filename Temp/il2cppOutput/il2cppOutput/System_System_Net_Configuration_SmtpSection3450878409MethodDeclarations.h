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

// System.Net.Configuration.SmtpSection
struct SmtpSection_t3450878409;
// System.String
struct String_t;
// System.Net.Configuration.SmtpNetworkElement
struct SmtpNetworkElement_t3416220558;
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
struct SmtpSpecifiedPickupDirectoryElement_t673424671;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod1798846735.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.Configuration.SmtpSection::.ctor()
extern "C"  void SmtpSection__ctor_m3049548821 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpDeliveryMethod System.Net.Configuration.SmtpSection::get_DeliveryMethod()
extern "C"  int32_t SmtpSection_get_DeliveryMethod_m1057038714 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.SmtpSection::set_DeliveryMethod(System.Net.Mail.SmtpDeliveryMethod)
extern "C"  void SmtpSection_set_DeliveryMethod_m884214351 (SmtpSection_t3450878409 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.SmtpSection::get_From()
extern "C"  String_t* SmtpSection_get_From_m742065701 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.SmtpSection::set_From(System.String)
extern "C"  void SmtpSection_set_From_m659046284 (SmtpSection_t3450878409 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.SmtpNetworkElement System.Net.Configuration.SmtpSection::get_Network()
extern "C"  SmtpNetworkElement_t3416220558 * SmtpSection_get_Network_m2174962673 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement System.Net.Configuration.SmtpSection::get_SpecifiedPickupDirectory()
extern "C"  SmtpSpecifiedPickupDirectoryElement_t673424671 * SmtpSection_get_SpecifiedPickupDirectory_m2677107739 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t55611423 * SmtpSection_get_Properties_m334949720 (SmtpSection_t3450878409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
