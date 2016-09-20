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

// System.String
struct String_t;
// System.Security.Cryptography.Xml.X509IssuerSerial
struct X509IssuerSerial_t1429091049;
struct X509IssuerSerial_t1429091049_marshaled_pinvoke;
struct X509IssuerSerial_t1429091049_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Security_System_Security_Cryptography_Xml_X1429091049.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.Xml.X509IssuerSerial::.ctor(System.String,System.String)
extern "C"  void X509IssuerSerial__ctor_m3833589441 (X509IssuerSerial_t1429091049 * __this, String_t* ___issuer0, String_t* ___serial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_IssuerName()
extern "C"  String_t* X509IssuerSerial_get_IssuerName_m3941839921 (X509IssuerSerial_t1429091049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_SerialNumber()
extern "C"  String_t* X509IssuerSerial_get_SerialNumber_m2568730730 (X509IssuerSerial_t1429091049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct X509IssuerSerial_t1429091049;
struct X509IssuerSerial_t1429091049_marshaled_pinvoke;

extern "C" void X509IssuerSerial_t1429091049_marshal_pinvoke(const X509IssuerSerial_t1429091049& unmarshaled, X509IssuerSerial_t1429091049_marshaled_pinvoke& marshaled);
extern "C" void X509IssuerSerial_t1429091049_marshal_pinvoke_back(const X509IssuerSerial_t1429091049_marshaled_pinvoke& marshaled, X509IssuerSerial_t1429091049& unmarshaled);
extern "C" void X509IssuerSerial_t1429091049_marshal_pinvoke_cleanup(X509IssuerSerial_t1429091049_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct X509IssuerSerial_t1429091049;
struct X509IssuerSerial_t1429091049_marshaled_com;

extern "C" void X509IssuerSerial_t1429091049_marshal_com(const X509IssuerSerial_t1429091049& unmarshaled, X509IssuerSerial_t1429091049_marshaled_com& marshaled);
extern "C" void X509IssuerSerial_t1429091049_marshal_com_back(const X509IssuerSerial_t1429091049_marshaled_com& marshaled, X509IssuerSerial_t1429091049& unmarshaled);
extern "C" void X509IssuerSerial_t1429091049_marshal_com_cleanup(X509IssuerSerial_t1429091049_marshaled_com& marshaled);
