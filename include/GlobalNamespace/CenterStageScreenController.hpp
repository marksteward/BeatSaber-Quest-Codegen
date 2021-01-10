// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
  // Forward declaring type: CountdownController
  class CountdownController;
  // Forward declaring type: MultiplayerLobbyCenterScreenLayoutAnimator
  class MultiplayerLobbyCenterScreenLayoutAnimator;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  // Autogenerated type: CenterStageScreenController
  // [] Offset: FFFFFFFF
  class CenterStageScreenController : public UnityEngine::MonoBehaviour {
    public:
    // protected MenuLightsPresetSO _defaultMenuLightsPreset
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuLightsPresetSO* defaultMenuLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _lobbyLightsPreset
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MenuLightsPresetSO* lobbyLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _countdownMenuLightsPreset
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuLightsPresetSO* countdownMenuLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD06B0
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ModifiersSelectionView*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD06F8
    // private CountdownController _countdownController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CountdownController* countdownController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CountdownController*) == 0x8);
    // private MultiplayerLobbyCenterScreenLayoutAnimator _multiplayerLobbyCenterScreenLayoutAnimator
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* multiplayerLobbyCenterScreenLayoutAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0740
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0750
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0760
    // private System.Boolean <countdownShown>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool countdownShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownShown and: countdownEndTime
    char __padding9[0x3] = {};
    // private System.Single _countdownEndTime
    // Size: 0x4
    // Offset: 0x64
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: CenterStageScreenController
    CenterStageScreenController(GlobalNamespace::MenuLightsPresetSO* defaultMenuLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* lobbyLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* countdownMenuLightsPreset_ = {}, GlobalNamespace::BeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::ModifiersSelectionView* modifiersSelectionView_ = {}, GlobalNamespace::CountdownController* countdownController_ = {}, GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* multiplayerLobbyCenterScreenLayoutAnimator_ = {}, GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, bool countdownShown_ = {}, float countdownEndTime_ = {}) noexcept : defaultMenuLightsPreset{defaultMenuLightsPreset_}, lobbyLightsPreset{lobbyLightsPreset_}, countdownMenuLightsPreset{countdownMenuLightsPreset_}, beatmapSelectionView{beatmapSelectionView_}, modifiersSelectionView{modifiersSelectionView_}, countdownController{countdownController_}, multiplayerLobbyCenterScreenLayoutAnimator{multiplayerLobbyCenterScreenLayoutAnimator_}, lobbyPlayersDataModel{lobbyPlayersDataModel_}, menuLightsManager{menuLightsManager_}, countdownShown{countdownShown_}, countdownEndTime{countdownEndTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_countdownShown()
    // Offset: 0x1A33C18
    bool get_countdownShown();
    // private System.Void set_countdownShown(System.Boolean value)
    // Offset: 0x1A33C20
    void set_countdownShown(bool value);
    // public System.Void Setup(System.Boolean showModifiers)
    // Offset: 0x1A33C2C
    void Setup(bool showModifiers);
    // public System.Void Show()
    // Offset: 0x1A33C68
    void Show();
    // public System.Void Hide()
    // Offset: 0x1A341F0
    void Hide();
    // public System.Void ShowCountdown(System.Single countdownEndTime)
    // Offset: 0x1A3436C
    void ShowCountdown(float countdownEndTime);
    // public System.Void HideCountdown(System.Boolean instant)
    // Offset: 0x1A34324
    void HideCountdown(bool instant);
    // public System.Void SetCountdownEndTime(System.Single countdownEndTime)
    // Offset: 0x1A343B4
    void SetCountdownEndTime(float countdownEndTime);
    // public System.Void ShowCountdownColorPreset(System.Boolean animated)
    // Offset: 0x1A3441C
    void ShowCountdownColorPreset(bool animated);
    // public System.Void ShowLobbyColorPreset(System.Boolean animated)
    // Offset: 0x1A33EB0
    void ShowLobbyColorPreset(bool animated);
    // public System.Void SetHostDataManual(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x1A34448
    void SetHostDataManual(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void SetNextGameData(ILobbyPlayerDataModel playerData)
    // Offset: 0x1A33EDC
    void SetNextGameData(GlobalNamespace::ILobbyPlayerDataModel* playerData);
    // private System.Void HandleLobbyPlayersDataModelDidChange(System.String userId)
    // Offset: 0x1A34470
    void HandleLobbyPlayersDataModelDidChange(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1A345D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CenterStageScreenController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CenterStageScreenController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CenterStageScreenController*, creationType>()));
    }
  }; // CenterStageScreenController
  static check_size<sizeof(CenterStageScreenController), 100 + sizeof(float)> __GlobalNamespace_CenterStageScreenControllerSizeCheck;
  static_assert(sizeof(CenterStageScreenController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CenterStageScreenController*, "", "CenterStageScreenController");
#pragma pack(pop)
