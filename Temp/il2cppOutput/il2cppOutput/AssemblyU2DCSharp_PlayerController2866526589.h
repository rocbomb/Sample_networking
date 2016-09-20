#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// JoyStickerController
struct JoyStickerController_t1074600805;
// JumpButton
struct JumpButton_t929204512;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Animator
struct Animator_t2776330603;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t9039225;
// PhotonView
struct PhotonView_t1498838369;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour2824676508.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t2824676508
{
public:
	// System.Boolean PlayerController::facingRight
	bool ___facingRight_3;
	// System.Boolean PlayerController::jump
	bool ___jump_4;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_5;
	// System.Boolean PlayerController::grounded
	bool ___grounded_6;
	// UnityEngine.Transform PlayerController::groundCheck
	Transform_t1659122786 * ___groundCheck_7;
	// System.Single PlayerController::moveForce
	float ___moveForce_8;
	// System.Single PlayerController::maxSpeed
	float ___maxSpeed_9;
	// JoyStickerController PlayerController::moveJoysticker
	JoyStickerController_t1074600805 * ___moveJoysticker_10;
	// JumpButton PlayerController::jumpButton
	JumpButton_t929204512 * ___jumpButton_11;
	// UnityEngine.Rigidbody2D PlayerController::rigidbody2D
	Rigidbody2D_t1743771669 * ___rigidbody2D_12;
	// UnityEngine.Transform PlayerController::camTransform
	Transform_t1659122786 * ___camTransform_13;
	// UnityEngine.Animator PlayerController::anim
	Animator_t2776330603 * ___anim_14;
	// System.String PlayerController::baseName
	String_t* ___baseName_15;
	// System.Int32 PlayerController::playerNum
	int32_t ___playerNum_16;
	// UnityEngine.UI.Text PlayerController::playerName
	Text_t9039225 * ___playerName_17;
	// PhotonView PlayerController::photonView
	PhotonView_t1498838369 * ___photonView_18;

public:
	inline static int32_t get_offset_of_facingRight_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___facingRight_3)); }
	inline bool get_facingRight_3() const { return ___facingRight_3; }
	inline bool* get_address_of_facingRight_3() { return &___facingRight_3; }
	inline void set_facingRight_3(bool value)
	{
		___facingRight_3 = value;
	}

	inline static int32_t get_offset_of_jump_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jump_4)); }
	inline bool get_jump_4() const { return ___jump_4; }
	inline bool* get_address_of_jump_4() { return &___jump_4; }
	inline void set_jump_4(bool value)
	{
		___jump_4 = value;
	}

	inline static int32_t get_offset_of_jumpForce_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jumpForce_5)); }
	inline float get_jumpForce_5() const { return ___jumpForce_5; }
	inline float* get_address_of_jumpForce_5() { return &___jumpForce_5; }
	inline void set_jumpForce_5(float value)
	{
		___jumpForce_5 = value;
	}

	inline static int32_t get_offset_of_grounded_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___grounded_6)); }
	inline bool get_grounded_6() const { return ___grounded_6; }
	inline bool* get_address_of_grounded_6() { return &___grounded_6; }
	inline void set_grounded_6(bool value)
	{
		___grounded_6 = value;
	}

	inline static int32_t get_offset_of_groundCheck_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___groundCheck_7)); }
	inline Transform_t1659122786 * get_groundCheck_7() const { return ___groundCheck_7; }
	inline Transform_t1659122786 ** get_address_of_groundCheck_7() { return &___groundCheck_7; }
	inline void set_groundCheck_7(Transform_t1659122786 * value)
	{
		___groundCheck_7 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_7, value);
	}

	inline static int32_t get_offset_of_moveForce_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveForce_8)); }
	inline float get_moveForce_8() const { return ___moveForce_8; }
	inline float* get_address_of_moveForce_8() { return &___moveForce_8; }
	inline void set_moveForce_8(float value)
	{
		___moveForce_8 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___maxSpeed_9)); }
	inline float get_maxSpeed_9() const { return ___maxSpeed_9; }
	inline float* get_address_of_maxSpeed_9() { return &___maxSpeed_9; }
	inline void set_maxSpeed_9(float value)
	{
		___maxSpeed_9 = value;
	}

	inline static int32_t get_offset_of_moveJoysticker_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveJoysticker_10)); }
	inline JoyStickerController_t1074600805 * get_moveJoysticker_10() const { return ___moveJoysticker_10; }
	inline JoyStickerController_t1074600805 ** get_address_of_moveJoysticker_10() { return &___moveJoysticker_10; }
	inline void set_moveJoysticker_10(JoyStickerController_t1074600805 * value)
	{
		___moveJoysticker_10 = value;
		Il2CppCodeGenWriteBarrier(&___moveJoysticker_10, value);
	}

	inline static int32_t get_offset_of_jumpButton_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jumpButton_11)); }
	inline JumpButton_t929204512 * get_jumpButton_11() const { return ___jumpButton_11; }
	inline JumpButton_t929204512 ** get_address_of_jumpButton_11() { return &___jumpButton_11; }
	inline void set_jumpButton_11(JumpButton_t929204512 * value)
	{
		___jumpButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___jumpButton_11, value);
	}

	inline static int32_t get_offset_of_rigidbody2D_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rigidbody2D_12)); }
	inline Rigidbody2D_t1743771669 * get_rigidbody2D_12() const { return ___rigidbody2D_12; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rigidbody2D_12() { return &___rigidbody2D_12; }
	inline void set_rigidbody2D_12(Rigidbody2D_t1743771669 * value)
	{
		___rigidbody2D_12 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody2D_12, value);
	}

	inline static int32_t get_offset_of_camTransform_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___camTransform_13)); }
	inline Transform_t1659122786 * get_camTransform_13() const { return ___camTransform_13; }
	inline Transform_t1659122786 ** get_address_of_camTransform_13() { return &___camTransform_13; }
	inline void set_camTransform_13(Transform_t1659122786 * value)
	{
		___camTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___camTransform_13, value);
	}

	inline static int32_t get_offset_of_anim_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___anim_14)); }
	inline Animator_t2776330603 * get_anim_14() const { return ___anim_14; }
	inline Animator_t2776330603 ** get_address_of_anim_14() { return &___anim_14; }
	inline void set_anim_14(Animator_t2776330603 * value)
	{
		___anim_14 = value;
		Il2CppCodeGenWriteBarrier(&___anim_14, value);
	}

	inline static int32_t get_offset_of_baseName_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___baseName_15)); }
	inline String_t* get_baseName_15() const { return ___baseName_15; }
	inline String_t** get_address_of_baseName_15() { return &___baseName_15; }
	inline void set_baseName_15(String_t* value)
	{
		___baseName_15 = value;
		Il2CppCodeGenWriteBarrier(&___baseName_15, value);
	}

	inline static int32_t get_offset_of_playerNum_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerNum_16)); }
	inline int32_t get_playerNum_16() const { return ___playerNum_16; }
	inline int32_t* get_address_of_playerNum_16() { return &___playerNum_16; }
	inline void set_playerNum_16(int32_t value)
	{
		___playerNum_16 = value;
	}

	inline static int32_t get_offset_of_playerName_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerName_17)); }
	inline Text_t9039225 * get_playerName_17() const { return ___playerName_17; }
	inline Text_t9039225 ** get_address_of_playerName_17() { return &___playerName_17; }
	inline void set_playerName_17(Text_t9039225 * value)
	{
		___playerName_17 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_17, value);
	}

	inline static int32_t get_offset_of_photonView_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___photonView_18)); }
	inline PhotonView_t1498838369 * get_photonView_18() const { return ___photonView_18; }
	inline PhotonView_t1498838369 ** get_address_of_photonView_18() { return &___photonView_18; }
	inline void set_photonView_18(PhotonView_t1498838369 * value)
	{
		___photonView_18 = value;
		Il2CppCodeGenWriteBarrier(&___photonView_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
