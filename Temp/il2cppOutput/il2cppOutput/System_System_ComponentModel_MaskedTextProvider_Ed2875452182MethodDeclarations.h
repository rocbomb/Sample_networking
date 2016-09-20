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

// System.ComponentModel.MaskedTextProvider/EditPosition
struct EditPosition_t2875452182;
// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t613432885;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_MaskedTextProvider613432885.h"
#include "System_System_ComponentModel_MaskedTextProvider_Ed3056590759.h"
#include "System_System_ComponentModel_MaskedTextProvider_Edi263946692.h"
#include "System_System_ComponentModel_MaskedTextResultHint1442382280.h"

// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::.ctor()
extern "C"  void EditPosition__ctor_m3178220980 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::.ctor(System.ComponentModel.MaskedTextProvider,System.ComponentModel.MaskedTextProvider/EditType,System.ComponentModel.MaskedTextProvider/EditState,System.Char)
extern "C"  void EditPosition__ctor_m3168542380 (EditPosition_t2875452182 * __this, MaskedTextProvider_t613432885 * ___Parent0, int32_t ___Type1, int32_t ___State2, Il2CppChar ___MaskCharacter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::Reset()
extern "C"  void EditPosition_Reset_m824653921 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MaskedTextProvider/EditPosition System.ComponentModel.MaskedTextProvider/EditPosition::Clone()
extern "C"  EditPosition_t2875452182 * EditPosition_Clone_m661560044 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::get_Input()
extern "C"  Il2CppChar EditPosition_get_Input_m3990830769 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::set_Input(System.Char)
extern "C"  void EditPosition_set_Input_m809279678 (EditPosition_t2875452182 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::IsAscii(System.Char)
extern "C"  bool EditPosition_IsAscii_m3106621902 (EditPosition_t2875452182 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::Match(System.Char,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool EditPosition_Match_m2483563496 (EditPosition_t2875452182 * __this, Il2CppChar ___c0, int32_t* ___resultHint1, bool ___only_test2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_FilledIn()
extern "C"  bool EditPosition_get_FilledIn_m4097084458 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Required()
extern "C"  bool EditPosition_get_Required_m28791714 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Editable()
extern "C"  bool EditPosition_get_Editable_m2202237223 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Visible()
extern "C"  bool EditPosition_get_Visible_m474427889 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider/EditPosition::get_Text()
extern "C"  String_t* EditPosition_get_Text_m3047620227 (EditPosition_t2875452182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
