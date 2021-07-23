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
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverFullBody : public RootMotion::FinalIK::IKSolver {
    public:
    // [RangeAttribute] Offset: 0xDF40A0
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
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreRead
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreSolve
    // Size: 0x8
    // Offset: 0x98
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPostIteration
    // Size: 0x8
    // Offset: 0xA8
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreBend
    // Size: 0x8
    // Offset: 0xB0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostSolve
    // Size: 0x8
    // Offset: 0xB8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnStoreDefaultLocalState
    // Size: 0x8
    // Offset: 0xC0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnFixTransforms
    // Size: 0x8
    // Offset: 0xC8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // Creating value type constructor for type: IKSolverFullBody
    IKSolverFullBody(int iterations_ = {}, ::Array<RootMotion::FinalIK::FBIKChain*>* chain_ = {}, ::Array<RootMotion::FinalIK::IKEffector*>* effectors_ = {}, RootMotion::FinalIK::IKMappingSpine* spineMapping_ = {}, ::Array<RootMotion::FinalIK::IKMappingBone*>* boneMappings_ = {}, ::Array<RootMotion::FinalIK::IKMappingLimb*>* limbMappings_ = {}, bool FABRIKPass_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve_ = {}, RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration_ = {}, RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms_ = {}) noexcept : iterations{iterations_}, chain{chain_}, effectors{effectors_}, spineMapping{spineMapping_}, boneMappings{boneMappings_}, limbMappings{limbMappings_}, FABRIKPass{FABRIKPass_}, OnPreRead{OnPreRead_}, OnPreSolve{OnPreSolve_}, OnPreIteration{OnPreIteration_}, OnPostIteration{OnPostIteration_}, OnPreBend{OnPreBend_}, OnPostSolve{OnPostSolve_}, OnStoreDefaultLocalState{OnStoreDefaultLocalState_}, OnFixTransforms{OnFixTransforms_} {}
    // Get instance field: public System.Int32 iterations
    int _get_iterations();
    // Set instance field: public System.Int32 iterations
    void _set_iterations(int value);
    // Get instance field: public RootMotion.FinalIK.FBIKChain[] chain
    ::Array<RootMotion::FinalIK::FBIKChain*>* _get_chain();
    // Set instance field: public RootMotion.FinalIK.FBIKChain[] chain
    void _set_chain(::Array<RootMotion::FinalIK::FBIKChain*>* value);
    // Get instance field: public RootMotion.FinalIK.IKEffector[] effectors
    ::Array<RootMotion::FinalIK::IKEffector*>* _get_effectors();
    // Set instance field: public RootMotion.FinalIK.IKEffector[] effectors
    void _set_effectors(::Array<RootMotion::FinalIK::IKEffector*>* value);
    // Get instance field: public RootMotion.FinalIK.IKMappingSpine spineMapping
    RootMotion::FinalIK::IKMappingSpine* _get_spineMapping();
    // Set instance field: public RootMotion.FinalIK.IKMappingSpine spineMapping
    void _set_spineMapping(RootMotion::FinalIK::IKMappingSpine* value);
    // Get instance field: public RootMotion.FinalIK.IKMappingBone[] boneMappings
    ::Array<RootMotion::FinalIK::IKMappingBone*>* _get_boneMappings();
    // Set instance field: public RootMotion.FinalIK.IKMappingBone[] boneMappings
    void _set_boneMappings(::Array<RootMotion::FinalIK::IKMappingBone*>* value);
    // Get instance field: public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    ::Array<RootMotion::FinalIK::IKMappingLimb*>* _get_limbMappings();
    // Set instance field: public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    void _set_limbMappings(::Array<RootMotion::FinalIK::IKMappingLimb*>* value);
    // Get instance field: public System.Boolean FABRIKPass
    bool _get_FABRIKPass();
    // Set instance field: public System.Boolean FABRIKPass
    void _set_FABRIKPass(bool value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreRead
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnPreRead();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreRead
    void _set_OnPreRead(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreSolve
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnPreSolve();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreSolve
    void _set_OnPreSolve(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    RootMotion::FinalIK::IKSolver::IterationDelegate* _get_OnPreIteration();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    void _set_OnPreIteration(RootMotion::FinalIK::IKSolver::IterationDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPostIteration
    RootMotion::FinalIK::IKSolver::IterationDelegate* _get_OnPostIteration();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPostIteration
    void _set_OnPostIteration(RootMotion::FinalIK::IKSolver::IterationDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreBend
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnPreBend();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreBend
    void _set_OnPreBend(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostSolve
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnPostSolve();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostSolve
    void _set_OnPostSolve(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnStoreDefaultLocalState
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnStoreDefaultLocalState();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnStoreDefaultLocalState
    void _set_OnStoreDefaultLocalState(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnFixTransforms
    RootMotion::FinalIK::IKSolver::UpdateDelegate* _get_OnFixTransforms();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnFixTransforms
    void _set_OnFixTransforms(RootMotion::FinalIK::IKSolver::UpdateDelegate* value);
    // public RootMotion.FinalIK.IKEffector GetEffector(UnityEngine.Transform t)
    // Offset: 0x1C623D0
    RootMotion::FinalIK::IKEffector* GetEffector(UnityEngine::Transform* t);
    // public RootMotion.FinalIK.FBIKChain GetChain(UnityEngine.Transform transform)
    // Offset: 0x1C624C4
    RootMotion::FinalIK::FBIKChain* GetChain(UnityEngine::Transform* transform);
    // public System.Int32 GetChainIndex(UnityEngine.Transform transform)
    // Offset: 0x1C62520
    int GetChainIndex(UnityEngine::Transform* transform);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node GetNode(System.Int32 chainIndex, System.Int32 nodeIndex)
    // Offset: 0x1C62654
    RootMotion::FinalIK::IKSolver::Node* GetNode(int chainIndex, int nodeIndex);
    // public System.Void GetChainAndNodeIndexes(UnityEngine.Transform transform, out System.Int32 chainIndex, out System.Int32 nodeIndex)
    // Offset: 0x1C626B0
    void GetChainAndNodeIndexes(UnityEngine::Transform* transform, int& chainIndex, int& nodeIndex);
    // protected System.Void ReadPose()
    // Offset: 0x1C6313C
    void ReadPose();
    // protected System.Void Solve()
    // Offset: 0x1C63388
    void Solve();
    // protected System.Void ApplyBendConstraints()
    // Offset: 0x1C63660
    void ApplyBendConstraints();
    // protected System.Void WritePose()
    // Offset: 0x1C636A4
    void WritePose();
    // public System.Void .ctor()
    // Offset: 0x1C63794
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFullBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverFullBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFullBody*, creationType>()));
    }
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x1C62730
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1C628D8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1C62A4C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1C62C50
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1C62D24
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1C62E0C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1C62F80
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverFullBody
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFullBody), 200 + sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*)> __RootMotion_FinalIK_IKSolverFullBodySizeCheck;
  static_assert(sizeof(IKSolverFullBody) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBody*, "RootMotion.FinalIK", "IKSolverFullBody");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetEffector
// Il2CppName: GetEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKEffector* (RootMotion::FinalIK::IKSolverFullBody::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetEffector)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChain
// Il2CppName: GetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::FBIKChain* (RootMotion::FinalIK::IKSolverFullBody::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetChain)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainIndex
// Il2CppName: GetChainIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::IKSolverFullBody::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetChainIndex)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChainIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Node* (RootMotion::FinalIK::IKSolverFullBody::*)(int, int)>(&RootMotion::FinalIK::IKSolverFullBody::GetNode)> {
  static const MethodInfo* get() {
    static auto* chainIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chainIndex, nodeIndex});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes
// Il2CppName: GetChainAndNodeIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)(UnityEngine::Transform*, int&, int&)>(&RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* chainIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChainAndNodeIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, chainIndex, nodeIndex});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ReadPose
// Il2CppName: ReadPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::ReadPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "ReadPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::Solve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints
// Il2CppName: ApplyBendConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "ApplyBendConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::WritePose
// Il2CppName: WritePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::WritePose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "WritePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverFullBody::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverFullBody::*)(::Il2CppString*&)>(&RootMotion::FinalIK::IKSolverFullBody::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
