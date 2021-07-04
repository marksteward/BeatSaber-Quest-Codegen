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
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetReference
  class AssetReference;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterDataModel/AnimationClipWithId
  class BTSCharacterDataModel::AnimationClipWithId : public ::Il2CppObject {
    public:
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: animationClipAssetReference
    char __padding0[0x4] = {};
    // private UnityEngine.AddressableAssets.AssetReference _animationClipAssetReference
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AddressableAssets::AssetReference* animationClipAssetReference;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AssetReference*) == 0x8);
    // Creating value type constructor for type: AnimationClipWithId
    AnimationClipWithId(int id_ = {}, UnityEngine::AddressableAssets::AssetReference* animationClipAssetReference_ = {}) noexcept : id{id_}, animationClipAssetReference{animationClipAssetReference_} {}
    // public System.Int32 get_id()
    // Offset: 0x113A744
    int get_id();
    // public UnityEngine.AddressableAssets.AssetReference get_animationClipAssetReference()
    // Offset: 0x113A74C
    UnityEngine::AddressableAssets::AssetReference* get_animationClipAssetReference();
    // public System.Void .ctor()
    // Offset: 0x113A754
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterDataModel::AnimationClipWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterDataModel::AnimationClipWithId*, creationType>()));
    }
  }; // BTSCharacterDataModel/AnimationClipWithId
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterDataModel::AnimationClipWithId), 24 + sizeof(UnityEngine::AddressableAssets::AssetReference*)> __GlobalNamespace_BTSCharacterDataModel_AnimationClipWithIdSizeCheck;
  static_assert(sizeof(BTSCharacterDataModel::AnimationClipWithId) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*, "", "BTSCharacterDataModel/AnimationClipWithId");
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::*)()>(&GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::get_id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::get_animationClipAssetReference
// Il2CppName: get_animationClipAssetReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::AssetReference* (GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::*)()>(&GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::get_animationClipAssetReference)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*), "get_animationClipAssetReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
