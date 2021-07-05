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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightSettingsController
  class PlayerHeightSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _setButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* setButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private Vector3SO _roomCenter
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [InjectAttribute] Offset: 0xE242CC
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE242DC
    // private System.Action`1<System.Single> valueDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<float>* valueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x40
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x48
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PlayerHeightSettingsController
    PlayerHeightSettingsController(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Button* setButton_ = {}, GlobalNamespace::Vector3SO* roomCenter_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, System::Action_1<float>* valueDidChangeEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, float value_ = {}) noexcept : text{text_}, setButton{setButton_}, roomCenter{roomCenter_}, vrPlatformHelper{vrPlatformHelper_}, valueDidChangeEvent{valueDidChangeEvent_}, buttonBinder{buttonBinder_}, value{value_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_valueDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1058524
    void add_valueDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x10585C8
    void remove_valueDidChangeEvent(System::Action_1<float>* value);
    // public System.Single get_value()
    // Offset: 0x105866C
    float get_value();
    // protected System.Void Awake()
    // Offset: 0x1058674
    void Awake();
    // public System.Void Init(System.Single playerHeight)
    // Offset: 0x1058724
    void Init(float playerHeight);
    // private System.Void AutoSetHeight()
    // Offset: 0x10587C8
    void AutoSetHeight();
    // private System.Void RefreshUI()
    // Offset: 0x105872C
    void RefreshUI();
    // public System.Void .ctor()
    // Offset: 0x10588EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerHeightSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightSettingsController*, creationType>()));
    }
  }; // PlayerHeightSettingsController
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightSettingsController), 72 + sizeof(float)> __GlobalNamespace_PlayerHeightSettingsControllerSizeCheck;
  static_assert(sizeof(PlayerHeightSettingsController) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::add_valueDidChangeEvent
// Il2CppName: add_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightSettingsController::add_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "add_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::remove_valueDidChangeEvent
// Il2CppName: remove_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightSettingsController::remove_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "remove_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(float)>(&GlobalNamespace::PlayerHeightSettingsController::Init)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::AutoSetHeight
// Il2CppName: AutoSetHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::AutoSetHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "AutoSetHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
