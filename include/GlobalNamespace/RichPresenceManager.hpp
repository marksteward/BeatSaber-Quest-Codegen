// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: IRichPresencePlatformHandler
  class IRichPresencePlatformHandler;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: LobbyGameStateModel
  class LobbyGameStateModel;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData;
  // Forward declaring type: InMultiplayerRichPresenceData
  class InMultiplayerRichPresenceData;
  // Forward declaring type: PlayingCampaignRichPresenceData
  class PlayingCampaignRichPresenceData;
  // Forward declaring type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData;
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
  // Forward declaring type: MultiplayerGameState
  struct MultiplayerGameState;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: RichPresenceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RichPresenceManager : public UnityEngine::MonoBehaviour {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FAC
    // private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FBC
    // private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRichPresencePlatformHandler*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FCC
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FDC
    // private readonly LobbyGameStateModel _lobbyGameStateModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LobbyGameStateModel* lobbyGameStateModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameStateModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FEC
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE02FFC
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private System.Boolean _menuWasLoaded
    // Size: 0x1
    // Offset: 0x68
    bool menuWasLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInMultiplayerLobby
    // Size: 0x1
    // Offset: 0x69
    bool isInMultiplayerLobby;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInMultiplayerLobby and: browsingMenusRichPresenceData
    char __padding11[0x6] = {};
    // private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BrowsingMenusRichPresenceData*) == 0x8);
    // private InMultiplayerRichPresenceData _inMultiplayerRichPresenceData
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::InMultiplayerRichPresenceData* inMultiplayerRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InMultiplayerRichPresenceData*) == 0x8);
    // private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingCampaignRichPresenceData*) == 0x8);
    // private PlayingTutorialPresenceData _playingTutorialPresenceData
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingTutorialPresenceData*) == 0x8);
    // private IRichPresenceData _currentPresenceData
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IRichPresenceData* currentPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRichPresenceData*) == 0x8);
    // Creating value type constructor for type: RichPresenceManager
    RichPresenceManager(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData_ = {}, GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::LobbyGameStateModel* lobbyGameStateModel_ = {}, GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, bool menuWasLoaded_ = {}, bool isInMultiplayerLobby_ = {}, GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData_ = {}, GlobalNamespace::InMultiplayerRichPresenceData* inMultiplayerRichPresenceData_ = {}, GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData_ = {}, GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData_ = {}, GlobalNamespace::IRichPresenceData* currentPresenceData_ = {}) noexcept : standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, tutorialScenesTransitionSetupData{tutorialScenesTransitionSetupData_}, missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, menuScenesTransitionSetupData{menuScenesTransitionSetupData_}, richPresencePlatformHandler{richPresencePlatformHandler_}, gameScenesManager{gameScenesManager_}, lobbyGameStateModel{lobbyGameStateModel_}, unifiedNetworkPlayerModel{unifiedNetworkPlayerModel_}, playerDataModel{playerDataModel_}, menuWasLoaded{menuWasLoaded_}, isInMultiplayerLobby{isInMultiplayerLobby_}, browsingMenusRichPresenceData{browsingMenusRichPresenceData_}, inMultiplayerRichPresenceData{inMultiplayerRichPresenceData_}, playingCampaignRichPresenceData{playingCampaignRichPresenceData_}, playingTutorialPresenceData{playingTutorialPresenceData_}, currentPresenceData{currentPresenceData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _get__standardLevelScenesTransitionSetupData();
    // Set instance field: private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    void _set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);
    // Get instance field: private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO* _get__tutorialScenesTransitionSetupData();
    // Set instance field: private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    void _set__tutorialScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // Get instance field: private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _get__missionLevelScenesTransitionSetupData();
    // Set instance field: private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    void _set__missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);
    // Get instance field: private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* _get__multiplayerLevelScenesTransitionSetupData();
    // Set instance field: private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    void _set__multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);
    // Get instance field: private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    GlobalNamespace::MenuScenesTransitionSetupDataSO* _get__menuScenesTransitionSetupData();
    // Set instance field: private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    void _set__menuScenesTransitionSetupData(GlobalNamespace::MenuScenesTransitionSetupDataSO* value);
    // Get instance field: private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    GlobalNamespace::IRichPresencePlatformHandler* _get__richPresencePlatformHandler();
    // Set instance field: private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    void _set__richPresencePlatformHandler(GlobalNamespace::IRichPresencePlatformHandler* value);
    // Get instance field: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private readonly GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // Get instance field: private readonly LobbyGameStateModel _lobbyGameStateModel
    GlobalNamespace::LobbyGameStateModel* _get__lobbyGameStateModel();
    // Set instance field: private readonly LobbyGameStateModel _lobbyGameStateModel
    void _set__lobbyGameStateModel(GlobalNamespace::LobbyGameStateModel* value);
    // Get instance field: private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    GlobalNamespace::IUnifiedNetworkPlayerModel* _get__unifiedNetworkPlayerModel();
    // Set instance field: private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    void _set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel* value);
    // Get instance field: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel* _get__playerDataModel();
    // Set instance field: private readonly PlayerDataModel _playerDataModel
    void _set__playerDataModel(GlobalNamespace::PlayerDataModel* value);
    // Get instance field: private System.Boolean _menuWasLoaded
    bool _get__menuWasLoaded();
    // Set instance field: private System.Boolean _menuWasLoaded
    void _set__menuWasLoaded(bool value);
    // Get instance field: private System.Boolean _isInMultiplayerLobby
    bool _get__isInMultiplayerLobby();
    // Set instance field: private System.Boolean _isInMultiplayerLobby
    void _set__isInMultiplayerLobby(bool value);
    // Get instance field: private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    GlobalNamespace::BrowsingMenusRichPresenceData* _get__browsingMenusRichPresenceData();
    // Set instance field: private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    void _set__browsingMenusRichPresenceData(GlobalNamespace::BrowsingMenusRichPresenceData* value);
    // Get instance field: private InMultiplayerRichPresenceData _inMultiplayerRichPresenceData
    GlobalNamespace::InMultiplayerRichPresenceData* _get__inMultiplayerRichPresenceData();
    // Set instance field: private InMultiplayerRichPresenceData _inMultiplayerRichPresenceData
    void _set__inMultiplayerRichPresenceData(GlobalNamespace::InMultiplayerRichPresenceData* value);
    // Get instance field: private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    GlobalNamespace::PlayingCampaignRichPresenceData* _get__playingCampaignRichPresenceData();
    // Set instance field: private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    void _set__playingCampaignRichPresenceData(GlobalNamespace::PlayingCampaignRichPresenceData* value);
    // Get instance field: private PlayingTutorialPresenceData _playingTutorialPresenceData
    GlobalNamespace::PlayingTutorialPresenceData* _get__playingTutorialPresenceData();
    // Set instance field: private PlayingTutorialPresenceData _playingTutorialPresenceData
    void _set__playingTutorialPresenceData(GlobalNamespace::PlayingTutorialPresenceData* value);
    // Get instance field: private IRichPresenceData _currentPresenceData
    GlobalNamespace::IRichPresenceData* _get__currentPresenceData();
    // Set instance field: private IRichPresenceData _currentPresenceData
    void _set__currentPresenceData(GlobalNamespace::IRichPresenceData* value);
    // protected System.Void Awake()
    // Offset: 0x114518C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1145318
    void OnDestroy();
    // private System.Void HandleLobbyGameStateModelDidChange(MultiplayerGameState newGameState)
    // Offset: 0x11454BC
    void HandleLobbyGameStateModelDidChange(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void SetMenuPresence()
    // Offset: 0x11454D8
    void SetMenuPresence();
    // private System.Void HandleGameScenesManagerTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer diContainer)
    // Offset: 0x1145758
    void HandleGameScenesManagerTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* diContainer);
    // private System.Void HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence()
    // Offset: 0x1145AFC
    void HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence();
    // private System.Void SetPresence(IRichPresenceData presenceData)
    // Offset: 0x1145694
    void SetPresence(GlobalNamespace::IRichPresenceData* presenceData);
    // private System.Void Clear()
    // Offset: 0x1145A44
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1145CF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RichPresenceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceManager*, creationType>()));
    }
  }; // RichPresenceManager
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceManager), 144 + sizeof(GlobalNamespace::IRichPresenceData*)> __GlobalNamespace_RichPresenceManagerSizeCheck;
  static_assert(sizeof(RichPresenceManager) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange
// Il2CppName: HandleLobbyGameStateModelDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange)> {
  static const MethodInfo* get() {
    static auto* newGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleLobbyGameStateModelDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::SetMenuPresence
// Il2CppName: SetMenuPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::SetMenuPresence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "SetMenuPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish
// Il2CppName: HandleGameScenesManagerTransitionDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*)>(&GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* diContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleGameScenesManagerTransitionDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, diContainer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence
// Il2CppName: HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandlePlayerDataDidChangeShareMultiplayerLobbyCodeInRichPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::IRichPresenceData*)>(&GlobalNamespace::RichPresenceManager::SetPresence)> {
  static const MethodInfo* get() {
    static auto* presenceData = &::il2cpp_utils::GetClassFromName("", "IRichPresenceData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{presenceData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
