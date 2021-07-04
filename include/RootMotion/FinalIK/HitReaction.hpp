// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
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
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction
  class HitReaction : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::HitReaction::HitPoint
    class HitPoint;
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector
    class HitPointEffector;
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointBone
    class HitPointBone;
    // [TooltipAttribute] Offset: 0xE0A9DC
    // public RootMotion.FinalIK.HitReaction/HitPointEffector[] effectorHitPoints
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector*>* effectorHitPoints;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0AA14
    // public RootMotion.FinalIK.HitReaction/HitPointBone[] boneHitPoints
    // Size: 0x8
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::HitReaction::HitPointBone*>* boneHitPoints;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointBone*>*) == 0x8);
    // Creating value type constructor for type: HitReaction
    HitReaction(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector*>* effectorHitPoints_ = {}, ::Array<RootMotion::FinalIK::HitReaction::HitPointBone*>* boneHitPoints_ = {}) noexcept : effectorHitPoints{effectorHitPoints_}, boneHitPoints{boneHitPoints_} {}
    // public System.Boolean get_inProgress()
    // Offset: 0x1C6310C
    bool get_inProgress();
    // public System.Void Hit(UnityEngine.Collider collider, UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x1C633FC
    void Hit(UnityEngine::Collider* collider, UnityEngine::Vector3 force, UnityEngine::Vector3 point);
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1C631DC
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x1C63768
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction
  #pragma pack(pop)
  static check_size<sizeof(HitReaction), 56 + sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointBone*>*)> __RootMotion_FinalIK_HitReactionSizeCheck;
  static_assert(sizeof(HitReaction) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction*, "RootMotion.FinalIK", "HitReaction");
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::get_inProgress
// Il2CppName: get_inProgress
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::Hit
// Il2CppName: Hit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::OnModifyOffset
// Il2CppName: OnModifyOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
