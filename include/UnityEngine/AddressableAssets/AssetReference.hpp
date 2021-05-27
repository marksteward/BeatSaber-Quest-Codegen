// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.IKeyEvaluator
#include "UnityEngine/AddressableAssets/IKeyEvaluator.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReference
  class AssetReference : public ::Il2CppObject/*, public UnityEngine::AddressableAssets::IKeyEvaluator*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE018AC
    // private System.String m_AssetGUID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_AssetGUID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_SubObjectName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_SubObjectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_SubObjectType
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_SubObjectType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle m_Operation
    // Size: 0x18
    // Offset: 0x28
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle) == 0x18);
    // Creating value type constructor for type: AssetReference
    AssetReference(::Il2CppString* m_AssetGUID_ = {}, ::Il2CppString* m_SubObjectName_ = {}, ::Il2CppString* m_SubObjectType_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation_ = {}) noexcept : m_AssetGUID{m_AssetGUID_}, m_SubObjectName{m_SubObjectName_}, m_SubObjectType{m_SubObjectType_}, m_Operation{m_Operation_} {}
    // Creating interface conversion operator: operator UnityEngine::AddressableAssets::IKeyEvaluator
    operator UnityEngine::AddressableAssets::IKeyEvaluator() noexcept {
      return *reinterpret_cast<UnityEngine::AddressableAssets::IKeyEvaluator*>(this);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle get_OperationHandle()
    // Offset: 0x13D5358
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();
    // public System.Object get_RuntimeKey()
    // Offset: 0x13D536C
    ::Il2CppObject* get_RuntimeKey();
    // public System.String get_AssetGUID()
    // Offset: 0x13D5404
    ::Il2CppString* get_AssetGUID();
    // public System.String get_SubObjectName()
    // Offset: 0x13D540C
    ::Il2CppString* get_SubObjectName();
    // public System.Void set_SubObjectName(System.String value)
    // Offset: 0x13D5414
    void set_SubObjectName(::Il2CppString* value);
    // System.Type get_SubOjbectType()
    // Offset: 0x13D541C
    System::Type* get_SubOjbectType();
    // public System.Boolean IsValid()
    // Offset: 0x13D54D0
    bool IsValid();
    // public System.Boolean get_IsDone()
    // Offset: 0x13D54DC
    bool get_IsDone();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x13D5540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReference* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReference*, creationType>(guid)));
    }
    // public UnityEngine.Object get_Asset()
    // Offset: 0x13D55AC
    UnityEngine::Object* get_Asset();
    // static private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T> CreateFailedOperation()
    // Offset: 0xFFFFFFFF
    template<class T>
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReference::CreateFailedOperation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.AddressableAssets", "AssetReference", "CreateFailedOperation", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAsset()
    // Offset: 0xFFFFFFFF
    template<class TObject>
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReference::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> LoadScene()
    // Offset: 0x13D56B4
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> Instantiate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x13D56D0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> Instantiate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> Instantiate(UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x13D56E0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> Instantiate(UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAssetAsync()
    // Offset: 0xFFFFFFFF
    template<class TObject>
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReference::LoadAssetAsync");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAssetAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> LoadSceneAsync(UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority)
    // Offset: 0x13D56F4
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnLoadScene()
    // Offset: 0x13D5858
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> InstantiateAsync(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x13D58FC
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> InstantiateAsync(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> InstantiateAsync(UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x13D59EC
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> InstantiateAsync(UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // public System.Boolean RuntimeKeyIsValid()
    // Offset: 0x13D5A94
    bool RuntimeKeyIsValid();
    // public System.Void ReleaseAsset()
    // Offset: 0x13D5B74
    void ReleaseAsset();
    // public System.Void ReleaseInstance(UnityEngine.GameObject obj)
    // Offset: 0x13D5C60
    void ReleaseInstance(UnityEngine::GameObject* obj);
    // public System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x13D5CC4
    bool ValidateAsset(UnityEngine::Object* obj);
    // public System.Boolean ValidateAsset(System.String path)
    // Offset: 0x13D5CCC
    bool ValidateAsset(::Il2CppString* path);
    // public System.Void .ctor()
    // Offset: 0x13D54E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReference*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x13D5654
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.AddressableAssets.AssetReference
  #pragma pack(pop)
  static check_size<sizeof(AssetReference), 40 + sizeof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)> __UnityEngine_AddressableAssets_AssetReferenceSizeCheck;
  static_assert(sizeof(AssetReference) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReference*, "UnityEngine.AddressableAssets", "AssetReference");