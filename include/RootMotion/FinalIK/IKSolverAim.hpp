// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverHeuristic
#include "RootMotion/FinalIK/IKSolverHeuristic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimit
  class RotationLimit;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverAim
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverAim : public RootMotion::FinalIK::IKSolverHeuristic {
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 poleAxis
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 poleAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 polePosition
    // Size: 0xC
    // Offset: 0xA8
    UnityEngine::Vector3 polePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [RangeAttribute] Offset: 0xEA0C44
    // public System.Single poleWeight
    // Size: 0x4
    // Offset: 0xB4
    float poleWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform poleTarget
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Transform* poleTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xEA0C5C
    // public System.Single clampWeight
    // Size: 0x4
    // Offset: 0xC0
    float clampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xEA0C74
    // public System.Int32 clampSmoothing
    // Size: 0x4
    // Offset: 0xC4
    int clampSmoothing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0xC8
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // private System.Single step
    // Size: 0x4
    // Offset: 0xD0
    float step;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 clampedIKPosition
    // Size: 0xC
    // Offset: 0xD4
    UnityEngine::Vector3 clampedIKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private RootMotion.FinalIK.RotationLimit transformLimit
    // Size: 0x8
    // Offset: 0xE0
    RootMotion::FinalIK::RotationLimit* transformLimit;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::RotationLimit*) == 0x8);
    // private UnityEngine.Transform lastTransform
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::Transform* lastTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: IKSolverAim
    IKSolverAim(UnityEngine::Transform* transform_ = {}, UnityEngine::Vector3 axis_ = {}, UnityEngine::Vector3 poleAxis_ = {}, UnityEngine::Vector3 polePosition_ = {}, float poleWeight_ = {}, UnityEngine::Transform* poleTarget_ = {}, float clampWeight_ = {}, int clampSmoothing_ = {}, RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration_ = {}, float step_ = {}, UnityEngine::Vector3 clampedIKPosition_ = {}, RootMotion::FinalIK::RotationLimit* transformLimit_ = {}, UnityEngine::Transform* lastTransform_ = {}) noexcept : transform{transform_}, axis{axis_}, poleAxis{poleAxis_}, polePosition{polePosition_}, poleWeight{poleWeight_}, poleTarget{poleTarget_}, clampWeight{clampWeight_}, clampSmoothing{clampSmoothing_}, OnPreIteration{OnPreIteration_}, step{step_}, clampedIKPosition{clampedIKPosition_}, transformLimit{transformLimit_}, lastTransform{lastTransform_} {}
    // Get instance field: public UnityEngine.Transform transform
    UnityEngine::Transform* _get_transform();
    // Set instance field: public UnityEngine.Transform transform
    void _set_transform(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Vector3 axis
    UnityEngine::Vector3 _get_axis();
    // Set instance field: public UnityEngine.Vector3 axis
    void _set_axis(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Vector3 poleAxis
    UnityEngine::Vector3 _get_poleAxis();
    // Set instance field: public UnityEngine.Vector3 poleAxis
    void _set_poleAxis(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Vector3 polePosition
    UnityEngine::Vector3 _get_polePosition();
    // Set instance field: public UnityEngine.Vector3 polePosition
    void _set_polePosition(UnityEngine::Vector3 value);
    // Get instance field: public System.Single poleWeight
    float _get_poleWeight();
    // Set instance field: public System.Single poleWeight
    void _set_poleWeight(float value);
    // Get instance field: public UnityEngine.Transform poleTarget
    UnityEngine::Transform* _get_poleTarget();
    // Set instance field: public UnityEngine.Transform poleTarget
    void _set_poleTarget(UnityEngine::Transform* value);
    // Get instance field: public System.Single clampWeight
    float _get_clampWeight();
    // Set instance field: public System.Single clampWeight
    void _set_clampWeight(float value);
    // Get instance field: public System.Int32 clampSmoothing
    int _get_clampSmoothing();
    // Set instance field: public System.Int32 clampSmoothing
    void _set_clampSmoothing(int value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    RootMotion::FinalIK::IKSolver::IterationDelegate* _get_OnPreIteration();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    void _set_OnPreIteration(RootMotion::FinalIK::IKSolver::IterationDelegate* value);
    // Get instance field: private System.Single step
    float _get_step();
    // Set instance field: private System.Single step
    void _set_step(float value);
    // Get instance field: private UnityEngine.Vector3 clampedIKPosition
    UnityEngine::Vector3 _get_clampedIKPosition();
    // Set instance field: private UnityEngine.Vector3 clampedIKPosition
    void _set_clampedIKPosition(UnityEngine::Vector3 value);
    // Get instance field: private RootMotion.FinalIK.RotationLimit transformLimit
    RootMotion::FinalIK::RotationLimit* _get_transformLimit();
    // Set instance field: private RootMotion.FinalIK.RotationLimit transformLimit
    void _set_transformLimit(RootMotion::FinalIK::RotationLimit* value);
    // Get instance field: private UnityEngine.Transform lastTransform
    UnityEngine::Transform* _get_lastTransform();
    // Set instance field: private UnityEngine.Transform lastTransform
    void _set_lastTransform(UnityEngine::Transform* value);
    // public UnityEngine.Vector3 get_transformAxis()
    // Offset: 0x180DE7C
    UnityEngine::Vector3 get_transformAxis();
    // public UnityEngine.Vector3 get_transformPoleAxis()
    // Offset: 0x180DF48
    UnityEngine::Vector3 get_transformPoleAxis();
    // public System.Single GetAngle()
    // Offset: 0x180DD7C
    float GetAngle();
    // private System.Void Solve()
    // Offset: 0x180EC0C
    void Solve();
    // private UnityEngine.Vector3 GetClampedIKPosition()
    // Offset: 0x180E834
    UnityEngine::Vector3 GetClampedIKPosition();
    // private System.Void RotateToTarget(UnityEngine.Vector3 targetPosition, RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone bone, System.Single weight)
    // Offset: 0x180ECC8
    void RotateToTarget(UnityEngine::Vector3 targetPosition, RootMotion::FinalIK::IKSolver::Bone* bone, float weight);
    // protected override System.Int32 get_minBones()
    // Offset: 0x180ECC0
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Int32 IKSolverHeuristic::get_minBones()
    int get_minBones();
    // protected override UnityEngine.Vector3 get_localDirection()
    // Offset: 0x180F26C
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: UnityEngine.Vector3 IKSolverHeuristic::get_localDirection()
    UnityEngine::Vector3 get_localDirection();
    // public System.Void .ctor()
    // Offset: 0x180F2E0
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverAim* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverAim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverAim*, creationType>()));
    }
    // protected override System.Void OnInitiate()
    // Offset: 0x180E014
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x180E29C
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverAim
  #pragma pack(pop)
  static check_size<sizeof(IKSolverAim), 232 + sizeof(UnityEngine::Transform*)> __RootMotion_FinalIK_IKSolverAimSizeCheck;
  static_assert(sizeof(IKSolverAim) == 0xF0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverAim*, "RootMotion.FinalIK", "IKSolverAim");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::get_transformAxis
// Il2CppName: get_transformAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::get_transformAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "get_transformAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::get_transformPoleAxis
// Il2CppName: get_transformPoleAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::get_transformPoleAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "get_transformPoleAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::GetAngle
// Il2CppName: GetAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::GetAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "GetAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::Solve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::GetClampedIKPosition
// Il2CppName: GetClampedIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::GetClampedIKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "GetClampedIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::RotateToTarget
// Il2CppName: RotateToTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverAim::*)(UnityEngine::Vector3, RootMotion::FinalIK::IKSolver::Bone*, float)>(&RootMotion::FinalIK::IKSolverAim::RotateToTarget)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bone = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Bone")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "RotateToTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition, bone, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::get_minBones
// Il2CppName: get_minBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::get_minBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "get_minBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::get_localDirection
// Il2CppName: get_localDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::get_localDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "get_localDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverAim::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverAim::*)()>(&RootMotion::FinalIK::IKSolverAim::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverAim*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
