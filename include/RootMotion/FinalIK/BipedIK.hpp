// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIKSolvers
  class BipedIKSolvers;
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarIKGoal
  struct AvatarIKGoal;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.BipedIK
  // [HelpURLAttribute] Offset: E06D68
  // [AddComponentMenu] Offset: E06D68
  class BipedIK : public RootMotion::SolverManager {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.BipedReferences references
    // Size: 0x8
    // Offset: 0x38
    RootMotion::BipedReferences* references;
    // Field size check
    static_assert(sizeof(RootMotion::BipedReferences*) == 0x8);
    // public RootMotion.FinalIK.BipedIKSolvers solvers
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::BipedIKSolvers* solvers;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::BipedIKSolvers*) == 0x8);
    // Creating value type constructor for type: BipedIK
    BipedIK(RootMotion::BipedReferences* references_ = {}, RootMotion::FinalIK::BipedIKSolvers* solvers_ = {}) noexcept : references{references_}, solvers{solvers_} {}
    // private System.Void OpenUserManual()
    // Offset: 0x1CAF0D4
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1CAF120
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1CAF16C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1CAF1B8
    void ASThread();
    // public System.Single GetIKPositionWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CAF204
    float GetIKPositionWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Single GetIKRotationWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CAF2A0
    float GetIKRotationWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetIKPositionWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x1CAF2C0
    void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKRotationWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x1CAF2F0
    void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKPosition(UnityEngine.AvatarIKGoal goal, UnityEngine.Vector3 IKPosition)
    // Offset: 0x1CAF320
    void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 IKPosition);
    // public System.Void SetIKRotation(UnityEngine.AvatarIKGoal goal, UnityEngine.Quaternion IKRotation)
    // Offset: 0x1CAF360
    void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion IKRotation);
    // public UnityEngine.Vector3 GetIKPosition(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CAF3A4
    UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal);
    // public UnityEngine.Quaternion GetIKRotation(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CAF3C8
    UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x1CAF3EC
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Void SetLookAtPosition(UnityEngine.Vector3 lookAtPosition)
    // Offset: 0x1CAF414
    void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition);
    // public System.Void SetSpinePosition(UnityEngine.Vector3 spinePosition)
    // Offset: 0x1CAF440
    void SetSpinePosition(UnityEngine::Vector3 spinePosition);
    // public System.Void SetSpineWeight(System.Single weight)
    // Offset: 0x1CAF46C
    void SetSpineWeight(float weight);
    // public RootMotion.FinalIK.IKSolverLimb GetGoalIK(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CAF224
    RootMotion::FinalIK::IKSolverLimb* GetGoalIK(UnityEngine::AvatarIKGoal goal);
    // public System.Void InitiateBipedIK()
    // Offset: 0x1CAF494
    void InitiateBipedIK();
    // public System.Void UpdateBipedIK()
    // Offset: 0x1CAF4A0
    void UpdateBipedIK();
    // public System.Void SetToDefaults()
    // Offset: 0x1CAF4AC
    void SetToDefaults();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x1CB0068
    void LogWarning(::Il2CppString* message);
    // protected override System.Void FixTransforms()
    // Offset: 0x1CAF794
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1CAF83C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1CAFB80
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // public System.Void .ctor()
    // Offset: 0x1CB009C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::BipedIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.BipedIK
  #pragma pack(pop)
  static check_size<sizeof(BipedIK), 64 + sizeof(RootMotion::FinalIK::BipedIKSolvers*)> __RootMotion_FinalIK_BipedIKSizeCheck;
  static_assert(sizeof(BipedIK) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BipedIK*, "RootMotion.FinalIK", "BipedIK");
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::OpenUserManual
// Il2CppName: OpenUserManual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::OpenScriptReference
// Il2CppName: OpenScriptReference
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SupportGroup
// Il2CppName: SupportGroup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::ASThread
// Il2CppName: ASThread
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKPositionWeight
// Il2CppName: GetIKPositionWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKRotationWeight
// Il2CppName: GetIKRotationWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKPositionWeight
// Il2CppName: SetIKPositionWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKRotationWeight
// Il2CppName: SetIKRotationWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKPosition
// Il2CppName: SetIKPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKRotation
// Il2CppName: SetIKRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKPosition
// Il2CppName: GetIKPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKRotation
// Il2CppName: GetIKRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetLookAtWeight
// Il2CppName: SetLookAtWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetLookAtPosition
// Il2CppName: SetLookAtPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetSpinePosition
// Il2CppName: SetSpinePosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetSpineWeight
// Il2CppName: SetSpineWeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetGoalIK
// Il2CppName: GetGoalIK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::InitiateBipedIK
// Il2CppName: InitiateBipedIK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::UpdateBipedIK
// Il2CppName: UpdateBipedIK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetToDefaults
// Il2CppName: SetToDefaults
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::LogWarning
// Il2CppName: LogWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::FixTransforms
// Il2CppName: FixTransforms
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::InitiateSolver
// Il2CppName: InitiateSolver
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::UpdateSolver
// Il2CppName: UpdateSolver
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
