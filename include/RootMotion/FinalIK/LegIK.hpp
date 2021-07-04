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
  // Forward declaring type: IKSolverLeg
  class IKSolverLeg;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.LegIK
  // [HelpURLAttribute] Offset: E071E8
  // [AddComponentMenu] Offset: E071E8
  class LegIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.FinalIK.IKSolverLeg solver
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverLeg* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLeg*) == 0x8);
    // Creating value type constructor for type: LegIK
    LegIK(RootMotion::FinalIK::IKSolverLeg* solver_ = {}) noexcept : solver{solver_} {}
    // private System.Void SupportGroup()
    // Offset: 0x1A9FB3C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1A9FB88
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1A9FAA4
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1A9FAF0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1A9FBD4
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1A9FBDC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::LegIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.LegIK
  #pragma pack(pop)
  static check_size<sizeof(LegIK), 56 + sizeof(RootMotion::FinalIK::IKSolverLeg*)> __RootMotion_FinalIK_LegIKSizeCheck;
  static_assert(sizeof(LegIK) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LegIK*, "RootMotion.FinalIK", "LegIK");
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::SupportGroup
// Il2CppName: SupportGroup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::ASThread
// Il2CppName: ASThread
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::OpenUserManual
// Il2CppName: OpenUserManual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::OpenScriptReference
// Il2CppName: OpenScriptReference
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::GetIKSolver
// Il2CppName: GetIKSolver
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::LegIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
