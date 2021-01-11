// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric
#include "RootMotion/FinalIK/IKSolverTrigonometric.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
  // [] Offset: FFFFFFFF
  class IKSolverTrigonometric::TrigonometricBone : public RootMotion::FinalIK::IKSolver::Bone {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    // private UnityEngine.Quaternion targetToLocalSpace
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Quaternion targetToLocalSpace;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 defaultLocalBendNormal
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 defaultLocalBendNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: TrigonometricBone
    TrigonometricBone(UnityEngine::Quaternion targetToLocalSpace_ = {}, UnityEngine::Vector3 defaultLocalBendNormal_ = {}) noexcept : targetToLocalSpace{targetToLocalSpace_}, defaultLocalBendNormal{defaultLocalBendNormal_} {}
    // public System.Void Initiate(UnityEngine.Vector3 childPosition, UnityEngine.Vector3 bendNormal)
    // Offset: 0x16F2790
    void Initiate(UnityEngine::Vector3 childPosition, UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Quaternion GetRotation(UnityEngine.Vector3 direction, UnityEngine.Vector3 bendNormal)
    // Offset: 0x16F3348
    UnityEngine::Quaternion GetRotation(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Vector3 GetBendNormalFromCurrentRotation()
    // Offset: 0x16ED144
    UnityEngine::Vector3 GetBendNormalFromCurrentRotation();
    // public System.Void .ctor()
    // Offset: 0x16F3410
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverTrigonometric::TrigonometricBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverTrigonometric::TrigonometricBone*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
  static check_size<sizeof(IKSolverTrigonometric::TrigonometricBone), 132 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverTrigonometric_TrigonometricBoneSizeCheck;
  static_assert(sizeof(IKSolverTrigonometric::TrigonometricBone) == 0x90);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
