// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayersMissingEntitlementsNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayersMissingEntitlementsNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // private System.Collections.Generic.List`1<System.String> _playersWithoutEntitlements
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* playersWithoutEntitlements;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: PlayersMissingEntitlementsNetSerializable
    PlayersMissingEntitlementsNetSerializable(System::Collections::Generic::List_1<::Il2CppString*>* playersWithoutEntitlements_ = {}) noexcept : playersWithoutEntitlements{playersWithoutEntitlements_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::List_1<::Il2CppString*>*
    constexpr operator System::Collections::Generic::List_1<::Il2CppString*>*() const noexcept {
      return playersWithoutEntitlements;
    }
    // public System.Collections.Generic.List`1<System.String> get_playersWithoutEntitlements()
    // Offset: 0x23291A4
    System::Collections::Generic::List_1<::Il2CppString*>* get_playersWithoutEntitlements();
    // public System.Void .ctor(System.Collections.Generic.List`1<System.String> playersWithoutEntitlements)
    // Offset: 0x23291B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersMissingEntitlementsNetSerializable* New_ctor(System::Collections::Generic::List_1<::Il2CppString*>* playersWithoutEntitlements) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersMissingEntitlementsNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersMissingEntitlementsNetSerializable*, creationType>(playersWithoutEntitlements)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x23291E0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23292F8
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x23291AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersMissingEntitlementsNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersMissingEntitlementsNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersMissingEntitlementsNetSerializable*, creationType>()));
    }
  }; // PlayersMissingEntitlementsNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayersMissingEntitlementsNetSerializable), 16 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __GlobalNamespace_PlayersMissingEntitlementsNetSerializableSizeCheck;
  static_assert(sizeof(PlayersMissingEntitlementsNetSerializable) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*, "", "PlayersMissingEntitlementsNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements
// Il2CppName: get_playersWithoutEntitlements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)()>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "get_playersWithoutEntitlements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
