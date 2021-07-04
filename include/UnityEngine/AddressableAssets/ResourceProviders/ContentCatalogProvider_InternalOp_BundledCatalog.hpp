// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
#include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider_InternalOp.hpp"
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
  // Forward declaring type: AssetBundle
  class AssetBundle;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog
  class ContentCatalogProvider::InternalOp::BundledCatalog : public ::Il2CppObject {
    public:
    // private readonly System.String m_BundlePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_BundlePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_OpInProgress
    // Size: 0x1
    // Offset: 0x18
    bool m_OpInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_OpInProgress and: m_LoadBundleRequest
    char __padding1[0x7] = {};
    // private UnityEngine.AssetBundleCreateRequest m_LoadBundleRequest
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundleCreateRequest*) == 0x8);
    // UnityEngine.AssetBundle m_CatalogAssetBundle
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AssetBundle* m_CatalogAssetBundle;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundle*) == 0x8);
    // private UnityEngine.AssetBundleRequest m_LoadTextAssetRequest
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundleRequest*) == 0x8);
    // private UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData m_CatalogData
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE02914
    // private System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> OnLoaded
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*) == 0x8);
    // Creating value type constructor for type: BundledCatalog
    BundledCatalog(::Il2CppString* m_BundlePath_ = {}, bool m_OpInProgress_ = {}, UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest_ = {}, UnityEngine::AssetBundle* m_CatalogAssetBundle_ = {}, UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest_ = {}, UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData_ = {}, System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded_ = {}) noexcept : m_BundlePath{m_BundlePath_}, m_OpInProgress{m_OpInProgress_}, m_LoadBundleRequest{m_LoadBundleRequest_}, m_CatalogAssetBundle{m_CatalogAssetBundle_}, m_LoadTextAssetRequest{m_LoadTextAssetRequest_}, m_CatalogData{m_CatalogData_}, OnLoaded{OnLoaded_} {}
    // public System.Void add_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> value)
    // Offset: 0x13F8EB0
    void add_OnLoaded(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);
    // public System.Void remove_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> value)
    // Offset: 0x13F92E0
    void remove_OnLoaded(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);
    // public System.Boolean get_OpInProgress()
    // Offset: 0x13F9384
    bool get_OpInProgress();
    // public System.Boolean get_OpIsSuccess()
    // Offset: 0x13F938C
    bool get_OpIsSuccess();
    // public System.Void .ctor(System.String bundlePath)
    // Offset: 0x13F8DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogProvider::InternalOp::BundledCatalog* New_ctor(::Il2CppString* bundlePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogProvider::InternalOp::BundledCatalog*, creationType>(bundlePath)));
    }
    // private System.Void Unload()
    // Offset: 0x13F9428
    void Unload();
    // public System.Void LoadCatalogFromBundleAsync()
    // Offset: 0x13F8F54
    void LoadCatalogFromBundleAsync();
    // private System.Void LoadTextAssetRequestComplete(UnityEngine.AsyncOperation op)
    // Offset: 0x13F945C
    void LoadTextAssetRequestComplete(UnityEngine::AsyncOperation* op);
    // public System.Boolean WaitForCompletion()
    // Offset: 0x13F8CA8
    bool WaitForCompletion();
    // private System.Void <LoadCatalogFromBundleAsync>b__16_0(UnityEngine.AsyncOperation loadOp)
    // Offset: 0x13F95E0
    void $LoadCatalogFromBundleAsync$b__16_0(UnityEngine::AsyncOperation* loadOp);
    // protected override System.Void Finalize()
    // Offset: 0x13F93AC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogProvider::InternalOp::BundledCatalog), 64 + sizeof(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)> __UnityEngine_AddressableAssets_ResourceProviders_ContentCatalogProvider_InternalOp_BundledCatalogSizeCheck;
  static_assert(sizeof(ContentCatalogProvider::InternalOp::BundledCatalog) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp/BundledCatalog");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::add_OnLoaded
// Il2CppName: add_OnLoaded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::remove_OnLoaded
// Il2CppName: remove_OnLoaded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpInProgress
// Il2CppName: get_OpInProgress
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpIsSuccess
// Il2CppName: get_OpIsSuccess
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Unload
// Il2CppName: Unload
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadCatalogFromBundleAsync
// Il2CppName: LoadCatalogFromBundleAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadTextAssetRequestComplete
// Il2CppName: LoadTextAssetRequestComplete
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::WaitForCompletion
// Il2CppName: WaitForCompletion
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::$LoadCatalogFromBundleAsync$b__16_0
// Il2CppName: <LoadCatalogFromBundleAsync>b__16_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Finalize
// Il2CppName: Finalize
// Cannot perform method pointer template specialization from operators!
