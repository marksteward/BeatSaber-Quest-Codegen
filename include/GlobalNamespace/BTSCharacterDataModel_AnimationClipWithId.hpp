// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSCharacterDataModel
#include "GlobalNamespace/BTSCharacterDataModel.hpp"
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
  // Autogenerated type: BTSCharacterDataModel/AnimationClipWithId
  // [] Offset: FFFFFFFF
  class BTSCharacterDataModel::AnimationClipWithId : public ::Il2CppObject {
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
    // Offset: 0x1A4A0A8
    int get_id();
    // public UnityEngine.AnimationClip get_animationClip()
    // Offset: 0x1A4A0B0
    UnityEngine::AnimationClip* get_animationClip();
    // public System.Void .ctor()
    // Offset: 0x1A4A0B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterDataModel::AnimationClipWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterDataModel::AnimationClipWithId*, creationType>()));
    }
  }; // BTSCharacterDataModel/AnimationClipWithId
  static check_size<sizeof(BTSCharacterDataModel::AnimationClipWithId), 24 + sizeof(UnityEngine::AnimationClip*)> __GlobalNamespace_BTSCharacterDataModel_AnimationClipWithIdSizeCheck;
  static_assert(sizeof(BTSCharacterDataModel::AnimationClipWithId) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*, "", "BTSCharacterDataModel/AnimationClipWithId");
