// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: CapsuleCollider
  class CapsuleCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoneCapsule
  class OVRBoneCapsule : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF5A64
    // private System.Int16 <BoneIndex>k__BackingField
    // Size: 0x2
    // Offset: 0x10
    int16_t BoneIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: BoneIndex and: CapsuleRigidbody
    char __padding0[0x6] = {};
    // [CompilerGeneratedAttribute] Offset: 0xCF5A74
    // private UnityEngine.Rigidbody <CapsuleRigidbody>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rigidbody* CapsuleRigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF5A84
    // private UnityEngine.CapsuleCollider <CapsuleCollider>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::CapsuleCollider* CapsuleCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::CapsuleCollider*) == 0x8);
    // Creating value type constructor for type: OVRBoneCapsule
    OVRBoneCapsule(int16_t BoneIndex_ = {}, UnityEngine::Rigidbody* CapsuleRigidbody_ = {}, UnityEngine::CapsuleCollider* CapsuleCollider_ = {}) noexcept : BoneIndex{BoneIndex_}, CapsuleRigidbody{CapsuleRigidbody_}, CapsuleCollider{CapsuleCollider_} {}
    // public System.Int16 get_BoneIndex()
    // Offset: 0x114D290
    int16_t get_BoneIndex();
    // private System.Void set_BoneIndex(System.Int16 value)
    // Offset: 0x114D298
    void set_BoneIndex(int16_t value);
    // public UnityEngine.Rigidbody get_CapsuleRigidbody()
    // Offset: 0x114D2A0
    UnityEngine::Rigidbody* get_CapsuleRigidbody();
    // private System.Void set_CapsuleRigidbody(UnityEngine.Rigidbody value)
    // Offset: 0x114D2A8
    void set_CapsuleRigidbody(UnityEngine::Rigidbody* value);
    // public UnityEngine.CapsuleCollider get_CapsuleCollider()
    // Offset: 0x114D2B0
    UnityEngine::CapsuleCollider* get_CapsuleCollider();
    // private System.Void set_CapsuleCollider(UnityEngine.CapsuleCollider value)
    // Offset: 0x114D2B8
    void set_CapsuleCollider(UnityEngine::CapsuleCollider* value);
    // public System.Void .ctor(System.Int16 boneIndex, UnityEngine.Rigidbody capsuleRigidBody, UnityEngine.CapsuleCollider capsuleCollider)
    // Offset: 0x114D2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBoneCapsule* New_ctor(int16_t boneIndex, UnityEngine::Rigidbody* capsuleRigidBody, UnityEngine::CapsuleCollider* capsuleCollider) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRBoneCapsule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBoneCapsule*, creationType>(boneIndex, capsuleRigidBody, capsuleCollider)));
    }
  }; // OVRBoneCapsule
  #pragma pack(pop)
  static check_size<sizeof(OVRBoneCapsule), 32 + sizeof(UnityEngine::CapsuleCollider*)> __GlobalNamespace_OVRBoneCapsuleSizeCheck;
  static_assert(sizeof(OVRBoneCapsule) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoneCapsule*, "", "OVRBoneCapsule");
