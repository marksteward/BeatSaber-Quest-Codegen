// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Autogenerated type: HMUI.HoverHintController
  class HoverHintController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::HoverHintController::$ShowHintAfterDelay$d__10
    class $ShowHintAfterDelay$d__10;
    // Nested type: HMUI::HoverHintController::$HideHintAfterDelay$d__11
    class $HideHintAfterDelay$d__11;
    // private HMUI.HoverHintPanel _hoverHintPanelPrefab
    // Offset: 0x18
    HMUI::HoverHintPanel* hoverHintPanelPrefab;
    // private HMUI.HoverHintPanel _hoverHintPanel
    // Offset: 0x20
    HMUI::HoverHintPanel* hoverHintPanel;
    // private System.Boolean _isHiding
    // Offset: 0x28
    bool isHiding;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
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
    // Offset: 0xEE2A20
    void Awake();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0xEE2B00
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowHint(HMUI.HoverHint hoverHint)
    // Offset: 0xEE2884
    void ShowHint(HMUI::HoverHint* hoverHint);
    // public System.Void HideHint()
    // Offset: 0xEE2934
    void HideHint();
    // public System.Void HideHintInstant()
    // Offset: 0xEE2990
    void HideHintInstant();
    // private System.Collections.IEnumerator ShowHintAfterDelay(HMUI.HoverHint hoverHint, System.Single delay)
    // Offset: 0xEE2CDC
    System::Collections::IEnumerator* ShowHintAfterDelay(HMUI::HoverHint* hoverHint, float delay);
    // private System.Collections.IEnumerator HideHintAfterDelay(System.Single delay)
    // Offset: 0xEE2D84
    System::Collections::IEnumerator* HideHintAfterDelay(float delay);
    // private System.Void SetupAndShowHintPanel(HMUI.HoverHint hoverHint)
    // Offset: 0xEE2B28
    void SetupAndShowHintPanel(HMUI::HoverHint* hoverHint);
    // private UnityEngine.Transform GetScreenTransformForHoverHint(HMUI.HoverHint hoverHint)
    // Offset: 0xEE2E68
    UnityEngine::Transform* GetScreenTransformForHoverHint(HMUI::HoverHint* hoverHint);
    // public System.Void .ctor()
    // Offset: 0xEE31FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HoverHintController* New_ctor();
  }; // HMUI.HoverHintController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintController*, "HMUI", "HoverHintController");
#pragma pack(pop)
