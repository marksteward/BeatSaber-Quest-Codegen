// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.CircleSlider
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DE2124
  class CircleSlider : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement*/ {
    public:
    // private UnityEngine.RectTransform _handleRect
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::RectTransform* handleRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xDE3140
    // private System.Single _cursorRadius
    // Size: 0x4
    // Offset: 0x100
    float cursorRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _normalizedValue
    // Size: 0x4
    // Offset: 0x104
    float normalizedValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Action`2<HMUI.CircleSlider,System.Single> normalizedValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_2<HMUI::CircleSlider*, float>* normalizedValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::CircleSlider*, float>*) == 0x8);
    // private UnityEngine.RectTransform _containerRect
    // Size: 0x8
    // Offset: 0x110
    UnityEngine::RectTransform* containerRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Graphic _handleGraphic
    // Size: 0x8
    // Offset: 0x118
    UnityEngine::UI::Graphic* handleGraphic;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Size: 0x1
    // Offset: 0x120
    UnityEngine::DrivenRectTransformTracker tracker;
    // Field size check
    static_assert(sizeof(UnityEngine::DrivenRectTransformTracker) == 0x1);
    // Creating value type constructor for type: CircleSlider
    CircleSlider(UnityEngine::RectTransform* handleRect_ = {}, float cursorRadius_ = {}, float normalizedValue_ = {}, System::Action_2<HMUI::CircleSlider*, float>* normalizedValueDidChangeEvent_ = {}, UnityEngine::RectTransform* containerRect_ = {}, UnityEngine::UI::Graphic* handleGraphic_ = {}, UnityEngine::DrivenRectTransformTracker tracker_ = {}) noexcept : handleRect{handleRect_}, cursorRadius{cursorRadius_}, normalizedValue{normalizedValue_}, normalizedValueDidChangeEvent{normalizedValueDidChangeEvent_}, containerRect{containerRect_}, handleGraphic{handleGraphic_}, tracker{tracker_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IBeginDragHandler
    operator UnityEngine::EventSystems::IBeginDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IBeginDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDragHandler
    operator UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::ICanvasElement
    operator UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get instance field: private UnityEngine.RectTransform _handleRect
    UnityEngine::RectTransform* _get__handleRect();
    // Set instance field: private UnityEngine.RectTransform _handleRect
    void _set__handleRect(UnityEngine::RectTransform* value);
    // Get instance field: private System.Single _cursorRadius
    float _get__cursorRadius();
    // Set instance field: private System.Single _cursorRadius
    void _set__cursorRadius(float value);
    // Get instance field: private System.Single _normalizedValue
    float _get__normalizedValue();
    // Set instance field: private System.Single _normalizedValue
    void _set__normalizedValue(float value);
    // Get instance field: private System.Action`2<HMUI.CircleSlider,System.Single> normalizedValueDidChangeEvent
    System::Action_2<HMUI::CircleSlider*, float>* _get_normalizedValueDidChangeEvent();
    // Set instance field: private System.Action`2<HMUI.CircleSlider,System.Single> normalizedValueDidChangeEvent
    void _set_normalizedValueDidChangeEvent(System::Action_2<HMUI::CircleSlider*, float>* value);
    // Get instance field: private UnityEngine.RectTransform _containerRect
    UnityEngine::RectTransform* _get__containerRect();
    // Set instance field: private UnityEngine.RectTransform _containerRect
    void _set__containerRect(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.UI.Graphic _handleGraphic
    UnityEngine::UI::Graphic* _get__handleGraphic();
    // Set instance field: private UnityEngine.UI.Graphic _handleGraphic
    void _set__handleGraphic(UnityEngine::UI::Graphic* value);
    // Get instance field: private UnityEngine.DrivenRectTransformTracker _tracker
    UnityEngine::DrivenRectTransformTracker _get__tracker();
    // Set instance field: private UnityEngine.DrivenRectTransformTracker _tracker
    void _set__tracker(UnityEngine::DrivenRectTransformTracker value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x1304120
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x1304128
    void set_handleRect(UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x1304300
    void set_handleColor(UnityEngine::Color value);
    // public System.Single get_normalizedValue()
    // Offset: 0x13043D4
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x13043DC
    void set_normalizedValue(float value);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1304D84
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.CircleSlider,System.Single> value)
    // Offset: 0x13044C0
    void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::CircleSlider*, float>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.CircleSlider,System.Single> value)
    // Offset: 0x1304568
    void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::CircleSlider*, float>* value);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1304610
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1304614
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1304618
    void GraphicUpdateComplete();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x13041B8
    void UpdateCachedReferences();
    // private System.Void SetNormalizedValue(System.Single input)
    // Offset: 0x1304698
    void SetNormalizedValue(float input);
    // private System.Void SetNormalizedValue(System.Single input, System.Boolean sendCallback)
    // Offset: 0x13043E4
    void SetNormalizedValue(float input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x13046F4
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x13048F8
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1304A90
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1304AF8
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1304B94
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1304CFC
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x1304D14
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CircleSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CircleSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CircleSlider*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x130461C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1304668
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x13046A0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1304C40
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // HMUI.CircleSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CircleSlider*, "HMUI", "CircleSlider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CircleSlider::get_handleRect
// Il2CppName: get_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::get_handleRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "get_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::set_handleRect
// Il2CppName: set_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::RectTransform*)>(&HMUI::CircleSlider::set_handleRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "set_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::set_handleColor
// Il2CppName: set_handleColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::Color)>(&HMUI::CircleSlider::set_handleColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "set_handleColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::get_normalizedValue
// Il2CppName: get_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::get_normalizedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "get_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::set_normalizedValue
// Il2CppName: set_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(float)>(&HMUI::CircleSlider::set_normalizedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "set_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::UnityEngine_UI_ICanvasElement_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::add_normalizedValueDidChangeEvent
// Il2CppName: add_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(System::Action_2<HMUI::CircleSlider*, float>*)>(&HMUI::CircleSlider::add_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "CircleSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "add_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::remove_normalizedValueDidChangeEvent
// Il2CppName: remove_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(System::Action_2<HMUI::CircleSlider*, float>*)>(&HMUI::CircleSlider::remove_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "CircleSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "remove_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::UI::CanvasUpdate)>(&HMUI::CircleSlider::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::UpdateCachedReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "UpdateCachedReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(float)>(&HMUI::CircleSlider::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(float, bool)>(&HMUI::CircleSlider::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, sendCallback});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::MayDrag
// Il2CppName: MayDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::MayDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "MayDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnBeginDrag
// Il2CppName: OnBeginDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::OnBeginDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnBeginDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnDrag
// Il2CppName: OnDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::OnDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::CircleSlider::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)()>(&HMUI::CircleSlider::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleSlider::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::CircleSlider::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleSlider*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
