// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TimeSlider
  class TimeSlider;
  // Forward declaring type: PercentSlider
  class PercentSlider;
  // Forward declaring type: RangeValuesTextSlider
  class RangeValuesTextSlider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: DataModels::Levels
namespace DataModels::Levels {
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD4
  #pragma pack(push, 1)
  // Autogenerated type: PracticeViewController
  class PracticeViewController : public HMUI::ViewController {
    public:
    // private HMUI.TimeSlider _songStartSlider
    // Size: 0x8
    // Offset: 0x70
    HMUI::TimeSlider* songStartSlider;
    // Field size check
    static_assert(sizeof(HMUI::TimeSlider*) == 0x8);
    // private HMUI.PercentSlider _speedSlider
    // Size: 0x8
    // Offset: 0x78
    HMUI::PercentSlider* speedSlider;
    // Field size check
    static_assert(sizeof(HMUI::PercentSlider*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26700
    // private UnityEngine.UI.Button _playButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* playButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xE26738
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE26748
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE26758
    // private readonly DataModels.Levels.PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0xA0
    DataModels::Levels::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26768
    // private System.Action didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private PracticeSettings _practiceSettings
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // private System.Single _currentPlayingStartTime
    // Size: 0x4
    // Offset: 0xB8
    float currentPlayingStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxStartSongTime
    // Size: 0x4
    // Offset: 0xBC
    float maxStartSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private IBeatmapLevel _level
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0xD0
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: PracticeViewController
    PracticeViewController(HMUI::TimeSlider* songStartSlider_ = {}, HMUI::PercentSlider* speedSlider_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::UI::Button* playButton_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, DataModels::Levels::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel_ = {}, System::Action* didPressPlayButtonEvent_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, float currentPlayingStartTime_ = {}, float maxStartSongTime_ = {}, GlobalNamespace::IBeatmapLevel* level_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}) noexcept : songStartSlider{songStartSlider_}, speedSlider{speedSlider_}, levelBar{levelBar_}, playButton{playButton_}, playerDataModel{playerDataModel_}, songPreviewPlayer{songPreviewPlayer_}, perceivedLoudnessPerLevelModel{perceivedLoudnessPerLevelModel_}, didPressPlayButtonEvent{didPressPlayButtonEvent_}, practiceSettings{practiceSettings_}, currentPlayingStartTime{currentPlayingStartTime_}, maxStartSongTime{maxStartSongTime_}, level{level_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_} {}
    // static field const value: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static constexpr const float kWaitBeforePlayPreviewAfterPreviewStartValueChanged = 1;
    // Get static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static float _get_kWaitBeforePlayPreviewAfterPreviewStartValueChanged();
    // Set static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static void _set_kWaitBeforePlayPreviewAfterPreviewStartValueChanged(float value);
    // static field const value: static private System.Single kMinValueChangeToInstantPlayPreview
    static constexpr const float kMinValueChangeToInstantPlayPreview = 3;
    // Get static field: static private System.Single kMinValueChangeToInstantPlayPreview
    static float _get_kMinValueChangeToInstantPlayPreview();
    // Set static field: static private System.Single kMinValueChangeToInstantPlayPreview
    static void _set_kMinValueChangeToInstantPlayPreview(float value);
    // public System.Void add_didPressPlayButtonEvent(System.Action value)
    // Offset: 0x10A617C
    void add_didPressPlayButtonEvent(System::Action* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action value)
    // Offset: 0x10A6220
    void remove_didPressPlayButtonEvent(System::Action* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0x10A62C4
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // public System.Void Init(IBeatmapLevel level, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x10A62CC
    void Init(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void PlayPreview()
    // Offset: 0x10A6784
    void PlayPreview();
    // private System.Void RefreshUI()
    // Offset: 0x10A663C
    void RefreshUI();
    // private System.Void HandleSpeedSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0x10A6980
    void HandleSpeedSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void HandleSongStartSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0x10A699C
    void HandleSongStartSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void PlayButtonPressed()
    // Offset: 0x10A6A40
    void PlayButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10A64D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10A6690
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10A6AEC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeViewController*, creationType>()));
    }
  }; // PracticeViewController
  #pragma pack(pop)
  static check_size<sizeof(PracticeViewController), 208 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_PracticeViewControllerSizeCheck;
  static_assert(sizeof(PracticeViewController) == 0xD4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeViewController*, "", "PracticeViewController");
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent
// Il2CppName: add_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(System::Action*)>(&GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent
// Il2CppName: remove_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(System::Action*)>(&GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::get_practiceSettings
// Il2CppName: get_practiceSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PracticeSettings* (GlobalNamespace::PracticeViewController::*)()>(&GlobalNamespace::PracticeViewController::get_practiceSettings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "get_practiceSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(GlobalNamespace::IBeatmapLevel*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::PracticeViewController::Init)> {
  const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, beatmapCharacteristic, beatmapDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::PlayPreview
// Il2CppName: PlayPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)()>(&GlobalNamespace::PracticeViewController::PlayPreview)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "PlayPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)()>(&GlobalNamespace::PracticeViewController::RefreshUI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::HandleSpeedSliderValueDidChange
// Il2CppName: HandleSpeedSliderValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(HMUI::RangeValuesTextSlider*, float)>(&GlobalNamespace::PracticeViewController::HandleSpeedSliderValueDidChange)> {
  const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "HandleSpeedSliderValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange
// Il2CppName: HandleSongStartSliderValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(HMUI::RangeValuesTextSlider*, float)>(&GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange)> {
  const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "HandleSongStartSliderValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::PlayButtonPressed
// Il2CppName: PlayButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)()>(&GlobalNamespace::PracticeViewController::PlayButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "PlayButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(bool, bool, bool)>(&GlobalNamespace::PracticeViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeViewController::*)(bool, bool)>(&GlobalNamespace::PracticeViewController::DidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
