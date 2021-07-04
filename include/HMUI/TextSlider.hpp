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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
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
  // Autogenerated type: HMUI.TextSlider
  // [RequireComponent] Offset: DF775C
  class TextSlider : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement*/ {
    public:
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0xF8
    TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.RectTransform _handleRect
    // Size: 0x8
    // Offset: 0x100
    UnityEngine::RectTransform* handleRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xDF88C8
    // private System.Boolean _enableDragging
    // Size: 0x1
    // Offset: 0x108
    bool enableDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single _handleSize
    // Size: 0x4
    // Offset: 0x10C
    float handleSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valueSize
    // Size: 0x4
    // Offset: 0x110
    float valueSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _separatorSize
    // Size: 0x4
    // Offset: 0x114
    float separatorSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _numberOfSteps
    // Size: 0x4
    // Offset: 0x118
    int numberOfSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0xDF8940
    // [RangeAttribute] Offset: 0xDF8940
    // private System.Single _normalizedValue
    // Size: 0x4
    // Offset: 0x11C
    float normalizedValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDF8990
    // private System.Action`2<HMUI.TextSlider,System.Single> normalizedValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x120
    System::Action_2<HMUI::TextSlider*, float>* normalizedValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::TextSlider*, float>*) == 0x8);
    // private UnityEngine.RectTransform _containerRect
    // Size: 0x8
    // Offset: 0x128
    UnityEngine::RectTransform* containerRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Graphic _handleGraphic
    // Size: 0x8
    // Offset: 0x130
    UnityEngine::UI::Graphic* handleGraphic;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Size: 0x1
    // Offset: 0x138
    UnityEngine::DrivenRectTransformTracker tracker;
    // Field size check
    static_assert(sizeof(UnityEngine::DrivenRectTransformTracker) == 0x1);
    // Creating value type constructor for type: TextSlider
    TextSlider(TMPro::TextMeshProUGUI* valueText_ = {}, UnityEngine::RectTransform* handleRect_ = {}, bool enableDragging_ = {}, float handleSize_ = {}, float valueSize_ = {}, float separatorSize_ = {}, int numberOfSteps_ = {}, float normalizedValue_ = {}, System::Action_2<HMUI::TextSlider*, float>* normalizedValueDidChangeEvent_ = {}, UnityEngine::RectTransform* containerRect_ = {}, UnityEngine::UI::Graphic* handleGraphic_ = {}, UnityEngine::DrivenRectTransformTracker tracker_ = {}) noexcept : valueText{valueText_}, handleRect{handleRect_}, enableDragging{enableDragging_}, handleSize{handleSize_}, valueSize{valueSize_}, separatorSize{separatorSize_}, numberOfSteps{numberOfSteps_}, normalizedValue{normalizedValue_}, normalizedValueDidChangeEvent{normalizedValueDidChangeEvent_}, containerRect{containerRect_}, handleGraphic{handleGraphic_}, tracker{tracker_} {}
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
    // public System.Void set_valueTextColor(UnityEngine.Color value)
    // Offset: 0x12C0540
    void set_valueTextColor(UnityEngine::Color value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x12C0564
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x12C056C
    void set_handleRect(UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x12C0744
    void set_handleColor(UnityEngine::Color value);
    // public System.Single get_handleSize()
    // Offset: 0x12C0818
    float get_handleSize();
    // public System.Void set_handleSize(System.Single value)
    // Offset: 0x12C0820
    void set_handleSize(float value);
    // public System.Single get_valueSize()
    // Offset: 0x12C08A8
    float get_valueSize();
    // public System.Void set_valueSize(System.Single value)
    // Offset: 0x12C08B0
    void set_valueSize(float value);
    // public System.Single get_separatorSize()
    // Offset: 0x12C0938
    float get_separatorSize();
    // public System.Void set_separatorSize(System.Single value)
    // Offset: 0x12C0940
    void set_separatorSize(float value);
    // public System.Int32 get_numberOfSteps()
    // Offset: 0x12C09C8
    int get_numberOfSteps();
    // public System.Void set_numberOfSteps(System.Int32 value)
    // Offset: 0x12C09D0
    void set_numberOfSteps(int value);
    // public System.Single get_normalizedValue()
    // Offset: 0x12B4190
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x12B4154
    void set_normalizedValue(float value);
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x12B45C8
    void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider*, float>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x12B4708
    void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider*, float>* value);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x12C0B54
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x12C0B58
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x12C0B5C
    void GraphicUpdateComplete();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x12C05FC
    void UpdateCachedReferences();
    // protected System.Void SetNormalizedValue(System.Single input)
    // Offset: 0x12B49AC
    void SetNormalizedValue(float input);
    // private System.Void SetNormalizedValue(System.Single input, System.Boolean sendCallback)
    // Offset: 0x12C0A68
    void SetNormalizedValue(float input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x12C0C30
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C10F0
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C13F0
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C1458
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C14FC
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C166C
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x12C1684
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x12C16AC
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // protected override System.Void OnEnable()
    // Offset: 0x12C0B60
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x12C0BAC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x12C0BDC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12C15B0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x12B48D4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::TextSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSlider*, creationType>()));
    }
  }; // HMUI.TextSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSlider*, "HMUI", "TextSlider");
// Writing MetadataGetter for method: HMUI::TextSlider::set_valueTextColor
// Il2CppName: set_valueTextColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_handleRect
// Il2CppName: get_handleRect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleRect
// Il2CppName: set_handleRect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleColor
// Il2CppName: set_handleColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_handleSize
// Il2CppName: get_handleSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleSize
// Il2CppName: set_handleSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_valueSize
// Il2CppName: get_valueSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_valueSize
// Il2CppName: set_valueSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_separatorSize
// Il2CppName: get_separatorSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_separatorSize
// Il2CppName: set_separatorSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_numberOfSteps
// Il2CppName: get_numberOfSteps
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_numberOfSteps
// Il2CppName: set_numberOfSteps
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::get_normalizedValue
// Il2CppName: get_normalizedValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::set_normalizedValue
// Il2CppName: set_normalizedValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::add_normalizedValueDidChangeEvent
// Il2CppName: add_normalizedValueDidChangeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::remove_normalizedValueDidChangeEvent
// Il2CppName: remove_normalizedValueDidChangeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::Rebuild
// Il2CppName: Rebuild
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::LayoutComplete
// Il2CppName: LayoutComplete
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateDrag
// Il2CppName: UpdateDrag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::MayDrag
// Il2CppName: MayDrag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnBeginDrag
// Il2CppName: OnBeginDrag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnDrag
// Il2CppName: OnDrag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::TextForNormalizedValue
// Il2CppName: TextForNormalizedValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::OnPointerDown
// Il2CppName: OnPointerDown
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::TextSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
