// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneProvider.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnityEngine.ResourceManagement.ResourceProviders.UnloadSceneOp
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneProvider::UnloadSceneOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
    public:
    // private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Instance
    // Size: 0x10
    // Offset: 0x88
    UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Instance;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance) == 0x10);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> m_sceneLoadHandle
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_sceneLoadHandle;
    // Creating value type constructor for type: UnloadSceneOp
    UnloadSceneOp(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Instance_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_sceneLoadHandle_ = {}) noexcept : m_Instance{m_Instance_}, m_sceneLoadHandle{m_sceneLoadHandle_} {}
    // Get instance field: private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Instance
    UnityEngine::ResourceManagement::ResourceProviders::SceneInstance _get_m_Instance();
    // Set instance field: private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Instance
    void _set_m_Instance(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value);
    // Get instance field: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> m_sceneLoadHandle
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _get_m_sceneLoadHandle();
    // Set instance field: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> m_sceneLoadHandle
    void _set_m_sceneLoadHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);
    // public System.Void Init(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> sceneLoadHandle)
    // Offset: 0x1672710
    void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);
    // private System.Void UnloadSceneCompleted(UnityEngine.AsyncOperation obj)
    // Offset: 0x1673498
    void UnloadSceneCompleted(UnityEngine::AsyncOperation* obj);
    // private System.Void UnloadSceneCompletedNoRelease(UnityEngine.AsyncOperation obj)
    // Offset: 0x1673434
    void UnloadSceneCompletedNoRelease(UnityEngine::AsyncOperation* obj);
    // protected override System.Single get_Progress()
    // Offset: 0x16735B0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress();
    // public System.Void .ctor()
    // Offset: 0x16726C0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneProvider::UnloadSceneOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneProvider::UnloadSceneOp*, creationType>()));
    }
    // protected override System.Void Execute()
    // Offset: 0x167331C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x1673538
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
  }; // UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnityEngine.ResourceManagement.ResourceProviders.UnloadSceneOp
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/UnloadSceneOp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Init)> {
  static const MethodInfo* get() {
    static auto* sceneLoadHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneLoadHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompleted
// Il2CppName: UnloadSceneCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompleted)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "UnloadSceneCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompletedNoRelease
// Il2CppName: UnloadSceneCompletedNoRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompletedNoRelease)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "UnloadSceneCompletedNoRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
