// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  struct BatchVisibility/*, public System::ValueType*/ {
    public:
    // public readonly System.Int32 offset
    // Size: 0x4
    // Offset: 0x0
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 instancesCount
    // Size: 0x4
    // Offset: 0x4
    int instancesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleCount
    // Size: 0x4
    // Offset: 0x8
    int visibleCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BatchVisibility
    constexpr BatchVisibility(int offset_ = {}, int instancesCount_ = {}, int visibleCount_ = {}) noexcept : offset{offset_}, instancesCount{instancesCount_}, visibleCount{visibleCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public readonly System.Int32 offset
    int _get_offset();
    // Set instance field: public readonly System.Int32 offset
    void _set_offset(int value);
    // Get instance field: public readonly System.Int32 instancesCount
    int _get_instancesCount();
    // Set instance field: public readonly System.Int32 instancesCount
    void _set_instancesCount(int value);
    // Get instance field: public System.Int32 visibleCount
    int _get_visibleCount();
    // Set instance field: public System.Int32 visibleCount
    void _set_visibleCount(int value);
  }; // UnityEngine.Rendering.BatchVisibility
  #pragma pack(pop)
  static check_size<sizeof(BatchVisibility), 8 + sizeof(int)> __UnityEngine_Rendering_BatchVisibilitySizeCheck;
  static_assert(sizeof(BatchVisibility) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchVisibility, "UnityEngine.Rendering", "BatchVisibility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
