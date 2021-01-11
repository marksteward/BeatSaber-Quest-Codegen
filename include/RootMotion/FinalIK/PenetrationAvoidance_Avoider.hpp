// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.PenetrationAvoidance
#include "RootMotion/FinalIK/PenetrationAvoidance.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.PenetrationAvoidance/Avoider
  // [] Offset: FFFFFFFF
  class PenetrationAvoidance::Avoider : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xDBB444
    // public UnityEngine.Transform[] raycastFrom
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Transform*>* raycastFrom;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDBB47C
    // public UnityEngine.Transform raycastTo
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* raycastTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDBB4B4
    // [RangeAttribute] Offset: 0xDBB4B4
    // public System.Single raycastRadius
    // Size: 0x4
    // Offset: 0x20
    float raycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: raycastRadius and: effectors
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xDBB508
    // public RootMotion.FinalIK.PenetrationAvoidance/Avoider/EffectorLink[] effectors
    // Size: 0x8
    // Offset: 0x28
    ::Array<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>* effectors;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDBB540
    // public System.Single smoothTimeIn
    // Size: 0x4
    // Offset: 0x30
    float smoothTimeIn;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDBB578
    // public System.Single smoothTimeOut
    // Size: 0x4
    // Offset: 0x34
    float smoothTimeOut;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDBB5B0
    // public UnityEngine.LayerMask layers
    // Size: 0x4
    // Offset: 0x38
    UnityEngine::LayerMask layers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // private UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 offsetTarget
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 offsetTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 offsetV
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 offsetV;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Avoider
    Avoider(::Array<UnityEngine::Transform*>* raycastFrom_ = {}, UnityEngine::Transform* raycastTo_ = {}, float raycastRadius_ = {}, ::Array<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>* effectors_ = {}, float smoothTimeIn_ = {}, float smoothTimeOut_ = {}, UnityEngine::LayerMask layers_ = {}, UnityEngine::Vector3 offset_ = {}, UnityEngine::Vector3 offsetTarget_ = {}, UnityEngine::Vector3 offsetV_ = {}) noexcept : raycastFrom{raycastFrom_}, raycastTo{raycastTo_}, raycastRadius{raycastRadius_}, effectors{effectors_}, smoothTimeIn{smoothTimeIn_}, smoothTimeOut{smoothTimeOut_}, layers{layers_}, offset{offset_}, offsetTarget{offsetTarget_}, offsetV{offsetV_} {}
    // public System.Void Solve(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x15E2420
    void Solve(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // private UnityEngine.Vector3 GetOffsetTarget(RootMotion.FinalIK.IKSolverFullBodyBiped solver)
    // Offset: 0x15E262C
    UnityEngine::Vector3 GetOffsetTarget(RootMotion::FinalIK::IKSolverFullBodyBiped* solver);
    // private UnityEngine.Vector3 Raycast(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x15E27C4
    UnityEngine::Vector3 Raycast(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // public System.Void .ctor()
    // Offset: 0x15E2A38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PenetrationAvoidance::Avoider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::PenetrationAvoidance::Avoider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PenetrationAvoidance::Avoider*, creationType>()));
    }
  }; // RootMotion.FinalIK.PenetrationAvoidance/Avoider
  static check_size<sizeof(PenetrationAvoidance::Avoider), 84 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_PenetrationAvoidance_AvoiderSizeCheck;
  static_assert(sizeof(PenetrationAvoidance::Avoider) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::PenetrationAvoidance::Avoider*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider");
