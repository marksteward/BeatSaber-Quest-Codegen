// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: SliderState
  class SliderState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  // Autogenerated type: UnityEngine.SliderHandler
  // [] Offset: FFFFFFFF
  struct SliderHandler/*, public System::ValueType*/ {
    public:
    // private readonly UnityEngine.Rect position
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Rect position;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private readonly System.Single currentValue
    // Size: 0x4
    // Offset: 0x10
    float currentValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single size
    // Size: 0x4
    // Offset: 0x14
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single start
    // Size: 0x4
    // Offset: 0x18
    float start;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single end
    // Size: 0x4
    // Offset: 0x1C
    float end;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly UnityEngine.GUIStyle slider
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GUIStyle* slider;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly UnityEngine.GUIStyle thumb
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GUIStyle* thumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly UnityEngine.GUIStyle thumbExtent
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GUIStyle* thumbExtent;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly System.Boolean horiz
    // Size: 0x1
    // Offset: 0x38
    bool horiz;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: horiz and: id
    char __padding8[0x3] = {};
    // private readonly System.Int32 id
    // Size: 0x4
    // Offset: 0x3C
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SliderHandler
    constexpr SliderHandler(UnityEngine::Rect position_ = {}, float currentValue_ = {}, float size_ = {}, float start_ = {}, float end_ = {}, UnityEngine::GUIStyle* slider_ = {}, UnityEngine::GUIStyle* thumb_ = {}, UnityEngine::GUIStyle* thumbExtent_ = {}, bool horiz_ = {}, int id_ = {}) noexcept : position{position_}, currentValue{currentValue_}, size{size_}, start{start_}, end{end_}, slider{slider_}, thumb{thumb_}, thumbExtent{thumbExtent_}, horiz{horiz_}, id{id_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Rect position, System.Single currentValue, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent)
    // Offset: 0xCA3160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SliderHandler(UnityEngine::Rect position, float currentValue, float size, float start, float end, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, bool horiz, int id, UnityEngine::GUIStyle* thumbExtent) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SliderHandler::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(position, currentValue, size, start, end, slider, thumb, horiz, id, thumbExtent)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, position, currentValue, size, start, end, slider, thumb, horiz, id, thumbExtent);
    }
    // public System.Single Handle()
    // Offset: 0xCA316C
    float Handle();
    // private System.Single OnMouseDown()
    // Offset: 0xCA3174
    float OnMouseDown();
    // private System.Single OnMouseDrag()
    // Offset: 0xCA317C
    float OnMouseDrag();
    // private System.Single OnMouseUp()
    // Offset: 0xCA3184
    float OnMouseUp();
    // private System.Single OnRepaint()
    // Offset: 0xCA318C
    float OnRepaint();
    // private UnityEngine.EventType CurrentEventType()
    // Offset: 0xCA3194
    UnityEngine::EventType CurrentEventType();
    // private System.Int32 CurrentScrollTroughSide()
    // Offset: 0xCA319C
    int CurrentScrollTroughSide();
    // private System.Boolean IsEmptySlider()
    // Offset: 0xCA31A4
    bool IsEmptySlider();
    // private System.Boolean SupportsPageMovements()
    // Offset: 0xCA31B4
    bool SupportsPageMovements();
    // private System.Single PageMovementValue()
    // Offset: 0xCA31BC
    float PageMovementValue();
    // private System.Single PageUpMovementBound()
    // Offset: 0xCA31C4
    float PageUpMovementBound();
    // private UnityEngine.Event CurrentEvent()
    // Offset: 0xCA31CC
    UnityEngine::Event* CurrentEvent();
    // private System.Single ValueForCurrentMousePosition()
    // Offset: 0xCA321C
    float ValueForCurrentMousePosition();
    // private System.Single Clamp(System.Single value)
    // Offset: 0xCA3224
    float Clamp(float value);
    // private UnityEngine.Rect ThumbSelectionRect()
    // Offset: 0xCA322C
    UnityEngine::Rect ThumbSelectionRect();
    // private System.Void StartDraggingWithValue(System.Single dragStartValue)
    // Offset: 0xCA3234
    void StartDraggingWithValue(float dragStartValue);
    // private UnityEngine.SliderState SliderState()
    // Offset: 0xCA323C
    UnityEngine::SliderState* SliderState();
    // private UnityEngine.Rect ThumbExtRect()
    // Offset: 0xCA3244
    UnityEngine::Rect ThumbExtRect();
    // private UnityEngine.Rect ThumbRect()
    // Offset: 0xCA324C
    UnityEngine::Rect ThumbRect();
    // private UnityEngine.Rect VerticalThumbRect()
    // Offset: 0xCA3254
    UnityEngine::Rect VerticalThumbRect();
    // private UnityEngine.Rect HorizontalThumbRect()
    // Offset: 0xCA325C
    UnityEngine::Rect HorizontalThumbRect();
    // private System.Single ClampedCurrentValue()
    // Offset: 0xCA3264
    float ClampedCurrentValue();
    // private System.Single MousePosition()
    // Offset: 0xCA3270
    float MousePosition();
    // private System.Single ValuesPerPixel()
    // Offset: 0xCA3278
    float ValuesPerPixel();
    // private System.Single ThumbSize()
    // Offset: 0xCA3280
    float ThumbSize();
    // private System.Single MaxValue()
    // Offset: 0xCA3288
    float MaxValue();
    // private System.Single MinValue()
    // Offset: 0xCA3290
    float MinValue();
  }; // UnityEngine.SliderHandler
  static check_size<sizeof(SliderHandler), 60 + sizeof(int)> __UnityEngine_SliderHandlerSizeCheck;
  static_assert(sizeof(SliderHandler) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderHandler, "UnityEngine", "SliderHandler");
#pragma pack(pop)
