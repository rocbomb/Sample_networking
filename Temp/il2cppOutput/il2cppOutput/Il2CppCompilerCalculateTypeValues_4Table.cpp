#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_IO_NullStream2272339223.h"
#include "mscorlib_System_IO_StreamAsyncResult2478422551.h"
#include "mscorlib_System_IO_StreamReader2549717843.h"
#include "mscorlib_System_IO_StreamReader_NullStreamReader1844639917.h"
#include "mscorlib_System_IO_StreamWriter2705123075.h"
#include "mscorlib_System_IO_StringReader4061477668.h"
#include "mscorlib_System_IO_StringWriter4216882900.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "mscorlib_System_IO_TextReader_NullTextReader1441645901.h"
#include "mscorlib_System_IO_SynchronizedReader2019931943.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "mscorlib_System_IO_TextWriter_NullTextWriter399961933.h"
#include "mscorlib_System_IO_SynchronizedWriter2175337175.h"
#include "mscorlib_System_IO_UnexceptionalStreamReader3478617218.h"
#include "mscorlib_System_IO_UnexceptionalStreamWriter3634022450.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream3670693477.h"
#include "mscorlib_System_Reflection_AmbiguousMatchException3708683968.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_Reflection_Assembly_ResolveEventHo3538800511.h"
#include "mscorlib_System_Reflection_Assembly_ResourceCloseH4012403781.h"
#include "mscorlib_System_Reflection_AssemblyCompanyAttribut3289935671.h"
#include "mscorlib_System_Reflection_AssemblyConfigurationAtt931286878.h"
#include "mscorlib_System_Reflection_AssemblyCopyrightAttrib1376411821.h"
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAtt3141296401.h"
#include "mscorlib_System_Reflection_AssemblyDelaySignAttrib1806962356.h"
#include "mscorlib_System_Reflection_AssemblyDescriptionAttr4061720984.h"
#include "mscorlib_System_Reflection_AssemblyFileVersionAttr4214444504.h"
#include "mscorlib_System_Reflection_AssemblyInformationalVe1023794527.h"
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribut3238168825.h"
#include "mscorlib_System_Reflection_AssemblyName2915647011.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1632705024.h"
#include "mscorlib_System_Reflection_AssemblyProductAttribut1246248709.h"
#include "mscorlib_System_Reflection_AssemblyTitleAttribute318896700.h"
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribu153437571.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_Binder_Default186944512.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_CustomAttributeData2955630591.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArg3059612989.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg3301293422.h"
#include "mscorlib_System_Reflection_EventAttributes1762685211.h"
#include "mscorlib_System_Reflection_EventInfo2739272946.h"
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapt1462580491.h"
#include "mscorlib_System_Reflection_FieldAttributes3975817083.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266.h"
#include "mscorlib_System_Reflection_LocalVariableInfo962988767.h"
#include "mscorlib_System_Reflection_ManifestResourceInfo641370685.h"
#include "mscorlib_System_Reflection_MemberInfoSerialization1406378686.h"
#include "mscorlib_System_Reflection_MemberTypes2305219977.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1917366122.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Reflection_Missing3109089008.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_Reflection_MonoGenericMethod1484675583.h"
#include "mscorlib_System_Reflection_MonoGenericCMethod782382242.h"
#include "mscorlib_System_Reflection_MonoEventInfo3743085391.h"
#include "mscorlib_System_Reflection_MonoEvent1233923073.h"
#include "mscorlib_System_Reflection_MonoField1234459233.h"
#include "mscorlib_System_Reflection_MonoMethodInfo1372150788.h"
#include "mscorlib_System_Reflection_MonoMethod2798466870.h"
#include "mscorlib_System_Reflection_MonoCMethod2855206475.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo3938502968.h"
#include "mscorlib_System_Reflection_PInfo2721197512.h"
#include "mscorlib_System_Reflection_MonoProperty1246977642.h"
#include "mscorlib_System_Reflection_MonoProperty_GetterAdap4082266865.h"
#include "mscorlib_System_Reflection_ParameterAttributes358477162.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"
#include "mscorlib_System_Reflection_ParameterModifier741930026.h"
#include "mscorlib_System_Reflection_Pointer1639033799.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture2992100239.h"
#include "mscorlib_System_Reflection_PropertyAttributes1999146654.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "mscorlib_System_Reflection_ResourceAttributes223003031.h"
#include "mscorlib_System_Reflection_ResourceLocation2713095285.h"
#include "mscorlib_System_Reflection_StrongNameKeyPair3001743425.h"
#include "mscorlib_System_Reflection_TargetException1160323912.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti3880899288.h"
#include "mscorlib_System_Reflection_TargetParameterCountExc1930104770.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_TypeDelegator949417779.h"
#include "mscorlib_System_Reflection_Emit_RefEmitPermissionS3880501745.h"
#include "mscorlib_System_Reflection_Emit_MonoResource1505432149.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1002978443.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2771074959.h"
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder3217839941.h"
#include "mscorlib_System_Reflection_Emit_DerivedType2038755629.h"
#include "mscorlib_System_Reflection_Emit_ByRefType2562015884.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod2315379190.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod_Anon3669870610.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethodToken1395106608.h"
#include "mscorlib_System_Reflection_Emit_EnumBuilder1579888016.h"
#include "mscorlib_System_Reflection_Emit_FieldBuilder1754069893.h"
#include "mscorlib_System_Reflection_Emit_GenericTypeParamete553556921.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (Stream_t1561764144), -1, sizeof(Stream_t1561764144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable400[1] = 
{
	Stream_t1561764144_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (NullStream_t2272339223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (StreamAsyncResult_t2478422551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable402[6] = 
{
	StreamAsyncResult_t2478422551::get_offset_of_state_0(),
	StreamAsyncResult_t2478422551::get_offset_of_completed_1(),
	StreamAsyncResult_t2478422551::get_offset_of_done_2(),
	StreamAsyncResult_t2478422551::get_offset_of_exc_3(),
	StreamAsyncResult_t2478422551::get_offset_of_nbytes_4(),
	StreamAsyncResult_t2478422551::get_offset_of_wh_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (StreamReader_t2549717843), -1, sizeof(StreamReader_t2549717843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable403[13] = 
{
	StreamReader_t2549717843::get_offset_of_input_buffer_2(),
	StreamReader_t2549717843::get_offset_of_decoded_buffer_3(),
	StreamReader_t2549717843::get_offset_of_decoded_count_4(),
	StreamReader_t2549717843::get_offset_of_pos_5(),
	StreamReader_t2549717843::get_offset_of_buffer_size_6(),
	StreamReader_t2549717843::get_offset_of_do_checks_7(),
	StreamReader_t2549717843::get_offset_of_encoding_8(),
	StreamReader_t2549717843::get_offset_of_decoder_9(),
	StreamReader_t2549717843::get_offset_of_base_stream_10(),
	StreamReader_t2549717843::get_offset_of_mayBlock_11(),
	StreamReader_t2549717843::get_offset_of_line_builder_12(),
	StreamReader_t2549717843_StaticFields::get_offset_of_Null_13(),
	StreamReader_t2549717843::get_offset_of_foundCR_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (NullStreamReader_t1844639917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (StreamWriter_t2705123075), -1, sizeof(StreamWriter_t2705123075_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable405[10] = 
{
	StreamWriter_t2705123075::get_offset_of_internalEncoding_4(),
	StreamWriter_t2705123075::get_offset_of_internalStream_5(),
	StreamWriter_t2705123075::get_offset_of_iflush_6(),
	StreamWriter_t2705123075::get_offset_of_byte_buf_7(),
	StreamWriter_t2705123075::get_offset_of_byte_pos_8(),
	StreamWriter_t2705123075::get_offset_of_decode_buf_9(),
	StreamWriter_t2705123075::get_offset_of_decode_pos_10(),
	StreamWriter_t2705123075::get_offset_of_DisposedAlready_11(),
	StreamWriter_t2705123075::get_offset_of_preamble_done_12(),
	StreamWriter_t2705123075_StaticFields::get_offset_of_Null_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (StringReader_t4061477668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[3] = 
{
	StringReader_t4061477668::get_offset_of_source_2(),
	StringReader_t4061477668::get_offset_of_nextChar_3(),
	StringReader_t4061477668::get_offset_of_sourceLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (StringWriter_t4216882900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[2] = 
{
	StringWriter_t4216882900::get_offset_of_internalString_4(),
	StringWriter_t4216882900::get_offset_of_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (TextReader_t2148718976), -1, sizeof(TextReader_t2148718976_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable408[1] = 
{
	TextReader_t2148718976_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (NullTextReader_t1441645901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (SynchronizedReader_t2019931943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable410[1] = 
{
	SynchronizedReader_t2019931943::get_offset_of_reader_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (TextWriter_t2304124208), -1, sizeof(TextWriter_t2304124208_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable411[3] = 
{
	TextWriter_t2304124208::get_offset_of_CoreNewLine_1(),
	TextWriter_t2304124208::get_offset_of_internalFormatProvider_2(),
	TextWriter_t2304124208_StaticFields::get_offset_of_Null_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (NullTextWriter_t399961933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (SynchronizedWriter_t2175337175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[2] = 
{
	SynchronizedWriter_t2175337175::get_offset_of_writer_4(),
	SynchronizedWriter_t2175337175::get_offset_of_neverClose_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (UnexceptionalStreamReader_t3478617218), -1, sizeof(UnexceptionalStreamReader_t3478617218_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable414[2] = 
{
	UnexceptionalStreamReader_t3478617218_StaticFields::get_offset_of_newline_15(),
	UnexceptionalStreamReader_t3478617218_StaticFields::get_offset_of_newlineChar_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (UnexceptionalStreamWriter_t3634022450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (UnmanagedMemoryStream_t3670693477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable416[8] = 
{
	UnmanagedMemoryStream_t3670693477::get_offset_of_length_2(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_closed_3(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_capacity_4(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_fileaccess_5(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_initial_pointer_6(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_initial_position_7(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_current_position_8(),
	UnmanagedMemoryStream_t3670693477::get_offset_of_Closed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (AmbiguousMatchException_t3708683968), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (Assembly_t1418687608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[10] = 
{
	Assembly_t1418687608::get_offset_of__mono_assembly_0(),
	Assembly_t1418687608::get_offset_of_resolve_event_holder_1(),
	Assembly_t1418687608::get_offset_of__evidence_2(),
	Assembly_t1418687608::get_offset_of__minimum_3(),
	Assembly_t1418687608::get_offset_of__optional_4(),
	Assembly_t1418687608::get_offset_of__refuse_5(),
	Assembly_t1418687608::get_offset_of__granted_6(),
	Assembly_t1418687608::get_offset_of__denied_7(),
	Assembly_t1418687608::get_offset_of_fromByteArray_8(),
	Assembly_t1418687608::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (ResolveEventHolder_t3538800511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (ResourceCloseHandler_t4012403781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[1] = 
{
	ResourceCloseHandler_t4012403781::get_offset_of_module_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (AssemblyCompanyAttribute_t3289935671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable421[1] = 
{
	AssemblyCompanyAttribute_t3289935671::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (AssemblyConfigurationAttribute_t931286878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable422[1] = 
{
	AssemblyConfigurationAttribute_t931286878::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (AssemblyCopyrightAttribute_t1376411821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	AssemblyCopyrightAttribute_t1376411821::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (AssemblyDefaultAliasAttribute_t3141296401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	AssemblyDefaultAliasAttribute_t3141296401::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (AssemblyDelaySignAttribute_t1806962356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable425[1] = 
{
	AssemblyDelaySignAttribute_t1806962356::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (AssemblyDescriptionAttribute_t4061720984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable426[1] = 
{
	AssemblyDescriptionAttribute_t4061720984::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (AssemblyFileVersionAttribute_t4214444504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable427[1] = 
{
	AssemblyFileVersionAttribute_t4214444504::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (AssemblyInformationalVersionAttribute_t1023794527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable428[1] = 
{
	AssemblyInformationalVersionAttribute_t1023794527::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (AssemblyKeyFileAttribute_t3238168825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[1] = 
{
	AssemblyKeyFileAttribute_t3238168825::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (AssemblyName_t2915647011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable430[15] = 
{
	AssemblyName_t2915647011::get_offset_of_name_0(),
	AssemblyName_t2915647011::get_offset_of_codebase_1(),
	AssemblyName_t2915647011::get_offset_of_major_2(),
	AssemblyName_t2915647011::get_offset_of_minor_3(),
	AssemblyName_t2915647011::get_offset_of_build_4(),
	AssemblyName_t2915647011::get_offset_of_revision_5(),
	AssemblyName_t2915647011::get_offset_of_cultureinfo_6(),
	AssemblyName_t2915647011::get_offset_of_flags_7(),
	AssemblyName_t2915647011::get_offset_of_hashalg_8(),
	AssemblyName_t2915647011::get_offset_of_keypair_9(),
	AssemblyName_t2915647011::get_offset_of_publicKey_10(),
	AssemblyName_t2915647011::get_offset_of_keyToken_11(),
	AssemblyName_t2915647011::get_offset_of_versioncompat_12(),
	AssemblyName_t2915647011::get_offset_of_version_13(),
	AssemblyName_t2915647011::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (AssemblyNameFlags_t1632705024)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable431[6] = 
{
	AssemblyNameFlags_t1632705024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (AssemblyProductAttribute_t1246248709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable432[1] = 
{
	AssemblyProductAttribute_t1246248709::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (AssemblyTitleAttribute_t318896700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	AssemblyTitleAttribute_t318896700::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (AssemblyTrademarkAttribute_t153437571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[1] = 
{
	AssemblyTrademarkAttribute_t153437571::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (Binder_t1074302268), -1, sizeof(Binder_t1074302268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable435[1] = 
{
	Binder_t1074302268_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (Default_t186944512), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (BindingFlags_t1523912596)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable437[21] = 
{
	BindingFlags_t1523912596::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (CallingConventions_t2863034704)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable438[6] = 
{
	CallingConventions_t2863034704::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (ConstructorInfo_t4136801618), -1, sizeof(ConstructorInfo_t4136801618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable439[2] = 
{
	ConstructorInfo_t4136801618_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t4136801618_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (CustomAttributeData_t2955630591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[3] = 
{
	CustomAttributeData_t2955630591::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t2955630591::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t2955630591::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (CustomAttributeNamedArgument_t3059612989)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable441[2] = 
{
	CustomAttributeNamedArgument_t3059612989::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeNamedArgument_t3059612989::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (CustomAttributeTypedArgument_t3301293422)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[2] = 
{
	CustomAttributeTypedArgument_t3301293422::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeTypedArgument_t3301293422::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (EventAttributes_t1762685211)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable443[5] = 
{
	EventAttributes_t1762685211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable444[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (AddEventAdapter_t1462580491), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (FieldAttributes_t3975817083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[20] = 
{
	FieldAttributes_t3975817083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (LocalVariableInfo_t962988767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable448[3] = 
{
	LocalVariableInfo_t962988767::get_offset_of_type_0(),
	LocalVariableInfo_t962988767::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t962988767::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (ManifestResourceInfo_t641370685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable449[3] = 
{
	ManifestResourceInfo_t641370685::get_offset_of__assembly_0(),
	ManifestResourceInfo_t641370685::get_offset_of__filename_1(),
	ManifestResourceInfo_t641370685::get_offset_of__location_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (MemberInfoSerializationHolder_t1406378686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable450[5] = 
{
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (MemberTypes_t2305219977)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable451[10] = 
{
	MemberTypes_t2305219977::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (MethodAttributes_t1709777834)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable452[25] = 
{
	MethodAttributes_t1709777834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (MethodBase_t318515428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (MethodImplAttributes_t1917366122)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable454[15] = 
{
	MethodImplAttributes_t1917366122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (Missing_t3109089008), -1, sizeof(Missing_t3109089008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable456[1] = 
{
	Missing_t3109089008_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (Module_t1394482686), -1, sizeof(Module_t1394482686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable457[10] = 
{
	0,
	Module_t1394482686_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t1394482686_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t1394482686::get_offset_of__impl_3(),
	Module_t1394482686::get_offset_of_assembly_4(),
	Module_t1394482686::get_offset_of_fqname_5(),
	Module_t1394482686::get_offset_of_name_6(),
	Module_t1394482686::get_offset_of_scopename_7(),
	Module_t1394482686::get_offset_of_is_resource_8(),
	Module_t1394482686::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (MonoGenericCMethod_t782382242), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (MonoEventInfo_t3743085391)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable460[8] = 
{
	MonoEventInfo_t3743085391::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_name_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable461[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable462[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (MonoMethodInfo_t1372150788)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable463[5] = 
{
	MonoMethodInfo_t1372150788::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable464[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (MonoCMethod_t2855206475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable465[3] = 
{
	MonoCMethod_t2855206475::get_offset_of_mhandle_2(),
	MonoCMethod_t2855206475::get_offset_of_name_3(),
	MonoCMethod_t2855206475::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { sizeof (MonoPropertyInfo_t3938502968)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable466[5] = 
{
	MonoPropertyInfo_t3938502968::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (PInfo_t2721197512)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable467[7] = 
{
	PInfo_t2721197512::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable468[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (GetterAdapter_t4082266865), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (ParameterAttributes_t358477162)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable472[12] = 
{
	ParameterAttributes_t358477162::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (ParameterInfo_t2235474049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable473[7] = 
{
	ParameterInfo_t2235474049::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2235474049::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2235474049::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2235474049::get_offset_of_NameImpl_3(),
	ParameterInfo_t2235474049::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2235474049::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2235474049::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (ParameterModifier_t741930026)+ sizeof (Il2CppObject), sizeof(ParameterModifier_t741930026_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable474[1] = 
{
	ParameterModifier_t741930026::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (Pointer_t1639033799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[2] = 
{
	Pointer_t1639033799::get_offset_of_data_0(),
	Pointer_t1639033799::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (ProcessorArchitecture_t2992100239)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable476[6] = 
{
	ProcessorArchitecture_t2992100239::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (PropertyAttributes_t1999146654)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable477[9] = 
{
	PropertyAttributes_t1999146654::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (ResourceAttributes_t223003031)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable479[3] = 
{
	ResourceAttributes_t223003031::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (ResourceLocation_t2713095285)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable480[4] = 
{
	ResourceLocation_t2713095285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (StrongNameKeyPair_t3001743425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable481[5] = 
{
	StrongNameKeyPair_t3001743425::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3001743425::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (TargetException_t1160323912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (TargetInvocationException_t3880899288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (TargetParameterCountException_t1930104770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (TypeAttributes_t1370933187)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable485[32] = 
{
	TypeAttributes_t1370933187::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (TypeDelegator_t949417779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable486[1] = 
{
	TypeDelegator_t949417779::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (RefEmitPermissionSet_t3880501745)+ sizeof (Il2CppObject), sizeof(RefEmitPermissionSet_t3880501745_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable487[2] = 
{
	RefEmitPermissionSet_t3880501745::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RefEmitPermissionSet_t3880501745::get_offset_of_pset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (MonoResource_t1505432149)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable488[6] = 
{
	MonoResource_t1505432149::get_offset_of_data_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoResource_t1505432149::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoResource_t1505432149::get_offset_of_filename_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoResource_t1505432149::get_offset_of_attrs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoResource_t1505432149::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoResource_t1505432149::get_offset_of_stream_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (AssemblyBuilder_t1002978443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[25] = 
{
	AssemblyBuilder_t1002978443::get_offset_of_modules_10(),
	AssemblyBuilder_t1002978443::get_offset_of_name_11(),
	AssemblyBuilder_t1002978443::get_offset_of_dir_12(),
	AssemblyBuilder_t1002978443::get_offset_of_resources_13(),
	AssemblyBuilder_t1002978443::get_offset_of_version_14(),
	AssemblyBuilder_t1002978443::get_offset_of_culture_15(),
	AssemblyBuilder_t1002978443::get_offset_of_flags_16(),
	AssemblyBuilder_t1002978443::get_offset_of_pekind_17(),
	AssemblyBuilder_t1002978443::get_offset_of_access_18(),
	AssemblyBuilder_t1002978443::get_offset_of_loaded_modules_19(),
	AssemblyBuilder_t1002978443::get_offset_of_permissions_minimum_20(),
	AssemblyBuilder_t1002978443::get_offset_of_permissions_optional_21(),
	AssemblyBuilder_t1002978443::get_offset_of_permissions_refused_22(),
	AssemblyBuilder_t1002978443::get_offset_of_corlib_internal_23(),
	AssemblyBuilder_t1002978443::get_offset_of_pktoken_24(),
	AssemblyBuilder_t1002978443::get_offset_of_corlib_object_type_25(),
	AssemblyBuilder_t1002978443::get_offset_of_corlib_value_type_26(),
	AssemblyBuilder_t1002978443::get_offset_of_corlib_enum_type_27(),
	AssemblyBuilder_t1002978443::get_offset_of_corlib_void_type_28(),
	AssemblyBuilder_t1002978443::get_offset_of_created_29(),
	AssemblyBuilder_t1002978443::get_offset_of_is_module_only_30(),
	AssemblyBuilder_t1002978443::get_offset_of_sn_31(),
	AssemblyBuilder_t1002978443::get_offset_of_is_compiler_context_32(),
	AssemblyBuilder_t1002978443::get_offset_of_versioninfo_culture_33(),
	AssemblyBuilder_t1002978443::get_offset_of_manifest_module_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (AssemblyBuilderAccess_t2771074959)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable490[5] = 
{
	AssemblyBuilderAccess_t2771074959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (ConstructorBuilder_t3217839941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[11] = 
{
	ConstructorBuilder_t3217839941::get_offset_of_ilgen_2(),
	ConstructorBuilder_t3217839941::get_offset_of_parameters_3(),
	ConstructorBuilder_t3217839941::get_offset_of_attrs_4(),
	ConstructorBuilder_t3217839941::get_offset_of_iattrs_5(),
	ConstructorBuilder_t3217839941::get_offset_of_table_idx_6(),
	ConstructorBuilder_t3217839941::get_offset_of_call_conv_7(),
	ConstructorBuilder_t3217839941::get_offset_of_type_8(),
	ConstructorBuilder_t3217839941::get_offset_of_pinfo_9(),
	ConstructorBuilder_t3217839941::get_offset_of_init_locals_10(),
	ConstructorBuilder_t3217839941::get_offset_of_paramModReq_11(),
	ConstructorBuilder_t3217839941::get_offset_of_paramModOpt_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (DerivedType_t2038755629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable492[1] = 
{
	DerivedType_t2038755629::get_offset_of_elementType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (ByRefType_t2562015884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (DynamicMethod_t2315379190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[17] = 
{
	DynamicMethod_t2315379190::get_offset_of_mhandle_0(),
	DynamicMethod_t2315379190::get_offset_of_name_1(),
	DynamicMethod_t2315379190::get_offset_of_returnType_2(),
	DynamicMethod_t2315379190::get_offset_of_parameters_3(),
	DynamicMethod_t2315379190::get_offset_of_attributes_4(),
	DynamicMethod_t2315379190::get_offset_of_callingConvention_5(),
	DynamicMethod_t2315379190::get_offset_of_module_6(),
	DynamicMethod_t2315379190::get_offset_of_skipVisibility_7(),
	DynamicMethod_t2315379190::get_offset_of_init_locals_8(),
	DynamicMethod_t2315379190::get_offset_of_ilgen_9(),
	DynamicMethod_t2315379190::get_offset_of_nrefs_10(),
	DynamicMethod_t2315379190::get_offset_of_refs_11(),
	DynamicMethod_t2315379190::get_offset_of_owner_12(),
	DynamicMethod_t2315379190::get_offset_of_deleg_13(),
	DynamicMethod_t2315379190::get_offset_of_method_14(),
	DynamicMethod_t2315379190::get_offset_of_pinfo_15(),
	DynamicMethod_t2315379190::get_offset_of_creating_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (AnonHostModuleHolder_t3669870610), -1, sizeof(AnonHostModuleHolder_t3669870610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable495[1] = 
{
	AnonHostModuleHolder_t3669870610_StaticFields::get_offset_of_anon_host_module_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (DynamicMethodTokenGenerator_t1395106608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[1] = 
{
	DynamicMethodTokenGenerator_t1395106608::get_offset_of_m_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (EnumBuilder_t1579888016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable497[2] = 
{
	EnumBuilder_t1579888016::get_offset_of__tb_8(),
	EnumBuilder_t1579888016::get_offset_of__underlyingType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (FieldBuilder_t1754069893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable498[5] = 
{
	FieldBuilder_t1754069893::get_offset_of_attrs_0(),
	FieldBuilder_t1754069893::get_offset_of_type_1(),
	FieldBuilder_t1754069893::get_offset_of_name_2(),
	FieldBuilder_t1754069893::get_offset_of_typeb_3(),
	FieldBuilder_t1754069893::get_offset_of_marshal_info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (GenericTypeParameterBuilder_t553556921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable499[4] = 
{
	GenericTypeParameterBuilder_t553556921::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_base_type_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
