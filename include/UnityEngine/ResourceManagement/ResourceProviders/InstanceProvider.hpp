// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/IInstanceProvider.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: InstantiationParameters
  struct InstantiationParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.InstanceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class InstanceProvider : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*/ {
    public:
    // private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>> m_InstanceObjectToPrefabHandle
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>* m_InstanceObjectToPrefabHandle;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>*) == 0x8);
    // Creating value type constructor for type: InstanceProvider
    InstanceProvider(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>* m_InstanceObjectToPrefabHandle_ = {}) noexcept : m_InstanceObjectToPrefabHandle{m_InstanceObjectToPrefabHandle_} {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider
    operator UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>*
    constexpr operator System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>*() const noexcept {
      return m_InstanceObjectToPrefabHandle;
    }
    // Get instance field: private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>> m_InstanceObjectToPrefabHandle
    System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>* _get_m_InstanceObjectToPrefabHandle();
    // Set instance field: private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>> m_InstanceObjectToPrefabHandle
    void _set_m_InstanceObjectToPrefabHandle(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>* value);
    // public UnityEngine.GameObject ProvideInstance(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> prefabHandle, UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters)
    // Offset: 0x19B8BF0
    UnityEngine::GameObject* ProvideInstance(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> prefabHandle, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);
    // public System.Void ReleaseInstance(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.GameObject instance)
    // Offset: 0x19B8CC0
    void ReleaseInstance(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::GameObject* instance);
    // public System.Void .ctor()
    // Offset: 0x19B8EC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstanceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstanceProvider*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.InstanceProvider
  #pragma pack(pop)
  static check_size<sizeof(InstanceProvider), 16 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>>*)> __UnityEngine_ResourceManagement_ResourceProviders_InstanceProviderSizeCheck;
  static_assert(sizeof(InstanceProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "InstanceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance
// Il2CppName: ProvideInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*>, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ProvideInstance)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* prefabHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    static auto* instantiateParameters = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*), "ProvideInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, prefabHandle, instantiateParameters});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance
// Il2CppName: ReleaseInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::GameObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::ReleaseInstance)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*), "ReleaseInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, instance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
