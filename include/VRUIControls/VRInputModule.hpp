// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
  // Forward declaring type: MouseState
  class MouseState;
  // Forward declaring type: MouseButtonEventData
  class MouseButtonEventData;
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Component because it is already included!
  // Skipping declaration: Vector2 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x88
  // Autogenerated type: VRUIControls.VRInputModule
  // [] Offset: FFFFFFFF
  class VRInputModule : public UnityEngine::EventSystems::BaseInputModule {
    public:
    // private VRUIControls.VRPointer _vrPointer
    // Size: 0x8
    // Offset: 0x48
    VRUIControls::VRPointer* vrPointer;
    // Field size check
    static_assert(sizeof(VRUIControls::VRPointer*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Size: 0x8
    // Offset: 0x50
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // Field size check
    static_assert(sizeof(Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDB2240
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HapticFeedbackController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB2250
    // private System.Boolean <useMouseForPressInput>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool useMouseForPressInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useMouseForPressInput and: onProcessMousePressEvent
    char __padding3[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDB2260
    // private System.Action`1<UnityEngine.GameObject> onProcessMousePressEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<UnityEngine::GameObject*>* onProcessMousePressEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> _pointerData
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* pointerData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Component> _componentList
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<UnityEngine::Component*>* componentList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Component*>*) == 0x8);
    // private readonly VRUIControls.MouseState _mouseState
    // Size: 0x8
    // Offset: 0x80
    VRUIControls::MouseState* mouseState;
    // Field size check
    static_assert(sizeof(VRUIControls::MouseState*) == 0x8);
    // Creating value type constructor for type: VRInputModule
    VRInputModule(VRUIControls::VRPointer* vrPointer_ = {}, Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset_ = {}, GlobalNamespace::HapticFeedbackController* hapticFeedbackController_ = {}, bool useMouseForPressInput_ = {}, System::Action_1<UnityEngine::GameObject*>* onProcessMousePressEvent_ = {}, System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* pointerData_ = {}, System::Collections::Generic::List_1<UnityEngine::Component*>* componentList_ = {}, VRUIControls::MouseState* mouseState_ = {}) noexcept : vrPointer{vrPointer_}, rumblePreset{rumblePreset_}, hapticFeedbackController{hapticFeedbackController_}, useMouseForPressInput{useMouseForPressInput_}, onProcessMousePressEvent{onProcessMousePressEvent_}, pointerData{pointerData_}, componentList{componentList_}, mouseState{mouseState_} {}
    // static field const value: static private System.Int32 kMouseLeftId
    static constexpr const int kMouseLeftId = -1;
    // Get static field: static private System.Int32 kMouseLeftId
    static int _get_kMouseLeftId();
    // Set static field: static private System.Int32 kMouseLeftId
    static void _set_kMouseLeftId(int value);
    // static field const value: static private System.Single kMinPressValue
    static constexpr const float kMinPressValue = 0.9;
    // Get static field: static private System.Single kMinPressValue
    static float _get_kMinPressValue();
    // Set static field: static private System.Single kMinPressValue
    static void _set_kMinPressValue(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB2270
    // Get static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* _get__raycastComparer();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> _raycastComparer
    static void _set__raycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* value);
    // public System.Boolean get_useMouseForPressInput()
    // Offset: 0x19912A0
    bool get_useMouseForPressInput();
    // public System.Void set_useMouseForPressInput(System.Boolean value)
    // Offset: 0x19912A8
    void set_useMouseForPressInput(bool value);
    // public System.Void add_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x19912B4
    void add_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value);
    // public System.Void remove_onProcessMousePressEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x1991358
    void remove_onProcessMousePressEvent(System::Action_1<UnityEngine::GameObject*>* value);
    // protected System.Boolean GetPointerData(System.Int32 id, out UnityEngine.EventSystems.PointerEventData data, System.Boolean create)
    // Offset: 0x19915B4
    bool GetPointerData(int id, UnityEngine::EventSystems::PointerEventData*& data, bool create);
    // protected VRUIControls.MouseState GetMousePointerEventData(System.Int32 id)
    // Offset: 0x19916A4
    VRUIControls::MouseState* GetMousePointerEventData(int id);
    // protected UnityEngine.EventSystems.PointerEventData GetLastPointerEventData(System.Int32 id)
    // Offset: 0x1991A90
    UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int id);
    // private System.Boolean ShouldStartDrag(UnityEngine.Vector2 pressPos, UnityEngine.Vector2 currentPos, System.Single threshold, System.Boolean useDragThreshold)
    // Offset: 0x1991ABC
    bool ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
    // protected System.Void ProcessMove(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x1991B8C
    void ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x1992500
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ClearSelection()
    // Offset: 0x1991424
    void ClearSelection();
    // protected System.Void DeselectIfSelectionChanged(UnityEngine.GameObject currentOverGo, UnityEngine.EventSystems.BaseEventData pointerEvent)
    // Offset: 0x1992A98
    void DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x19935D4
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(VRUIControls.MouseButtonEventData data)
    // Offset: 0x1992D60
    void ProcessMousePress(VRUIControls::MouseButtonEventData* data);
    // static private System.Int32 RaycastComparer(UnityEngine.EventSystems.RaycastResult lhs, UnityEngine.EventSystems.RaycastResult rhs)
    // Offset: 0x1993728
    static int RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs);
    // protected override System.Void OnDisable()
    // Offset: 0x19913FC
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::OnDisable()
    void OnDisable();
    // public override System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x1992808
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsPointerOverGameObject(System.Int32 pointerId)
    bool IsPointerOverGameObject(int pointerId);
    // public override System.String ToString()
    // Offset: 0x19928B4
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Void Process()
    // Offset: 0x1992B88
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
    // protected System.Void HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    // Offset: 0x1991BA4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData currentPointerData, UnityEngine.GameObject newEnterTarget)
    void HandlePointerExitAndEnter(UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine::GameObject* newEnterTarget);
    // public System.Void .ctor()
    // Offset: 0x1993AF8
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::VRInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRInputModule*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1993BD4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRInputModule
  static check_size<sizeof(VRInputModule), 128 + sizeof(VRUIControls::MouseState*)> __VRUIControls_VRInputModuleSizeCheck;
  static_assert(sizeof(VRInputModule) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
#pragma pack(pop)
