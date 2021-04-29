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
  // Forward declaring type: HoverHintPanel
  class HoverHintPanel;
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintController
  class HoverHintController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::HoverHintController::$ShowHintAfterDelay$d__10
    class $ShowHintAfterDelay$d__10;
    // Nested type: HMUI::HoverHintController::$HideHintAfterDelay$d__11
    class $HideHintAfterDelay$d__11;
    // private HMUI.HoverHintPanel _hoverHintPanelPrefab
    // Size: 0x8
    // Offset: 0x18
    HMUI::HoverHintPanel* hoverHintPanelPrefab;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintPanel*) == 0x8);
    // private HMUI.HoverHintPanel _hoverHintPanel
    // Size: 0x8
    // Offset: 0x20
    HMUI::HoverHintPanel* hoverHintPanel;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintPanel*) == 0x8);
    // private System.Boolean _isHiding
    // Size: 0x1
    // Offset: 0x28
    bool isHiding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HoverHintController
    HoverHintController(HMUI::HoverHintPanel* hoverHintPanelPrefab_ = {}, HMUI::HoverHintPanel* hoverHintPanel_ = {}, bool isHiding_ = {}) noexcept : hoverHintPanelPrefab{hoverHintPanelPrefab_}, hoverHintPanel{hoverHintPanel_}, isHiding{isHiding_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kShowHintDelay
    static constexpr const float kShowHintDelay = 0.6;
    // Get static field: static private System.Single kShowHintDelay
    static float _get_kShowHintDelay();
    // Set static field: static private System.Single kShowHintDelay
    static void _set_kShowHintDelay(float value);
    // static field const value: static private System.Single kHideHintDelay
    static constexpr const float kHideHintDelay = 0.3;
    // Get static field: static private System.Single kHideHintDelay
    static float _get_kHideHintDelay();
    // Set static field: static private System.Single kHideHintDelay
    static void _set_kHideHintDelay(float value);
    // protected System.Void Awake()
    // Offset: 0x124C1A0
    void Awake();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x124C270
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowHint(HMUI.HoverHint hoverHint)
    // Offset: 0x124BEB0
    void ShowHint(HMUI::HoverHint* hoverHint);
    // public System.Void HideHint()
    // Offset: 0x124C064
    void HideHint();
    // public System.Void HideHintInstant()
    // Offset: 0x124C020
    void HideHintInstant();
    // private System.Collections.IEnumerator ShowHintAfterDelay(HMUI.HoverHint hoverHint, System.Single delay)
    // Offset: 0x124C44C
    System::Collections::IEnumerator* ShowHintAfterDelay(HMUI::HoverHint* hoverHint, float delay);
    // private System.Collections.IEnumerator HideHintAfterDelay(System.Single delay)
    // Offset: 0x124C4D8
    System::Collections::IEnumerator* HideHintAfterDelay(float delay);
    // private System.Void SetupAndShowHintPanel(HMUI.HoverHint hoverHint)
    // Offset: 0x124C298
    void SetupAndShowHintPanel(HMUI::HoverHint* hoverHint);
    // static private UnityEngine.Transform GetScreenTransformForHoverHint(HMUI.HoverHint hoverHint)
    // Offset: 0x124C5B0
    static UnityEngine::Transform* GetScreenTransformForHoverHint(HMUI::HoverHint* hoverHint);
    // public System.Void .ctor()
    // Offset: 0x124C99C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHintController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintController*, creationType>()));
    }
  }; // HMUI.HoverHintController
  #pragma pack(pop)
  static check_size<sizeof(HoverHintController), 40 + sizeof(bool)> __HMUI_HoverHintControllerSizeCheck;
  static_assert(sizeof(HoverHintController) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintController*, "HMUI", "HoverHintController");
