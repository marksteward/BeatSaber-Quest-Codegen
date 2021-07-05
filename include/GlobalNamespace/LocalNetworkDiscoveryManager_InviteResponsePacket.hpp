// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/InviteResponsePacket
  class LocalNetworkDiscoveryManager::InviteResponsePacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean accepted
    // Size: 0x1
    // Offset: 0x18
    bool accepted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean blocked
    // Size: 0x1
    // Offset: 0x19
    bool blocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InviteResponsePacket
    InviteResponsePacket(::Il2CppString* userId_ = {}, bool accepted_ = {}, bool blocked_ = {}) noexcept : userId{userId_}, accepted{accepted_}, blocked{blocked_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x23FB808
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23FB85C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x23F987C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::InviteResponsePacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::InviteResponsePacket*, creationType>()));
    }
  }; // LocalNetworkDiscoveryManager/InviteResponsePacket
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkDiscoveryManager::InviteResponsePacket), 25 + sizeof(bool)> __GlobalNamespace_LocalNetworkDiscoveryManager_InviteResponsePacketSizeCheck;
  static_assert(sizeof(LocalNetworkDiscoveryManager::InviteResponsePacket) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket*, "", "LocalNetworkDiscoveryManager/InviteResponsePacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
