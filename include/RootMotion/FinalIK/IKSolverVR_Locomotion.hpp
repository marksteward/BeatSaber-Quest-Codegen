// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: RootMotion.InterpolationMode
#include "RootMotion/InterpolationMode.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xB8
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/Locomotion
  // [] Offset: FFFFFFFF
  class IKSolverVR::Locomotion : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDB96C8
    // [RangeAttribute] Offset: 0xDB96C8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB971C
    // public System.Single footDistance
    // Size: 0x4
    // Offset: 0x14
    float footDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9754
    // public System.Single stepThreshold
    // Size: 0x4
    // Offset: 0x18
    float stepThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB978C
    // public System.Single angleThreshold
    // Size: 0x4
    // Offset: 0x1C
    float angleThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB97C4
    // public System.Single comAngleMlp
    // Size: 0x4
    // Offset: 0x20
    float comAngleMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB97FC
    // public System.Single maxVelocity
    // Size: 0x4
    // Offset: 0x24
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9834
    // public System.Single velocityFactor
    // Size: 0x4
    // Offset: 0x28
    float velocityFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB986C
    // [RangeAttribute] Offset: 0xDB986C
    // public System.Single maxLegStretch
    // Size: 0x4
    // Offset: 0x2C
    float maxLegStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB98C4
    // public System.Single rootSpeed
    // Size: 0x4
    // Offset: 0x30
    float rootSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB98FC
    // public System.Single stepSpeed
    // Size: 0x4
    // Offset: 0x34
    float stepSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9934
    // public UnityEngine.AnimationCurve stepHeight
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* stepHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB996C
    // public UnityEngine.AnimationCurve heelHeight
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* heelHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB99A4
    // [RangeAttribute] Offset: 0xDB99A4
    // public System.Single relaxLegTwistMinAngle
    // Size: 0x4
    // Offset: 0x48
    float relaxLegTwistMinAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB99FC
    // public System.Single relaxLegTwistSpeed
    // Size: 0x4
    // Offset: 0x4C
    float relaxLegTwistSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9A34
    // public RootMotion.InterpolationMode stepInterpolation
    // Size: 0x4
    // Offset: 0x50
    RootMotion::InterpolationMode stepInterpolation;
    // Field size check
    static_assert(sizeof(RootMotion::InterpolationMode) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9A6C
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HideInInspector] Offset: 0xDB9AA4
    // public System.Boolean blockingEnabled
    // Size: 0x1
    // Offset: 0x60
    bool blockingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: blockingEnabled and: blockingLayers
    char __padding16[0x3] = {};
    // [HideInInspector] Offset: 0xDB9AB4
    // public UnityEngine.LayerMask blockingLayers
    // Size: 0x4
    // Offset: 0x64
    UnityEngine::LayerMask blockingLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [HideInInspector] Offset: 0xDB9AC4
    // public System.Single raycastRadius
    // Size: 0x4
    // Offset: 0x68
    float raycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HideInInspector] Offset: 0xDB9AD4
    // public System.Single raycastHeight
    // Size: 0x4
    // Offset: 0x6C
    float raycastHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB9AE4
    // public UnityEngine.Events.UnityEvent onLeftFootstep
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Events::UnityEvent* onLeftFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB9B1C
    // public UnityEngine.Events.UnityEvent onRightFootstep
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Events::UnityEvent* onRightFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB9B54
    // private UnityEngine.Vector3 <centerOfMass>k__BackingField
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 centerOfMass;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: centerOfMass and: footsteps
    char __padding22[0x4] = {};
    // private RootMotion.FinalIK.IKSolverVR/Footstep[] footsteps
    // Size: 0x8
    // Offset: 0x90
    ::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* footsteps;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>*) == 0x8);
    // private UnityEngine.Vector3 lastComPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 lastComPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 comVelocity
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 comVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 leftFootIndex
    // Size: 0x4
    // Offset: 0xB0
    int leftFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rightFootIndex
    // Size: 0x4
    // Offset: 0xB4
    int rightFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Locomotion
    Locomotion(float weight_ = {}, float footDistance_ = {}, float stepThreshold_ = {}, float angleThreshold_ = {}, float comAngleMlp_ = {}, float maxVelocity_ = {}, float velocityFactor_ = {}, float maxLegStretch_ = {}, float rootSpeed_ = {}, float stepSpeed_ = {}, UnityEngine::AnimationCurve* stepHeight_ = {}, UnityEngine::AnimationCurve* heelHeight_ = {}, float relaxLegTwistMinAngle_ = {}, float relaxLegTwistSpeed_ = {}, RootMotion::InterpolationMode stepInterpolation_ = {}, UnityEngine::Vector3 offset_ = {}, bool blockingEnabled_ = {}, UnityEngine::LayerMask blockingLayers_ = {}, float raycastRadius_ = {}, float raycastHeight_ = {}, UnityEngine::Events::UnityEvent* onLeftFootstep_ = {}, UnityEngine::Events::UnityEvent* onRightFootstep_ = {}, UnityEngine::Vector3 centerOfMass_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* footsteps_ = {}, UnityEngine::Vector3 lastComPosition_ = {}, UnityEngine::Vector3 comVelocity_ = {}, int leftFootIndex_ = {}, int rightFootIndex_ = {}) noexcept : weight{weight_}, footDistance{footDistance_}, stepThreshold{stepThreshold_}, angleThreshold{angleThreshold_}, comAngleMlp{comAngleMlp_}, maxVelocity{maxVelocity_}, velocityFactor{velocityFactor_}, maxLegStretch{maxLegStretch_}, rootSpeed{rootSpeed_}, stepSpeed{stepSpeed_}, stepHeight{stepHeight_}, heelHeight{heelHeight_}, relaxLegTwistMinAngle{relaxLegTwistMinAngle_}, relaxLegTwistSpeed{relaxLegTwistSpeed_}, stepInterpolation{stepInterpolation_}, offset{offset_}, blockingEnabled{blockingEnabled_}, blockingLayers{blockingLayers_}, raycastRadius{raycastRadius_}, raycastHeight{raycastHeight_}, onLeftFootstep{onLeftFootstep_}, onRightFootstep{onRightFootstep_}, centerOfMass{centerOfMass_}, footsteps{footsteps_}, lastComPosition{lastComPosition_}, comVelocity{comVelocity_}, leftFootIndex{leftFootIndex_}, rightFootIndex{rightFootIndex_} {}
    // public UnityEngine.Vector3 get_centerOfMass()
    // Offset: 0x17DFECC
    UnityEngine::Vector3 get_centerOfMass();
    // private System.Void set_centerOfMass(UnityEngine.Vector3 value)
    // Offset: 0x17DFED8
    void set_centerOfMass(UnityEngine::Vector3 value);
    // public System.Void Initiate(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasToes)
    // Offset: 0x17DFEE4
    void Initiate(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasToes);
    // public System.Void Reset(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations)
    // Offset: 0x17E01FC
    void Reset(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations);
    // public System.Void AddDeltaRotation(UnityEngine.Quaternion delta, UnityEngine.Vector3 pivot)
    // Offset: 0x17E0470
    void AddDeltaRotation(UnityEngine::Quaternion delta, UnityEngine::Vector3 pivot);
    // public System.Void AddDeltaPosition(UnityEngine.Vector3 delta)
    // Offset: 0x17E0848
    void AddDeltaPosition(UnityEngine::Vector3 delta);
    // public System.Void Solve(RootMotion.FinalIK.IKSolverVR/VirtualBone rootBone, RootMotion.FinalIK.IKSolverVR/Spine spine, RootMotion.FinalIK.IKSolverVR/Leg leftLeg, RootMotion.FinalIK.IKSolverVR/Leg rightLeg, RootMotion.FinalIK.IKSolverVR/Arm leftArm, RootMotion.FinalIK.IKSolverVR/Arm rightArm, System.Int32 supportLegIndex, out UnityEngine.Vector3 leftFootPosition, out UnityEngine.Vector3 rightFootPosition, out UnityEngine.Quaternion leftFootRotation, out UnityEngine.Quaternion rightFootRotation, out System.Single leftFootOffset, out System.Single rightFootOffset, out System.Single leftHeelOffset, out System.Single rightHeelOffset)
    // Offset: 0x17E09F8
    void Solve(RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone, RootMotion::FinalIK::IKSolverVR::Spine* spine, RootMotion::FinalIK::IKSolverVR::Leg* leftLeg, RootMotion::FinalIK::IKSolverVR::Leg* rightLeg, RootMotion::FinalIK::IKSolverVR::Arm* leftArm, RootMotion::FinalIK::IKSolverVR::Arm* rightArm, int supportLegIndex, UnityEngine::Vector3& leftFootPosition, UnityEngine::Vector3& rightFootPosition, UnityEngine::Quaternion& leftFootRotation, UnityEngine::Quaternion& rightFootRotation, float& leftFootOffset, float& rightFootOffset, float& leftHeelOffset, float& rightHeelOffset);
    // public UnityEngine.Vector3 get_leftFootstepPosition()
    // Offset: 0x17E23D4
    UnityEngine::Vector3 get_leftFootstepPosition();
    // public UnityEngine.Vector3 get_rightFootstepPosition()
    // Offset: 0x17E2414
    UnityEngine::Vector3 get_rightFootstepPosition();
    // public UnityEngine.Quaternion get_leftFootstepRotation()
    // Offset: 0x17E2458
    UnityEngine::Quaternion get_leftFootstepRotation();
    // public UnityEngine.Quaternion get_rightFootstepRotation()
    // Offset: 0x17E2498
    UnityEngine::Quaternion get_rightFootstepRotation();
    // private System.Boolean StepBlocked(UnityEngine.Vector3 fromPosition, UnityEngine.Vector3 toPosition, UnityEngine.Vector3 rootPosition)
    // Offset: 0x17E1FE0
    bool StepBlocked(UnityEngine::Vector3 fromPosition, UnityEngine::Vector3 toPosition, UnityEngine::Vector3 rootPosition);
    // private System.Boolean CanStep()
    // Offset: 0x17E2184
    bool CanStep();
    // static private System.Boolean GetLineSphereCollision(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x17E2208
    static bool GetLineSphereCollision(UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // public System.Void .ctor()
    // Offset: 0x17E24DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Locomotion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Locomotion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Locomotion*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR/Locomotion
  static check_size<sizeof(IKSolverVR::Locomotion), 180 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_LocomotionSizeCheck;
  static_assert(sizeof(IKSolverVR::Locomotion) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Locomotion*, "RootMotion.FinalIK", "IKSolverVR/Locomotion");
#pragma pack(pop)
