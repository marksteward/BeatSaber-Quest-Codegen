// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.Compute_DistanceTransform_EventTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct Compute_DistanceTransform_EventTypes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Compute_DistanceTransform_EventTypes
    constexpr Compute_DistanceTransform_EventTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static constexpr const int Processing = 0;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static TMPro::Compute_DistanceTransform_EventTypes _get_Processing();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static void _set_Processing(TMPro::Compute_DistanceTransform_EventTypes value);
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static constexpr const int Completed = 1;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static TMPro::Compute_DistanceTransform_EventTypes _get_Completed();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static void _set_Completed(TMPro::Compute_DistanceTransform_EventTypes value);
  }; // TMPro.Compute_DistanceTransform_EventTypes
  #pragma pack(pop)
  static check_size<sizeof(Compute_DistanceTransform_EventTypes), 0 + sizeof(int)> __TMPro_Compute_DistanceTransform_EventTypesSizeCheck;
  static_assert(sizeof(Compute_DistanceTransform_EventTypes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::Compute_DistanceTransform_EventTypes, "TMPro", "Compute_DistanceTransform_EventTypes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
