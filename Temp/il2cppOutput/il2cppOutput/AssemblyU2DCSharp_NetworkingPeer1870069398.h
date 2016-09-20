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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1482115843;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t2952863562;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t711421835;
// RoomInfo[]
struct RoomInfoU5BU5D_t761346164;
// Room
struct Room_t2553083;
// EnterRoomParams
struct EnterRoomParams_t1470694169;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t1397773348;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t3977425488;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t308267276;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t1496101608;
// PhotonStream
struct PhotonStream_t1494272828;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t282209065;
// IPunPrefabPool
struct IPunPrefabPool_t2276860384;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t200133079;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t1792344102;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t1105919721;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// TypedLobby
struct TypedLobby_t1020404140;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.Collections.Generic.List`1<Region>
struct List_1_t3812224484;

#include "AssemblyU2DCSharp_LoadBalancingPeer625641013.h"
#include "AssemblyU2DCSharp_AuthModeOption408370144.h"
#include "AssemblyU2DCSharp_EncryptionMode2170097638.h"
#include "AssemblyU2DCSharp_JoinType2957877156.h"
#include "AssemblyU2DCSharp_ServerConnection3129530017.h"
#include "AssemblyU2DCSharp_ClientState1483091814.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkingPeer
struct  NetworkingPeer_t1870069398  : public LoadBalancingPeer_t625641013
{
public:
	// System.String NetworkingPeer::AppId
	String_t* ___AppId_43;
	// System.String NetworkingPeer::tokenCache
	String_t* ___tokenCache_44;
	// AuthModeOption NetworkingPeer::AuthMode
	int32_t ___AuthMode_45;
	// EncryptionMode NetworkingPeer::EncryptionMode
	int32_t ___EncryptionMode_46;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_48;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_49;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_t2952863562 * ___LobbyStatistics_50;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t711421835 * ___mGameList_51;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t761346164* ___mGameListCopy_52;
	// System.String NetworkingPeer::playername
	String_t* ___playername_53;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_54;
	// Room NetworkingPeer::currentRoom
	Room_t2553083 * ___currentRoom_55;
	// JoinType NetworkingPeer::lastJoinType
	int32_t ___lastJoinType_56;
	// EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_t1470694169 * ___enterRoomParamsCache_57;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_58;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t4054002952* ___friendListRequested_59;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_60;
	// System.Boolean NetworkingPeer::isFetchingFriendList
	bool ___isFetchingFriendList_61;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t1397773348 * ___mActors_62;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t3977425488* ___mOtherPlayerListCopy_63;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t3977425488* ___mPlayerListCopy_64;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_65;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t308267276 * ___allowedReceivingGroups_66;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t308267276 * ___blockSendingGroups_67;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t1496101608 * ___photonViewList_68;
	// PhotonStream NetworkingPeer::readStream
	PhotonStream_t1494272828 * ___readStream_69;
	// PhotonStream NetworkingPeer::pStream
	PhotonStream_t1494272828 * ___pStream_70;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t282209065 * ___dataPerGroupReliable_71;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t282209065 * ___dataPerGroupUnreliable_72;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_73;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_74;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	Il2CppObject * ___ObjectPool_76;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t1792344102 * ___monoRPCMethodsCache_78;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t1974256870 * ___rpcShortcuts_79;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t1105919721 * ___tempInstantiationData_81;
	// AuthenticationValues NetworkingPeer::<AuthValues>k__BackingField
	AuthenticationValues_t2964448730 * ___U3CAuthValuesU3Ek__BackingField_82;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_83;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_84;
	// System.String NetworkingPeer::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_85;
	// ServerConnection NetworkingPeer::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_86;
	// ClientState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_87;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t1020404140 * ___U3ClobbyU3Ek__BackingField_88;
	// PhotonPlayer NetworkingPeer::<LocalPlayer>k__BackingField
	PhotonPlayer_t1400510109 * ___U3CLocalPlayerU3Ek__BackingField_89;
	// System.Int32 NetworkingPeer::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_90;
	// System.Int32 NetworkingPeer::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_91;
	// System.Int32 NetworkingPeer::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_92;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t3812224484 * ___U3CAvailableRegionsU3Ek__BackingField_93;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_94;

public:
	inline static int32_t get_offset_of_AppId_43() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___AppId_43)); }
	inline String_t* get_AppId_43() const { return ___AppId_43; }
	inline String_t** get_address_of_AppId_43() { return &___AppId_43; }
	inline void set_AppId_43(String_t* value)
	{
		___AppId_43 = value;
		Il2CppCodeGenWriteBarrier(&___AppId_43, value);
	}

	inline static int32_t get_offset_of_tokenCache_44() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___tokenCache_44)); }
	inline String_t* get_tokenCache_44() const { return ___tokenCache_44; }
	inline String_t** get_address_of_tokenCache_44() { return &___tokenCache_44; }
	inline void set_tokenCache_44(String_t* value)
	{
		___tokenCache_44 = value;
		Il2CppCodeGenWriteBarrier(&___tokenCache_44, value);
	}

	inline static int32_t get_offset_of_AuthMode_45() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___AuthMode_45)); }
	inline int32_t get_AuthMode_45() const { return ___AuthMode_45; }
	inline int32_t* get_address_of_AuthMode_45() { return &___AuthMode_45; }
	inline void set_AuthMode_45(int32_t value)
	{
		___AuthMode_45 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_46() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___EncryptionMode_46)); }
	inline int32_t get_EncryptionMode_46() const { return ___EncryptionMode_46; }
	inline int32_t* get_address_of_EncryptionMode_46() { return &___EncryptionMode_46; }
	inline void set_EncryptionMode_46(int32_t value)
	{
		___EncryptionMode_46 = value;
	}

	inline static int32_t get_offset_of_IsInitialConnect_48() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___IsInitialConnect_48)); }
	inline bool get_IsInitialConnect_48() const { return ___IsInitialConnect_48; }
	inline bool* get_address_of_IsInitialConnect_48() { return &___IsInitialConnect_48; }
	inline void set_IsInitialConnect_48(bool value)
	{
		___IsInitialConnect_48 = value;
	}

	inline static int32_t get_offset_of_insideLobby_49() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___insideLobby_49)); }
	inline bool get_insideLobby_49() const { return ___insideLobby_49; }
	inline bool* get_address_of_insideLobby_49() { return &___insideLobby_49; }
	inline void set_insideLobby_49(bool value)
	{
		___insideLobby_49 = value;
	}

	inline static int32_t get_offset_of_LobbyStatistics_50() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___LobbyStatistics_50)); }
	inline List_1_t2952863562 * get_LobbyStatistics_50() const { return ___LobbyStatistics_50; }
	inline List_1_t2952863562 ** get_address_of_LobbyStatistics_50() { return &___LobbyStatistics_50; }
	inline void set_LobbyStatistics_50(List_1_t2952863562 * value)
	{
		___LobbyStatistics_50 = value;
		Il2CppCodeGenWriteBarrier(&___LobbyStatistics_50, value);
	}

	inline static int32_t get_offset_of_mGameList_51() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mGameList_51)); }
	inline Dictionary_2_t711421835 * get_mGameList_51() const { return ___mGameList_51; }
	inline Dictionary_2_t711421835 ** get_address_of_mGameList_51() { return &___mGameList_51; }
	inline void set_mGameList_51(Dictionary_2_t711421835 * value)
	{
		___mGameList_51 = value;
		Il2CppCodeGenWriteBarrier(&___mGameList_51, value);
	}

	inline static int32_t get_offset_of_mGameListCopy_52() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mGameListCopy_52)); }
	inline RoomInfoU5BU5D_t761346164* get_mGameListCopy_52() const { return ___mGameListCopy_52; }
	inline RoomInfoU5BU5D_t761346164** get_address_of_mGameListCopy_52() { return &___mGameListCopy_52; }
	inline void set_mGameListCopy_52(RoomInfoU5BU5D_t761346164* value)
	{
		___mGameListCopy_52 = value;
		Il2CppCodeGenWriteBarrier(&___mGameListCopy_52, value);
	}

	inline static int32_t get_offset_of_playername_53() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___playername_53)); }
	inline String_t* get_playername_53() const { return ___playername_53; }
	inline String_t** get_address_of_playername_53() { return &___playername_53; }
	inline void set_playername_53(String_t* value)
	{
		___playername_53 = value;
		Il2CppCodeGenWriteBarrier(&___playername_53, value);
	}

	inline static int32_t get_offset_of_mPlayernameHasToBeUpdated_54() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mPlayernameHasToBeUpdated_54)); }
	inline bool get_mPlayernameHasToBeUpdated_54() const { return ___mPlayernameHasToBeUpdated_54; }
	inline bool* get_address_of_mPlayernameHasToBeUpdated_54() { return &___mPlayernameHasToBeUpdated_54; }
	inline void set_mPlayernameHasToBeUpdated_54(bool value)
	{
		___mPlayernameHasToBeUpdated_54 = value;
	}

	inline static int32_t get_offset_of_currentRoom_55() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___currentRoom_55)); }
	inline Room_t2553083 * get_currentRoom_55() const { return ___currentRoom_55; }
	inline Room_t2553083 ** get_address_of_currentRoom_55() { return &___currentRoom_55; }
	inline void set_currentRoom_55(Room_t2553083 * value)
	{
		___currentRoom_55 = value;
		Il2CppCodeGenWriteBarrier(&___currentRoom_55, value);
	}

	inline static int32_t get_offset_of_lastJoinType_56() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___lastJoinType_56)); }
	inline int32_t get_lastJoinType_56() const { return ___lastJoinType_56; }
	inline int32_t* get_address_of_lastJoinType_56() { return &___lastJoinType_56; }
	inline void set_lastJoinType_56(int32_t value)
	{
		___lastJoinType_56 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_57() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___enterRoomParamsCache_57)); }
	inline EnterRoomParams_t1470694169 * get_enterRoomParamsCache_57() const { return ___enterRoomParamsCache_57; }
	inline EnterRoomParams_t1470694169 ** get_address_of_enterRoomParamsCache_57() { return &___enterRoomParamsCache_57; }
	inline void set_enterRoomParamsCache_57(EnterRoomParams_t1470694169 * value)
	{
		___enterRoomParamsCache_57 = value;
		Il2CppCodeGenWriteBarrier(&___enterRoomParamsCache_57, value);
	}

	inline static int32_t get_offset_of_didAuthenticate_58() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___didAuthenticate_58)); }
	inline bool get_didAuthenticate_58() const { return ___didAuthenticate_58; }
	inline bool* get_address_of_didAuthenticate_58() { return &___didAuthenticate_58; }
	inline void set_didAuthenticate_58(bool value)
	{
		___didAuthenticate_58 = value;
	}

	inline static int32_t get_offset_of_friendListRequested_59() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___friendListRequested_59)); }
	inline StringU5BU5D_t4054002952* get_friendListRequested_59() const { return ___friendListRequested_59; }
	inline StringU5BU5D_t4054002952** get_address_of_friendListRequested_59() { return &___friendListRequested_59; }
	inline void set_friendListRequested_59(StringU5BU5D_t4054002952* value)
	{
		___friendListRequested_59 = value;
		Il2CppCodeGenWriteBarrier(&___friendListRequested_59, value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_60() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___friendListTimestamp_60)); }
	inline int32_t get_friendListTimestamp_60() const { return ___friendListTimestamp_60; }
	inline int32_t* get_address_of_friendListTimestamp_60() { return &___friendListTimestamp_60; }
	inline void set_friendListTimestamp_60(int32_t value)
	{
		___friendListTimestamp_60 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_61() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___isFetchingFriendList_61)); }
	inline bool get_isFetchingFriendList_61() const { return ___isFetchingFriendList_61; }
	inline bool* get_address_of_isFetchingFriendList_61() { return &___isFetchingFriendList_61; }
	inline void set_isFetchingFriendList_61(bool value)
	{
		___isFetchingFriendList_61 = value;
	}

	inline static int32_t get_offset_of_mActors_62() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mActors_62)); }
	inline Dictionary_2_t1397773348 * get_mActors_62() const { return ___mActors_62; }
	inline Dictionary_2_t1397773348 ** get_address_of_mActors_62() { return &___mActors_62; }
	inline void set_mActors_62(Dictionary_2_t1397773348 * value)
	{
		___mActors_62 = value;
		Il2CppCodeGenWriteBarrier(&___mActors_62, value);
	}

	inline static int32_t get_offset_of_mOtherPlayerListCopy_63() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mOtherPlayerListCopy_63)); }
	inline PhotonPlayerU5BU5D_t3977425488* get_mOtherPlayerListCopy_63() const { return ___mOtherPlayerListCopy_63; }
	inline PhotonPlayerU5BU5D_t3977425488** get_address_of_mOtherPlayerListCopy_63() { return &___mOtherPlayerListCopy_63; }
	inline void set_mOtherPlayerListCopy_63(PhotonPlayerU5BU5D_t3977425488* value)
	{
		___mOtherPlayerListCopy_63 = value;
		Il2CppCodeGenWriteBarrier(&___mOtherPlayerListCopy_63, value);
	}

	inline static int32_t get_offset_of_mPlayerListCopy_64() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mPlayerListCopy_64)); }
	inline PhotonPlayerU5BU5D_t3977425488* get_mPlayerListCopy_64() const { return ___mPlayerListCopy_64; }
	inline PhotonPlayerU5BU5D_t3977425488** get_address_of_mPlayerListCopy_64() { return &___mPlayerListCopy_64; }
	inline void set_mPlayerListCopy_64(PhotonPlayerU5BU5D_t3977425488* value)
	{
		___mPlayerListCopy_64 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerListCopy_64, value);
	}

	inline static int32_t get_offset_of_hasSwitchedMC_65() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___hasSwitchedMC_65)); }
	inline bool get_hasSwitchedMC_65() const { return ___hasSwitchedMC_65; }
	inline bool* get_address_of_hasSwitchedMC_65() { return &___hasSwitchedMC_65; }
	inline void set_hasSwitchedMC_65(bool value)
	{
		___hasSwitchedMC_65 = value;
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_66() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___allowedReceivingGroups_66)); }
	inline HashSet_1_t308267276 * get_allowedReceivingGroups_66() const { return ___allowedReceivingGroups_66; }
	inline HashSet_1_t308267276 ** get_address_of_allowedReceivingGroups_66() { return &___allowedReceivingGroups_66; }
	inline void set_allowedReceivingGroups_66(HashSet_1_t308267276 * value)
	{
		___allowedReceivingGroups_66 = value;
		Il2CppCodeGenWriteBarrier(&___allowedReceivingGroups_66, value);
	}

	inline static int32_t get_offset_of_blockSendingGroups_67() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___blockSendingGroups_67)); }
	inline HashSet_1_t308267276 * get_blockSendingGroups_67() const { return ___blockSendingGroups_67; }
	inline HashSet_1_t308267276 ** get_address_of_blockSendingGroups_67() { return &___blockSendingGroups_67; }
	inline void set_blockSendingGroups_67(HashSet_1_t308267276 * value)
	{
		___blockSendingGroups_67 = value;
		Il2CppCodeGenWriteBarrier(&___blockSendingGroups_67, value);
	}

	inline static int32_t get_offset_of_photonViewList_68() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___photonViewList_68)); }
	inline Dictionary_2_t1496101608 * get_photonViewList_68() const { return ___photonViewList_68; }
	inline Dictionary_2_t1496101608 ** get_address_of_photonViewList_68() { return &___photonViewList_68; }
	inline void set_photonViewList_68(Dictionary_2_t1496101608 * value)
	{
		___photonViewList_68 = value;
		Il2CppCodeGenWriteBarrier(&___photonViewList_68, value);
	}

	inline static int32_t get_offset_of_readStream_69() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___readStream_69)); }
	inline PhotonStream_t1494272828 * get_readStream_69() const { return ___readStream_69; }
	inline PhotonStream_t1494272828 ** get_address_of_readStream_69() { return &___readStream_69; }
	inline void set_readStream_69(PhotonStream_t1494272828 * value)
	{
		___readStream_69 = value;
		Il2CppCodeGenWriteBarrier(&___readStream_69, value);
	}

	inline static int32_t get_offset_of_pStream_70() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___pStream_70)); }
	inline PhotonStream_t1494272828 * get_pStream_70() const { return ___pStream_70; }
	inline PhotonStream_t1494272828 ** get_address_of_pStream_70() { return &___pStream_70; }
	inline void set_pStream_70(PhotonStream_t1494272828 * value)
	{
		___pStream_70 = value;
		Il2CppCodeGenWriteBarrier(&___pStream_70, value);
	}

	inline static int32_t get_offset_of_dataPerGroupReliable_71() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___dataPerGroupReliable_71)); }
	inline Dictionary_2_t282209065 * get_dataPerGroupReliable_71() const { return ___dataPerGroupReliable_71; }
	inline Dictionary_2_t282209065 ** get_address_of_dataPerGroupReliable_71() { return &___dataPerGroupReliable_71; }
	inline void set_dataPerGroupReliable_71(Dictionary_2_t282209065 * value)
	{
		___dataPerGroupReliable_71 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupReliable_71, value);
	}

	inline static int32_t get_offset_of_dataPerGroupUnreliable_72() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___dataPerGroupUnreliable_72)); }
	inline Dictionary_2_t282209065 * get_dataPerGroupUnreliable_72() const { return ___dataPerGroupUnreliable_72; }
	inline Dictionary_2_t282209065 ** get_address_of_dataPerGroupUnreliable_72() { return &___dataPerGroupUnreliable_72; }
	inline void set_dataPerGroupUnreliable_72(Dictionary_2_t282209065 * value)
	{
		___dataPerGroupUnreliable_72 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupUnreliable_72, value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_73() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___currentLevelPrefix_73)); }
	inline int16_t get_currentLevelPrefix_73() const { return ___currentLevelPrefix_73; }
	inline int16_t* get_address_of_currentLevelPrefix_73() { return &___currentLevelPrefix_73; }
	inline void set_currentLevelPrefix_73(int16_t value)
	{
		___currentLevelPrefix_73 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_74() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___loadingLevelAndPausedNetwork_74)); }
	inline bool get_loadingLevelAndPausedNetwork_74() const { return ___loadingLevelAndPausedNetwork_74; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_74() { return &___loadingLevelAndPausedNetwork_74; }
	inline void set_loadingLevelAndPausedNetwork_74(bool value)
	{
		___loadingLevelAndPausedNetwork_74 = value;
	}

	inline static int32_t get_offset_of_ObjectPool_76() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___ObjectPool_76)); }
	inline Il2CppObject * get_ObjectPool_76() const { return ___ObjectPool_76; }
	inline Il2CppObject ** get_address_of_ObjectPool_76() { return &___ObjectPool_76; }
	inline void set_ObjectPool_76(Il2CppObject * value)
	{
		___ObjectPool_76 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectPool_76, value);
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_78() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___monoRPCMethodsCache_78)); }
	inline Dictionary_2_t1792344102 * get_monoRPCMethodsCache_78() const { return ___monoRPCMethodsCache_78; }
	inline Dictionary_2_t1792344102 ** get_address_of_monoRPCMethodsCache_78() { return &___monoRPCMethodsCache_78; }
	inline void set_monoRPCMethodsCache_78(Dictionary_2_t1792344102 * value)
	{
		___monoRPCMethodsCache_78 = value;
		Il2CppCodeGenWriteBarrier(&___monoRPCMethodsCache_78, value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_79() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___rpcShortcuts_79)); }
	inline Dictionary_2_t1974256870 * get_rpcShortcuts_79() const { return ___rpcShortcuts_79; }
	inline Dictionary_2_t1974256870 ** get_address_of_rpcShortcuts_79() { return &___rpcShortcuts_79; }
	inline void set_rpcShortcuts_79(Dictionary_2_t1974256870 * value)
	{
		___rpcShortcuts_79 = value;
		Il2CppCodeGenWriteBarrier(&___rpcShortcuts_79, value);
	}

	inline static int32_t get_offset_of_tempInstantiationData_81() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___tempInstantiationData_81)); }
	inline Dictionary_2_t1105919721 * get_tempInstantiationData_81() const { return ___tempInstantiationData_81; }
	inline Dictionary_2_t1105919721 ** get_address_of_tempInstantiationData_81() { return &___tempInstantiationData_81; }
	inline void set_tempInstantiationData_81(Dictionary_2_t1105919721 * value)
	{
		___tempInstantiationData_81 = value;
		Il2CppCodeGenWriteBarrier(&___tempInstantiationData_81, value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_82() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CAuthValuesU3Ek__BackingField_82)); }
	inline AuthenticationValues_t2964448730 * get_U3CAuthValuesU3Ek__BackingField_82() const { return ___U3CAuthValuesU3Ek__BackingField_82; }
	inline AuthenticationValues_t2964448730 ** get_address_of_U3CAuthValuesU3Ek__BackingField_82() { return &___U3CAuthValuesU3Ek__BackingField_82; }
	inline void set_U3CAuthValuesU3Ek__BackingField_82(AuthenticationValues_t2964448730 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_82 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAuthValuesU3Ek__BackingField_82, value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_83() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CIsUsingNameServerU3Ek__BackingField_83)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_83() const { return ___U3CIsUsingNameServerU3Ek__BackingField_83; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_83() { return &___U3CIsUsingNameServerU3Ek__BackingField_83; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_83(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_83 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_84() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CMasterServerAddressU3Ek__BackingField_84)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_84() const { return ___U3CMasterServerAddressU3Ek__BackingField_84; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_84() { return &___U3CMasterServerAddressU3Ek__BackingField_84; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_84(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_84 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMasterServerAddressU3Ek__BackingField_84, value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_85() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CGameServerAddressU3Ek__BackingField_85)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_85() const { return ___U3CGameServerAddressU3Ek__BackingField_85; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_85() { return &___U3CGameServerAddressU3Ek__BackingField_85; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_85(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_85 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameServerAddressU3Ek__BackingField_85, value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_86() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CServerU3Ek__BackingField_86)); }
	inline int32_t get_U3CServerU3Ek__BackingField_86() const { return ___U3CServerU3Ek__BackingField_86; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_86() { return &___U3CServerU3Ek__BackingField_86; }
	inline void set_U3CServerU3Ek__BackingField_86(int32_t value)
	{
		___U3CServerU3Ek__BackingField_86 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_87() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CStateU3Ek__BackingField_87)); }
	inline int32_t get_U3CStateU3Ek__BackingField_87() const { return ___U3CStateU3Ek__BackingField_87; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_87() { return &___U3CStateU3Ek__BackingField_87; }
	inline void set_U3CStateU3Ek__BackingField_87(int32_t value)
	{
		___U3CStateU3Ek__BackingField_87 = value;
	}

	inline static int32_t get_offset_of_U3ClobbyU3Ek__BackingField_88() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3ClobbyU3Ek__BackingField_88)); }
	inline TypedLobby_t1020404140 * get_U3ClobbyU3Ek__BackingField_88() const { return ___U3ClobbyU3Ek__BackingField_88; }
	inline TypedLobby_t1020404140 ** get_address_of_U3ClobbyU3Ek__BackingField_88() { return &___U3ClobbyU3Ek__BackingField_88; }
	inline void set_U3ClobbyU3Ek__BackingField_88(TypedLobby_t1020404140 * value)
	{
		___U3ClobbyU3Ek__BackingField_88 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClobbyU3Ek__BackingField_88, value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_89() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CLocalPlayerU3Ek__BackingField_89)); }
	inline PhotonPlayer_t1400510109 * get_U3CLocalPlayerU3Ek__BackingField_89() const { return ___U3CLocalPlayerU3Ek__BackingField_89; }
	inline PhotonPlayer_t1400510109 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_89() { return &___U3CLocalPlayerU3Ek__BackingField_89; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_89(PhotonPlayer_t1400510109 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_89 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLocalPlayerU3Ek__BackingField_89, value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_90() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CPlayersOnMasterCountU3Ek__BackingField_90)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_90() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_90; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_90() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_90; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_90(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_90 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_91() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CPlayersInRoomsCountU3Ek__BackingField_91)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_91() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_91; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_91() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_91; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_91(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_91 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_92() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CRoomsCountU3Ek__BackingField_92)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_92() const { return ___U3CRoomsCountU3Ek__BackingField_92; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_92() { return &___U3CRoomsCountU3Ek__BackingField_92; }
	inline void set_U3CRoomsCountU3Ek__BackingField_92(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_92 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CAvailableRegionsU3Ek__BackingField_93)); }
	inline List_1_t3812224484 * get_U3CAvailableRegionsU3Ek__BackingField_93() const { return ___U3CAvailableRegionsU3Ek__BackingField_93; }
	inline List_1_t3812224484 ** get_address_of_U3CAvailableRegionsU3Ek__BackingField_93() { return &___U3CAvailableRegionsU3Ek__BackingField_93; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_93(List_1_t3812224484 * value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_93 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvailableRegionsU3Ek__BackingField_93, value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_94() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CCloudRegionU3Ek__BackingField_94)); }
	inline int32_t get_U3CCloudRegionU3Ek__BackingField_94() const { return ___U3CCloudRegionU3Ek__BackingField_94; }
	inline int32_t* get_address_of_U3CCloudRegionU3Ek__BackingField_94() { return &___U3CCloudRegionU3Ek__BackingField_94; }
	inline void set_U3CCloudRegionU3Ek__BackingField_94(int32_t value)
	{
		___U3CCloudRegionU3Ek__BackingField_94 = value;
	}
};

struct NetworkingPeer_t1870069398_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t1482115843 * ___ProtocolToNameServerPort_47;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_75;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t200133079 * ___PrefabCache_77;
	// System.String NetworkingPeer::OnPhotonInstantiateString
	String_t* ___OnPhotonInstantiateString_80;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_47() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___ProtocolToNameServerPort_47)); }
	inline Dictionary_2_t1482115843 * get_ProtocolToNameServerPort_47() const { return ___ProtocolToNameServerPort_47; }
	inline Dictionary_2_t1482115843 ** get_address_of_ProtocolToNameServerPort_47() { return &___ProtocolToNameServerPort_47; }
	inline void set_ProtocolToNameServerPort_47(Dictionary_2_t1482115843 * value)
	{
		___ProtocolToNameServerPort_47 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_47, value);
	}

	inline static int32_t get_offset_of_UsePrefabCache_75() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___UsePrefabCache_75)); }
	inline bool get_UsePrefabCache_75() const { return ___UsePrefabCache_75; }
	inline bool* get_address_of_UsePrefabCache_75() { return &___UsePrefabCache_75; }
	inline void set_UsePrefabCache_75(bool value)
	{
		___UsePrefabCache_75 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_77() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___PrefabCache_77)); }
	inline Dictionary_2_t200133079 * get_PrefabCache_77() const { return ___PrefabCache_77; }
	inline Dictionary_2_t200133079 ** get_address_of_PrefabCache_77() { return &___PrefabCache_77; }
	inline void set_PrefabCache_77(Dictionary_2_t200133079 * value)
	{
		___PrefabCache_77 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabCache_77, value);
	}

	inline static int32_t get_offset_of_OnPhotonInstantiateString_80() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___OnPhotonInstantiateString_80)); }
	inline String_t* get_OnPhotonInstantiateString_80() const { return ___OnPhotonInstantiateString_80; }
	inline String_t** get_address_of_OnPhotonInstantiateString_80() { return &___OnPhotonInstantiateString_80; }
	inline void set_OnPhotonInstantiateString_80(String_t* value)
	{
		___OnPhotonInstantiateString_80 = value;
		Il2CppCodeGenWriteBarrier(&___OnPhotonInstantiateString_80, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
