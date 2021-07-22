// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.InputFeatureType
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputFeatureType/*, public System::Enum*/ {
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: InputFeatureType
    constexpr InputFeatureType(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.InputFeatureType Custom
    static constexpr const uint Custom = 0u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Custom
    static UnityEngine::XR::InputFeatureType _get_Custom();
    // Set static field: static public UnityEngine.XR.InputFeatureType Custom
    static void _set_Custom(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Binary
    static constexpr const uint Binary = 1u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Binary
    static UnityEngine::XR::InputFeatureType _get_Binary();
    // Set static field: static public UnityEngine.XR.InputFeatureType Binary
    static void _set_Binary(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType DiscreteStates
    static constexpr const uint DiscreteStates = 2u;
    // Get static field: static public UnityEngine.XR.InputFeatureType DiscreteStates
    static UnityEngine::XR::InputFeatureType _get_DiscreteStates();
    // Set static field: static public UnityEngine.XR.InputFeatureType DiscreteStates
    static void _set_DiscreteStates(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Axis1D
    static constexpr const uint Axis1D = 3u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Axis1D
    static UnityEngine::XR::InputFeatureType _get_Axis1D();
    // Set static field: static public UnityEngine.XR.InputFeatureType Axis1D
    static void _set_Axis1D(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Axis2D
    static constexpr const uint Axis2D = 4u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Axis2D
    static UnityEngine::XR::InputFeatureType _get_Axis2D();
    // Set static field: static public UnityEngine.XR.InputFeatureType Axis2D
    static void _set_Axis2D(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Axis3D
    static constexpr const uint Axis3D = 5u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Axis3D
    static UnityEngine::XR::InputFeatureType _get_Axis3D();
    // Set static field: static public UnityEngine.XR.InputFeatureType Axis3D
    static void _set_Axis3D(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Rotation
    static constexpr const uint Rotation = 6u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Rotation
    static UnityEngine::XR::InputFeatureType _get_Rotation();
    // Set static field: static public UnityEngine.XR.InputFeatureType Rotation
    static void _set_Rotation(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Hand
    static constexpr const uint Hand = 7u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Hand
    static UnityEngine::XR::InputFeatureType _get_Hand();
    // Set static field: static public UnityEngine.XR.InputFeatureType Hand
    static void _set_Hand(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Bone
    static constexpr const uint Bone = 8u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Bone
    static UnityEngine::XR::InputFeatureType _get_Bone();
    // Set static field: static public UnityEngine.XR.InputFeatureType Bone
    static void _set_Bone(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType Eyes
    static constexpr const uint Eyes = 9u;
    // Get static field: static public UnityEngine.XR.InputFeatureType Eyes
    static UnityEngine::XR::InputFeatureType _get_Eyes();
    // Set static field: static public UnityEngine.XR.InputFeatureType Eyes
    static void _set_Eyes(UnityEngine::XR::InputFeatureType value);
    // static field const value: static public UnityEngine.XR.InputFeatureType kUnityXRInputFeatureTypeInvalid
    static constexpr const uint kUnityXRInputFeatureTypeInvalid = 4294967295u;
    // Get static field: static public UnityEngine.XR.InputFeatureType kUnityXRInputFeatureTypeInvalid
    static UnityEngine::XR::InputFeatureType _get_kUnityXRInputFeatureTypeInvalid();
    // Set static field: static public UnityEngine.XR.InputFeatureType kUnityXRInputFeatureTypeInvalid
    static void _set_kUnityXRInputFeatureTypeInvalid(UnityEngine::XR::InputFeatureType value);
  }; // UnityEngine.XR.InputFeatureType
  #pragma pack(pop)
  static check_size<sizeof(InputFeatureType), 0 + sizeof(uint)> __UnityEngine_XR_InputFeatureTypeSizeCheck;
  static_assert(sizeof(InputFeatureType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputFeatureType, "UnityEngine.XR", "InputFeatureType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
