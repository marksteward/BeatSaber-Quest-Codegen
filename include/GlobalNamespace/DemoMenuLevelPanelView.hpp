// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: LocalLeaderboardTableView
  class LocalLeaderboardTableView;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: DemoMenuLevelPanelView
  class DemoMenuLevelPanelView : public UnityEngine::MonoBehaviour {
    public:
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26D50
    // private UnityEngine.UI.Button _playButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* playButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _difficultyText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* difficultyText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private LocalLeaderboardTableView _localLeaderboardTableView
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::LocalLeaderboardTableView* localLeaderboardTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardTableView*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26DB8
    // private System.Action`1<DemoMenuLevelPanelView> playButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* playButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x48
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: DemoMenuLevelPanelView
    DemoMenuLevelPanelView(GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel_ = {}, UnityEngine::UI::Button* playButton_ = {}, TMPro::TextMeshProUGUI* songNameText_ = {}, TMPro::TextMeshProUGUI* difficultyText_ = {}, GlobalNamespace::LocalLeaderboardTableView* localLeaderboardTableView_ = {}, System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* playButtonWasPressedEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : localLeaderboardsModel{localLeaderboardsModel_}, playButton{playButton_}, songNameText{songNameText_}, difficultyText{difficultyText_}, localLeaderboardTableView{localLeaderboardTableView_}, playButtonWasPressedEvent{playButtonWasPressedEvent_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfCells
    static constexpr const int kMaxNumberOfCells = 10;
    // Get static field: static private System.Int32 kMaxNumberOfCells
    static int _get_kMaxNumberOfCells();
    // Set static field: static private System.Int32 kMaxNumberOfCells
    static void _set_kMaxNumberOfCells(int value);
    // public System.Void add_playButtonWasPressedEvent(System.Action`1<DemoMenuLevelPanelView> value)
    // Offset: 0x1034268
    void add_playButtonWasPressedEvent(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* value);
    // public System.Void remove_playButtonWasPressedEvent(System.Action`1<DemoMenuLevelPanelView> value)
    // Offset: 0x103430C
    void remove_playButtonWasPressedEvent(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* value);
    // protected System.Void Start()
    // Offset: 0x10343B0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1034450
    void OnDestroy();
    // public System.Void Init(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1034464
    void Init(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void PlayButtonWasPressed()
    // Offset: 0x10346A0
    void PlayButtonWasPressed();
    // public System.Void .ctor()
    // Offset: 0x1034704
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DemoMenuLevelPanelView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DemoMenuLevelPanelView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DemoMenuLevelPanelView*, creationType>()));
    }
  }; // DemoMenuLevelPanelView
  #pragma pack(pop)
  static check_size<sizeof(DemoMenuLevelPanelView), 72 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_DemoMenuLevelPanelViewSizeCheck;
  static_assert(sizeof(DemoMenuLevelPanelView) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DemoMenuLevelPanelView*, "", "DemoMenuLevelPanelView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::add_playButtonWasPressedEvent
// Il2CppName: add_playButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>*)>(&GlobalNamespace::DemoMenuLevelPanelView::add_playButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DemoMenuLevelPanelView")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "add_playButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::remove_playButtonWasPressedEvent
// Il2CppName: remove_playButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>*)>(&GlobalNamespace::DemoMenuLevelPanelView::remove_playButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DemoMenuLevelPanelView")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "remove_playButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)()>(&GlobalNamespace::DemoMenuLevelPanelView::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)()>(&GlobalNamespace::DemoMenuLevelPanelView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::DemoMenuLevelPanelView::Init)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::PlayButtonWasPressed
// Il2CppName: PlayButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DemoMenuLevelPanelView::*)()>(&GlobalNamespace::DemoMenuLevelPanelView::PlayButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DemoMenuLevelPanelView*), "PlayButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DemoMenuLevelPanelView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
