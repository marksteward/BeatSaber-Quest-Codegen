// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
#include "RootMotion/FinalIK/IKSolverVR_BodyPart.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x150
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Leg : public RootMotion::FinalIK::IKSolverVR::BodyPart {
    public:
    // [TooltipAttribute] Offset: 0xDF65DC
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF6614
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF664C
    // [RangeAttribute] Offset: 0xDF664C
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x58
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF66A0
    // [RangeAttribute] Offset: 0xDF66A0
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x5C
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF66F4
    // [RangeAttribute] Offset: 0xDF66F4
    // public System.Single bendGoalWeight
    // Size: 0x4
    // Offset: 0x60
    float bendGoalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF6748
    // [RangeAttribute] Offset: 0xDF6748
    // public System.Single swivelOffset
    // Size: 0x4
    // Offset: 0x64
    float swivelOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF67A4
    // [RangeAttribute] Offset: 0xDF67A4
    // public System.Single bendToTargetWeight
    // Size: 0x4
    // Offset: 0x68
    float bendToTargetWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF67F8
    // [RangeAttribute] Offset: 0xDF67F8
    // public System.Single legLengthMlp
    // Size: 0x4
    // Offset: 0x6C
    float legLengthMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF6850
    // public UnityEngine.AnimationCurve stretchCurve
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AnimationCurve* stretchCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 IKPosition
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x84
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 footPositionOffset
    // Size: 0xC
    // Offset: 0x94
    UnityEngine::Vector3 footPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 heelPositionOffset
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 heelPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion footRotationOffset
    // Size: 0x10
    // Offset: 0xAC
    UnityEngine::Quaternion footRotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Single currentMag
    // Size: 0x4
    // Offset: 0xBC
    float currentMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useAnimatedBendNormal
    // Size: 0x1
    // Offset: 0xC0
    bool useAnimatedBendNormal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAnimatedBendNormal and: position
    char __padding15[0x3] = {};
    // private UnityEngine.Vector3 <position>k__BackingField
    // Size: 0xC
    // Offset: 0xC4
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion <rotation>k__BackingField
    // Size: 0x10
    // Offset: 0xD0
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean <hasToes>k__BackingField
    // Size: 0x1
    // Offset: 0xE0
    bool hasToes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasToes and: thighRelativeToPelvis
    char __padding18[0x3] = {};
    // private UnityEngine.Vector3 <thighRelativeToPelvis>k__BackingField
    // Size: 0xC
    // Offset: 0xE4
    UnityEngine::Vector3 thighRelativeToPelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 footPosition
    // Size: 0xC
    // Offset: 0xF0
    UnityEngine::Vector3 footPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion footRotation
    // Size: 0x10
    // Offset: 0xFC
    UnityEngine::Quaternion footRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bendNormal
    // Size: 0xC
    // Offset: 0x10C
    UnityEngine::Vector3 bendNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion calfRelToThigh
    // Size: 0x10
    // Offset: 0x118
    UnityEngine::Quaternion calfRelToThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion thighRelToFoot
    // Size: 0x10
    // Offset: 0x128
    UnityEngine::Quaternion thighRelToFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bendNormalRelToPelvis
    // Size: 0xC
    // Offset: 0x138
    UnityEngine::Vector3 bendNormalRelToPelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bendNormalRelToTarget
    // Size: 0xC
    // Offset: 0x144
    UnityEngine::Vector3 bendNormalRelToTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Leg
    Leg(UnityEngine::Transform* target_ = {}, UnityEngine::Transform* bendGoal_ = {}, float positionWeight_ = {}, float rotationWeight_ = {}, float bendGoalWeight_ = {}, float swivelOffset_ = {}, float bendToTargetWeight_ = {}, float legLengthMlp_ = {}, UnityEngine::AnimationCurve* stretchCurve_ = {}, UnityEngine::Vector3 IKPosition_ = {}, UnityEngine::Quaternion IKRotation_ = {}, UnityEngine::Vector3 footPositionOffset_ = {}, UnityEngine::Vector3 heelPositionOffset_ = {}, UnityEngine::Quaternion footRotationOffset_ = {}, float currentMag_ = {}, bool useAnimatedBendNormal_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, bool hasToes_ = {}, UnityEngine::Vector3 thighRelativeToPelvis_ = {}, UnityEngine::Vector3 footPosition_ = {}, UnityEngine::Quaternion footRotation_ = {}, UnityEngine::Vector3 bendNormal_ = {}, UnityEngine::Quaternion calfRelToThigh_ = {}, UnityEngine::Quaternion thighRelToFoot_ = {}, UnityEngine::Vector3 bendNormalRelToPelvis_ = {}, UnityEngine::Vector3 bendNormalRelToTarget_ = {}) noexcept : target{target_}, bendGoal{bendGoal_}, positionWeight{positionWeight_}, rotationWeight{rotationWeight_}, bendGoalWeight{bendGoalWeight_}, swivelOffset{swivelOffset_}, bendToTargetWeight{bendToTargetWeight_}, legLengthMlp{legLengthMlp_}, stretchCurve{stretchCurve_}, IKPosition{IKPosition_}, IKRotation{IKRotation_}, footPositionOffset{footPositionOffset_}, heelPositionOffset{heelPositionOffset_}, footRotationOffset{footRotationOffset_}, currentMag{currentMag_}, useAnimatedBendNormal{useAnimatedBendNormal_}, position{position_}, rotation{rotation_}, hasToes{hasToes_}, thighRelativeToPelvis{thighRelativeToPelvis_}, footPosition{footPosition_}, footRotation{footRotation_}, bendNormal{bendNormal_}, calfRelToThigh{calfRelToThigh_}, thighRelToFoot{thighRelToFoot_}, bendNormalRelToPelvis{bendNormalRelToPelvis_}, bendNormalRelToTarget{bendNormalRelToTarget_} {}
    // Get instance field: public UnityEngine.Transform target
    UnityEngine::Transform* _get_target();
    // Set instance field: public UnityEngine.Transform target
    void _set_target(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform bendGoal
    UnityEngine::Transform* _get_bendGoal();
    // Set instance field: public UnityEngine.Transform bendGoal
    void _set_bendGoal(UnityEngine::Transform* value);
    // Get instance field: public System.Single positionWeight
    float _get_positionWeight();
    // Set instance field: public System.Single positionWeight
    void _set_positionWeight(float value);
    // Get instance field: public System.Single rotationWeight
    float _get_rotationWeight();
    // Set instance field: public System.Single rotationWeight
    void _set_rotationWeight(float value);
    // Get instance field: public System.Single bendGoalWeight
    float _get_bendGoalWeight();
    // Set instance field: public System.Single bendGoalWeight
    void _set_bendGoalWeight(float value);
    // Get instance field: public System.Single swivelOffset
    float _get_swivelOffset();
    // Set instance field: public System.Single swivelOffset
    void _set_swivelOffset(float value);
    // Get instance field: public System.Single bendToTargetWeight
    float _get_bendToTargetWeight();
    // Set instance field: public System.Single bendToTargetWeight
    void _set_bendToTargetWeight(float value);
    // Get instance field: public System.Single legLengthMlp
    float _get_legLengthMlp();
    // Set instance field: public System.Single legLengthMlp
    void _set_legLengthMlp(float value);
    // Get instance field: public UnityEngine.AnimationCurve stretchCurve
    UnityEngine::AnimationCurve* _get_stretchCurve();
    // Set instance field: public UnityEngine.AnimationCurve stretchCurve
    void _set_stretchCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: public UnityEngine.Vector3 IKPosition
    UnityEngine::Vector3 _get_IKPosition();
    // Set instance field: public UnityEngine.Vector3 IKPosition
    void _set_IKPosition(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Quaternion IKRotation
    UnityEngine::Quaternion _get_IKRotation();
    // Set instance field: public UnityEngine.Quaternion IKRotation
    void _set_IKRotation(UnityEngine::Quaternion value);
    // Get instance field: public UnityEngine.Vector3 footPositionOffset
    UnityEngine::Vector3 _get_footPositionOffset();
    // Set instance field: public UnityEngine.Vector3 footPositionOffset
    void _set_footPositionOffset(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Vector3 heelPositionOffset
    UnityEngine::Vector3 _get_heelPositionOffset();
    // Set instance field: public UnityEngine.Vector3 heelPositionOffset
    void _set_heelPositionOffset(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Quaternion footRotationOffset
    UnityEngine::Quaternion _get_footRotationOffset();
    // Set instance field: public UnityEngine.Quaternion footRotationOffset
    void _set_footRotationOffset(UnityEngine::Quaternion value);
    // Get instance field: public System.Single currentMag
    float _get_currentMag();
    // Set instance field: public System.Single currentMag
    void _set_currentMag(float value);
    // Get instance field: public System.Boolean useAnimatedBendNormal
    bool _get_useAnimatedBendNormal();
    // Set instance field: public System.Boolean useAnimatedBendNormal
    void _set_useAnimatedBendNormal(bool value);
    // Get instance field: private UnityEngine.Vector3 <position>k__BackingField
    UnityEngine::Vector3 _get_$position$k__BackingField();
    // Set instance field: private UnityEngine.Vector3 <position>k__BackingField
    void _set_$position$k__BackingField(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion <rotation>k__BackingField
    UnityEngine::Quaternion _get_$rotation$k__BackingField();
    // Set instance field: private UnityEngine.Quaternion <rotation>k__BackingField
    void _set_$rotation$k__BackingField(UnityEngine::Quaternion value);
    // Get instance field: private System.Boolean <hasToes>k__BackingField
    bool _get_$hasToes$k__BackingField();
    // Set instance field: private System.Boolean <hasToes>k__BackingField
    void _set_$hasToes$k__BackingField(bool value);
    // Get instance field: private UnityEngine.Vector3 <thighRelativeToPelvis>k__BackingField
    UnityEngine::Vector3 _get_$thighRelativeToPelvis$k__BackingField();
    // Set instance field: private UnityEngine.Vector3 <thighRelativeToPelvis>k__BackingField
    void _set_$thighRelativeToPelvis$k__BackingField(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 footPosition
    UnityEngine::Vector3 _get_footPosition();
    // Set instance field: private UnityEngine.Vector3 footPosition
    void _set_footPosition(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion footRotation
    UnityEngine::Quaternion _get_footRotation();
    // Set instance field: private UnityEngine.Quaternion footRotation
    void _set_footRotation(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 bendNormal
    UnityEngine::Vector3 _get_bendNormal();
    // Set instance field: private UnityEngine.Vector3 bendNormal
    void _set_bendNormal(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion calfRelToThigh
    UnityEngine::Quaternion _get_calfRelToThigh();
    // Set instance field: private UnityEngine.Quaternion calfRelToThigh
    void _set_calfRelToThigh(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Quaternion thighRelToFoot
    UnityEngine::Quaternion _get_thighRelToFoot();
    // Set instance field: private UnityEngine.Quaternion thighRelToFoot
    void _set_thighRelToFoot(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 bendNormalRelToPelvis
    UnityEngine::Vector3 _get_bendNormalRelToPelvis();
    // Set instance field: private UnityEngine.Vector3 bendNormalRelToPelvis
    void _set_bendNormalRelToPelvis(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 bendNormalRelToTarget
    UnityEngine::Vector3 _get_bendNormalRelToTarget();
    // Set instance field: private UnityEngine.Vector3 bendNormalRelToTarget
    void _set_bendNormalRelToTarget(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x1E287CC
    UnityEngine::Vector3 get_position();
    // private System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x1E287D8
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x1E287E4
    UnityEngine::Quaternion get_rotation();
    // private System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x1E287F0
    void set_rotation(UnityEngine::Quaternion value);
    // public System.Boolean get_hasToes()
    // Offset: 0x1E287FC
    bool get_hasToes();
    // private System.Void set_hasToes(System.Boolean value)
    // Offset: 0x1E28804
    void set_hasToes(bool value);
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_thigh()
    // Offset: 0x1E28810
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_thigh();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_calf()
    // Offset: 0x1E28844
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_calf();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_foot()
    // Offset: 0x1E2887C
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_foot();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_toes()
    // Offset: 0x1E288B4
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_toes();
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_lastBone()
    // Offset: 0x1E288EC
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_lastBone();
    // public UnityEngine.Vector3 get_thighRelativeToPelvis()
    // Offset: 0x1E2892C
    UnityEngine::Vector3 get_thighRelativeToPelvis();
    // private System.Void set_thighRelativeToPelvis(UnityEngine.Vector3 value)
    // Offset: 0x1E28938
    void set_thighRelativeToPelvis(UnityEngine::Vector3 value);
    // private System.Void ApplyPositionOffset(UnityEngine.Vector3 offset, System.Single weight)
    // Offset: 0x1E29744
    void ApplyPositionOffset(UnityEngine::Vector3 offset, float weight);
    // private System.Void ApplyRotationOffset(UnityEngine.Quaternion offset, System.Single weight)
    // Offset: 0x1E2950C
    void ApplyRotationOffset(UnityEngine::Quaternion offset, float weight);
    // public System.Void Solve(System.Boolean stretch)
    // Offset: 0x1E29E00
    void Solve(bool stretch);
    // private System.Void FixTwistRotations()
    // Offset: 0x1E2A54C
    void FixTwistRotations();
    // private System.Void Stretching()
    // Offset: 0x1E2A020
    void Stretching();
    // public System.Void .ctor()
    // Offset: 0x1E2AC80
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Leg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Leg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Leg*, creationType>()));
    }
    // protected override System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x1E28944
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    void OnRead(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public override System.Void PreSolve()
    // Offset: 0x1E28F60
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::PreSolve()
    void PreSolve();
    // public override System.Void ApplyOffsets()
    // Offset: 0x1E29848
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ApplyOffsets()
    void ApplyOffsets();
    // public override System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0x1E2A9B4
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    void Write(::Array<UnityEngine::Vector3>*& solvedPositions, ::Array<UnityEngine::Quaternion>*& solvedRotations);
    // public override System.Void ResetOffsets()
    // Offset: 0x1E2ABD0
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ResetOffsets()
    void ResetOffsets();
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Leg), 324 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVR_LegSizeCheck;
  static_assert(sizeof(IKSolverVR::Leg) == 0x150);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Leg*, "RootMotion.FinalIK", "IKSolverVR/Leg");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_hasToes
// Il2CppName: get_hasToes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_hasToes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_hasToes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_hasToes
// Il2CppName: set_hasToes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(bool)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_hasToes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_hasToes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_thigh
// Il2CppName: get_thigh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_thigh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_thigh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_calf
// Il2CppName: get_calf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_calf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_calf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_foot
// Il2CppName: get_foot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_foot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_foot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_toes
// Il2CppName: get_toes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_toes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_toes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_lastBone
// Il2CppName: get_lastBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_lastBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_lastBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_thighRelativeToPelvis
// Il2CppName: get_thighRelativeToPelvis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_thighRelativeToPelvis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_thighRelativeToPelvis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_thighRelativeToPelvis
// Il2CppName: set_thighRelativeToPelvis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_thighRelativeToPelvis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_thighRelativeToPelvis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyPositionOffset
// Il2CppName: ApplyPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyPositionOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyRotationOffset
// Il2CppName: ApplyRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyRotationOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(bool)>(&RootMotion::FinalIK::IKSolverVR::Leg::Solve)> {
  static const MethodInfo* get() {
    static auto* stretch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stretch});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::FixTwistRotations
// Il2CppName: FixTwistRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::FixTwistRotations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "FixTwistRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Stretching
// Il2CppName: Stretching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::Stretching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Stretching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::OnRead
// Il2CppName: OnRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*, bool, bool, bool, bool, bool, int, int)>(&RootMotion::FinalIK::IKSolverVR::Leg::OnRead)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasChest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasNeck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasShoulders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasLegs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rootIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::PreSolve
// Il2CppName: PreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::PreSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyOffsets
// Il2CppName: ApplyOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::Array<UnityEngine::Vector3>*&, ::Array<UnityEngine::Quaternion>*&)>(&RootMotion::FinalIK::IKSolverVR::Leg::Write)> {
  static const MethodInfo* get() {
    static auto* solvedPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* solvedRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solvedPositions, solvedRotations});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ResetOffsets
// Il2CppName: ResetOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::ResetOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ResetOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
