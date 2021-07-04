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
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverTrigonometric
  class IKSolverTrigonometric : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone
    class TrigonometricBone;
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xE09740
    // public System.Single IKRotationWeight
    // Size: 0x4
    // Offset: 0x60
    float IKRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x64
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 bendNormal
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 bendNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone bone1
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone1;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone bone2
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone2;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone bone3
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone3;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*) == 0x8);
    // protected UnityEngine.Vector3 weightIKPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 weightIKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected System.Boolean directHierarchy
    // Size: 0x1
    // Offset: 0xA4
    bool directHierarchy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IKSolverTrigonometric
    IKSolverTrigonometric(UnityEngine::Transform* target_ = {}, float IKRotationWeight_ = {}, UnityEngine::Quaternion IKRotation_ = {}, UnityEngine::Vector3 bendNormal_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone1_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone2_ = {}, RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone* bone3_ = {}, UnityEngine::Vector3 weightIKPosition_ = {}, bool directHierarchy_ = {}) noexcept : target{target_}, IKRotationWeight{IKRotationWeight_}, IKRotation{IKRotation_}, bendNormal{bendNormal_}, bone1{bone1_}, bone2{bone2_}, bone3{bone3_}, weightIKPosition{weightIKPosition_}, directHierarchy{directHierarchy_} {}
    // public System.Void SetBendGoalPosition(UnityEngine.Vector3 goalPosition, System.Single weight)
    // Offset: 0x1C02648
    void SetBendGoalPosition(UnityEngine::Vector3 goalPosition, float weight);
    // public System.Void SetBendPlaneToCurrent()
    // Offset: 0x1C02838
    void SetBendPlaneToCurrent();
    // public System.Void SetIKRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1C029EC
    void SetIKRotation(UnityEngine::Quaternion rotation);
    // public System.Void SetIKRotationWeight(System.Single weight)
    // Offset: 0x1C029F8
    void SetIKRotationWeight(float weight);
    // public UnityEngine.Quaternion GetIKRotation()
    // Offset: 0x1C02A7C
    UnityEngine::Quaternion GetIKRotation();
    // public System.Single GetIKRotationWeight()
    // Offset: 0x1C02A88
    float GetIKRotationWeight();
    // public System.Boolean SetChain(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Transform root)
    // Offset: 0x1C0313C
    bool SetChain(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Transform* root);
    // static public System.Void Solve(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Vector3 targetPosition, UnityEngine.Vector3 bendNormal, System.Single weight)
    // Offset: 0x1C03194
    static void Solve(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float weight);
    // static private UnityEngine.Vector3 GetDirectionToBendPoint(UnityEngine.Vector3 direction, System.Single directionMag, UnityEngine.Vector3 bendDirection, System.Single sqrMag1, System.Single sqrMag2)
    // Offset: 0x1C0373C
    static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float directionMag, UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
    // private System.Boolean IsDirectHierarchy()
    // Offset: 0x1C03B10
    bool IsDirectHierarchy();
    // private System.Void InitiateBones()
    // Offset: 0x1C03A8C
    void InitiateBones();
    // protected System.Void OnInitiateVirtual()
    // Offset: 0x1C0488C
    void OnInitiateVirtual();
    // protected System.Void OnUpdateVirtual()
    // Offset: 0x1C04890
    void OnUpdateVirtual();
    // protected System.Void OnPostSolveVirtual()
    // Offset: 0x1C04894
    void OnPostSolveVirtual();
    // protected UnityEngine.Vector3 GetBendDirection(UnityEngine.Vector3 IKPosition, UnityEngine.Vector3 bendNormal)
    // Offset: 0x1C044C4
    UnityEngine::Vector3 GetBendDirection(UnityEngine::Vector3 IKPosition, UnityEngine::Vector3 bendNormal);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1C02A90
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1C02B94
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1C02CB4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1C02D00
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1C02D60
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void OnInitiate()
    // Offset: 0x1C03954
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1C03DB8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BFFCA0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverTrigonometric* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverTrigonometric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverTrigonometric*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverTrigonometric
  #pragma pack(pop)
  static check_size<sizeof(IKSolverTrigonometric), 164 + sizeof(bool)> __RootMotion_FinalIK_IKSolverTrigonometricSizeCheck;
  static_assert(sizeof(IKSolverTrigonometric) == 0xA5);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverTrigonometric*, "RootMotion.FinalIK", "IKSolverTrigonometric");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition
// Il2CppName: SetBendGoalPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent
// Il2CppName: SetBendPlaneToCurrent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation
// Il2CppName: SetIKRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight
// Il2CppName: SetIKRotationWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation
// Il2CppName: GetIKRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight
// Il2CppName: GetIKRotationWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::SetChain
// Il2CppName: SetChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::Solve
// Il2CppName: Solve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint
// Il2CppName: GetDirectionToBendPoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy
// Il2CppName: IsDirectHierarchy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones
// Il2CppName: InitiateBones
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual
// Il2CppName: OnInitiateVirtual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual
// Il2CppName: OnUpdateVirtual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual
// Il2CppName: OnPostSolveVirtual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection
// Il2CppName: GetBendDirection
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetPoints
// Il2CppName: GetPoints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::GetPoint
// Il2CppName: GetPoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms
// Il2CppName: FixTransforms
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::IsValid
// Il2CppName: IsValid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate
// Il2CppName: OnInitiate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate
// Il2CppName: OnUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
