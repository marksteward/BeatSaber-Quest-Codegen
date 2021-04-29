// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterDataModel
  class BTSCharacterDataModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterDataModel::PrefabWithId
    class PrefabWithId;
    // Nested type: GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId
    class AnimationClipWithId;
    // private BTSCharacterDataModel/PrefabWithId[] _prefabsWithIds
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>* prefabsWithIds;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>*) == 0x8);
    // private BTSCharacterDataModel/AnimationClipWithId[] _animationClipsWithIds
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>* animationClipsWithIds;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>*) == 0x8);
    // Creating value type constructor for type: BTSCharacterDataModel
    BTSCharacterDataModel(::Array<GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>* prefabsWithIds_ = {}, ::Array<GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>* animationClipsWithIds_ = {}) noexcept : prefabsWithIds{prefabsWithIds_}, animationClipsWithIds{animationClipsWithIds_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BTSCharacterDataModel/PrefabWithId[] get_prefabsWithIds()
    // Offset: 0x1022F6C
    ::Array<GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>* get_prefabsWithIds();
    // public BTSCharacterDataModel/AnimationClipWithId[] get_animationClipsWithIds()
    // Offset: 0x1022F74
    ::Array<GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>* get_animationClipsWithIds();
    // public System.Void .ctor()
    // Offset: 0x1022F7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterDataModel*, creationType>()));
    }
  }; // BTSCharacterDataModel
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterDataModel), 32 + sizeof(::Array<GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>*)> __GlobalNamespace_BTSCharacterDataModelSizeCheck;
  static_assert(sizeof(BTSCharacterDataModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterDataModel*, "", "BTSCharacterDataModel");
