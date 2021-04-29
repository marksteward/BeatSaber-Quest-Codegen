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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // [CompilerGeneratedAttribute] Offset: 0xD1B244
    // private PlayerSpecificSettingsNetSerializable <localPlayerSpecificSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettingsNetSerializable*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD1B254
    // private PlayerSpecificSettingsAtStartNetSerializable <playersAtGameStartNetSerializable>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*) == 0x8);
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: PlayersSpecificSettingsAtGameStartModel
    PlayersSpecificSettingsAtGameStartModel(GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings_ = {}, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : localPlayerSpecificSettings{localPlayerSpecificSettings_}, playersAtGameStartNetSerializable{playersAtGameStartNetSerializable_}, multiplayerSessionManager{multiplayerSessionManager_} {}
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_playersAtGameStart()
    // Offset: 0x15E78CC
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* get_playersAtGameStart();
    // public PlayerSpecificSettingsNetSerializable get_localPlayerSpecificSettings()
    // Offset: 0x15E78E4
    GlobalNamespace::PlayerSpecificSettingsNetSerializable* get_localPlayerSpecificSettings();
    // private System.Void set_localPlayerSpecificSettings(PlayerSpecificSettingsNetSerializable value)
    // Offset: 0x15E78EC
    void set_localPlayerSpecificSettings(GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);
    // public PlayerSpecificSettingsAtStartNetSerializable get_playersAtGameStartNetSerializable()
    // Offset: 0x15E78F4
    GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* get_playersAtGameStartNetSerializable();
    // private System.Void set_playersAtGameStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable value)
    // Offset: 0x15E78FC
    void set_playersAtGameStartNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings)
    // Offset: 0x15E7904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersSpecificSettingsAtGameStartModel* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersSpecificSettingsAtGameStartModel*, creationType>(multiplayerSessionManager, localPlayerSpecificSettings)));
    }
    // public PlayerSpecificSettingsNetSerializable GetPlayerSpecificSettingsForUserId(System.String userId)
    // Offset: 0x15E7988
    GlobalNamespace::PlayerSpecificSettingsNetSerializable* GetPlayerSpecificSettingsForUserId(::Il2CppString* userId);
    // public System.Void SaveFromNetSerializable(PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable)
    // Offset: 0x15E7CB0
    void SaveFromNetSerializable(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable);
  }; // PlayersSpecificSettingsAtGameStartModel
  #pragma pack(pop)
  static check_size<sizeof(PlayersSpecificSettingsAtGameStartModel), 32 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_PlayersSpecificSettingsAtGameStartModelSizeCheck;
  static_assert(sizeof(PlayersSpecificSettingsAtGameStartModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, "", "PlayersSpecificSettingsAtGameStartModel");
