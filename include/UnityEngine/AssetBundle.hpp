// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.AssetBundle
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [ExcludeFromPresetAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  // [NativeHeaderAttribute] Offset: D7275C
  class AssetBundle : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: AssetBundle
    AssetBundle() noexcept {}
    // static UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1A090E0
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
    // Offset: 0x1A09138
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Il2CppString* path);
    // static UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1A09180
    static UnityEngine::AssetBundle* LoadFromFile_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundle LoadFromFile(System.String path)
    // Offset: 0x1A091D8
    static UnityEngine::AssetBundle* LoadFromFile(::Il2CppString* path);
    // public UnityEngine.Object LoadAsset(System.String name)
    // Offset: 0x1A09220
    UnityEngine::Object* LoadAsset(::Il2CppString* name);
    // public T LoadAsset(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    T LoadAsset(::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(name)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, name);
    }
    // public UnityEngine.Object LoadAsset(System.String name, System.Type type)
    // Offset: 0x1A092B0
    UnityEngine::Object* LoadAsset(::Il2CppString* name, System::Type* type);
    // private UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
    // Offset: 0x1A093C0
    UnityEngine::Object* LoadAsset_Internal(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::LoadAssetAsync");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LoadAssetAsync", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(name)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::AssetBundleRequest*, false>(this, ___generic__method, name);
    }
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
    // Offset: 0x1A09418
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name, System::Type* type);
    // private UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
    // Offset: 0x1A09528
    UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::Il2CppString* name, System::Type* type);
    // public System.Void Unload(System.Boolean unloadAllLoadedObjects)
    // Offset: 0x1A09580
    void Unload(bool unloadAllLoadedObjects);
    // public System.String[] GetAllAssetNames()
    // Offset: 0x1A095D0
    ::Array<::Il2CppString*>* GetAllAssetNames();
    // public System.String[] GetAllScenePaths()
    // Offset: 0x1A09610
    ::Array<::Il2CppString*>* GetAllScenePaths();
    // private System.Void .ctor()
    // Offset: 0x1A09078
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundle*, creationType>()));
    }
  }; // UnityEngine.AssetBundle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
#pragma pack(pop)
