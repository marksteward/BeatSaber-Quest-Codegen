// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PublicServerInfo
  struct PublicServerInfo : public System::ValueType/*, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>*/ {
    public:
    // public readonly System.String serverName
    // Offset: 0x0
    ::Il2CppString* serverName;
    // public readonly System.String code
    // Offset: 0x8
    ::Il2CppString* code;
    // public readonly System.Int32 currentPlayerCount
    // Offset: 0x10
    int currentPlayerCount;
    // public readonly System.Int32 maxPlayerCount
    // Offset: 0x14
    int maxPlayerCount;
    // public readonly System.Boolean hasPassword
    // Offset: 0x18
    bool hasPassword;
    // public readonly GameplayServerConfiguration configuration
    // Offset: 0x20
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Creating value type constructor for type: PublicServerInfo
    constexpr PublicServerInfo(::Il2CppString* serverName_ = {}, ::Il2CppString* code_ = {}, int currentPlayerCount_ = {}, int maxPlayerCount_ = {}, bool hasPassword_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : serverName{serverName_}, code{code_}, currentPlayerCount{currentPlayerCount_}, maxPlayerCount{maxPlayerCount_}, hasPassword{hasPassword_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>*>(this);
    }
    // public System.Void .ctor(System.String serverName, System.String code, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, System.Boolean hasPassword, GameplayServerConfiguration configuration)
    // Offset: 0xE50828
    // ABORTED: conflicts with another method.  PublicServerInfo(::Il2CppString* serverName, ::Il2CppString* code, int currentPlayerCount, int maxPlayerCount, bool hasPassword, GlobalNamespace::GameplayServerConfiguration configuration);
    // static public PublicServerInfo Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x21FA4C8
    static GlobalNamespace::PublicServerInfo Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE508B0
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public PublicServerInfo CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE508B8
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::PublicServerInfo CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::PublicServerInfo LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
  }; // PublicServerInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
#pragma pack(pop)
