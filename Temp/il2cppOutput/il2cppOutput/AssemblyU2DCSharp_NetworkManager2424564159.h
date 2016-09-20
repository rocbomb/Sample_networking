#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkManager
struct  NetworkManager_t2424564159  : public MonoBehaviour_t667441552
{
public:
	// System.String NetworkManager::roomName
	String_t* ___roomName_3;
	// System.String NetworkManager::playerPrefabName
	String_t* ___playerPrefabName_4;
	// UnityEngine.Transform NetworkManager::spawnPoint
	Transform_t1659122786 * ___spawnPoint_5;
	// System.String NetworkManager::baseName
	String_t* ___baseName_6;
	// System.Int32 NetworkManager::playerNum
	int32_t ___playerNum_7;
	// UnityEngine.UI.Text NetworkManager::playerName
	Text_t9039225 * ___playerName_8;

public:
	inline static int32_t get_offset_of_roomName_3() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___roomName_3)); }
	inline String_t* get_roomName_3() const { return ___roomName_3; }
	inline String_t** get_address_of_roomName_3() { return &___roomName_3; }
	inline void set_roomName_3(String_t* value)
	{
		___roomName_3 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_3, value);
	}

	inline static int32_t get_offset_of_playerPrefabName_4() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___playerPrefabName_4)); }
	inline String_t* get_playerPrefabName_4() const { return ___playerPrefabName_4; }
	inline String_t** get_address_of_playerPrefabName_4() { return &___playerPrefabName_4; }
	inline void set_playerPrefabName_4(String_t* value)
	{
		___playerPrefabName_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefabName_4, value);
	}

	inline static int32_t get_offset_of_spawnPoint_5() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___spawnPoint_5)); }
	inline Transform_t1659122786 * get_spawnPoint_5() const { return ___spawnPoint_5; }
	inline Transform_t1659122786 ** get_address_of_spawnPoint_5() { return &___spawnPoint_5; }
	inline void set_spawnPoint_5(Transform_t1659122786 * value)
	{
		___spawnPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_5, value);
	}

	inline static int32_t get_offset_of_baseName_6() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___baseName_6)); }
	inline String_t* get_baseName_6() const { return ___baseName_6; }
	inline String_t** get_address_of_baseName_6() { return &___baseName_6; }
	inline void set_baseName_6(String_t* value)
	{
		___baseName_6 = value;
		Il2CppCodeGenWriteBarrier(&___baseName_6, value);
	}

	inline static int32_t get_offset_of_playerNum_7() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___playerNum_7)); }
	inline int32_t get_playerNum_7() const { return ___playerNum_7; }
	inline int32_t* get_address_of_playerNum_7() { return &___playerNum_7; }
	inline void set_playerNum_7(int32_t value)
	{
		___playerNum_7 = value;
	}

	inline static int32_t get_offset_of_playerName_8() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___playerName_8)); }
	inline Text_t9039225 * get_playerName_8() const { return ___playerName_8; }
	inline Text_t9039225 ** get_address_of_playerName_8() { return &___playerName_8; }
	inline void set_playerName_8(Text_t9039225 * value)
	{
		___playerName_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
