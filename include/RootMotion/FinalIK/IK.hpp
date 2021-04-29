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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IK
  class IK : public RootMotion::SolverManager {
    public:
    // Creating value type constructor for type: IK
    IK() noexcept {}
    // public RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0xFFFFFFFF
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // protected System.Void OpenUserManual()
    // Offset: 0xFFFFFFFF
    void OpenUserManual();
    // protected System.Void OpenScriptReference()
    // Offset: 0xFFFFFFFF
    void OpenScriptReference();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1AA3984
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1AA3A78
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x1AA3C3C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected System.Void .ctor()
    // Offset: 0x1A96764
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IK*, creationType>()));
    }
  }; // RootMotion.FinalIK.IK
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IK*, "RootMotion.FinalIK", "IK");
