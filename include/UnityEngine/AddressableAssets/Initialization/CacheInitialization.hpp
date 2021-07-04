// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.IInitializableObject
#include "UnityEngine/ResourceManagement/Util/IInitializableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Initialization
namespace UnityEngine::AddressableAssets::Initialization {
}
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
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitialization
  class CacheInitialization : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::Util::IInitializableObject*/ {
    public:
    // Nested type: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp
    class CacheInitOp;
    // Nested type: UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Creating value type constructor for type: CacheInitialization
    CacheInitialization() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::Util::IInitializableObject
    operator UnityEngine::ResourceManagement::Util::IInitializableObject() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::Util::IInitializableObject*>(this);
    }
    // public System.Boolean Initialize(System.String id, System.String dataStr)
    // Offset: 0x13F2F28
    bool Initialize(::Il2CppString* id, ::Il2CppString* dataStr);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0x13F307C
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager* rm, ::Il2CppString* id, ::Il2CppString* data);
    // static public System.String get_RootPath()
    // Offset: 0x13F3200
    static ::Il2CppString* get_RootPath();
    // public System.Void .ctor()
    // Offset: 0x13F3288
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitialization* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::CacheInitialization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitialization*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitialization
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitialization*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::InitializeAsync
// Il2CppName: InitializeAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::get_RootPath
// Il2CppName: get_RootPath
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
