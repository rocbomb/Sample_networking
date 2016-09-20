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

// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t613432885;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.ComponentModel.MaskedTextProvider/EditPosition[]
struct EditPositionU5BU5D_t3568961491;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "System_System_ComponentModel_MaskedTextResultHint1442382280.h"

// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String)
extern "C"  void MaskedTextProvider__ctor_m2919950706 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m2111510475 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, bool ___restrictToAscii1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo)
extern "C"  void MaskedTextProvider__ctor_m1225374212 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, CultureInfo_t1065375142 * ___culture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m3245679444 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, Il2CppChar ___passwordChar1, bool ___allowPromptAsInput2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m4036153593 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, CultureInfo_t1065375142 * ___culture1, bool ___restrictToAscii2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m1693091714 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, CultureInfo_t1065375142 * ___culture1, Il2CppChar ___passwordChar2, bool ___allowPromptAsInput3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Boolean,System.Char,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m741435382 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, CultureInfo_t1065375142 * ___culture1, bool ___allowPromptAsInput2, Il2CppChar ___promptChar3, Il2CppChar ___passwordChar4, bool ___restrictToAscii5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.cctor()
extern "C"  void MaskedTextProvider__cctor_m3929357853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::SetMask(System.String)
extern "C"  void MaskedTextProvider_SetMask_m2504266790 (MaskedTextProvider_t613432885 * __this, String_t* ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MaskedTextProvider/EditPosition[] System.ComponentModel.MaskedTextProvider::ClonePositions()
extern "C"  EditPositionU5BU5D_t3568961491* MaskedTextProvider_ClonePositions_m2348083996 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::AddInternal(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_AddInternal_m2038905239 (MaskedTextProvider_t613432885 * __this, String_t* ___str_input0, int32_t* ___testPosition1, int32_t* ___resultHint2, bool ___only_test3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::AddInternal(System.Char,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean,System.Boolean)
extern "C"  bool MaskedTextProvider_AddInternal_m3530261089 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, bool ___check_available_positions_first3, bool ___check_escape_char_first4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyStringInternal(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Int32,System.Boolean)
extern "C"  bool MaskedTextProvider_VerifyStringInternal_m1767176529 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, int32_t ___startIndex3, bool ___only_test4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyCharInternal(System.Char,System.Int32,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_VerifyCharInternal_m2679091016 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___hint2, bool ___only_test3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsInsertableString(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_IsInsertableString_m4149430951 (MaskedTextProvider_t613432885 * __this, String_t* ___str_input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ShiftPositionsRight(System.ComponentModel.MaskedTextProvider/EditPosition[],System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_ShiftPositionsRight_m51839971 (MaskedTextProvider_t613432885 * __this, EditPositionU5BU5D_t3568961491* ___edit_positions0, int32_t ___start1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ReplaceInternal(System.String,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean,System.Boolean)
extern "C"  bool MaskedTextProvider_ReplaceInternal_m3181780531 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, bool ___only_test5, bool ___dont_remove_at_end6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ReplaceInternal(System.ComponentModel.MaskedTextProvider/EditPosition[],System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_ReplaceInternal_m3255963988 (MaskedTextProvider_t613432885 * __this, EditPositionU5BU5D_t3568961491* ___edit_positions0, Il2CppChar ___input1, int32_t ___position2, int32_t* ___testPosition3, int32_t* ___resultHint4, bool ___only_test5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAtInternal(System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_RemoveAtInternal_m631944155 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, int32_t* ___testPosition2, int32_t* ___resultHint3, bool ___only_testing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAtInternal(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_InsertAtInternal_m3923830715 (MaskedTextProvider_t613432885 * __this, String_t* ___str_input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, bool ___only_testing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.Char)
extern "C"  bool MaskedTextProvider_Add_m2930157636 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.String)
extern "C"  bool MaskedTextProvider_Add_m57150121 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.Char,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Add_m3208749374 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Add_m2698922851 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::Clear()
extern "C"  void MaskedTextProvider_Clear_m4198710203 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::Clear(System.ComponentModel.MaskedTextResultHint&)
extern "C"  void MaskedTextProvider_Clear_m42957136 (MaskedTextProvider_t613432885 * __this, int32_t* ___resultHint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MaskedTextProvider::Clone()
extern "C"  Il2CppObject * MaskedTextProvider_Clone_m3056351862 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindAssignedEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindAssignedEditPositionFrom_m2784817860 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindAssignedEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindAssignedEditPositionInRange_m576832627 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindEditPositionFrom_m1392934386 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindEditPositionInRange_m1467691937 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindNonEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindNonEditPositionFrom_m3625129373 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindNonEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindNonEditPositionInRange_m1475417420 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindUnassignedEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindUnassignedEditPositionFrom_m4173095115 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindUnassignedEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindUnassignedEditPositionInRange_m1227506810 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::GetOperationResultFromHint(System.ComponentModel.MaskedTextResultHint)
extern "C"  bool MaskedTextProvider_GetOperationResultFromHint_m827721258 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_InsertAt_m3078806704 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.String,System.Int32)
extern "C"  bool MaskedTextProvider_InsertAt_m2491503403 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_InsertAt_m3076994730 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_InsertAt_m2392821093 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsAvailablePosition(System.Int32)
extern "C"  bool MaskedTextProvider_IsAvailablePosition_m3072462065 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsEditPosition(System.Int32)
extern "C"  bool MaskedTextProvider_IsEditPosition_m667184184 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidInputChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidInputChar_m3896461093 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidMaskChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidMaskChar_m1517224657 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidPasswordChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidPasswordChar_m2677739394 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Remove()
extern "C"  bool MaskedTextProvider_Remove_m3697629582 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Remove(System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Remove_m2770343410 (MaskedTextProvider_t613432885 * __this, int32_t* ___testPosition0, int32_t* ___resultHint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32)
extern "C"  bool MaskedTextProvider_RemoveAt_m3590493618 (MaskedTextProvider_t613432885 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32,System.Int32)
extern "C"  bool MaskedTextProvider_RemoveAt_m2398148709 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_RemoveAt_m215954975 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___endPosition1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_Replace_m1050728422 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32)
extern "C"  bool MaskedTextProvider_Replace_m3423426785 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m1985913440 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m1835721627 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m5206379 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m991053840 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Set(System.String)
extern "C"  bool MaskedTextProvider_Set_m1064414408 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Set(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Set_m557660354 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToDisplayString()
extern "C"  String_t* MaskedTextProvider_ToDisplayString_m3893630691 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString()
extern "C"  String_t* MaskedTextProvider_ToString_m1702098051 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean)
extern "C"  String_t* MaskedTextProvider_ToString_m2133264570 (MaskedTextProvider_t613432885 * __this, bool ___ignorePasswordChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean)
extern "C"  String_t* MaskedTextProvider_ToString_m3961749379 (MaskedTextProvider_t613432885 * __this, bool ___includePrompt0, bool ___includeLiterals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m2479646723 (MaskedTextProvider_t613432885 * __this, int32_t ___startPosition0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m1577388442 (MaskedTextProvider_t613432885 * __this, bool ___ignorePasswordChar0, int32_t ___startPosition1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m2791319331 (MaskedTextProvider_t613432885 * __this, bool ___includePrompt0, bool ___includeLiterals1, int32_t ___startPosition2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean,System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m2044143226 (MaskedTextProvider_t613432885 * __this, bool ___ignorePasswordChar0, bool ___includePrompt1, bool ___includeLiterals2, int32_t ___startPosition3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyChar(System.Char,System.Int32,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_VerifyChar_m4152833656 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyEscapeChar(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_VerifyEscapeChar_m667649716 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyString(System.String)
extern "C"  bool MaskedTextProvider_VerifyString_m268032206 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyString(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_VerifyString_m1530474824 (MaskedTextProvider_t613432885 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_AllowPromptAsInput()
extern "C"  bool MaskedTextProvider_get_AllowPromptAsInput_m4052769406 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_AsciiOnly()
extern "C"  bool MaskedTextProvider_get_AsciiOnly_m2502957004 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_AssignedEditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_AssignedEditPositionCount_m779448803 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_AvailableEditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_AvailableEditPositionCount_m3217735008 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.ComponentModel.MaskedTextProvider::get_Culture()
extern "C"  CultureInfo_t1065375142 * MaskedTextProvider_get_Culture_m3056498820 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_DefaultPasswordChar()
extern "C"  Il2CppChar MaskedTextProvider_get_DefaultPasswordChar_m3390892281 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_EditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_EditPositionCount_m2263394961 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.MaskedTextProvider::get_EditPositions()
extern "C"  Il2CppObject * MaskedTextProvider_get_EditPositions_m428635611 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IncludeLiterals()
extern "C"  bool MaskedTextProvider_get_IncludeLiterals_m1445063003 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IncludeLiterals(System.Boolean)
extern "C"  void MaskedTextProvider_set_IncludeLiterals_m899200372 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IncludePrompt()
extern "C"  bool MaskedTextProvider_get_IncludePrompt_m3316109979 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IncludePrompt(System.Boolean)
extern "C"  void MaskedTextProvider_set_IncludePrompt_m2037153588 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_InvalidIndex()
extern "C"  int32_t MaskedTextProvider_get_InvalidIndex_m3346177480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IsPassword()
extern "C"  bool MaskedTextProvider_get_IsPassword_m427351032 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IsPassword(System.Boolean)
extern "C"  void MaskedTextProvider_set_IsPassword_m3559327821 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_Item(System.Int32)
extern "C"  Il2CppChar MaskedTextProvider_get_Item_m2972647775 (MaskedTextProvider_t613432885 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_LastAssignedPosition()
extern "C"  int32_t MaskedTextProvider_get_LastAssignedPosition_m1971776506 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_Length()
extern "C"  int32_t MaskedTextProvider_get_Length_m1562569171 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::get_Mask()
extern "C"  String_t* MaskedTextProvider_get_Mask_m2311928332 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_MaskCompleted()
extern "C"  bool MaskedTextProvider_get_MaskCompleted_m1342084718 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_MaskFull()
extern "C"  bool MaskedTextProvider_get_MaskFull_m759863470 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_PasswordChar()
extern "C"  Il2CppChar MaskedTextProvider_get_PasswordChar_m1251029260 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_PasswordChar(System.Char)
extern "C"  void MaskedTextProvider_set_PasswordChar_m325112987 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_PromptChar()
extern "C"  Il2CppChar MaskedTextProvider_get_PromptChar_m374045589 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_PromptChar(System.Char)
extern "C"  void MaskedTextProvider_set_PromptChar_m2459882738 (MaskedTextProvider_t613432885 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_ResetOnPrompt()
extern "C"  bool MaskedTextProvider_get_ResetOnPrompt_m1197754241 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_ResetOnPrompt(System.Boolean)
extern "C"  void MaskedTextProvider_set_ResetOnPrompt_m1768909210 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_ResetOnSpace()
extern "C"  bool MaskedTextProvider_get_ResetOnSpace_m2353555179 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_ResetOnSpace(System.Boolean)
extern "C"  void MaskedTextProvider_set_ResetOnSpace_m494153344 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_SkipLiterals()
extern "C"  bool MaskedTextProvider_get_SkipLiterals_m746217046 (MaskedTextProvider_t613432885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_SkipLiterals(System.Boolean)
extern "C"  void MaskedTextProvider_set_SkipLiterals_m1444892331 (MaskedTextProvider_t613432885 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
