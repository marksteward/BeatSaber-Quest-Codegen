// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: AsyncCache`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCache_2;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO
  // [] Offset: FFFFFFFF
  class BeatmapLevelDataLoaderSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo
    struct AssetBundleLevelInfo;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview
    class BeatmapLevelFromPreview;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4
    struct $LoadBeatmapLevelFormAssetBundleAsync$d__4;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5
    struct $LoadBeatmapLevelAsync$d__5;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2
    class $$c__DisplayClass6_2;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmalLevelDataAsync$d__6
    struct $LoadBeatmalLevelDataAsync$d__6;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapLevelDataLoaderSO/AssetBundleLevelInfo
    // [] Offset: FFFFFFFF
    struct AssetBundleLevelInfo/*, public System::ValueType*/ {
      public:
      // public readonly System.String assetBundlePath
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* assetBundlePath;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public readonly System.String levelDataAssetName
      // Size: 0x8
      // Offset: 0x8
      ::Il2CppString* levelDataAssetName;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public readonly IPreviewBeatmapLevel previewBeatmapLevel
      // Size: 0x8
      // Offset: 0x10
      GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
      // Field size check
      static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
      // Creating value type constructor for type: AssetBundleLevelInfo
      constexpr AssetBundleLevelInfo(::Il2CppString* assetBundlePath_ = {}, ::Il2CppString* levelDataAssetName_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}) noexcept : assetBundlePath{assetBundlePath_}, levelDataAssetName{levelDataAssetName_}, previewBeatmapLevel{previewBeatmapLevel_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.String assetBundlePath, System.String levelDataAssetName, IPreviewBeatmapLevel previewBeatmapLevel)
      // Offset: 0xE7F900
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  AssetBundleLevelInfo(::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel)
    }; // BeatmapLevelDataLoaderSO/AssetBundleLevelInfo
    static check_size<sizeof(BeatmapLevelDataLoaderSO::AssetBundleLevelInfo), 16 + sizeof(GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_AssetBundleLevelInfoSizeCheck;
    static_assert(sizeof(BeatmapLevelDataLoaderSO::AssetBundleLevelInfo) == 0x18);
    // private BeatmapCharacteristicCollectionSO _allBeatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* allBeatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private AsyncCache`2<System.String,IBeatmapLevel> _beatmapLevelsAsyncCache
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AsyncCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* beatmapLevelsAsyncCache;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AsyncCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,BeatmapLevelDataLoaderSO/AssetBundleLevelInfo> _bundleLevelInfos
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo>* bundleLevelInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelDataLoaderSO
    BeatmapLevelDataLoaderSO(GlobalNamespace::BeatmapCharacteristicCollectionSO* allBeatmapCharacteristicCollection_ = {}, GlobalNamespace::AsyncCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* beatmapLevelsAsyncCache_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo>* bundleLevelInfos_ = {}) noexcept : allBeatmapCharacteristicCollection{allBeatmapCharacteristicCollection_}, beatmapLevelsAsyncCache{beatmapLevelsAsyncCache_}, bundleLevelInfos{bundleLevelInfos_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Threading.Tasks.Task`1<IBeatmapLevel> LoadBeatmapLevelFormAssetBundleAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.String assetBundlePath, System.String levelDataAssetName, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A84304
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelFormAssetBundleAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<IBeatmapLevel> LoadBeatmapLevelAsync(System.String levelID)
    // Offset: 0x1A84488
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelAsync(::Il2CppString* levelID);
    // private System.Threading.Tasks.Task`1<BeatmapLevelDataSO> LoadBeatmalLevelDataAsync(System.String assetBundlePath, System.String levelDataAssetName)
    // Offset: 0x1A845D8
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO*>* LoadBeatmalLevelDataAsync(::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName);
    // public System.Void .ctor()
    // Offset: 0x1A84724
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO*, creationType>()));
    }
  }; // BeatmapLevelDataLoaderSO
  static check_size<sizeof(BeatmapLevelDataLoaderSO), 40 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo>*)> __GlobalNamespace_BeatmapLevelDataLoaderSOSizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO*, "", "BeatmapLevelDataLoaderSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo, "", "BeatmapLevelDataLoaderSO/AssetBundleLevelInfo");
