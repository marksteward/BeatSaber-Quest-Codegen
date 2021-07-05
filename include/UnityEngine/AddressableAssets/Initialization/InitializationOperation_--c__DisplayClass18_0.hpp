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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0
  // [CompilerGeneratedAttribute] Offset: E027DC
  class InitializationOperation::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.Initialization.InitializationOperation <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::Initialization::InitializationOperation* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Initialization::InitializationOperation*) == 0x8);
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> catalogs
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // public UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap locMap
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*) == 0x8);
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass18_0
    $$c__DisplayClass18_0(UnityEngine::AddressableAssets::Initialization::InitializationOperation* $$4__this_ = {}, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs_ = {}, UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap_ = {}, int index_ = {}) noexcept : $$4__this{$$4__this_}, catalogs{catalogs_}, locMap{locMap_}, index{index_} {}
    // System.Void <LoadContentCatalogInternal>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> op)
    // Offset: 0x13F5DAC
    void $LoadContentCatalogInternal$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op);
    // public System.Void .ctor()
    // Offset: 0x13F5980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationOperation::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationOperation::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(InitializationOperation::$$c__DisplayClass18_0), 40 + sizeof(int)> __UnityEngine_AddressableAssets_Initialization_InitializationOperation_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(InitializationOperation::$$c__DisplayClass18_0) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c__DisplayClass18_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0::$LoadContentCatalogInternal$b__0
// Il2CppName: <LoadContentCatalogInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0::$LoadContentCatalogInternal$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0*), "<LoadContentCatalogInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
