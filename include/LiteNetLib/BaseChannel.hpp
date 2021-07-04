// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.BaseChannel
  class BaseChannel : public ::Il2CppObject {
    public:
    // public LiteNetLib.BaseChannel Next
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::BaseChannel* Next;
    // Field size check
    static_assert(sizeof(LiteNetLib::BaseChannel*) == 0x8);
    // protected readonly LiteNetLib.NetPeer Peer
    // Size: 0x8
    // Offset: 0x18
    LiteNetLib::NetPeer* Peer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // protected readonly System.Collections.Generic.Queue`1<LiteNetLib.NetPacket> OutgoingQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>* OutgoingQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>*) == 0x8);
    // Creating value type constructor for type: BaseChannel
    BaseChannel(LiteNetLib::BaseChannel* Next_ = {}, LiteNetLib::NetPeer* Peer_ = {}, System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>* OutgoingQueue_ = {}) noexcept : Next{Next_}, Peer{Peer_}, OutgoingQueue{OutgoingQueue_} {}
    // protected System.Void .ctor(LiteNetLib.NetPeer peer)
    // Offset: 0x1B38D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseChannel* New_ctor(LiteNetLib::NetPeer* peer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::BaseChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseChannel*, creationType>(peer)));
    }
    // public System.Int32 get_PacketsInQueue()
    // Offset: 0x1B38DEC
    int get_PacketsInQueue();
    // public System.Void AddToQueue(LiteNetLib.NetPacket packet)
    // Offset: 0x1B38E3C
    void AddToQueue(LiteNetLib::NetPacket* packet);
    // public System.Void SendNextPackets()
    // Offset: 0xFFFFFFFF
    void SendNextPackets();
    // public System.Boolean ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0xFFFFFFFF
    bool ProcessPacket(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.BaseChannel
  #pragma pack(pop)
  static check_size<sizeof(BaseChannel), 32 + sizeof(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>*)> __LiteNetLib_BaseChannelSizeCheck;
  static_assert(sizeof(BaseChannel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::BaseChannel*, "LiteNetLib", "BaseChannel");
// Writing MetadataGetter for method: LiteNetLib::BaseChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::BaseChannel::get_PacketsInQueue
// Il2CppName: get_PacketsInQueue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::BaseChannel::AddToQueue
// Il2CppName: AddToQueue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::BaseChannel::SendNextPackets
// Il2CppName: SendNextPackets
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::BaseChannel::ProcessPacket
// Il2CppName: ProcessPacket
// Cannot perform method pointer template specialization from operators!
