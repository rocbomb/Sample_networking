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
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2395783613;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1433975096;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t132490578;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t659028201;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t2421928662;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t1428991998;

#include "mscorlib_System_Object4170816371.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel4219154439.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP2866239660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t1287581460  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_3;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_5;
	// System.Type ExitGames.Client.Photon.PhotonPeer::SocketImplementation
	Type_t * ___SocketImplementation_6;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_7;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	Il2CppObject * ___U3CListenerU3Ek__BackingField_8;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t1433975096 * ___U3CTrafficStatsIncomingU3Ek__BackingField_9;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t1433975096 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_10;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t132490578 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_11;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t3420517611 * ___trafficStatsStopwatch_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_13;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::commandLogSize
	int32_t ___commandLogSize_14;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_17;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_18;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_19;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_22;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_23;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_24;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_27;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t659028201 * ___peerBase_28;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Il2CppObject * ___SendOutgoingLockObject_29;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Il2CppObject * ___DispatchLockObject_30;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Il2CppObject * ___EnqueueLock_31;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_t4260760469* ___PayloadEncryptionSecret_32;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::encryptor
	Encryptor_t2421928662 * ___encryptor_33;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::decryptor
	Decryptor_t1428991998 * ___decryptor_34;

public:
	inline static int32_t get_offset_of_ClientSdkId_3() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___ClientSdkId_3)); }
	inline uint8_t get_ClientSdkId_3() const { return ___ClientSdkId_3; }
	inline uint8_t* get_address_of_ClientSdkId_3() { return &___ClientSdkId_3; }
	inline void set_ClientSdkId_3(uint8_t value)
	{
		___ClientSdkId_3 = value;
	}

	inline static int32_t get_offset_of_clientVersion_5() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___clientVersion_5)); }
	inline String_t* get_clientVersion_5() const { return ___clientVersion_5; }
	inline String_t** get_address_of_clientVersion_5() { return &___clientVersion_5; }
	inline void set_clientVersion_5(String_t* value)
	{
		___clientVersion_5 = value;
		Il2CppCodeGenWriteBarrier(&___clientVersion_5, value);
	}

	inline static int32_t get_offset_of_SocketImplementation_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SocketImplementation_6)); }
	inline Type_t * get_SocketImplementation_6() const { return ___SocketImplementation_6; }
	inline Type_t ** get_address_of_SocketImplementation_6() { return &___SocketImplementation_6; }
	inline void set_SocketImplementation_6(Type_t * value)
	{
		___SocketImplementation_6 = value;
		Il2CppCodeGenWriteBarrier(&___SocketImplementation_6, value);
	}

	inline static int32_t get_offset_of_DebugOut_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DebugOut_7)); }
	inline uint8_t get_DebugOut_7() const { return ___DebugOut_7; }
	inline uint8_t* get_address_of_DebugOut_7() { return &___DebugOut_7; }
	inline void set_DebugOut_7(uint8_t value)
	{
		___DebugOut_7 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CListenerU3Ek__BackingField_8)); }
	inline Il2CppObject * get_U3CListenerU3Ek__BackingField_8() const { return ___U3CListenerU3Ek__BackingField_8; }
	inline Il2CppObject ** get_address_of_U3CListenerU3Ek__BackingField_8() { return &___U3CListenerU3Ek__BackingField_8; }
	inline void set_U3CListenerU3Ek__BackingField_8(Il2CppObject * value)
	{
		___U3CListenerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CListenerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsIncomingU3Ek__BackingField_9)); }
	inline TrafficStats_t1433975096 * get_U3CTrafficStatsIncomingU3Ek__BackingField_9() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_9; }
	inline TrafficStats_t1433975096 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_9() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_9; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_9(TrafficStats_t1433975096 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsIncomingU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsOutgoingU3Ek__BackingField_10)); }
	inline TrafficStats_t1433975096 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_10() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_10; }
	inline TrafficStats_t1433975096 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_10() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_10; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_10(TrafficStats_t1433975096 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsOutgoingU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTrafficStatsGameLevelU3Ek__BackingField_11)); }
	inline TrafficStatsGameLevel_t132490578 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_11() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_11; }
	inline TrafficStatsGameLevel_t132490578 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_11() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_11; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_11(TrafficStatsGameLevel_t132490578 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrafficStatsGameLevelU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___trafficStatsStopwatch_12)); }
	inline Stopwatch_t3420517611 * get_trafficStatsStopwatch_12() const { return ___trafficStatsStopwatch_12; }
	inline Stopwatch_t3420517611 ** get_address_of_trafficStatsStopwatch_12() { return &___trafficStatsStopwatch_12; }
	inline void set_trafficStatsStopwatch_12(Stopwatch_t3420517611 * value)
	{
		___trafficStatsStopwatch_12 = value;
		Il2CppCodeGenWriteBarrier(&___trafficStatsStopwatch_12, value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___trafficStatsEnabled_13)); }
	inline bool get_trafficStatsEnabled_13() const { return ___trafficStatsEnabled_13; }
	inline bool* get_address_of_trafficStatsEnabled_13() { return &___trafficStatsEnabled_13; }
	inline void set_trafficStatsEnabled_13(bool value)
	{
		___trafficStatsEnabled_13 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___commandLogSize_14)); }
	inline int32_t get_commandLogSize_14() const { return ___commandLogSize_14; }
	inline int32_t* get_address_of_commandLogSize_14() { return &___commandLogSize_14; }
	inline void set_commandLogSize_14(int32_t value)
	{
		___commandLogSize_14 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___quickResendAttempts_15)); }
	inline uint8_t get_quickResendAttempts_15() const { return ___quickResendAttempts_15; }
	inline uint8_t* get_address_of_quickResendAttempts_15() { return &___quickResendAttempts_15; }
	inline void set_quickResendAttempts_15(uint8_t value)
	{
		___quickResendAttempts_15 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___RhttpMinConnections_16)); }
	inline int32_t get_RhttpMinConnections_16() const { return ___RhttpMinConnections_16; }
	inline int32_t* get_address_of_RhttpMinConnections_16() { return &___RhttpMinConnections_16; }
	inline void set_RhttpMinConnections_16(int32_t value)
	{
		___RhttpMinConnections_16 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___RhttpMaxConnections_17)); }
	inline int32_t get_RhttpMaxConnections_17() const { return ___RhttpMaxConnections_17; }
	inline int32_t* get_address_of_RhttpMaxConnections_17() { return &___RhttpMaxConnections_17; }
	inline void set_RhttpMaxConnections_17(int32_t value)
	{
		___RhttpMaxConnections_17 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_18)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_18() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_18() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_18; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_18(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___ChannelCount_19)); }
	inline uint8_t get_ChannelCount_19() const { return ___ChannelCount_19; }
	inline uint8_t* get_address_of_ChannelCount_19() { return &___ChannelCount_19; }
	inline void set_ChannelCount_19(uint8_t value)
	{
		___ChannelCount_19 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___crcEnabled_20)); }
	inline bool get_crcEnabled_20() const { return ___crcEnabled_20; }
	inline bool* get_address_of_crcEnabled_20() { return &___crcEnabled_20; }
	inline void set_crcEnabled_20(bool value)
	{
		___crcEnabled_20 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SentCountAllowance_21)); }
	inline int32_t get_SentCountAllowance_21() const { return ___SentCountAllowance_21; }
	inline int32_t* get_address_of_SentCountAllowance_21() { return &___SentCountAllowance_21; }
	inline void set_SentCountAllowance_21(int32_t value)
	{
		___SentCountAllowance_21 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___TimePingInterval_22)); }
	inline int32_t get_TimePingInterval_22() const { return ___TimePingInterval_22; }
	inline int32_t* get_address_of_TimePingInterval_22() { return &___TimePingInterval_22; }
	inline void set_TimePingInterval_22(int32_t value)
	{
		___TimePingInterval_22 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DisconnectTimeout_23)); }
	inline int32_t get_DisconnectTimeout_23() const { return ___DisconnectTimeout_23; }
	inline int32_t* get_address_of_DisconnectTimeout_23() { return &___DisconnectTimeout_23; }
	inline void set_DisconnectTimeout_23(int32_t value)
	{
		___DisconnectTimeout_23 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CTransportProtocolU3Ek__BackingField_24)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_24() const { return ___U3CTransportProtocolU3Ek__BackingField_24; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_24() { return &___U3CTransportProtocolU3Ek__BackingField_24; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_24(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_mtu_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___mtu_26)); }
	inline int32_t get_mtu_26() const { return ___mtu_26; }
	inline int32_t* get_address_of_mtu_26() { return &___mtu_26; }
	inline void set_mtu_26(int32_t value)
	{
		___mtu_26 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___U3CIsSendingOnlyAcksU3Ek__BackingField_27)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_27() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_27() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_27; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_27(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_peerBase_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___peerBase_28)); }
	inline PeerBase_t659028201 * get_peerBase_28() const { return ___peerBase_28; }
	inline PeerBase_t659028201 ** get_address_of_peerBase_28() { return &___peerBase_28; }
	inline void set_peerBase_28(PeerBase_t659028201 * value)
	{
		___peerBase_28 = value;
		Il2CppCodeGenWriteBarrier(&___peerBase_28, value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___SendOutgoingLockObject_29)); }
	inline Il2CppObject * get_SendOutgoingLockObject_29() const { return ___SendOutgoingLockObject_29; }
	inline Il2CppObject ** get_address_of_SendOutgoingLockObject_29() { return &___SendOutgoingLockObject_29; }
	inline void set_SendOutgoingLockObject_29(Il2CppObject * value)
	{
		___SendOutgoingLockObject_29 = value;
		Il2CppCodeGenWriteBarrier(&___SendOutgoingLockObject_29, value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___DispatchLockObject_30)); }
	inline Il2CppObject * get_DispatchLockObject_30() const { return ___DispatchLockObject_30; }
	inline Il2CppObject ** get_address_of_DispatchLockObject_30() { return &___DispatchLockObject_30; }
	inline void set_DispatchLockObject_30(Il2CppObject * value)
	{
		___DispatchLockObject_30 = value;
		Il2CppCodeGenWriteBarrier(&___DispatchLockObject_30, value);
	}

	inline static int32_t get_offset_of_EnqueueLock_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___EnqueueLock_31)); }
	inline Il2CppObject * get_EnqueueLock_31() const { return ___EnqueueLock_31; }
	inline Il2CppObject ** get_address_of_EnqueueLock_31() { return &___EnqueueLock_31; }
	inline void set_EnqueueLock_31(Il2CppObject * value)
	{
		___EnqueueLock_31 = value;
		Il2CppCodeGenWriteBarrier(&___EnqueueLock_31, value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___PayloadEncryptionSecret_32)); }
	inline ByteU5BU5D_t4260760469* get_PayloadEncryptionSecret_32() const { return ___PayloadEncryptionSecret_32; }
	inline ByteU5BU5D_t4260760469** get_address_of_PayloadEncryptionSecret_32() { return &___PayloadEncryptionSecret_32; }
	inline void set_PayloadEncryptionSecret_32(ByteU5BU5D_t4260760469* value)
	{
		___PayloadEncryptionSecret_32 = value;
		Il2CppCodeGenWriteBarrier(&___PayloadEncryptionSecret_32, value);
	}

	inline static int32_t get_offset_of_encryptor_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___encryptor_33)); }
	inline Encryptor_t2421928662 * get_encryptor_33() const { return ___encryptor_33; }
	inline Encryptor_t2421928662 ** get_address_of_encryptor_33() { return &___encryptor_33; }
	inline void set_encryptor_33(Encryptor_t2421928662 * value)
	{
		___encryptor_33 = value;
		Il2CppCodeGenWriteBarrier(&___encryptor_33, value);
	}

	inline static int32_t get_offset_of_decryptor_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460, ___decryptor_34)); }
	inline Decryptor_t1428991998 * get_decryptor_34() const { return ___decryptor_34; }
	inline Decryptor_t1428991998 ** get_address_of_decryptor_34() { return &___decryptor_34; }
	inline void set_decryptor_34(Decryptor_t1428991998 * value)
	{
		___decryptor_34 = value;
		Il2CppCodeGenWriteBarrier(&___decryptor_34, value);
	}
};

struct PhotonPeer_t1287581460_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_4;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_25;

public:
	inline static int32_t get_offset_of_AsyncKeyExchange_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460_StaticFields, ___AsyncKeyExchange_4)); }
	inline bool get_AsyncKeyExchange_4() const { return ___AsyncKeyExchange_4; }
	inline bool* get_address_of_AsyncKeyExchange_4() { return &___AsyncKeyExchange_4; }
	inline void set_AsyncKeyExchange_4(bool value)
	{
		___AsyncKeyExchange_4 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t1287581460_StaticFields, ___OutgoingStreamBufferSize_25)); }
	inline int32_t get_OutgoingStreamBufferSize_25() const { return ___OutgoingStreamBufferSize_25; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_25() { return &___OutgoingStreamBufferSize_25; }
	inline void set_OutgoingStreamBufferSize_25(int32_t value)
	{
		___OutgoingStreamBufferSize_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
