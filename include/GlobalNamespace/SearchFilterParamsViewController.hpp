// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicsDropdown
  class BeatmapCharacteristicsDropdown;
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: SongPacksDropdown
  class SongPacksDropdown;
  // Forward declaring type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: SearchFilterParamsViewController
  class SearchFilterParamsViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Toggle _filterByOwnedToggle
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Toggle* filterByOwnedToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByCharacteristicToggle
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Toggle* filterByCharacteristicToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private BeatmapCharacteristicsDropdown _beatmapCharacteristicsDropdown
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapCharacteristicsDropdown* beatmapCharacteristicsDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicsDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByDifficultyToggle
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Toggle* filterByDifficultyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterBySongPacksToggle
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Toggle* filterBySongPacksToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private SongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::SongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPacksDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByNotPlayedYetToggle
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Toggle* filterByNotPlayedYetToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByMinBpmToggle
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::UI::Toggle* filterByMinBpmToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private FormattedFloatListSettingsController _minBpmController
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::FormattedFloatListSettingsController* minBpmController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByMaxBpmToggle
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::UI::Toggle* filterByMaxBpmToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private FormattedFloatListSettingsController _maxBpmController
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::FormattedFloatListSettingsController* maxBpmController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private LevelFilterParams _currentLevelFilterParams
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::LevelFilterParams* currentLevelFilterParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilterParams*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2529C
    // private System.Action`2<SearchFilterParamsViewController,LevelFilterParams> didFinishEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>*) == 0x8);
    // Creating value type constructor for type: SearchFilterParamsViewController
    SearchFilterParamsViewController(UnityEngine::UI::Toggle* filterByOwnedToggle_ = {}, UnityEngine::UI::Toggle* filterByCharacteristicToggle_ = {}, GlobalNamespace::BeatmapCharacteristicsDropdown* beatmapCharacteristicsDropdown_ = {}, UnityEngine::UI::Toggle* filterByDifficultyToggle_ = {}, GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown_ = {}, UnityEngine::UI::Toggle* filterBySongPacksToggle_ = {}, GlobalNamespace::SongPacksDropdown* songPacksDropdown_ = {}, UnityEngine::UI::Toggle* filterByNotPlayedYetToggle_ = {}, UnityEngine::UI::Toggle* filterByMinBpmToggle_ = {}, GlobalNamespace::FormattedFloatListSettingsController* minBpmController_ = {}, UnityEngine::UI::Toggle* filterByMaxBpmToggle_ = {}, GlobalNamespace::FormattedFloatListSettingsController* maxBpmController_ = {}, UnityEngine::UI::Button* okButton_ = {}, GlobalNamespace::LevelFilterParams* currentLevelFilterParams_ = {}, System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>* didFinishEvent_ = {}) noexcept : filterByOwnedToggle{filterByOwnedToggle_}, filterByCharacteristicToggle{filterByCharacteristicToggle_}, beatmapCharacteristicsDropdown{beatmapCharacteristicsDropdown_}, filterByDifficultyToggle{filterByDifficultyToggle_}, beatmapDifficultyDropdown{beatmapDifficultyDropdown_}, filterBySongPacksToggle{filterBySongPacksToggle_}, songPacksDropdown{songPacksDropdown_}, filterByNotPlayedYetToggle{filterByNotPlayedYetToggle_}, filterByMinBpmToggle{filterByMinBpmToggle_}, minBpmController{minBpmController_}, filterByMaxBpmToggle{filterByMaxBpmToggle_}, maxBpmController{maxBpmController_}, okButton{okButton_}, currentLevelFilterParams{currentLevelFilterParams_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<SearchFilterParamsViewController,LevelFilterParams> value)
    // Offset: 0x10D8E64
    void add_didFinishEvent(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SearchFilterParamsViewController,LevelFilterParams> value)
    // Offset: 0x10D8F08
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void Setup(LevelFilterParams levelFilterParams)
    // Offset: 0x10D8FAC
    void Setup(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void OkButtonPressed()
    // Offset: 0x10D93B0
    void OkButtonPressed();
    // private System.Void MinBpmControllerValueDidChange(FormattedFloatListSettingsController minBpmController, System.Single value)
    // Offset: 0x10D95C8
    void MinBpmControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* minBpmController, float value);
    // private System.Void MaxBpmControllerValueDidChange(FormattedFloatListSettingsController maxBpmController, System.Single value)
    // Offset: 0x10D9660
    void MaxBpmControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* maxBpmController, float value);
    // private System.Void Refresh(LevelFilterParams levelFilterParams)
    // Offset: 0x10D8FB4
    void Refresh(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10D9158
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10D92BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10D96F8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchFilterParamsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SearchFilterParamsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchFilterParamsViewController*, creationType>()));
    }
  }; // SearchFilterParamsViewController
  #pragma pack(pop)
  static check_size<sizeof(SearchFilterParamsViewController), 224 + sizeof(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>*)> __GlobalNamespace_SearchFilterParamsViewControllerSizeCheck;
  static_assert(sizeof(SearchFilterParamsViewController) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SearchFilterParamsViewController*, "", "SearchFilterParamsViewController");
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SearchFilterParamsViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(System::Action_2<GlobalNamespace::SearchFilterParamsViewController*, GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SearchFilterParamsViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::SearchFilterParamsViewController::Setup)> {
  const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)()>(&GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "OkButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange
// Il2CppName: MinBpmControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange)> {
  const MethodInfo* get() {
    static auto* minBpmController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "MinBpmControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minBpmController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange
// Il2CppName: MaxBpmControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange)> {
  const MethodInfo* get() {
    static auto* maxBpmController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "MaxBpmControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxBpmController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::SearchFilterParamsViewController::Refresh)> {
  const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool, bool)>(&GlobalNamespace::SearchFilterParamsViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool)>(&GlobalNamespace::SearchFilterParamsViewController::DidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
