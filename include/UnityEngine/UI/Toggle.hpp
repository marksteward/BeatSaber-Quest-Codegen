// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: ToggleGroup
  class ToggleGroup;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Toggle
  class Toggle : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: UnityEngine::UI::Toggle::ToggleTransition
    struct ToggleTransition;
    // Nested type: UnityEngine::UI::Toggle::ToggleEvent
    class ToggleEvent;
    // Autogenerated type: UnityEngine.UI.Toggle/ToggleTransition
    struct ToggleTransition : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ToggleTransition
      constexpr ToggleTransition(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static UnityEngine::UI::Toggle::ToggleTransition _get_None();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static void _set_None(UnityEngine::UI::Toggle::ToggleTransition value);
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static constexpr const int Fade = 1;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static UnityEngine::UI::Toggle::ToggleTransition _get_Fade();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static void _set_Fade(UnityEngine::UI::Toggle::ToggleTransition value);
    }; // UnityEngine.UI.Toggle/ToggleTransition
    // public UnityEngine.UI.Toggle/ToggleTransition toggleTransition
    // Offset: 0xF0
    UnityEngine::UI::Toggle::ToggleTransition toggleTransition;
    // public UnityEngine.UI.Graphic graphic
    // Offset: 0xF8
    UnityEngine::UI::Graphic* graphic;
    // private UnityEngine.UI.ToggleGroup m_Group
    // Offset: 0x100
    UnityEngine::UI::ToggleGroup* m_Group;
    // public UnityEngine.UI.Toggle/ToggleEvent onValueChanged
    // Offset: 0x108
    UnityEngine::UI::Toggle::ToggleEvent* onValueChanged;
    // private System.Boolean m_IsOn
    // Offset: 0x110
    bool m_IsOn;
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::ICanvasElement
    operator UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ICanvasElement*>(this);
    }
    // public UnityEngine.UI.ToggleGroup get_group()
    // Offset: 0x1F30E58
    UnityEngine::UI::ToggleGroup* get_group();
    // public System.Void set_group(UnityEngine.UI.ToggleGroup value)
    // Offset: 0x1F30E60
    void set_group(UnityEngine::UI::ToggleGroup* value);
    // private System.Void SetToggleGroup(UnityEngine.UI.ToggleGroup newGroup, System.Boolean setMemberValue)
    // Offset: 0x1F30E8C
    void SetToggleGroup(UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);
    // public System.Boolean get_isOn()
    // Offset: 0x1F31848
    bool get_isOn();
    // public System.Void set_isOn(System.Boolean value)
    // Offset: 0x1F31850
    void set_isOn(bool value);
    // public System.Void SetIsOnWithoutNotify(System.Boolean value)
    // Offset: 0x1F3185C
    void SetIsOnWithoutNotify(bool value);
    // private System.Void Set(System.Boolean value, System.Boolean sendCallback)
    // Offset: 0x1F31488
    void Set(bool value, bool sendCallback);
    // private System.Void PlayEffect(System.Boolean instant)
    // Offset: 0x1F31004
    void PlayEffect(bool instant);
    // private System.Void InternalToggle()
    // Offset: 0x1F319A8
    void InternalToggle();
    // protected System.Void .ctor()
    // Offset: 0x1F310D8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Toggle* New_ctor();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1F311C0
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1F311C4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1F311C8
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnDestroy()
    // Offset: 0x1F311CC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnEnable()
    // Offset: 0x1F31310
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1F3134C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1F3137C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void Start()
    // Offset: 0x1F319A0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1F31A0C
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1F31A2C
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1F31A30
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // UnityEngine.UI.Toggle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Toggle::ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
#pragma pack(pop)
