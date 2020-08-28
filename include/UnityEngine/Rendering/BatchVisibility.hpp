// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.BatchVisibility
  struct BatchVisibility : public System::ValueType {
    public:
    // public readonly System.Int32 offset
    // Offset: 0x0
    int offset;
    // public readonly System.Int32 instancesCount
    // Offset: 0x4
    int instancesCount;
    // public System.Int32 visibleCount
    // Offset: 0x8
    int visibleCount;
    // Creating value type constructor for type: BatchVisibility
    constexpr BatchVisibility(int offset_ = {}, int instancesCount_ = {}, int visibleCount_ = {}) : offset{offset_}, instancesCount{instancesCount_}, visibleCount{visibleCount_} {}
  }; // UnityEngine.Rendering.BatchVisibility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchVisibility, "UnityEngine.Rendering", "BatchVisibility");
#pragma pack(pop)
