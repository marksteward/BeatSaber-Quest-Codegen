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
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FullBodyBipedIK
  // [HelpURLAttribute] Offset: D26290
  // [AddComponentMenu] Offset: D26290
  class FullBodyBipedIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.BipedReferences references
    // Size: 0x8
    // Offset: 0x38
    RootMotion::BipedReferences* references;
    // Field size check
    static_assert(sizeof(RootMotion::BipedReferences*) == 0x8);
    // public RootMotion.FinalIK.IKSolverFullBodyBiped solver
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::IKSolverFullBodyBiped* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverFullBodyBiped*) == 0x8);
    // Creating value type constructor for type: FullBodyBipedIK
    FullBodyBipedIK(RootMotion::BipedReferences* references_ = {}, RootMotion::FinalIK::IKSolverFullBodyBiped* solver_ = {}) noexcept : references{references_}, solver{solver_} {}
    // private System.Void OpenSetupTutorial()
    // Offset: 0x1A95F74
    void OpenSetupTutorial();
    // private System.Void OpenInspectorTutorial()
    // Offset: 0x1A95FC0
    void OpenInspectorTutorial();
    // private System.Void SupportGroup()
    // Offset: 0x1A9600C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1A96058
    void ASThread();
    // public System.Void SetReferences(RootMotion.BipedReferences references, UnityEngine.Transform rootNode)
    // Offset: 0x1A960A4
    void SetReferences(RootMotion::BipedReferences* references, UnityEngine::Transform* rootNode);
    // public System.Boolean ReferencesError(ref System.String errorMessage)
    // Offset: 0x1A960D0
    bool ReferencesError(::Il2CppString*& errorMessage);
    // public System.Boolean ReferencesWarning(ref System.String warningMessage)
    // Offset: 0x1A9628C
    bool ReferencesWarning(::Il2CppString*& warningMessage);
    // private System.Void Reinitiate()
    // Offset: 0x1A965E0
    void Reinitiate();
    // private System.Void AutoDetectReferences()
    // Offset: 0x1A96600
    void AutoDetectReferences();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1A95EDC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1A95F28
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1A960C8
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x1A966DC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullBodyBipedIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FullBodyBipedIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullBodyBipedIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.FullBodyBipedIK
  #pragma pack(pop)
  static check_size<sizeof(FullBodyBipedIK), 64 + sizeof(RootMotion::FinalIK::IKSolverFullBodyBiped*)> __RootMotion_FinalIK_FullBodyBipedIKSizeCheck;
  static_assert(sizeof(FullBodyBipedIK) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FullBodyBipedIK*, "RootMotion.FinalIK", "FullBodyBipedIK");
