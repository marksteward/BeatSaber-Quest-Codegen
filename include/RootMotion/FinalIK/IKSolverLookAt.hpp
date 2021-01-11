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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt
  // [] Offset: FFFFFFFF
  class IKSolverLookAt : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverLookAt::LookAtBone
    class LookAtBone;
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] spine
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* spine;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone head
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::IKSolverLookAt::LookAtBone* head;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] eyes
    // Size: 0x8
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* eyes;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*) == 0x8);
    // [RangeAttribute] Offset: 0xDB6EE8
    // public System.Single bodyWeight
    // Size: 0x4
    // Offset: 0x78
    float bodyWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F00
    // public System.Single headWeight
    // Size: 0x4
    // Offset: 0x7C
    float headWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F18
    // public System.Single eyesWeight
    // Size: 0x4
    // Offset: 0x80
    float eyesWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F30
    // public System.Single clampWeight
    // Size: 0x4
    // Offset: 0x84
    float clampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F48
    // public System.Single clampWeightHead
    // Size: 0x4
    // Offset: 0x88
    float clampWeightHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F60
    // public System.Single clampWeightEyes
    // Size: 0x4
    // Offset: 0x8C
    float clampWeightEyes;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDB6F78
    // public System.Int32 clampSmoothing
    // Size: 0x4
    // Offset: 0x90
    int clampSmoothing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clampSmoothing and: spineWeightCurve
    char __padding10[0x4] = {};
    // public UnityEngine.AnimationCurve spineWeightCurve
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AnimationCurve* spineWeightCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 spineTargetOffset
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 spineTargetOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: spineTargetOffset and: spineForwards
    char __padding12[0x4] = {};
    // protected UnityEngine.Vector3[] spineForwards
    // Size: 0x8
    // Offset: 0xB0
    ::Array<UnityEngine::Vector3>* spineForwards;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // protected UnityEngine.Vector3[] headForwards
    // Size: 0x8
    // Offset: 0xB8
    ::Array<UnityEngine::Vector3>* headForwards;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // protected UnityEngine.Vector3[] eyeForward
    // Size: 0x8
    // Offset: 0xC0
    ::Array<UnityEngine::Vector3>* eyeForward;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: IKSolverLookAt
    IKSolverLookAt(UnityEngine::Transform* target_ = {}, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* spine_ = {}, RootMotion::FinalIK::IKSolverLookAt::LookAtBone* head_ = {}, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* eyes_ = {}, float bodyWeight_ = {}, float headWeight_ = {}, float eyesWeight_ = {}, float clampWeight_ = {}, float clampWeightHead_ = {}, float clampWeightEyes_ = {}, int clampSmoothing_ = {}, UnityEngine::AnimationCurve* spineWeightCurve_ = {}, UnityEngine::Vector3 spineTargetOffset_ = {}, ::Array<UnityEngine::Vector3>* spineForwards_ = {}, ::Array<UnityEngine::Vector3>* headForwards_ = {}, ::Array<UnityEngine::Vector3>* eyeForward_ = {}) noexcept : target{target_}, spine{spine_}, head{head_}, eyes{eyes_}, bodyWeight{bodyWeight_}, headWeight{headWeight_}, eyesWeight{eyesWeight_}, clampWeight{clampWeight_}, clampWeightHead{clampWeightHead_}, clampWeightEyes{clampWeightEyes_}, clampSmoothing{clampSmoothing_}, spineWeightCurve{spineWeightCurve_}, spineTargetOffset{spineTargetOffset_}, spineForwards{spineForwards_}, headForwards{headForwards_}, eyeForward{eyeForward_} {}
    // public System.Void SetLookAtWeight(System.Single weight)
    // Offset: 0x16EE880
    void SetLookAtWeight(float weight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight)
    // Offset: 0x16EE904
    void SetLookAtWeight(float weight, float bodyWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight)
    // Offset: 0x16EE9B0
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight)
    // Offset: 0x16EEA78
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight)
    // Offset: 0x16EEB64
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x16EEC70
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Boolean SetChain(UnityEngine.Transform[] spine, UnityEngine.Transform head, UnityEngine.Transform[] eyes, UnityEngine.Transform root)
    // Offset: 0x16EF870
    bool SetChain(::Array<UnityEngine::Transform*>* spine, UnityEngine::Transform* head, ::Array<UnityEngine::Transform*>* eyes, UnityEngine::Transform* root);
    // protected System.Boolean get_spineIsValid()
    // Offset: 0x16EF1CC
    bool get_spineIsValid();
    // protected System.Boolean get_spineIsEmpty()
    // Offset: 0x16EF3A4
    bool get_spineIsEmpty();
    // protected System.Void SolveSpine()
    // Offset: 0x16F00B0
    void SolveSpine();
    // protected System.Boolean get_headIsValid()
    // Offset: 0x16EF2B0
    bool get_headIsValid();
    // protected System.Boolean get_headIsEmpty()
    // Offset: 0x16EF3C8
    bool get_headIsEmpty();
    // protected System.Void SolveHead()
    // Offset: 0x16F02DC
    void SolveHead();
    // protected System.Boolean get_eyesIsValid()
    // Offset: 0x16EF2C0
    bool get_eyesIsValid();
    // protected System.Boolean get_eyesIsEmpty()
    // Offset: 0x16EF444
    bool get_eyesIsEmpty();
    // protected System.Void SolveEyes()
    // Offset: 0x16F0538
    void SolveEyes();
    // protected UnityEngine.Vector3[] GetForwards(ref UnityEngine.Vector3[] forwards, UnityEngine.Vector3 baseForward, UnityEngine.Vector3 targetForward, System.Int32 bones, System.Single clamp)
    // Offset: 0x16F0A64
    ::Array<UnityEngine::Vector3>* GetForwards(::Array<UnityEngine::Vector3>*& forwards, UnityEngine::Vector3 baseForward, UnityEngine::Vector3 targetForward, int bones, float clamp);
    // protected System.Void SetBones(UnityEngine.Transform[] array, ref RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] bones)
    // Offset: 0x16EF938
    void SetBones(::Array<UnityEngine::Transform*>* array, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*& bones);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x16EEDB8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x16EEEE8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x16EF02C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x16EF468
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x16EF6D0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x16EFB1C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x16EFFAC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x16F0F04
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLookAt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverLookAt
  static check_size<sizeof(IKSolverLookAt), 192 + sizeof(::Array<UnityEngine::Vector3>*)> __RootMotion_FinalIK_IKSolverLookAtSizeCheck;
  static_assert(sizeof(IKSolverLookAt) == 0xC8);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt*, "RootMotion.FinalIK", "IKSolverLookAt");
