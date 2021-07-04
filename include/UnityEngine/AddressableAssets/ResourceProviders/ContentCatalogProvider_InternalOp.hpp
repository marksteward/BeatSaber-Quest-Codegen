// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
#include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
  class ContentCatalogProvider::InternalOp : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog
    class BundledCatalog;
    // private System.String m_LocalDataPath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_LocalDataPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_RemoteHashValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_RemoteHashValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_LocalHashValue
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_LocalHashValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProviderInterface
    // Size: 0x18
    // Offset: 0x28
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProviderInterface;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData m_ContentCatalogData
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_ContentCatalogData;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> m_ContentCatalogDataLoadOp
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> m_ContentCatalogDataLoadOp;
    // private UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog m_BundledCatalog
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog* m_BundledCatalog;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*) == 0x8);
    // Creating value type constructor for type: InternalOp
    InternalOp(::Il2CppString* m_LocalDataPath_ = {}, ::Il2CppString* m_RemoteHashValue_ = {}, ::Il2CppString* m_LocalHashValue_ = {}, UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProviderInterface_ = {}, UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_ContentCatalogData_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> m_ContentCatalogDataLoadOp_ = {}, UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog* m_BundledCatalog_ = {}) noexcept : m_LocalDataPath{m_LocalDataPath_}, m_RemoteHashValue{m_RemoteHashValue_}, m_LocalHashValue{m_LocalHashValue_}, m_ProviderInterface{m_ProviderInterface_}, m_ContentCatalogData{m_ContentCatalogData_}, m_ContentCatalogDataLoadOp{m_ContentCatalogDataLoadOp_}, m_BundledCatalog{m_BundledCatalog_} {}
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface, System.Boolean disableCatalogUpdateOnStart, System.Boolean isLocalCatalogInBundle)
    // Offset: 0x13F7EE8
    void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle);
    // private System.Boolean WaitForCompletionCallback()
    // Offset: 0x13F8BE4
    bool WaitForCompletionCallback();
    // public System.Void Release()
    // Offset: 0x13F7D8C
    void Release();
    // System.Void LoadCatalog(System.String idToLoad, System.Boolean isLocalCatalogInBundle, System.Boolean isLocalCatalog)
    // Offset: 0x13F8898
    void LoadCatalog(::Il2CppString* idToLoad, bool isLocalCatalogInBundle, bool isLocalCatalog);
    // private System.Void CatalogLoadOpCompleteCallback(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> op)
    // Offset: 0x13F9044
    void CatalogLoadOpCompleteCallback(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op);
    // private System.String GetTransformedInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation loc)
    // Offset: 0x13F87C0
    ::Il2CppString* GetTransformedInternalId(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);
    // System.String DetermineIdToLoad(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Collections.Generic.IList`1<System.Object> dependencyObjects, System.Boolean disableCatalogUpdateOnStart)
    // Offset: 0x13F8038
    ::Il2CppString* DetermineIdToLoad(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, System::Collections::Generic::IList_1<::Il2CppObject*>* dependencyObjects, bool disableCatalogUpdateOnStart);
    // private System.Void OnCatalogLoaded(UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData ccd)
    // Offset: 0x13F911C
    void OnCatalogLoaded(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);
    // private System.Void <LoadCatalog>b__10_0(UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData ccd)
    // Offset: 0x13F92D8
    void $LoadCatalog$b__10_0(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);
    // public System.Void .ctor()
    // Offset: 0x13F7EE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::WaitForCompletionCallback
// Il2CppName: WaitForCompletionCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::Release
// Il2CppName: Release
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::LoadCatalog
// Il2CppName: LoadCatalog
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::CatalogLoadOpCompleteCallback
// Il2CppName: CatalogLoadOpCompleteCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::GetTransformedInternalId
// Il2CppName: GetTransformedInternalId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::DetermineIdToLoad
// Il2CppName: DetermineIdToLoad
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::OnCatalogLoaded
// Il2CppName: OnCatalogLoaded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::$LoadCatalog$b__10_0
// Il2CppName: <LoadCatalog>b__10_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
