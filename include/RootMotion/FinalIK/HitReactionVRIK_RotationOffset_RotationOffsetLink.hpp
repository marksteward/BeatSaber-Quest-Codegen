// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset
#include "RootMotion/FinalIK/HitReactionVRIK_RotationOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RotationOffset
#include "RootMotion/FinalIK/IKSolverVR_RotationOffset.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
  class HitReactionVRIK::RotationOffset::RotationOffsetLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2D564
    // public RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::RotationOffset) == 0x4);
    // [TooltipAttribute] Offset: 0xD2D59C
    // [RangeAttribute] Offset: 0xD2D59C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastValue
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Quaternion lastValue;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion current
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Quaternion current;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: RotationOffsetLink
    RotationOffsetLink(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset_ = {}, float weight_ = {}, UnityEngine::Quaternion lastValue_ = {}, UnityEngine::Quaternion current_ = {}) noexcept : rotationOffset{rotationOffset_}, weight{weight_}, lastValue{lastValue_}, current{current_} {}
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x1AA37C0
    void Apply(RootMotion::FinalIK::VRIK* ik, UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1AA34A8
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x1AA38FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::RotationOffset::RotationOffsetLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::RotationOffset::RotationOffsetLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::RotationOffset::RotationOffsetLink), 40 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_HitReactionVRIK_RotationOffset_RotationOffsetLinkSizeCheck;
  static_assert(sizeof(HitReactionVRIK::RotationOffset::RotationOffsetLink) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset/RotationOffsetLink");
