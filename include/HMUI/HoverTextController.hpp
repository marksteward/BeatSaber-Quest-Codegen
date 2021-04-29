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
    // protected System.Void Awake()
    // Offset: 0x124CF1C
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x124CF3C
    void OnDisable();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x124CF64
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowText(System.String text)
    // Offset: 0x124CF8C
    void ShowText(::Il2CppString* text);
    // private System.Collections.IEnumerator ShowTextCoroutine()
    // Offset: 0x124CFF4
    System::Collections::IEnumerator* ShowTextCoroutine();
    // public System.Void HideText()
    // Offset: 0x124D090
    void HideText();
    // private System.Collections.IEnumerator HideTextCoroutine()
    // Offset: 0x124D110
    System::Collections::IEnumerator* HideTextCoroutine();
    // public System.Void .ctor()
    // Offset: 0x124D1AC
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
