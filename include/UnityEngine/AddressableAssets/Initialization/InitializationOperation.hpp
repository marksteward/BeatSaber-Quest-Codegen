// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: ResourceManagerRuntimeData
  class ResourceManagerRuntimeData;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
}
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AddressablesImpl
  class AddressablesImpl;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Forward declaring type: ResourceManagerDiagnostics
  class ResourceManagerDiagnostics;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: InitalizationObjectsOperation
  class InitalizationObjectsOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: ObjectInitializationData
  struct ObjectInitializationData;
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
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.InitializationOperation
  class InitializationOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> {
    public:
    // Nested type: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c
    class $$c;
    // Nested type: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> m_rtdOp
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_rtdOp;
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> m_loadCatalogOp
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_loadCatalogOp;
    // private System.String m_ProviderSuffix
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppString* m_ProviderSuffix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics m_Diagnostics
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* m_Diagnostics;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation m_InitGroupOps
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* m_InitGroupOps;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*) == 0x8);
    // Creating value type constructor for type: InitializationOperation
    InitializationOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_rtdOp_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_loadCatalogOp_ = {}, ::Il2CppString* m_ProviderSuffix_ = {}, UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* m_Diagnostics_ = {}, UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* m_InitGroupOps_ = {}) noexcept : m_rtdOp{m_rtdOp_}, m_loadCatalogOp{m_loadCatalogOp_}, m_ProviderSuffix{m_ProviderSuffix_}, m_Addressables{m_Addressables_}, m_Diagnostics{m_Diagnostics_}, m_InitGroupOps{m_InitGroupOps_} {}
    // public System.Void .ctor(UnityEngine.AddressableAssets.AddressablesImpl aa)
    // Offset: 0x13F357C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationOperation* New_ctor(UnityEngine::AddressableAssets::AddressablesImpl* aa) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::InitializationOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationOperation*, creationType>(aa)));
    }
    // static UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> CreateInitializationOperation(UnityEngine.AddressableAssets.AddressablesImpl aa, System.String playerSettingsLocation, System.String providerSuffix)
    // Offset: 0x13EA2E8
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> CreateInitializationOperation(UnityEngine::AddressableAssets::AddressablesImpl* aa, ::Il2CppString* playerSettingsLocation, ::Il2CppString* providerSuffix);
    // static private System.Void LoadProvider(UnityEngine.AddressableAssets.AddressablesImpl addressables, UnityEngine.ResourceManagement.Util.ObjectInitializationData providerData, System.String providerSuffix)
    // Offset: 0x13F5158
    static void LoadProvider(UnityEngine::AddressableAssets::AddressablesImpl* addressables, UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData, ::Il2CppString* providerSuffix);
    // static private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> OnCatalogDataLoaded(UnityEngine.AddressableAssets.AddressablesImpl addressables, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> op, System.String providerSuffix)
    // Offset: 0x13F55D4
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> OnCatalogDataLoaded(UnityEngine::AddressableAssets::AddressablesImpl* addressables, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op, ::Il2CppString* providerSuffix);
    // static public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> LoadContentCatalog(UnityEngine.AddressableAssets.AddressablesImpl addressables, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation loc, System.String providerSuffix)
    // Offset: 0x13EADA0
    static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> LoadContentCatalog(UnityEngine::AddressableAssets::AddressablesImpl* addressables, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::Il2CppString* providerSuffix);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> LoadContentCatalog(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation loc, System.String providerSuffix)
    // Offset: 0x13F5978
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> LoadContentCatalog(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::Il2CppString* providerSuffix);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> LoadContentCatalogInternal(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> catalogs, System.Int32 index, UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap locMap)
    // Offset: 0x13F4F88
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> LoadContentCatalogInternal(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, int index, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap);
    // private System.Void LoadOpComplete(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> op, System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> catalogs, UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap locMap, System.Int32 index)
    // Offset: 0x13F5988
    void LoadOpComplete(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, int index);
    // protected override System.Single get_Progress()
    // Offset: 0x13F361C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress();
    // protected override System.String get_DebugName()
    // Offset: 0x13F3698
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::Il2CppString* get_DebugName();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x13F376C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x13F38F4
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.AddressableAssets.Initialization.InitializationOperation
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::InitializationOperation*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation
// Il2CppName: CreateInitializationOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(UnityEngine::AddressableAssets::AddressablesImpl*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* playerSettingsLocation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "CreateInitializationOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa, playerSettingsLocation, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider
// Il2CppName: LoadProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AddressableAssets::AddressablesImpl*, UnityEngine::ResourceManagement::Util::ObjectInitializationData, ::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider)> {
  static const MethodInfo* get() {
    static auto* addressables = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* providerData = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "LoadProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addressables, providerData, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded
// Il2CppName: OnCatalogDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(UnityEngine::AddressableAssets::AddressablesImpl*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>, ::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded)> {
  static const MethodInfo* get() {
    static auto* addressables = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData")})->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "OnCatalogDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addressables, op, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog
// Il2CppName: LoadContentCatalog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(UnityEngine::AddressableAssets::AddressablesImpl*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  static const MethodInfo* get() {
    static auto* addressables = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* loc = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "LoadContentCatalog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addressables, loc, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog
// Il2CppName: LoadContentCatalog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  static const MethodInfo* get() {
    static auto* loc = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "LoadContentCatalog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loc, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal
// Il2CppName: LoadContentCatalogInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal)> {
  static const MethodInfo* get() {
    static auto* catalogs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* locMap = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "LoadContentCatalogInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{catalogs, index, locMap});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete
// Il2CppName: LoadOpComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, int)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator")})->byval_arg;
    static auto* catalogs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->byval_arg;
    static auto* locMap = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "LoadOpComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op, catalogs, locMap, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
