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
  // Forward declaring type: FBIKChain
  class FBIKChain;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
  // Forward declaring type: IKMappingLimb
  class IKMappingLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFullBody
  class IKSolverFullBody : public RootMotion::FinalIK::IKSolver {
    public:
    // [RangeAttribute] Offset: 0xE095E0
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x58
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: chain
    char __padding0[0x4] = {};
    // public RootMotion.FinalIK.FBIKChain[] chain
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::FBIKChain*>* chain;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::FBIKChain*>*) == 0x8);
    // public RootMotion.FinalIK.IKEffector[] effectors
    // Size: 0x8
    // Offset: 0x68
    ::Array<RootMotion::FinalIK::IKEffector*>* effectors;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKEffector*>*) == 0x8);
    // public RootMotion.FinalIK.IKMappingSpine spineMapping
    // Size: 0x8
    // Offset: 0x70
    RootMotion::FinalIK::IKMappingSpine* spineMapping;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKMappingSpine*) == 0x8);
    // public RootMotion.FinalIK.IKMappingBone[] boneMappings
    // Size: 0x8
    // Offset: 0x78
    ::Array<RootMotion::FinalIK::IKMappingBone*>* boneMappings;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKMappingBone*>*) == 0x8);
    // public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    // Size: 0x8
    // Offset: 0x80
    ::Array<RootMotion::FinalIK::IKMappingLimb*>* limbMappings;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKMappingLimb*>*) == 0x8);
    // public System.Boolean FABRIKPass
    // Size: 0x1
    // Offset: 0x88
    bool FABRIKPass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FABRIKPass and: OnPreRead
    char __padding6[0x7] = {};
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreRead
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreSolve
    // Size: 0x8
    // Offset: 0x98
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPostIteration
    // Size: 0x8
    // Offset: 0xA8
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreBend
    // Size: 0x8
    // Offset: 0xB0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPostSolve
    // Size: 0x8
    // Offset: 0xB8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnStoreDefaultLocalState
    // Size: 0x8
    // Offset: 0xC0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnFixTransforms
    // Size: 0x8
    // Offset: 0xC8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // Creating value type constructor for type: IKSolverFullBody
    IKSolverFullBody(int iterations_ = {}, ::Array<RootMotion::FinalIK::FBIKChain*>* chain_ = {}, ::Array<RootMotion::FinalIK::IKEffector*>* effectors_ = {}, RootMotion::FinalIK::IKMappingSpine* spineMapping_ = {}, ::Array<RootMotion::FinalIK::IKMappingBone*>* boneMappings_ = {}, ::Array<RootMotion::FinalIK::IKMappingLimb*>* limbMappings_ = {}, bool FABRIKPass_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve_ = {}, RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration_ = {}, RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms_ = {}) noexcept : iterations{iterations_}, chain{chain_}, effectors{effectors_}, spineMapping{spineMapping_}, boneMappings{boneMappings_}, limbMappings{limbMappings_}, FABRIKPass{FABRIKPass_}, OnPreRead{OnPreRead_}, OnPreSolve{OnPreSolve_}, OnPreIteration{OnPreIteration_}, OnPostIteration{OnPostIteration_}, OnPreBend{OnPreBend_}, OnPostSolve{OnPostSolve_}, OnStoreDefaultLocalState{OnStoreDefaultLocalState_}, OnFixTransforms{OnFixTransforms_} {}
    // public RootMotion.FinalIK.IKEffector GetEffector(UnityEngine.Transform t)
    // Offset: 0x1BF880C
    RootMotion::FinalIK::IKEffector* GetEffector(UnityEngine::Transform* t);
    // public RootMotion.FinalIK.FBIKChain GetChain(UnityEngine.Transform transform)
    // Offset: 0x1BF8900
    RootMotion::FinalIK::FBIKChain* GetChain(UnityEngine::Transform* transform);
    // public System.Int32 GetChainIndex(UnityEngine.Transform transform)
    // Offset: 0x1BF895C
    int GetChainIndex(UnityEngine::Transform* transform);
    // public RootMotion.FinalIK.IKSolver/Node GetNode(System.Int32 chainIndex, System.Int32 nodeIndex)
    // Offset: 0x1BF8A90
    RootMotion::FinalIK::IKSolver::Node* GetNode(int chainIndex, int nodeIndex);
    // public System.Void GetChainAndNodeIndexes(UnityEngine.Transform transform, out System.Int32 chainIndex, out System.Int32 nodeIndex)
    // Offset: 0x1BF8AEC
    void GetChainAndNodeIndexes(UnityEngine::Transform* transform, int& chainIndex, int& nodeIndex);
    // protected System.Void ReadPose()
    // Offset: 0x1BF9578
    void ReadPose();
    // protected System.Void Solve()
    // Offset: 0x1BF97C4
    void Solve();
    // protected System.Void ApplyBendConstraints()
    // Offset: 0x1BF9A9C
    void ApplyBendConstraints();
    // protected System.Void WritePose()
    // Offset: 0x1BF9AE0
    void WritePose();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1BF8B6C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1BF8D14
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1BF8E88
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1BF908C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1BF9160
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1BF9248
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BF93BC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BF9BD0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFullBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverFullBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFullBody*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverFullBody
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFullBody), 200 + sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*)> __RootMotion_FinalIK_IKSolverFullBodySizeCheck;
  static_assert(sizeof(IKSolverFullBody) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBody*, "RootMotion.FinalIK", "IKSolverFullBody");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetEffector
// Il2CppName: GetEffector
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChain
// Il2CppName: GetChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainIndex
// Il2CppName: GetChainIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetNode
// Il2CppName: GetNode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes
// Il2CppName: GetChainAndNodeIndexes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ReadPose
// Il2CppName: ReadPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::Solve
// Il2CppName: Solve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints
// Il2CppName: ApplyBendConstraints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::WritePose
// Il2CppName: WritePose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoints
// Il2CppName: GetPoints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoint
// Il2CppName: GetPoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::IsValid
// Il2CppName: IsValid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::FixTransforms
// Il2CppName: FixTransforms
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnInitiate
// Il2CppName: OnInitiate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnUpdate
// Il2CppName: OnUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
