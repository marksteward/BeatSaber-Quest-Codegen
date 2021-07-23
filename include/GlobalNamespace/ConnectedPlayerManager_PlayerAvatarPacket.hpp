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
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
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
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PlayerAvatarPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PlayerAvatarPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // public MultiplayerAvatarData playerAvatar
    // Size: 0x70
    // Offset: 0x10
    GlobalNamespace::MultiplayerAvatarData playerAvatar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarData) == 0x70);
    // Creating value type constructor for type: PlayerAvatarPacket
    PlayerAvatarPacket(GlobalNamespace::MultiplayerAvatarData playerAvatar_ = {}) noexcept : playerAvatar{playerAvatar_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::MultiplayerAvatarData
    constexpr operator GlobalNamespace::MultiplayerAvatarData() const noexcept {
      return playerAvatar;
    }
    // Get instance field: public MultiplayerAvatarData playerAvatar
    GlobalNamespace::MultiplayerAvatarData _get_playerAvatar();
    // Set instance field: public MultiplayerAvatarData playerAvatar
    void _set_playerAvatar(GlobalNamespace::MultiplayerAvatarData value);
    // static public PacketPool`1<ConnectedPlayerManager/PlayerAvatarPacket> get_pool()
    // Offset: 0x12BD614
    static GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12C0588
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12C0594
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x12C05D8
    void Release();
    // public ConnectedPlayerManager/PlayerAvatarPacket Init(MultiplayerAvatarData avatar)
    // Offset: 0x12C035C
    GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket* Init(GlobalNamespace::MultiplayerAvatarData avatar);
    // public System.Void .ctor()
    // Offset: 0x12C0634
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PlayerAvatarPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PlayerAvatarPacket*, creationType>()));
    }
  }; // ConnectedPlayerManager/PlayerAvatarPacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PlayerAvatarPacket), 16 + sizeof(GlobalNamespace::MultiplayerAvatarData)> __GlobalNamespace_ConnectedPlayerManager_PlayerAvatarPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PlayerAvatarPacket) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*, "", "ConnectedPlayerManager/PlayerAvatarPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket* (GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::Init)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerAvatarPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
