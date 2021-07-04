// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AssetReferenceT`1
#include "UnityEngine/AddressableAssets/AssetReferenceT_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceAtlasedSprite
  class AssetReferenceAtlasedSprite : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Sprite*> {
    public:
    // Creating value type constructor for type: AssetReferenceAtlasedSprite
    AssetReferenceAtlasedSprite() noexcept {}
    // public System.Void .ctor(System.String guid)
    // Offset: 0x13F09E4
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Void AssetReferenceT_1::.ctor(System.String guid)
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceAtlasedSprite* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceAtlasedSprite*, creationType>(guid)));
    }
    // public override System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x13F0A44
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Boolean AssetReferenceT_1::ValidateAsset(UnityEngine.Object obj)
    bool ValidateAsset(UnityEngine::Object* obj);
    // public override System.Boolean ValidateAsset(System.String path)
    // Offset: 0x13F0AC4
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Boolean AssetReferenceT_1::ValidateAsset(System.String path)
    bool ValidateAsset(::Il2CppString* path);
  }; // UnityEngine.AddressableAssets.AssetReferenceAtlasedSprite
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*, "UnityEngine.AddressableAssets", "AssetReferenceAtlasedSprite");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset
// Il2CppName: ValidateAsset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset
// Il2CppName: ValidateAsset
// Cannot perform method pointer template specialization from operators!
