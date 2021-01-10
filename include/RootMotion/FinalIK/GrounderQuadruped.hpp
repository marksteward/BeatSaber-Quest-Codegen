// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
  // Skipping declaration: Foot because it is already included!
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x140
  // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB4738
  // [AddComponentMenu] Offset: DB4738
  class GrounderQuadruped : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: RootMotion::FinalIK::GrounderQuadruped::Foot
    struct Foot;
    // Size: 0x28
    // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped/Foot
    // [] Offset: FFFFFFFF
    struct Foot/*, public System::ValueType*/ {
      public:
      // public RootMotion.FinalIK.IKSolver solver
      // Size: 0x8
      // Offset: 0x0
      RootMotion::FinalIK::IKSolver* solver;
      // Field size check
      static_assert(sizeof(RootMotion::FinalIK::IKSolver*) == 0x8);
      // public UnityEngine.Transform transform
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::Transform* transform;
      // Field size check
      static_assert(sizeof(UnityEngine::Transform*) == 0x8);
      // public UnityEngine.Quaternion rotation
      // Size: 0x10
      // Offset: 0x10
      UnityEngine::Quaternion rotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
      // public RootMotion.FinalIK.Grounding/Leg leg
      // Size: 0x8
      // Offset: 0x20
      RootMotion::FinalIK::Grounding::Leg* leg;
      // Field size check
      static_assert(sizeof(RootMotion::FinalIK::Grounding::Leg*) == 0x8);
      // Creating value type constructor for type: Foot
      constexpr Foot(RootMotion::FinalIK::IKSolver* solver_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Quaternion rotation_ = {}, RootMotion::FinalIK::Grounding::Leg* leg_ = {}) noexcept : solver{solver_}, transform{transform_}, rotation{rotation_}, leg{leg_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(RootMotion.FinalIK.IKSolver solver, UnityEngine.Transform transform)
      // Offset: 0xCA689C
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      Foot(RootMotion::FinalIK::IKSolver* solver, UnityEngine::Transform* transform) {
        static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderQuadruped::Foot::.ctor");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(solver, transform)));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, solver, transform);
      }
    }; // RootMotion.FinalIK.GrounderQuadruped/Foot
    static check_size<sizeof(GrounderQuadruped::Foot), 32 + sizeof(RootMotion::FinalIK::Grounding::Leg*)> __RootMotion_FinalIK_GrounderQuadruped_FootSizeCheck;
    static_assert(sizeof(GrounderQuadruped::Foot) == 0x28);
    // [TooltipAttribute] Offset: 0xDB5BFC
    // public RootMotion.FinalIK.Grounding forelegSolver
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::Grounding* forelegSolver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5C34
    // [RangeAttribute] Offset: 0xDB5C34
    // public System.Single rootRotationWeight
    // Size: 0x4
    // Offset: 0x48
    float rootRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5C88
    // [RangeAttribute] Offset: 0xDB5C88
    // public System.Single minRootRotation
    // Size: 0x4
    // Offset: 0x4C
    float minRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5CE0
    // [RangeAttribute] Offset: 0xDB5CE0
    // public System.Single maxRootRotation
    // Size: 0x4
    // Offset: 0x50
    float maxRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5D38
    // public System.Single rootRotationSpeed
    // Size: 0x4
    // Offset: 0x54
    float rootRotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5D70
    // public System.Single maxLegOffset
    // Size: 0x4
    // Offset: 0x58
    float maxLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5DA8
    // public System.Single maxForeLegOffset
    // Size: 0x4
    // Offset: 0x5C
    float maxForeLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5DE0
    // [RangeAttribute] Offset: 0xDB5DE0
    // public System.Single maintainHeadRotationWeight
    // Size: 0x4
    // Offset: 0x60
    float maintainHeadRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maintainHeadRotationWeight and: characterRoot
    char __padding7[0x4] = {};
    // [TooltipAttribute] Offset: 0xDB5E34
    // public UnityEngine.Transform characterRoot
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* characterRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5E6C
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5EA4
    // public UnityEngine.Transform lastSpineBone
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* lastSpineBone;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5EDC
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IK[] legs
    // Size: 0x8
    // Offset: 0x88
    ::Array<RootMotion::FinalIK::IK*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // public RootMotion.FinalIK.IK[] forelegs
    // Size: 0x8
    // Offset: 0x90
    ::Array<RootMotion::FinalIK::IK*>* forelegs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // [HideInInspector] Offset: 0xDB5F14
    // public UnityEngine.Vector3 gravity
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: gravity and: feet
    char __padding14[0x4] = {};
    // private RootMotion.FinalIK.GrounderQuadruped/Foot[] feet
    // Size: 0x8
    // Offset: 0xA8
    ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>* feet;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xB0
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion animatedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xBC
    UnityEngine::Quaternion animatedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion animatedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xCC
    UnityEngine::Quaternion animatedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xDC
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion solvedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xE8
    UnityEngine::Quaternion solvedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion solvedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xF8
    UnityEngine::Quaternion solvedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Int32 solvedFeet
    // Size: 0x4
    // Offset: 0x108
    int solvedFeet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean solved
    // Size: 0x1
    // Offset: 0x10C
    bool solved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: solved and: angle
    char __padding23[0x3] = {};
    // private System.Single angle
    // Size: 0x4
    // Offset: 0x110
    float angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: angle and: forefeetRoot
    char __padding24[0x4] = {};
    // private UnityEngine.Transform forefeetRoot
    // Size: 0x8
    // Offset: 0x118
    UnityEngine::Transform* forefeetRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion headRotation
    // Size: 0x10
    // Offset: 0x120
    UnityEngine::Quaternion headRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x130
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastWeight and: characterRootRigidbody
    char __padding27[0x4] = {};
    // private UnityEngine.Rigidbody characterRootRigidbody
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::Rigidbody* characterRootRigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // Creating value type constructor for type: GrounderQuadruped
    GrounderQuadruped(RootMotion::FinalIK::Grounding* forelegSolver_ = {}, float rootRotationWeight_ = {}, float minRootRotation_ = {}, float maxRootRotation_ = {}, float rootRotationSpeed_ = {}, float maxLegOffset_ = {}, float maxForeLegOffset_ = {}, float maintainHeadRotationWeight_ = {}, UnityEngine::Transform* characterRoot_ = {}, UnityEngine::Transform* pelvis_ = {}, UnityEngine::Transform* lastSpineBone_ = {}, UnityEngine::Transform* head_ = {}, ::Array<RootMotion::FinalIK::IK*>* legs_ = {}, ::Array<RootMotion::FinalIK::IK*>* forelegs_ = {}, UnityEngine::Vector3 gravity_ = {}, ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>* feet_ = {}, UnityEngine::Vector3 animatedPelvisLocalPosition_ = {}, UnityEngine::Quaternion animatedPelvisLocalRotation_ = {}, UnityEngine::Quaternion animatedHeadLocalRotation_ = {}, UnityEngine::Vector3 solvedPelvisLocalPosition_ = {}, UnityEngine::Quaternion solvedPelvisLocalRotation_ = {}, UnityEngine::Quaternion solvedHeadLocalRotation_ = {}, int solvedFeet_ = {}, bool solved_ = {}, float angle_ = {}, UnityEngine::Transform* forefeetRoot_ = {}, UnityEngine::Quaternion headRotation_ = {}, float lastWeight_ = {}, UnityEngine::Rigidbody* characterRootRigidbody_ = {}) noexcept : forelegSolver{forelegSolver_}, rootRotationWeight{rootRotationWeight_}, minRootRotation{minRootRotation_}, maxRootRotation{maxRootRotation_}, rootRotationSpeed{rootRotationSpeed_}, maxLegOffset{maxLegOffset_}, maxForeLegOffset{maxForeLegOffset_}, maintainHeadRotationWeight{maintainHeadRotationWeight_}, characterRoot{characterRoot_}, pelvis{pelvis_}, lastSpineBone{lastSpineBone_}, head{head_}, legs{legs_}, forelegs{forelegs_}, gravity{gravity_}, feet{feet_}, animatedPelvisLocalPosition{animatedPelvisLocalPosition_}, animatedPelvisLocalRotation{animatedPelvisLocalRotation_}, animatedHeadLocalRotation{animatedHeadLocalRotation_}, solvedPelvisLocalPosition{solvedPelvisLocalPosition_}, solvedPelvisLocalRotation{solvedPelvisLocalRotation_}, solvedHeadLocalRotation{solvedHeadLocalRotation_}, solvedFeet{solvedFeet_}, solved{solved_}, angle{angle_}, forefeetRoot{forefeetRoot_}, headRotation{headRotation_}, lastWeight{lastWeight_}, characterRootRigidbody{characterRootRigidbody_} {}
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x16FF0E0
    bool IsReadyToInitiate();
    // private System.Boolean IsReadyToInitiateLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x16FF210
    bool IsReadyToInitiateLegs(::Array<RootMotion::FinalIK::IK*>* ikComponents);
    // private System.Void OnDisable()
    // Offset: 0x16FF3D0
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x16FF438
    void Update();
    // private System.Void Initiate()
    // Offset: 0x16FF4F0
    void Initiate();
    // private UnityEngine.Transform[] InitiateFeet(RootMotion.FinalIK.IK[] ikComponents, ref RootMotion.FinalIK.GrounderQuadruped/Foot[] f, System.Int32 indexOffset)
    // Offset: 0x16FF824
    ::Array<UnityEngine::Transform*>* InitiateFeet(::Array<RootMotion::FinalIK::IK*>* ikComponents, ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*& f, int indexOffset);
    // private System.Void LateUpdate()
    // Offset: 0x16FFBFC
    void LateUpdate();
    // private System.Void RootRotation()
    // Offset: 0x16FFD48
    void RootRotation();
    // private System.Void OnSolverUpdate()
    // Offset: 0x17001EC
    void OnSolverUpdate();
    // private System.Void UpdateForefeetRoot()
    // Offset: 0x17009DC
    void UpdateForefeetRoot();
    // private System.Void SetFootIK(RootMotion.FinalIK.GrounderQuadruped/Foot foot, System.Single maxOffset)
    // Offset: 0x1700C9C
    void SetFootIK(RootMotion::FinalIK::GrounderQuadruped::Foot foot, float maxOffset);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x1700DFC
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x17010D8
    void OnDestroy();
    // private System.Void DestroyLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x1701110
    void DestroyLegs(::Array<RootMotion::FinalIK::IK*>* ikComponents);
    // protected override System.Void OpenUserManual()
    // Offset: 0x16FF014
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x16FF060
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x16FF0AC
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x17012F4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderQuadruped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderQuadruped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderQuadruped*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderQuadruped
  static check_size<sizeof(GrounderQuadruped), 312 + sizeof(UnityEngine::Rigidbody*)> __RootMotion_FinalIK_GrounderQuadrupedSizeCheck;
  static_assert(sizeof(GrounderQuadruped) == 0x140);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderQuadruped*, "RootMotion.FinalIK", "GrounderQuadruped");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderQuadruped::Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
#pragma pack(pop)
