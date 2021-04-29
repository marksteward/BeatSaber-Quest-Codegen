// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR
  class IKSolverVR : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverVR::Arm
    class Arm;
    // Nested type: RootMotion::FinalIK::IKSolverVR::BodyPart
    class BodyPart;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Footstep
    class Footstep;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Leg
    class Leg;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Locomotion
    class Locomotion;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Spine
    class Spine;
    // Nested type: RootMotion::FinalIK::IKSolverVR::PositionOffset
    struct PositionOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::RotationOffset
    struct RotationOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::VirtualBone
    class VirtualBone;
    // private UnityEngine.Transform[] solverTransforms
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* solverTransforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private System.Boolean hasChest
    // Size: 0x1
    // Offset: 0x60
    bool hasChest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasNeck
    // Size: 0x1
    // Offset: 0x61
    bool hasNeck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasShoulders
    // Size: 0x1
    // Offset: 0x62
    bool hasShoulders;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasToes
    // Size: 0x1
    // Offset: 0x63
    bool hasToes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasLegs
    // Size: 0x1
    // Offset: 0x64
    bool hasLegs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLegs and: readPositions
    char __padding5[0x3] = {};
    // private UnityEngine.Vector3[] readPositions
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::Vector3>* readPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] readRotations
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* readRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3[] solvedPositions
    // Size: 0x8
    // Offset: 0x78
    ::Array<UnityEngine::Vector3>* solvedPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] solvedRotations
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::Quaternion>* solvedRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Quaternion[] defaultLocalRotations
    // Size: 0x8
    // Offset: 0x88
    ::Array<UnityEngine::Quaternion>* defaultLocalRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3[] defaultLocalPositions
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* defaultLocalPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector3 rootV
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 rootV;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 rootVelocity
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 rootVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bodyOffset
    // Size: 0xC
    // Offset: 0xB0
    UnityEngine::Vector3 bodyOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 supportLegIndex
    // Size: 0x4
    // Offset: 0xBC
    int supportLegIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastLOD
    // Size: 0x4
    // Offset: 0xC0
    int lastLOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xD28860
    // [RangeAttribute] Offset: 0xD28860
    // public System.Int32 LOD
    // Size: 0x4
    // Offset: 0xC4
    int LOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xD288B4
    // public System.Boolean plantFeet
    // Size: 0x1
    // Offset: 0xC8
    bool plantFeet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: plantFeet and: rootBone
    char __padding18[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD288EC
    // private RootMotion.FinalIK.IKSolverVR/VirtualBone <rootBone>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::VirtualBone*) == 0x8);
    // [TooltipAttribute] Offset: 0xD288FC
    // public RootMotion.FinalIK.IKSolverVR/Spine spine
    // Size: 0x8
    // Offset: 0xD8
    RootMotion::FinalIK::IKSolverVR::Spine* spine;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Spine*) == 0x8);
    // [TooltipAttribute] Offset: 0xD28934
    // public RootMotion.FinalIK.IKSolverVR/Arm leftArm
    // Size: 0x8
    // Offset: 0xE0
    RootMotion::FinalIK::IKSolverVR::Arm* leftArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2896C
    // public RootMotion.FinalIK.IKSolverVR/Arm rightArm
    // Size: 0x8
    // Offset: 0xE8
    RootMotion::FinalIK::IKSolverVR::Arm* rightArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // [TooltipAttribute] Offset: 0xD289A4
    // public RootMotion.FinalIK.IKSolverVR/Leg leftLeg
    // Size: 0x8
    // Offset: 0xF0
    RootMotion::FinalIK::IKSolverVR::Leg* leftLeg;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Leg*) == 0x8);
    // [TooltipAttribute] Offset: 0xD289DC
    // public RootMotion.FinalIK.IKSolverVR/Leg rightLeg
    // Size: 0x8
    // Offset: 0xF8
    RootMotion::FinalIK::IKSolverVR::Leg* rightLeg;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Leg*) == 0x8);
    // [TooltipAttribute] Offset: 0xD28A14
    // public RootMotion.FinalIK.IKSolverVR/Locomotion locomotion
    // Size: 0x8
    // Offset: 0x100
    RootMotion::FinalIK::IKSolverVR::Locomotion* locomotion;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Locomotion*) == 0x8);
    // private RootMotion.FinalIK.IKSolverVR/Leg[] legs
    // Size: 0x8
    // Offset: 0x108
    ::Array<RootMotion::FinalIK::IKSolverVR::Leg*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Leg*>*) == 0x8);
    // private RootMotion.FinalIK.IKSolverVR/Arm[] arms
    // Size: 0x8
    // Offset: 0x110
    ::Array<RootMotion::FinalIK::IKSolverVR::Arm*>* arms;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Arm*>*) == 0x8);
    // private UnityEngine.Vector3 headPosition
    // Size: 0xC
    // Offset: 0x118
    UnityEngine::Vector3 headPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 headDeltaPosition
    // Size: 0xC
    // Offset: 0x124
    UnityEngine::Vector3 headDeltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 raycastOriginPelvis
    // Size: 0xC
    // Offset: 0x130
    UnityEngine::Vector3 raycastOriginPelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastOffset
    // Size: 0xC
    // Offset: 0x13C
    UnityEngine::Vector3 lastOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos1
    // Size: 0xC
    // Offset: 0x148
    UnityEngine::Vector3 debugPos1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos2
    // Size: 0xC
    // Offset: 0x154
    UnityEngine::Vector3 debugPos2;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos3
    // Size: 0xC
    // Offset: 0x160
    UnityEngine::Vector3 debugPos3;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos4
    // Size: 0xC
    // Offset: 0x16C
    UnityEngine::Vector3 debugPos4;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: IKSolverVR
    IKSolverVR(::Array<UnityEngine::Transform*>* solverTransforms_ = {}, bool hasChest_ = {}, bool hasNeck_ = {}, bool hasShoulders_ = {}, bool hasToes_ = {}, bool hasLegs_ = {}, ::Array<UnityEngine::Vector3>* readPositions_ = {}, ::Array<UnityEngine::Quaternion>* readRotations_ = {}, ::Array<UnityEngine::Vector3>* solvedPositions_ = {}, ::Array<UnityEngine::Quaternion>* solvedRotations_ = {}, ::Array<UnityEngine::Quaternion>* defaultLocalRotations_ = {}, ::Array<UnityEngine::Vector3>* defaultLocalPositions_ = {}, UnityEngine::Vector3 rootV_ = {}, UnityEngine::Vector3 rootVelocity_ = {}, UnityEngine::Vector3 bodyOffset_ = {}, int supportLegIndex_ = {}, int lastLOD_ = {}, int LOD_ = {}, bool plantFeet_ = {}, RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone_ = {}, RootMotion::FinalIK::IKSolverVR::Spine* spine_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* leftArm_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* rightArm_ = {}, RootMotion::FinalIK::IKSolverVR::Leg* leftLeg_ = {}, RootMotion::FinalIK::IKSolverVR::Leg* rightLeg_ = {}, RootMotion::FinalIK::IKSolverVR::Locomotion* locomotion_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Leg*>* legs_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Arm*>* arms_ = {}, UnityEngine::Vector3 headPosition_ = {}, UnityEngine::Vector3 headDeltaPosition_ = {}, UnityEngine::Vector3 raycastOriginPelvis_ = {}, UnityEngine::Vector3 lastOffset_ = {}, UnityEngine::Vector3 debugPos1_ = {}, UnityEngine::Vector3 debugPos2_ = {}, UnityEngine::Vector3 debugPos3_ = {}, UnityEngine::Vector3 debugPos4_ = {}) noexcept : solverTransforms{solverTransforms_}, hasChest{hasChest_}, hasNeck{hasNeck_}, hasShoulders{hasShoulders_}, hasToes{hasToes_}, hasLegs{hasLegs_}, readPositions{readPositions_}, readRotations{readRotations_}, solvedPositions{solvedPositions_}, solvedRotations{solvedRotations_}, defaultLocalRotations{defaultLocalRotations_}, defaultLocalPositions{defaultLocalPositions_}, rootV{rootV_}, rootVelocity{rootVelocity_}, bodyOffset{bodyOffset_}, supportLegIndex{supportLegIndex_}, lastLOD{lastLOD_}, LOD{LOD_}, plantFeet{plantFeet_}, rootBone{rootBone_}, spine{spine_}, leftArm{leftArm_}, rightArm{rightArm_}, leftLeg{leftLeg_}, rightLeg{rightLeg_}, locomotion{locomotion_}, legs{legs_}, arms{arms_}, headPosition{headPosition_}, headDeltaPosition{headDeltaPosition_}, raycastOriginPelvis{raycastOriginPelvis_}, lastOffset{lastOffset_}, debugPos1{debugPos1_}, debugPos2{debugPos2_}, debugPos3{debugPos3_}, debugPos4{debugPos4_} {}
    // public System.Void SetToReferences(RootMotion.FinalIK.VRIK/References references)
    // Offset: 0x1A8FBC4
    void SetToReferences(RootMotion::FinalIK::VRIK::References* references);
    // public System.Void GuessHandOrientations(RootMotion.FinalIK.VRIK/References references, System.Boolean onlyIfZero)
    // Offset: 0x1A90000
    void GuessHandOrientations(RootMotion::FinalIK::VRIK::References* references, bool onlyIfZero);
    // public System.Void DefaultAnimationCurves()
    // Offset: 0x1A8FEA8
    void DefaultAnimationCurves();
    // public System.Void AddPositionOffset(RootMotion.FinalIK.IKSolverVR/PositionOffset positionOffset, UnityEngine.Vector3 value)
    // Offset: 0x1A909EC
    void AddPositionOffset(RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Vector3 value)
    // Offset: 0x1A90CC8
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Quaternion value)
    // Offset: 0x1A90D6C
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Quaternion value);
    // public System.Void AddPlatformMotion(UnityEngine.Vector3 deltaPosition, UnityEngine.Quaternion deltaRotation, UnityEngine.Vector3 platformPivot)
    // Offset: 0x1A90F00
    void AddPlatformMotion(UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation, UnityEngine::Vector3 platformPivot);
    // public System.Void Reset()
    // Offset: 0x1A9108C
    void Reset();
    // private UnityEngine.Vector3 GetNormal(UnityEngine.Transform[] transforms)
    // Offset: 0x1A91F28
    UnityEngine::Vector3 GetNormal(::Array<UnityEngine::Transform*>* transforms);
    // private UnityEngine.Vector3 GuessWristToPalmAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x1A902A0
    UnityEngine::Vector3 GuessWristToPalmAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // private UnityEngine.Vector3 GuessPalmToThumbAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x1A90478
    UnityEngine::Vector3 GuessPalmToThumbAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // static private UnityEngine.Keyframe[] GetSineKeyframes(System.Single mag)
    // Offset: 0x1A908C8
    static ::Array<UnityEngine::Keyframe>* GetSineKeyframes(float mag);
    // private System.Void UpdateSolverTransforms()
    // Offset: 0x1A91204
    void UpdateSolverTransforms();
    // private System.Void WriteTransforms()
    // Offset: 0x1A93954
    void WriteTransforms();
    // private System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs)
    // Offset: 0x1A9136C
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs);
    // private System.Void Solve()
    // Offset: 0x1A92718
    void Solve();
    // private UnityEngine.Vector3 GetPosition(System.Int32 index)
    // Offset: 0x1A93D40
    UnityEngine::Vector3 GetPosition(int index);
    // private UnityEngine.Quaternion GetRotation(System.Int32 index)
    // Offset: 0x1A93D88
    UnityEngine::Quaternion GetRotation(int index);
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone get_rootBone()
    // Offset: 0x1A943CC
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_rootBone();
    // private System.Void set_rootBone(RootMotion.FinalIK.IKSolverVR/VirtualBone value)
    // Offset: 0x1A943D4
    void set_rootBone(RootMotion::FinalIK::IKSolverVR::VirtualBone* value);
    // private System.Void Write()
    // Offset: 0x1A93804
    void Write();
    // private UnityEngine.Vector3 GetPelvisOffset()
    // Offset: 0x1A93DCC
    UnityEngine::Vector3 GetPelvisOffset();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1A918B0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1A91A24
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1A91C2C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1A91CA0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1A91D14
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void OnInitiate()
    // Offset: 0x1A92208
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1A92250
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1A943DC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR), 364 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVRSizeCheck;
  static_assert(sizeof(IKSolverVR) == 0x178);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR*, "RootMotion.FinalIK", "IKSolverVR");
