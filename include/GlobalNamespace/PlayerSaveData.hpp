// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VersionSaveData
#include "GlobalNamespace/VersionSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData : public GlobalNamespace::VersionSaveData {
    public:
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers
    class GameplayModifiers;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerSpecificSettings
    class PlayerSpecificSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData
    class PlayerAllOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerLevelStatsData
    class PlayerLevelStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerMissionStatsData
    class PlayerMissionStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PracticeSettings
    class PracticeSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::ColorScheme
    class ColorScheme;
    // Nested type: GlobalNamespace::PlayerSaveData::ColorSchemesSettings
    class ColorSchemesSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings
    class OverrideEnvironmentSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::GuestPlayer
    class GuestPlayer;
    // Nested type: GlobalNamespace::PlayerSaveData::MultiplayerModeSettings
    class MultiplayerModeSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::LocalPlayer
    class LocalPlayer;
    // public System.Collections.Generic.List`1<PlayerSaveData/LocalPlayer> localPlayers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::LocalPlayer*>* localPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::LocalPlayer*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/GuestPlayer> guestPlayers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::GuestPlayer*>* guestPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::GuestPlayer*>*) == 0x8);
    // Creating value type constructor for type: PlayerSaveData
    PlayerSaveData(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::LocalPlayer*>* localPlayers_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::GuestPlayer*>* guestPlayers_ = {}) noexcept : localPlayers{localPlayers_}, guestPlayers{guestPlayers_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // static field const value: static public System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.17";
    // Get static field: static public System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static public System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x110210C
    // Implemented from: VersionSaveData
    // Base method: System.Void VersionSaveData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData*, creationType>()));
    }
  }; // PlayerSaveData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::GuestPlayer*>*)> __GlobalNamespace_PlayerSaveDataSizeCheck;
  static_assert(sizeof(PlayerSaveData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData*, "", "PlayerSaveData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
