// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.BaseChannel
#include "LiteNetLib/BaseChannel.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.ReliableChannel
  class ReliableChannel : public LiteNetLib::BaseChannel {
    public:
    // Nested type: LiteNetLib::ReliableChannel::PendingPacket
    struct PendingPacket;
    // Size: 0x11
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: LiteNetLib.ReliableChannel/PendingPacket
    struct PendingPacket/*, public System::ValueType*/ {
      public:
      // private LiteNetLib.NetPacket _packet
      // Size: 0x8
      // Offset: 0x0
      LiteNetLib::NetPacket* packet;
      // Field size check
      static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
      // private System.Int64 _timeStamp
      // Size: 0x8
      // Offset: 0x8
      int64_t timeStamp;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // private System.Boolean _isSent
      // Size: 0x1
      // Offset: 0x10
      bool isSent;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: PendingPacket
      constexpr PendingPacket(LiteNetLib::NetPacket* packet_ = {}, int64_t timeStamp_ = {}, bool isSent_ = {}) noexcept : packet{packet_}, timeStamp{timeStamp_}, isSent{isSent_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void Init(LiteNetLib.NetPacket packet)
      // Offset: 0xF06FAC
      void Init(LiteNetLib::NetPacket* packet);
      // public System.Void TrySend(System.Int64 currentTime, LiteNetLib.NetPeer peer)
      // Offset: 0xF06FB8
      void TrySend(int64_t currentTime, LiteNetLib::NetPeer* peer);
      // public System.Boolean Clear(LiteNetLib.NetPeer peer)
      // Offset: 0xF06FC0
      bool Clear(LiteNetLib::NetPeer* peer);
      // public override System.String ToString()
      // Offset: 0xF06FA4
      // Implemented from: System.ValueType
      // Base method: System.String ValueType::ToString()
      ::Il2CppString* ToString();
    }; // LiteNetLib.ReliableChannel/PendingPacket
    #pragma pack(pop)
    static check_size<sizeof(ReliableChannel::PendingPacket), 16 + sizeof(bool)> __LiteNetLib_ReliableChannel_PendingPacketSizeCheck;
    static_assert(sizeof(ReliableChannel::PendingPacket) == 0x11);
    // private readonly LiteNetLib.NetPacket _outgoingAcks
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::NetPacket* outgoingAcks;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.ReliableChannel/PendingPacket[] _pendingPackets
    // Size: 0x8
    // Offset: 0x30
    ::Array<LiteNetLib::ReliableChannel::PendingPacket>* pendingPackets;
    // Field size check
    static_assert(sizeof(::Array<LiteNetLib::ReliableChannel::PendingPacket>*) == 0x8);
    // private readonly LiteNetLib.NetPacket[] _receivedPackets
    // Size: 0x8
    // Offset: 0x38
    ::Array<LiteNetLib::NetPacket*>* receivedPackets;
    // Field size check
    static_assert(sizeof(::Array<LiteNetLib::NetPacket*>*) == 0x8);
    // private readonly System.Boolean[] _earlyReceived
    // Size: 0x8
    // Offset: 0x40
    ::Array<bool>* earlyReceived;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.Int32 _localSeqence
    // Size: 0x4
    // Offset: 0x48
    int localSeqence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remoteSequence
    // Size: 0x4
    // Offset: 0x4C
    int remoteSequence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _localWindowStart
    // Size: 0x4
    // Offset: 0x50
    int localWindowStart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remoteWindowStart
    // Size: 0x4
    // Offset: 0x54
    int remoteWindowStart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _mustSendAcks
    // Size: 0x1
    // Offset: 0x58
    bool mustSendAcks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly LiteNetLib.DeliveryMethod _deliveryMethod
    // Size: 0x1
    // Offset: 0x59
    LiteNetLib::DeliveryMethod deliveryMethod;
    // Field size check
    static_assert(sizeof(LiteNetLib::DeliveryMethod) == 0x1);
    // private readonly System.Boolean _ordered
    // Size: 0x1
    // Offset: 0x5A
    bool ordered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ordered and: windowSize
    char __padding10[0x1] = {};
    // private readonly System.Int32 _windowSize
    // Size: 0x4
    // Offset: 0x5C
    int windowSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Byte _id
    // Size: 0x1
    // Offset: 0x60
    uint8_t id;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: ReliableChannel
    ReliableChannel(LiteNetLib::NetPacket* outgoingAcks_ = {}, ::Array<LiteNetLib::ReliableChannel::PendingPacket>* pendingPackets_ = {}, ::Array<LiteNetLib::NetPacket*>* receivedPackets_ = {}, ::Array<bool>* earlyReceived_ = {}, int localSeqence_ = {}, int remoteSequence_ = {}, int localWindowStart_ = {}, int remoteWindowStart_ = {}, bool mustSendAcks_ = {}, LiteNetLib::DeliveryMethod deliveryMethod_ = {}, bool ordered_ = {}, int windowSize_ = {}, uint8_t id_ = {}) noexcept : outgoingAcks{outgoingAcks_}, pendingPackets{pendingPackets_}, receivedPackets{receivedPackets_}, earlyReceived{earlyReceived_}, localSeqence{localSeqence_}, remoteSequence{remoteSequence_}, localWindowStart{localWindowStart_}, remoteWindowStart{remoteWindowStart_}, mustSendAcks{mustSendAcks_}, deliveryMethod{deliveryMethod_}, ordered{ordered_}, windowSize{windowSize_}, id{id_} {}
    // static field const value: static private System.Int32 BitsInByte
    static constexpr const int BitsInByte = 8;
    // Get static field: static private System.Int32 BitsInByte
    static int _get_BitsInByte();
    // Set static field: static private System.Int32 BitsInByte
    static void _set_BitsInByte(int value);
    // public System.Void .ctor(LiteNetLib.NetPeer peer, System.Boolean ordered, System.Byte id)
    // Offset: 0x1B468B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReliableChannel* New_ctor(LiteNetLib::NetPeer* peer, bool ordered, uint8_t id) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::ReliableChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReliableChannel*, creationType>(peer, ordered, id)));
    }
    // private System.Void ProcessAck(LiteNetLib.NetPacket packet)
    // Offset: 0x1B49FC0
    void ProcessAck(LiteNetLib::NetPacket* packet);
    // public override System.Void SendNextPackets()
    // Offset: 0x1B4A344
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Void BaseChannel::SendNextPackets()
    void SendNextPackets();
    // public override System.Boolean ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0x1B4A808
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Boolean BaseChannel::ProcessPacket(LiteNetLib.NetPacket packet)
    bool ProcessPacket(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.ReliableChannel
  #pragma pack(pop)
  static check_size<sizeof(ReliableChannel), 96 + sizeof(uint8_t)> __LiteNetLib_ReliableChannelSizeCheck;
  static_assert(sizeof(ReliableChannel) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ReliableChannel*, "LiteNetLib", "ReliableChannel");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ReliableChannel::PendingPacket, "LiteNetLib", "ReliableChannel/PendingPacket");
// Writing MetadataGetter for method: LiteNetLib::ReliableChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::ReliableChannel::ProcessAck
// Il2CppName: ProcessAck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ReliableChannel::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::ReliableChannel::ProcessAck)> {
  const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ReliableChannel*), "ProcessAck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ReliableChannel::SendNextPackets
// Il2CppName: SendNextPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ReliableChannel::*)()>(&LiteNetLib::ReliableChannel::SendNextPackets)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ReliableChannel*), "SendNextPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ReliableChannel::ProcessPacket
// Il2CppName: ProcessPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::ReliableChannel::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::ReliableChannel::ProcessPacket)> {
  const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ReliableChannel*), "ProcessPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
