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
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceGameObject
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetReferenceGameObject : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::GameObject*> {
    public:
    // Creating value type constructor for type: AssetReferenceGameObject
    AssetReferenceGameObject() noexcept {}
    // public System.Void .ctor(System.String guid)
    // Offset: 0x13C51A8
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Void AssetReferenceT_1::.ctor(System.String guid)
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceGameObject* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceGameObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceGameObject*, creationType>(guid)));
    }
  }; // UnityEngine.AddressableAssets.AssetReferenceGameObject
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceGameObject*, "UnityEngine.AddressableAssets", "AssetReferenceGameObject");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceGameObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
