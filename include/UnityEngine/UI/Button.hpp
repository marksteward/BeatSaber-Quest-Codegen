// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Button
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D7C9C0
  class Button : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler*/ {
    public:
    // Nested type: UnityEngine::UI::Button::ButtonClickedEvent
    class ButtonClickedEvent;
    // Nested type: UnityEngine::UI::Button::$OnFinishSubmit$d__9
    class $OnFinishSubmit$d__9;
    // [FormerlySerializedAsAttribute] Offset: 0xD7DC68
    // private UnityEngine.UI.Button/ButtonClickedEvent m_OnClick
    // Size: 0x8
    // Offset: 0xF0
    UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button::ButtonClickedEvent*) == 0x8);
    // Creating value type constructor for type: Button
    Button(UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick_ = {}) noexcept : m_OnClick{m_OnClick_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // public UnityEngine.UI.Button/ButtonClickedEvent get_onClick()
    // Offset: 0x11567FC
    UnityEngine::UI::Button::ButtonClickedEvent* get_onClick();
    // public System.Void set_onClick(UnityEngine.UI.Button/ButtonClickedEvent value)
    // Offset: 0x1156804
    void set_onClick(UnityEngine::UI::Button::ButtonClickedEvent* value);
    // private System.Void Press()
    // Offset: 0x115680C
    void Press();
    // private System.Collections.IEnumerator OnFinishSubmit()
    // Offset: 0x1156954
    System::Collections::IEnumerator* OnFinishSubmit();
    // protected System.Void .ctor()
    // Offset: 0x1156760
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Button::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button*, creationType>()));
    }
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11568AC
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x11568CC
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.UI.Button
  static check_size<sizeof(Button), 240 + sizeof(UnityEngine::UI::Button::ButtonClickedEvent*)> __UnityEngine_UI_ButtonSizeCheck;
  static_assert(sizeof(Button) == 0xF8);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
