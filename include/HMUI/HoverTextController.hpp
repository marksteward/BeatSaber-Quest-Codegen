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
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2E
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverTextController
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverTextController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::HoverTextController::$ShowTextCoroutine$d__10
    class $ShowTextCoroutine$d__10;
    // Nested type: HMUI::HoverTextController::$HideTextCoroutine$d__12
    class $HideTextCoroutine$d__12;
    // private TMPro.TextMeshProUGUI _textMesh
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* textMesh;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Single _fadeInDelay
    // Size: 0x4
    // Offset: 0x20
    float fadeInDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeInSpeed
    // Size: 0x4
    // Offset: 0x24
    float fadeInSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutSpeed
    // Size: 0x4
    // Offset: 0x28
    float fadeOutSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isFadingOut
    // Size: 0x1
    // Offset: 0x2C
    bool isFadingOut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isFadingIn
    // Size: 0x1
    // Offset: 0x2D
    bool isFadingIn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HoverTextController
    HoverTextController(TMPro::TextMeshProUGUI* textMesh_ = {}, float fadeInDelay_ = {}, float fadeInSpeed_ = {}, float fadeOutSpeed_ = {}, bool isFadingOut_ = {}, bool isFadingIn_ = {}) noexcept : textMesh{textMesh_}, fadeInDelay{fadeInDelay_}, fadeInSpeed{fadeInSpeed_}, fadeOutSpeed{fadeOutSpeed_}, isFadingOut{isFadingOut_}, isFadingIn{isFadingIn_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TextMeshProUGUI _textMesh
    TMPro::TextMeshProUGUI* _get__textMesh();
    // Set instance field: private TMPro.TextMeshProUGUI _textMesh
    void _set__textMesh(TMPro::TextMeshProUGUI* value);
    // Get instance field: private System.Single _fadeInDelay
    float _get__fadeInDelay();
    // Set instance field: private System.Single _fadeInDelay
    void _set__fadeInDelay(float value);
    // Get instance field: private System.Single _fadeInSpeed
    float _get__fadeInSpeed();
    // Set instance field: private System.Single _fadeInSpeed
    void _set__fadeInSpeed(float value);
    // Get instance field: private System.Single _fadeOutSpeed
    float _get__fadeOutSpeed();
    // Set instance field: private System.Single _fadeOutSpeed
    void _set__fadeOutSpeed(float value);
    // Get instance field: private System.Boolean _isFadingOut
    bool _get__isFadingOut();
    // Set instance field: private System.Boolean _isFadingOut
    void _set__isFadingOut(bool value);
    // Get instance field: private System.Boolean _isFadingIn
    bool _get__isFadingIn();
    // Set instance field: private System.Boolean _isFadingIn
    void _set__isFadingIn(bool value);
    // protected System.Void Awake()
    // Offset: 0x1311148
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x1311168
    void OnDisable();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x1311190
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowText(System.String text)
    // Offset: 0x13111B8
    void ShowText(::Il2CppString* text);
    // private System.Collections.IEnumerator ShowTextCoroutine()
    // Offset: 0x1311220
    System::Collections::IEnumerator* ShowTextCoroutine();
    // public System.Void HideText()
    // Offset: 0x13112BC
    void HideText();
    // private System.Collections.IEnumerator HideTextCoroutine()
    // Offset: 0x131133C
    System::Collections::IEnumerator* HideTextCoroutine();
    // public System.Void .ctor()
    // Offset: 0x13113D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverTextController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverTextController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverTextController*, creationType>()));
    }
  }; // HMUI.HoverTextController
  #pragma pack(pop)
  static check_size<sizeof(HoverTextController), 45 + sizeof(bool)> __HMUI_HoverTextControllerSizeCheck;
  static_assert(sizeof(HoverTextController) == 0x2E);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverTextController*, "HMUI", "HoverTextController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverTextController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)(bool)>(&HMUI::HoverTextController::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::ShowText
// Il2CppName: ShowText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)(::Il2CppString*)>(&HMUI::HoverTextController::ShowText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "ShowText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::ShowTextCoroutine
// Il2CppName: ShowTextCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::ShowTextCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "ShowTextCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::HideText
// Il2CppName: HideText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::HideText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "HideText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::HideTextCoroutine
// Il2CppName: HideTextCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::HideTextCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "HideTextCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
