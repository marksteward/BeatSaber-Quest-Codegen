// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SliderState
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderState : public ::Il2CppObject {
    public:
    // public System.Single dragStartPos
    // Size: 0x4
    // Offset: 0x10
    float dragStartPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single dragStartValue
    // Size: 0x4
    // Offset: 0x14
    float dragStartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isDragging
    // Size: 0x1
    // Offset: 0x18
    bool isDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SliderState
    SliderState(float dragStartPos_ = {}, float dragStartValue_ = {}, bool isDragging_ = {}) noexcept : dragStartPos{dragStartPos_}, dragStartValue{dragStartValue_}, isDragging{isDragging_} {}
    // Get instance field: public System.Single dragStartPos
    float _get_dragStartPos();
    // Set instance field: public System.Single dragStartPos
    void _set_dragStartPos(float value);
    // Get instance field: public System.Single dragStartValue
    float _get_dragStartValue();
    // Set instance field: public System.Single dragStartValue
    void _set_dragStartValue(float value);
    // Get instance field: public System.Boolean isDragging
    bool _get_isDragging();
    // Set instance field: public System.Boolean isDragging
    void _set_isDragging(bool value);
    // public System.Void .ctor()
    // Offset: 0x1AB03DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SliderState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderState*, creationType>()));
    }
  }; // UnityEngine.SliderState
  #pragma pack(pop)
  static check_size<sizeof(SliderState), 24 + sizeof(bool)> __UnityEngine_SliderStateSizeCheck;
  static_assert(sizeof(SliderState) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderState*, "UnityEngine", "SliderState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SliderState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
