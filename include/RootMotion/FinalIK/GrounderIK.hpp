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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA8
  // Autogenerated type: RootMotion.FinalIK.GrounderIK
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB46D8
  // [AddComponentMenu] Offset: DB46D8
  class GrounderIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // public RootMotion.FinalIK.IK[] legs
    // Size: 0x8
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::IK*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5AC8
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5B00
    // public UnityEngine.Transform characterRoot
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* characterRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB5B38
    // [RangeAttribute] Offset: 0xDB5B38
    // public System.Single rootRotationWeight
    // Size: 0x4
    // Offset: 0x58
    float rootRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5B8C
    // public System.Single rootRotationSpeed
    // Size: 0x4
    // Offset: 0x5C
    float rootRotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB5BC4
    // public System.Single maxRootRotationAngle
    // Size: 0x4
    // Offset: 0x60
    float maxRootRotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxRootRotationAngle and: feet
    char __padding5[0x4] = {};
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::Transform*>* feet;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.Quaternion[] footRotations
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* footRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 solvedFeet
    // Size: 0x4
    // Offset: 0x90
    int solvedFeet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean solved
    // Size: 0x1
    // Offset: 0x94
    bool solved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: solved and: lastWeight
    char __padding11[0x3] = {};
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x98
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastWeight and: characterRootRigidbody
    char __padding12[0x4] = {};
    // private UnityEngine.Rigidbody characterRootRigidbody
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Rigidbody* characterRootRigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // Creating value type constructor for type: GrounderIK
    GrounderIK(::Array<RootMotion::FinalIK::IK*>* legs_ = {}, UnityEngine::Transform* pelvis_ = {}, UnityEngine::Transform* characterRoot_ = {}, float rootRotationWeight_ = {}, float rootRotationSpeed_ = {}, float maxRootRotationAngle_ = {}, ::Array<UnityEngine::Transform*>* feet_ = {}, ::Array<UnityEngine::Quaternion>* footRotations_ = {}, UnityEngine::Vector3 animatedPelvisLocalPosition_ = {}, UnityEngine::Vector3 solvedPelvisLocalPosition_ = {}, int solvedFeet_ = {}, bool solved_ = {}, float lastWeight_ = {}, UnityEngine::Rigidbody* characterRootRigidbody_ = {}) noexcept : legs{legs_}, pelvis{pelvis_}, characterRoot{characterRoot_}, rootRotationWeight{rootRotationWeight_}, rootRotationSpeed{rootRotationSpeed_}, maxRootRotationAngle{maxRootRotationAngle_}, feet{feet_}, footRotations{footRotations_}, animatedPelvisLocalPosition{animatedPelvisLocalPosition_}, solvedPelvisLocalPosition{solvedPelvisLocalPosition_}, solvedFeet{solvedFeet_}, solved{solved_}, lastWeight{lastWeight_}, characterRootRigidbody{characterRootRigidbody_} {}
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x16FD7EC
    bool IsReadyToInitiate();
    // private System.Void OnDisable()
    // Offset: 0x16FD9DC
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x16FDADC
    void Update();
    // private System.Void Initiate()
    // Offset: 0x16FE224
    void Initiate();
    // private System.Void OnSolverUpdate()
    // Offset: 0x16FE664
    void OnSolverUpdate();
    // private System.Void SetLegIK(System.Int32 index)
    // Offset: 0x16FE8D4
    void SetLegIK(int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x16FEBF4
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x16FED90
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x16FD73C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x16FD788
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x16FD7D4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x16FEF7C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderIK
  static check_size<sizeof(GrounderIK), 160 + sizeof(UnityEngine::Rigidbody*)> __RootMotion_FinalIK_GrounderIKSizeCheck;
  static_assert(sizeof(GrounderIK) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderIK*, "RootMotion.FinalIK", "GrounderIK");
#pragma pack(pop)
