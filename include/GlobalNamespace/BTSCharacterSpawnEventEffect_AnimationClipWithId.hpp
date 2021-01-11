// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSCharacterSpawnEventEffect
#include "GlobalNamespace/BTSCharacterSpawnEventEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnEventEffect/AnimationClipWithId
  // [] Offset: FFFFFFFF
  class BTSCharacterSpawnEventEffect::AnimationClipWithId : public ::Il2CppObject {
    public:
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: animationClip
    char __padding0[0x4] = {};
    // private UnityEngine.AnimationClip _animationClip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationClip* animationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // Creating value type constructor for type: AnimationClipWithId
    AnimationClipWithId(int id_ = {}, UnityEngine::AnimationClip* animationClip_ = {}) noexcept : id{id_}, animationClip{animationClip_} {}
    // public System.Int32 get_id()
    // Offset: 0x1A4BEDC
    int get_id();
    // public UnityEngine.AnimationClip get_animationClip()
    // Offset: 0x1A4BEE4
    UnityEngine::AnimationClip* get_animationClip();
    // public System.Void .ctor()
    // Offset: 0x1A4BEEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnEventEffect::AnimationClipWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterSpawnEventEffect::AnimationClipWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnEventEffect::AnimationClipWithId*, creationType>()));
    }
  }; // BTSCharacterSpawnEventEffect/AnimationClipWithId
  static check_size<sizeof(BTSCharacterSpawnEventEffect::AnimationClipWithId), 24 + sizeof(UnityEngine::AnimationClip*)> __GlobalNamespace_BTSCharacterSpawnEventEffect_AnimationClipWithIdSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnEventEffect::AnimationClipWithId) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnEventEffect::AnimationClipWithId*, "", "BTSCharacterSpawnEventEffect/AnimationClipWithId");
