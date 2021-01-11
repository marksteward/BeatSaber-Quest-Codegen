// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/KickPlayerPacket
  // [] Offset: FFFFFFFF
  class ConnectedPlayerManager::KickPlayerPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // public DisconnectedReason disconnectedReason
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // Creating value type constructor for type: KickPlayerPacket
    KickPlayerPacket(GlobalNamespace::DisconnectedReason disconnectedReason_ = {}) noexcept : disconnectedReason{disconnectedReason_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::DisconnectedReason
    constexpr operator GlobalNamespace::DisconnectedReason() const noexcept {
      return disconnectedReason;
    }
    // static public PacketPool`1<ConnectedPlayerManager/KickPlayerPacket> get_pool()
    // Offset: 0x1B470B4
    static GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket*>* get_pool();
    // public ConnectedPlayerManager/KickPlayerPacket Init(DisconnectedReason disconnectedReason)
    // Offset: 0x1B47F0C
    GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket* Init(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B49DE8
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B49DFC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1B49440
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1B49E28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::KickPlayerPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::KickPlayerPacket*, creationType>()));
    }
  }; // ConnectedPlayerManager/KickPlayerPacket
  static check_size<sizeof(ConnectedPlayerManager::KickPlayerPacket), 16 + sizeof(GlobalNamespace::DisconnectedReason)> __GlobalNamespace_ConnectedPlayerManager_KickPlayerPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::KickPlayerPacket) == 0x14);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket*, "", "ConnectedPlayerManager/KickPlayerPacket");
