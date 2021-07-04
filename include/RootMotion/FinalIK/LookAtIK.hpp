// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLookAt
  class IKSolverLookAt;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.LookAtIK
  // [HelpURLAttribute] Offset: E072A8
  // [AddComponentMenu] Offset: E072A8
  class LookAtIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.FinalIK.IKSolverLookAt solver
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverLookAt* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLookAt*) == 0x8);
    // Creating value type constructor for type: LookAtIK
    LookAtIK(RootMotion::FinalIK::IKSolverLookAt* solver_ = {}) noexcept : solver{solver_} {}
    // private System.Void SupportGroup()
    // Offset: 0x1AA0CD0
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1AA0D1C
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1AA0C38
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1AA0C84
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1AA0D68
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1AA0D70
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookAtIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::LookAtIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookAtIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.LookAtIK
  #pragma pack(pop)
  static check_size<sizeof(LookAtIK), 56 + sizeof(RootMotion::FinalIK::IKSolverLookAt*)> __RootMotion_FinalIK_LookAtIKSizeCheck;
  static_assert(sizeof(LookAtIK) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LookAtIK*, "RootMotion.FinalIK", "LookAtIK");
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::SupportGroup
// Il2CppName: SupportGroup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::ASThread
// Il2CppName: ASThread
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::OpenUserManual
// Il2CppName: OpenUserManual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::OpenScriptReference
// Il2CppName: OpenScriptReference
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::GetIKSolver
// Il2CppName: GetIKSolver
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LookAtIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
