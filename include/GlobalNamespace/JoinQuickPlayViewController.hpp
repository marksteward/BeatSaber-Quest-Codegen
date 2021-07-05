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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: QuickPlaySongPacksDropdown
  class QuickPlaySongPacksDropdown;
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: JoinQuickPlayViewController
  class JoinQuickPlayViewController : public HMUI::ViewController {
    public:
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // private QuickPlaySongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::QuickPlaySongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuickPlaySongPacksDropdown*) == 0x8);
    // private UnityEngine.UI.Button _joinButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* joinButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelJoinButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* cancelJoinButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE260C4
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private MultiplayerModeSettings _multiplayerModeSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSettings*) == 0x8);
    // Creating value type constructor for type: JoinQuickPlayViewController
    JoinQuickPlayViewController(GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown_ = {}, GlobalNamespace::QuickPlaySongPacksDropdown* songPacksDropdown_ = {}, UnityEngine::UI::Button* joinButton_ = {}, UnityEngine::UI::Button* cancelJoinButton_ = {}, System::Action_1<bool>* didFinishEvent_ = {}, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings_ = {}) noexcept : beatmapDifficultyDropdown{beatmapDifficultyDropdown_}, songPacksDropdown{songPacksDropdown_}, joinButton{joinButton_}, cancelJoinButton{cancelJoinButton_}, didFinishEvent{didFinishEvent_}, multiplayerModeSettings{multiplayerModeSettings_} {}
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x10C5B98
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x10C5C3C
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0x10C5CE0
    GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // public System.Void Setup(MasterServerQuickPlaySetupData masterServerQuickPlaySetupData, MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0x10C5CE8
    void Setup(GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
    // private System.Void ButtonPressed(System.Boolean success)
    // Offset: 0x10C5E84
    void ButtonPressed(bool success);
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x10C5F3C
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x10C5F44
    void $DidActivate$b__11_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10C5D68
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x10C5F34
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoinQuickPlayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JoinQuickPlayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoinQuickPlayViewController*, creationType>()));
    }
  }; // JoinQuickPlayViewController
  #pragma pack(pop)
  static check_size<sizeof(JoinQuickPlayViewController), 152 + sizeof(GlobalNamespace::MultiplayerModeSettings*)> __GlobalNamespace_JoinQuickPlayViewControllerSizeCheck;
  static_assert(sizeof(JoinQuickPlayViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings
// Il2CppName: get_multiplayerModeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerModeSettings* (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "get_multiplayerModeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(GlobalNamespace::MasterServerQuickPlaySetupData*, GlobalNamespace::MultiplayerModeSettings*)>(&GlobalNamespace::JoinQuickPlayViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* masterServerQuickPlaySetupData = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData")->byval_arg;
    static auto* multiplayerModeSettings = &::il2cpp_utils::GetClassFromName("", "MultiplayerModeSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{masterServerQuickPlaySetupData, multiplayerModeSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::ButtonPressed
// Il2CppName: ButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(bool)>(&GlobalNamespace::JoinQuickPlayViewController::ButtonPressed)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "ButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__11_0
// Il2CppName: <DidActivate>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__11_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "<DidActivate>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__11_1
// Il2CppName: <DidActivate>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__11_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "<DidActivate>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(bool, bool, bool)>(&GlobalNamespace::JoinQuickPlayViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
