// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMappingLimb
#include "RootMotion/FinalIK/IKMappingLimb.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMappingLimb/BoneMapType
  // [] Offset: FFFFFFFF
  struct IKMappingLimb::BoneMapType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BoneMapType
    constexpr BoneMapType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static constexpr const int Parent = 0;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Parent();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static void _set_Parent(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static constexpr const int Bone1 = 1;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone1();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static void _set_Bone1(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static constexpr const int Bone2 = 2;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone2();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static void _set_Bone2(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static constexpr const int Bone3 = 3;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone3();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static void _set_Bone3(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
  }; // RootMotion.FinalIK.IKMappingLimb/BoneMapType
  static check_size<sizeof(IKMappingLimb::BoneMapType), 0 + sizeof(int)> __RootMotion_FinalIK_IKMappingLimb_BoneMapTypeSizeCheck;
  static_assert(sizeof(IKMappingLimb::BoneMapType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMappingLimb::BoneMapType, "RootMotion.FinalIK", "IKMappingLimb/BoneMapType");
