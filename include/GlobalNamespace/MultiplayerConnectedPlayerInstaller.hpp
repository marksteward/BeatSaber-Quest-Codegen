// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerNoteEventManager
  class MultiplayerConnectedPlayerNoteEventManager;
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerBombNoteController
  class MultiplayerConnectedPlayerBombNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerObstacleController
  class MultiplayerConnectedPlayerObstacleController;
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerInstaller : public Zenject::MonoInstaller {
    public:
    // private MultiplayerConnectedPlayerSongTimeSyncController _connectedPlayerAudioTimeSyncControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* connectedPlayerAudioTimeSyncControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // private MultiplayerConnectedPlayerNoteEventManager _connectedPlayerNoteEventManagerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager* connectedPlayerNoteEventManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*) == 0x8);
    // [SpaceAttribute] Offset: 0xE07348
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerBombNoteController _multiplayerBombNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* multiplayerBombNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerObstacleController _multiplayerObstacleControllerPrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerConnectedPlayerObstacleController* multiplayerObstacleControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerObstacleController*) == 0x8);
    // [SpaceAttribute] Offset: 0xE073A0
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // [SpaceAttribute] Offset: 0xE073E8
    // private BoolSO _screenDisplacementEffectsEnabled
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE07420
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE07430
    // private readonly MultiplayerPlayerStartState _localPlayerStartState
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // Padding between fields: localPlayerStartState and: sceneSetupData
    char __padding9[0x4] = {};
    // [InjectAttribute] Offset: 0xE07440
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xE07450
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersSpecificSettingsAtGameStartModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerInstaller
    MultiplayerConnectedPlayerInstaller(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* connectedPlayerAudioTimeSyncControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager* connectedPlayerNoteEventManagerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerGameNoteControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* multiplayerBombNoteControllerPrefab_ = {}, GlobalNamespace::MultiplayerConnectedPlayerObstacleController* multiplayerObstacleControllerPrefab_ = {}, GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab_ = {}, GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel_ = {}) noexcept : connectedPlayerAudioTimeSyncControllerPrefab{connectedPlayerAudioTimeSyncControllerPrefab_}, connectedPlayerNoteEventManagerPrefab{connectedPlayerNoteEventManagerPrefab_}, multiplayerGameNoteControllerPrefab{multiplayerGameNoteControllerPrefab_}, multiplayerBombNoteControllerPrefab{multiplayerBombNoteControllerPrefab_}, multiplayerObstacleControllerPrefab{multiplayerObstacleControllerPrefab_}, beatmapObjectSpawnControllerPlayerHeightSetterPrefab{beatmapObjectSpawnControllerPlayerHeightSetterPrefab_}, playerHeightDetectorPrefab{playerHeightDetectorPrefab_}, screenDisplacementEffectsEnabled{screenDisplacementEffectsEnabled_}, connectedPlayer{connectedPlayer_}, localPlayerStartState{localPlayerStartState_}, sceneSetupData{sceneSetupData_}, playersSpecificSettingsAtGameStartModel{playersSpecificSettingsAtGameStartModel_} {}
    // public System.Void .ctor()
    // Offset: 0x11A39F4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x11A2950
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerConnectedPlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerInstaller), 120 + sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)> __GlobalNamespace_MultiplayerConnectedPlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerInstaller) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerInstaller*, "", "MultiplayerConnectedPlayerInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
