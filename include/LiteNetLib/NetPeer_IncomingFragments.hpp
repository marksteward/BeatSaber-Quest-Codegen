// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPeer/IncomingFragments
  class NetPeer::IncomingFragments : public ::Il2CppObject {
    public:
    // public LiteNetLib.NetPacket[] Fragments
    // Size: 0x8
    // Offset: 0x10
    ::Array<LiteNetLib::NetPacket*>* Fragments;
    // Field size check
    static_assert(sizeof(::Array<LiteNetLib::NetPacket*>*) == 0x8);
    // public System.Int32 ReceivedCount
    // Size: 0x4
    // Offset: 0x18
    int ReceivedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TotalSize
    // Size: 0x4
    // Offset: 0x1C
    int TotalSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte ChannelId
    // Size: 0x1
    // Offset: 0x20
    uint8_t ChannelId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: IncomingFragments
    IncomingFragments(::Array<LiteNetLib::NetPacket*>* Fragments_ = {}, int ReceivedCount_ = {}, int TotalSize_ = {}, uint8_t ChannelId_ = {}) noexcept : Fragments{Fragments_}, ReceivedCount{ReceivedCount_}, TotalSize{TotalSize_}, ChannelId{ChannelId_} {}
    // public System.Void .ctor()
    // Offset: 0x1B478A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPeer::IncomingFragments* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPeer::IncomingFragments::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPeer::IncomingFragments*, creationType>()));
    }
  }; // LiteNetLib.NetPeer/IncomingFragments
  #pragma pack(pop)
  static check_size<sizeof(NetPeer::IncomingFragments), 32 + sizeof(uint8_t)> __LiteNetLib_NetPeer_IncomingFragmentsSizeCheck;
  static_assert(sizeof(NetPeer::IncomingFragments) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPeer::IncomingFragments*, "LiteNetLib", "NetPeer/IncomingFragments");
// Writing MetadataGetter for method: LiteNetLib::NetPeer::IncomingFragments::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
