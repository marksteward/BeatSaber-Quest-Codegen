// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIKChain
  class FABRIKChain;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFABRIKRoot
  class IKSolverFABRIKRoot : public RootMotion::FinalIK::IKSolver {
    public:
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x58
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0xE095C8
    // public System.Single rootPin
    // Size: 0x4
    // Offset: 0x5C
    float rootPin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.FABRIKChain[] chains
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::FABRIKChain*>* chains;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::FABRIKChain*>*) == 0x8);
    // private System.Boolean zeroWeightApplied
    // Size: 0x1
    // Offset: 0x68
    bool zeroWeightApplied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: zeroWeightApplied and: isRoot
    char __padding3[0x7] = {};
    // private System.Boolean[] isRoot
    // Size: 0x8
    // Offset: 0x70
    ::Array<bool>* isRoot;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private UnityEngine.Vector3 rootDefaultPosition
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 rootDefaultPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: IKSolverFABRIKRoot
    IKSolverFABRIKRoot(int iterations_ = {}, float rootPin_ = {}, ::Array<RootMotion::FinalIK::FABRIKChain*>* chains_ = {}, bool zeroWeightApplied_ = {}, ::Array<bool>* isRoot_ = {}, UnityEngine::Vector3 rootDefaultPosition_ = {}) noexcept : iterations{iterations_}, rootPin{rootPin_}, chains{chains_}, zeroWeightApplied{zeroWeightApplied_}, isRoot{isRoot_}, rootDefaultPosition{rootDefaultPosition_} {}
    // private System.Boolean IsRoot(System.Int32 index)
    // Offset: 0x1BF7F08
    bool IsRoot(int index);
    // private System.Void AddPointsToArray(ref RootMotion.FinalIK.IKSolver/Point[] array, RootMotion.FinalIK.FABRIKChain chain)
    // Offset: 0x1BF85BC
    void AddPointsToArray(::Array<RootMotion::FinalIK::IKSolver::Point*>*& array, RootMotion::FinalIK::FABRIKChain* chain);
    // private UnityEngine.Vector3 GetCentroid()
    // Offset: 0x1BF81D8
    UnityEngine::Vector3 GetCentroid();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1BF7404
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1BF7CD0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1BF7D68
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1BF7E08
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BF7FA4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1BF850C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1BF870C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public System.Void .ctor()
    // Offset: 0x1BF87A4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFABRIKRoot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverFABRIKRoot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFABRIKRoot*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverFABRIKRoot
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFABRIKRoot), 120 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverFABRIKRootSizeCheck;
  static_assert(sizeof(IKSolverFABRIKRoot) == 0x84);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFABRIKRoot*, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::IsRoot
// Il2CppName: IsRoot
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::AddPointsToArray
// Il2CppName: AddPointsToArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetCentroid
// Il2CppName: GetCentroid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::IsValid
// Il2CppName: IsValid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::FixTransforms
// Il2CppName: FixTransforms
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::OnInitiate
// Il2CppName: OnInitiate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::OnUpdate
// Il2CppName: OnUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoints
// Il2CppName: GetPoints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoint
// Il2CppName: GetPoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
