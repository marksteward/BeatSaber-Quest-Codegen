// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ISceneProvider : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ISceneProvider
    ISceneProvider() noexcept {}
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> ProvideScene(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> ReleaseScene(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> sceneLoadHandle)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);
  }; // UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "ISceneProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::ProvideScene
// Il2CppName: ProvideScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::SceneManagement::LoadSceneMode, bool, int)>(&UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::ProvideScene)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* activateOnLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*), "ProvideScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, location, loadMode, activateOnLoad, priority});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::ReleaseScene
// Il2CppName: ReleaseScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider::ReleaseScene)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* sceneLoadHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*), "ReleaseScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, sceneLoadHandle});
  }
};
