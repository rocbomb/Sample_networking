#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoyStickerController
struct  JoyStickerController_t1074600805  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image JoyStickerController::bgImg
	Image_t538875265 * ___bgImg_2;
	// UnityEngine.UI.Image JoyStickerController::joystickerImg
	Image_t538875265 * ___joystickerImg_3;
	// UnityEngine.Vector3 JoyStickerController::<InputDirection>k__BackingField
	Vector3_t4282066566  ___U3CInputDirectionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(JoyStickerController_t1074600805, ___bgImg_2)); }
	inline Image_t538875265 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t538875265 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t538875265 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_2, value);
	}

	inline static int32_t get_offset_of_joystickerImg_3() { return static_cast<int32_t>(offsetof(JoyStickerController_t1074600805, ___joystickerImg_3)); }
	inline Image_t538875265 * get_joystickerImg_3() const { return ___joystickerImg_3; }
	inline Image_t538875265 ** get_address_of_joystickerImg_3() { return &___joystickerImg_3; }
	inline void set_joystickerImg_3(Image_t538875265 * value)
	{
		___joystickerImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystickerImg_3, value);
	}

	inline static int32_t get_offset_of_U3CInputDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JoyStickerController_t1074600805, ___U3CInputDirectionU3Ek__BackingField_4)); }
	inline Vector3_t4282066566  get_U3CInputDirectionU3Ek__BackingField_4() const { return ___U3CInputDirectionU3Ek__BackingField_4; }
	inline Vector3_t4282066566 * get_address_of_U3CInputDirectionU3Ek__BackingField_4() { return &___U3CInputDirectionU3Ek__BackingField_4; }
	inline void set_U3CInputDirectionU3Ek__BackingField_4(Vector3_t4282066566  value)
	{
		___U3CInputDirectionU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
