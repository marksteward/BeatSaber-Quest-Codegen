// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.Initialization.InitializationOperation
#include "UnityEngine/AddressableAssets/Initialization/InitializationOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AddressablesImpl
  class AddressablesImpl;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0
  // [CompilerGeneratedAttribute] Offset: E027CC
  class InitializationOperation::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl addressables
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.String providerSuffix
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* providerSuffix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass16_0
    $$c__DisplayClass16_0(UnityEngine::AddressableAssets::AddressablesImpl* addressables_ = {}, ::Il2CppString* providerSuffix_ = {}) noexcept : addressables{addressables_}, providerSuffix{providerSuffix_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> <LoadContentCatalog>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> res)
    // Offset: 0x13F5D74
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> $LoadContentCatalog$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> res);
    // public System.Void .ctor()
    // Offset: 0x13F5970
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationOperation::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationOperation::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(InitializationOperation::$$c__DisplayClass16_0), 24 + sizeof(::Il2CppString*)> __UnityEngine_AddressableAssets_Initialization_InitializationOperation_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(InitializationOperation::$$c__DisplayClass16_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass16_0*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c__DisplayClass16_0");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass16_0::$LoadContentCatalog$b__0
// Il2CppName: <LoadContentCatalog>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
