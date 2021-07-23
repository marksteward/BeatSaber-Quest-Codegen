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
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DF0828
  // [AddComponentMenu] Offset: DF0828
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
    // Get instance field: public RootMotion.BipedReferences references
    RootMotion::BipedReferences* _get_references();
    // Set instance field: public RootMotion.BipedReferences references
    void _set_references(RootMotion::BipedReferences* value);
    // Get instance field: public RootMotion.FinalIK.BipedIKSolvers solvers
    RootMotion::FinalIK::BipedIKSolvers* _get_solvers();
    // Set instance field: public RootMotion.FinalIK.BipedIKSolvers solvers
    void _set_solvers(RootMotion::FinalIK::BipedIKSolvers* value);
    // private System.Void OpenUserManual()
    // Offset: 0x1CDF160
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1CDF1AC
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1CDF1F8
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1CDF244
    void ASThread();
    // public System.Single GetIKPositionWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CDF290
    float GetIKPositionWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Single GetIKRotationWeight(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CDF32C
    float GetIKRotationWeight(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetIKPositionWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x1CDF34C
    void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKRotationWeight(UnityEngine.AvatarIKGoal goal, System.Single weight)
    // Offset: 0x1CDF37C
    void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float weight);
    // public System.Void SetIKPosition(UnityEngine.AvatarIKGoal goal, UnityEngine.Vector3 IKPosition)
    // Offset: 0x1CDF3AC
    void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 IKPosition);
    // public System.Void SetIKRotation(UnityEngine.AvatarIKGoal goal, UnityEngine.Quaternion IKRotation)
    // Offset: 0x1CDF3EC
    void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion IKRotation);
    // public UnityEngine.Vector3 GetIKPosition(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CDF430
    UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal);
    // public UnityEngine.Quaternion GetIKRotation(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CDF454
    UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x1CDF478
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Void SetLookAtPosition(UnityEngine.Vector3 lookAtPosition)
    // Offset: 0x1CDF4A0
    void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition);
    // public System.Void SetSpinePosition(UnityEngine.Vector3 spinePosition)
    // Offset: 0x1CDF4CC
    void SetSpinePosition(UnityEngine::Vector3 spinePosition);
    // public System.Void SetSpineWeight(System.Single weight)
    // Offset: 0x1CDF4F8
    void SetSpineWeight(float weight);
    // public RootMotion.FinalIK.IKSolverLimb GetGoalIK(UnityEngine.AvatarIKGoal goal)
    // Offset: 0x1CDF2B0
    RootMotion::FinalIK::IKSolverLimb* GetGoalIK(UnityEngine::AvatarIKGoal goal);
    // public System.Void InitiateBipedIK()
    // Offset: 0x1CDF520
    void InitiateBipedIK();
    // public System.Void UpdateBipedIK()
    // Offset: 0x1CDF52C
    void UpdateBipedIK();
    // public System.Void SetToDefaults()
    // Offset: 0x1CDF538
    void SetToDefaults();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x1CE00F4
    void LogWarning(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x1CE0128
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
    // protected override System.Void FixTransforms()
    // Offset: 0x1CDF820
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1CDF8C8
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1CDFC0C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
  }; // RootMotion.FinalIK.BipedIK
  #pragma pack(pop)
  static check_size<sizeof(BipedIK), 64 + sizeof(RootMotion::FinalIK::BipedIKSolvers*)> __RootMotion_FinalIK_BipedIKSizeCheck;
  static_assert(sizeof(BipedIK) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BipedIK*, "RootMotion.FinalIK", "BipedIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKPositionWeight
// Il2CppName: GetIKPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::BipedIK::GetIKPositionWeight)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "GetIKPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKRotationWeight
// Il2CppName: GetIKRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::BipedIK::GetIKRotationWeight)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "GetIKRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKPositionWeight
// Il2CppName: SetIKPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal, float)>(&RootMotion::FinalIK::BipedIK::SetIKPositionWeight)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetIKPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKRotationWeight
// Il2CppName: SetIKRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal, float)>(&RootMotion::FinalIK::BipedIK::SetIKRotationWeight)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetIKRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKPosition
// Il2CppName: SetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal, UnityEngine::Vector3)>(&RootMotion::FinalIK::BipedIK::SetIKPosition)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    static auto* IKPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal, IKPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetIKRotation
// Il2CppName: SetIKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal, UnityEngine::Quaternion)>(&RootMotion::FinalIK::BipedIK::SetIKRotation)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    static auto* IKRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetIKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal, IKRotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKPosition
// Il2CppName: GetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::BipedIK::GetIKPosition)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "GetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetIKRotation
// Il2CppName: GetIKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::BipedIK::GetIKRotation)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "GetIKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(float, float, float, float, float, float, float)>(&RootMotion::FinalIK::BipedIK::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightHead = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightEyes = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetLookAtPosition
// Il2CppName: SetLookAtPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::BipedIK::SetLookAtPosition)> {
  static const MethodInfo* get() {
    static auto* lookAtPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetLookAtPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookAtPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetSpinePosition
// Il2CppName: SetSpinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::BipedIK::SetSpinePosition)> {
  static const MethodInfo* get() {
    static auto* spinePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetSpinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spinePosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetSpineWeight
// Il2CppName: SetSpineWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(float)>(&RootMotion::FinalIK::BipedIK::SetSpineWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetSpineWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::GetGoalIK
// Il2CppName: GetGoalIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverLimb* (RootMotion::FinalIK::BipedIK::*)(UnityEngine::AvatarIKGoal)>(&RootMotion::FinalIK::BipedIK::GetGoalIK)> {
  static const MethodInfo* get() {
    static auto* goal = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarIKGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "GetGoalIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::InitiateBipedIK
// Il2CppName: InitiateBipedIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::InitiateBipedIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "InitiateBipedIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::UpdateBipedIK
// Il2CppName: UpdateBipedIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::UpdateBipedIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "UpdateBipedIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::SetToDefaults
// Il2CppName: SetToDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::SetToDefaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "SetToDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)(::Il2CppString*)>(&RootMotion::FinalIK::BipedIK::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIK::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIK::*)()>(&RootMotion::FinalIK::BipedIK::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIK*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
