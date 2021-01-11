// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ServerStatusUpdateMessage
  // [] Offset: FFFFFFFF
  class PartyMessageHandler::ServerStatusUpdateMessage : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // public System.String serverName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public DiscoveryPolicy discoveryPolicy
    // Size: 0x1
    // Offset: 0x20
    GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiscoveryPolicy) == 0x1);
    // Padding between fields: discoveryPolicy and: invitePolicy
    char __padding2[0x3] = {};
    // public InvitePolicy invitePolicy
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::InvitePolicy invitePolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InvitePolicy) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x28
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxPlayerCount and: configuration
    char __padding4[0x4] = {};
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: ServerStatusUpdateMessage
    ServerStatusUpdateMessage(::Il2CppString* serverName_ = {}, ::Il2CppString* password_ = {}, GlobalNamespace::DiscoveryPolicy discoveryPolicy_ = {}, GlobalNamespace::InvitePolicy invitePolicy_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : serverName{serverName_}, password{password_}, discoveryPolicy{discoveryPolicy_}, invitePolicy{invitePolicy_}, maxPlayerCount{maxPlayerCount_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // static public PacketPool`1<PartyMessageHandler/ServerStatusUpdateMessage> get_pool()
    // Offset: 0x1E51288
    static GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>* get_pool();
    // public PartyMessageHandler/ServerStatusUpdateMessage Init(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x1E5158C
    GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* Init(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1E52ADC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1E52B60
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1E51C6C
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1E52C18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ServerStatusUpdateMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ServerStatusUpdateMessage*, creationType>()));
    }
  }; // PartyMessageHandler/ServerStatusUpdateMessage
  static check_size<sizeof(PartyMessageHandler::ServerStatusUpdateMessage), 48 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_PartyMessageHandler_ServerStatusUpdateMessageSizeCheck;
  static_assert(sizeof(PartyMessageHandler::ServerStatusUpdateMessage) == 0x48);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*, "", "PartyMessageHandler/ServerStatusUpdateMessage");
