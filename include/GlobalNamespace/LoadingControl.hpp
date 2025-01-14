// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LoadingControl
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadingControl : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.GameObject _loadingContainer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* loadingContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _loadingText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* loadingText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xEB8810
    // private TMPro.TextMeshProUGUI _refreshText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* refreshText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _refreshButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* refreshButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _refreshContainer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* refreshContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xEB8868
    // private UnityEngine.GameObject _downloadingContainer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* downloadingContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _downloadingText
    // Size: 0x8
    // Offset: 0x48
    TMPro::TextMeshProUGUI* downloadingText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _donwloadingProgressImage
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Image* donwloadingProgressImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private System.Action didPressRefreshButtonEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* didPressRefreshButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: LoadingControl
    LoadingControl(UnityEngine::GameObject* loadingContainer_ = {}, TMPro::TextMeshProUGUI* loadingText_ = {}, TMPro::TextMeshProUGUI* refreshText_ = {}, UnityEngine::UI::Button* refreshButton_ = {}, UnityEngine::GameObject* refreshContainer_ = {}, UnityEngine::GameObject* downloadingContainer_ = {}, TMPro::TextMeshProUGUI* downloadingText_ = {}, UnityEngine::UI::Image* donwloadingProgressImage_ = {}, System::Action* didPressRefreshButtonEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : loadingContainer{loadingContainer_}, loadingText{loadingText_}, refreshText{refreshText_}, refreshButton{refreshButton_}, refreshContainer{refreshContainer_}, downloadingContainer{downloadingContainer_}, downloadingText{downloadingText_}, donwloadingProgressImage{donwloadingProgressImage_}, didPressRefreshButtonEvent{didPressRefreshButtonEvent_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.GameObject _loadingContainer
    UnityEngine::GameObject* _get__loadingContainer();
    // Set instance field: private UnityEngine.GameObject _loadingContainer
    void _set__loadingContainer(UnityEngine::GameObject* value);
    // Get instance field: private TMPro.TextMeshProUGUI _loadingText
    TMPro::TextMeshProUGUI* _get__loadingText();
    // Set instance field: private TMPro.TextMeshProUGUI _loadingText
    void _set__loadingText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private TMPro.TextMeshProUGUI _refreshText
    TMPro::TextMeshProUGUI* _get__refreshText();
    // Set instance field: private TMPro.TextMeshProUGUI _refreshText
    void _set__refreshText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private UnityEngine.UI.Button _refreshButton
    UnityEngine::UI::Button* _get__refreshButton();
    // Set instance field: private UnityEngine.UI.Button _refreshButton
    void _set__refreshButton(UnityEngine::UI::Button* value);
    // Get instance field: private UnityEngine.GameObject _refreshContainer
    UnityEngine::GameObject* _get__refreshContainer();
    // Set instance field: private UnityEngine.GameObject _refreshContainer
    void _set__refreshContainer(UnityEngine::GameObject* value);
    // Get instance field: private UnityEngine.GameObject _downloadingContainer
    UnityEngine::GameObject* _get__downloadingContainer();
    // Set instance field: private UnityEngine.GameObject _downloadingContainer
    void _set__downloadingContainer(UnityEngine::GameObject* value);
    // Get instance field: private TMPro.TextMeshProUGUI _downloadingText
    TMPro::TextMeshProUGUI* _get__downloadingText();
    // Set instance field: private TMPro.TextMeshProUGUI _downloadingText
    void _set__downloadingText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private UnityEngine.UI.Image _donwloadingProgressImage
    UnityEngine::UI::Image* _get__donwloadingProgressImage();
    // Set instance field: private UnityEngine.UI.Image _donwloadingProgressImage
    void _set__donwloadingProgressImage(UnityEngine::UI::Image* value);
    // Get instance field: private System.Action didPressRefreshButtonEvent
    System::Action* _get_didPressRefreshButtonEvent();
    // Set instance field: private System.Action didPressRefreshButtonEvent
    void _set_didPressRefreshButtonEvent(System::Action* value);
    // Get instance field: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder* _get__buttonBinder();
    // Set instance field: private HMUI.ButtonBinder _buttonBinder
    void _set__buttonBinder(HMUI::ButtonBinder* value);
    // public System.Boolean get_isLoading()
    // Offset: 0x1FE8C8C
    bool get_isLoading();
    // public System.Void add_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0x1FE0A58
    void add_didPressRefreshButtonEvent(System::Action* value);
    // public System.Void remove_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0x1FE0B28
    void remove_didPressRefreshButtonEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x1FE8CA8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1FE8D58
    void OnDestroy();
    // public System.Void ShowLoading(System.String text)
    // Offset: 0x1FE0858
    void ShowLoading(::Il2CppString* text);
    // public System.Void ShowText(System.String text, System.Boolean showRefreshButton)
    // Offset: 0x1FE08E0
    void ShowText(::Il2CppString* text, bool showRefreshButton);
    // public System.Void ShowDownloadingProgress(System.String text, System.Single downloadingProgress)
    // Offset: 0x1FE8D74
    void ShowDownloadingProgress(::Il2CppString* text, float downloadingProgress);
    // public System.Void Hide()
    // Offset: 0x1FE0994
    void Hide();
    // private System.Void <Awake>b__14_0()
    // Offset: 0x1FE8E24
    void $Awake$b__14_0();
    // public System.Void .ctor()
    // Offset: 0x1FE8E1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadingControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LoadingControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadingControl*, creationType>()));
    }
  }; // LoadingControl
  #pragma pack(pop)
  static check_size<sizeof(LoadingControl), 96 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_LoadingControlSizeCheck;
  static_assert(sizeof(LoadingControl) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LoadingControl*, "", "LoadingControl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::get_isLoading
// Il2CppName: get_isLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::get_isLoading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "get_isLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent
// Il2CppName: add_didPressRefreshButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(System::Action*)>(&GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "add_didPressRefreshButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent
// Il2CppName: remove_didPressRefreshButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(System::Action*)>(&GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "remove_didPressRefreshButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowLoading
// Il2CppName: ShowLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::Il2CppString*)>(&GlobalNamespace::LoadingControl::ShowLoading)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowText
// Il2CppName: ShowText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::Il2CppString*, bool)>(&GlobalNamespace::LoadingControl::ShowText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* showRefreshButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, showRefreshButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowDownloadingProgress
// Il2CppName: ShowDownloadingProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::Il2CppString*, float)>(&GlobalNamespace::LoadingControl::ShowDownloadingProgress)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* downloadingProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowDownloadingProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, downloadingProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::$Awake$b__14_0
// Il2CppName: <Awake>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::$Awake$b__14_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "<Awake>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
