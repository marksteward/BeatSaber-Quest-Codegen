// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction/HitPointEffector
#include "RootMotion/FinalIK/HitReaction_HitPointEffector.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink
  class HitReaction::HitPointEffector::EffectorLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2D3F8
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xD2D430
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastValue
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 lastValue;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 current
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 current;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: EffectorLink
    EffectorLink(RootMotion::FinalIK::FullBodyBipedEffector effector_ = {}, float weight_ = {}, UnityEngine::Vector3 lastValue_ = {}, UnityEngine::Vector3 current_ = {}) noexcept : effector{effector_}, weight{weight_}, lastValue{lastValue_}, current{current_} {}
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Vector3 offset, System.Single crossFader)
    // Offset: 0x1AA263C
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine::Vector3 offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1AA2430
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x1AA2778
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointEffector::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointEffector::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointEffector::EffectorLink), 36 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_HitReaction_HitPointEffector_EffectorLinkSizeCheck;
  static_assert(sizeof(HitReaction::HitPointEffector::EffectorLink) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*, "RootMotion.FinalIK", "HitReaction/HitPointEffector/EffectorLink");
