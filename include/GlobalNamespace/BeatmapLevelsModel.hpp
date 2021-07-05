// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelDataAssetDownloadUpdate
  struct LevelDataAssetDownloadUpdate;
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
  // Forward declaring type: BeatmapLevelPackCollectionContainerSO
  class BeatmapLevelPackCollectionContainerSO;
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
  // Forward declaring type: BeatmapLevelDataLoaderSO
  class BeatmapLevelDataLoaderSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IBeatmapDataAssetFileModel
  class IBeatmapDataAssetFileModel;
  // Forward declaring type: HMCache`2<K, V>
  template<typename K, typename V>
  class HMCache_2;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapLevelLoader
  class BeatmapLevelLoader;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelsModel
  class BeatmapLevelsModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult
    struct GetBeatmapLevelResult;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate
    struct LevelDownloadingUpdate;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$ReloadCustomLevelPackCollectionAsync$d__31
    struct $ReloadCustomLevelPackCollectionAsync$d__31;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$$c
    class $$c;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__37
    struct $GetBeatmapLevelAsync$d__37;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapLevelsModel/GetBeatmapLevelResult
    struct GetBeatmapLevelResult/*, public System::ValueType*/ {
      public:
      // public readonly System.Boolean isError
      // Size: 0x1
      // Offset: 0x0
      bool isError;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: isError and: beatmapLevel
      char __padding0[0x7] = {};
      // public readonly IBeatmapLevel beatmapLevel
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevel* beatmapLevel;
      // Field size check
      static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
      // Creating value type constructor for type: GetBeatmapLevelResult
      constexpr GetBeatmapLevelResult(bool isError_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : isError{isError_}, beatmapLevel{beatmapLevel_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Boolean isError, IBeatmapLevel beatmapLevel)
      // Offset: 0xEE5568
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  GetBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel* beatmapLevel)
    }; // BeatmapLevelsModel/GetBeatmapLevelResult
    #pragma pack(pop)
    static check_size<sizeof(BeatmapLevelsModel::GetBeatmapLevelResult), 8 + sizeof(GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_BeatmapLevelsModel_GetBeatmapLevelResultSizeCheck;
    static_assert(sizeof(BeatmapLevelsModel::GetBeatmapLevelResult) == 0x10);
    // Size: 0x14
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapLevelsModel/LevelDownloadingUpdate
    struct LevelDownloadingUpdate/*, public System::ValueType*/ {
      public:
      // Nested type: GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState
      struct DownloadingState;
      // Size: 0x4
      #pragma pack(push, 1)
      // Autogenerated type: BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState
      struct DownloadingState/*, public System::Enum*/ {
        public:
        // public System.Int32 value__
        // Size: 0x4
        // Offset: 0x0
        int value;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // Creating value type constructor for type: DownloadingState
        constexpr DownloadingState(int value_ = {}) noexcept : value{value_} {}
        // Creating interface conversion operator: operator System::Enum
        operator System::Enum() noexcept {
          return *reinterpret_cast<System::Enum*>(this);
        }
        // Creating conversion operator: operator int
        constexpr operator int() const noexcept {
          return value;
        }
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static constexpr const int PreparingToDownload = 0;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_PreparingToDownload();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static void _set_PreparingToDownload(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static constexpr const int Downloading = 1;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_Downloading();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static void _set_Downloading(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static constexpr const int Completed = 2;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_Completed();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static void _set_Completed(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
      }; // BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState
      #pragma pack(pop)
      static check_size<sizeof(BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState), 0 + sizeof(int)> __GlobalNamespace_BeatmapLevelsModel_LevelDownloadingUpdate_DownloadingStateSizeCheck;
      static_assert(sizeof(BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState) == 0x4);
      // public readonly System.String levelID
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* levelID;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public readonly System.UInt32 bytesTotal
      // Size: 0x4
      // Offset: 0x8
      uint bytesTotal;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // public readonly System.UInt32 bytesTransferred
      // Size: 0x4
      // Offset: 0xC
      uint bytesTransferred;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // public readonly BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState downloadingState
      // Size: 0x4
      // Offset: 0x10
      GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState;
      // Field size check
      static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState) == 0x4);
      // Creating value type constructor for type: LevelDownloadingUpdate
      constexpr LevelDownloadingUpdate(::Il2CppString* levelID_ = {}, uint bytesTotal_ = {}, uint bytesTransferred_ = {}, GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState_ = {}) noexcept : levelID{levelID_}, bytesTotal{bytesTotal_}, bytesTransferred{bytesTransferred_}, downloadingState{downloadingState_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.String levelID, System.UInt32 bytesTotal, System.UInt32 bytesTransferred, BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState downloadingState)
      // Offset: 0xEE5628
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  LevelDownloadingUpdate(::Il2CppString* levelID, uint bytesTotal, uint bytesTransferred, GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState)
    }; // BeatmapLevelsModel/LevelDownloadingUpdate
    #pragma pack(pop)
    static check_size<sizeof(BeatmapLevelsModel::LevelDownloadingUpdate), 16 + sizeof(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState)> __GlobalNamespace_BeatmapLevelsModel_LevelDownloadingUpdateSizeCheck;
    static_assert(sizeof(BeatmapLevelsModel::LevelDownloadingUpdate) == 0x14);
    // private BeatmapLevelPackCollectionContainerSO _dlcLevelPackCollectionContainer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelPackCollectionContainerSO* dlcLevelPackCollectionContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackCollectionContainerSO*) == 0x8);
    // private BeatmapLevelPackCollectionSO _ostAndExtrasPackCollection
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackCollectionSO*) == 0x8);
    // private BeatmapLevelDataLoaderSO _beatmapLevelDataLoader
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO*) == 0x8);
    // private System.Int32 _maxCachedBeatmapLevels
    // Size: 0x4
    // Offset: 0x30
    int maxCachedBeatmapLevels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxCachedBeatmapLevels and: additionalContentModel
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xE169C8
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE169D8
    // private IBeatmapDataAssetFileModel _beatmapDataAssetFileModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapDataAssetFileModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE169E8
    // private System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> levelDownloadingUpdateEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* levelDownloadingUpdateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>*) == 0x8);
    // private IBeatmapLevelPackCollection _allLoadedBeatmapLevelPackCollection
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPackCollection*) == 0x8);
    // private IBeatmapLevelPackCollection _allLoadedBeatmapLevelWithoutCustomLevelPackCollection
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelWithoutCustomLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPackCollection*) == 0x8);
    // private IBeatmapLevelPackCollection _customLevelPackCollection
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IBeatmapLevelPackCollection* customLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPackCollection*) == 0x8);
    // private HMCache`2<System.String,IBeatmapLevel> _loadedBeatmapLevels
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::HMCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* loadedBeatmapLevels;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HMCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,IPreviewBeatmapLevel> _loadedPreviewBeatmapLevels
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IPreviewBeatmapLevel*>* loadedPreviewBeatmapLevels;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private BeatmapLevelLoader _beatmapLevelLoader
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BeatmapLevelLoader* beatmapLevelLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelLoader*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelsModel
    BeatmapLevelsModel(GlobalNamespace::BeatmapLevelPackCollectionContainerSO* dlcLevelPackCollectionContainer_ = {}, GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasPackCollection_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader_ = {}, int maxCachedBeatmapLevels_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel_ = {}, System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* levelDownloadingUpdateEvent_ = {}, GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelPackCollection_ = {}, GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelWithoutCustomLevelPackCollection_ = {}, GlobalNamespace::IBeatmapLevelPackCollection* customLevelPackCollection_ = {}, GlobalNamespace::HMCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* loadedBeatmapLevels_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IPreviewBeatmapLevel*>* loadedPreviewBeatmapLevels_ = {}, GlobalNamespace::BeatmapLevelLoader* beatmapLevelLoader_ = {}) noexcept : dlcLevelPackCollectionContainer{dlcLevelPackCollectionContainer_}, ostAndExtrasPackCollection{ostAndExtrasPackCollection_}, beatmapLevelDataLoader{beatmapLevelDataLoader_}, maxCachedBeatmapLevels{maxCachedBeatmapLevels_}, additionalContentModel{additionalContentModel_}, beatmapDataAssetFileModel{beatmapDataAssetFileModel_}, levelDownloadingUpdateEvent{levelDownloadingUpdateEvent_}, allLoadedBeatmapLevelPackCollection{allLoadedBeatmapLevelPackCollection_}, allLoadedBeatmapLevelWithoutCustomLevelPackCollection{allLoadedBeatmapLevelWithoutCustomLevelPackCollection_}, customLevelPackCollection{customLevelPackCollection_}, loadedBeatmapLevels{loadedBeatmapLevels_}, loadedPreviewBeatmapLevels{loadedPreviewBeatmapLevels_}, beatmapLevelLoader{beatmapLevelLoader_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_levelDownloadingUpdateEvent(System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> value)
    // Offset: 0x11024C8
    void add_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value);
    // public System.Void remove_levelDownloadingUpdateEvent(System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> value)
    // Offset: 0x110256C
    void remove_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value);
    // public BeatmapLevelPackCollectionSO get_ostAndExtrasPackCollection()
    // Offset: 0x1102610
    GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasPackCollection();
    // public IBeatmapLevelPackCollection get_dlcBeatmapLevelPackCollection()
    // Offset: 0x1102618
    GlobalNamespace::IBeatmapLevelPackCollection* get_dlcBeatmapLevelPackCollection();
    // public IBeatmapLevelPackCollection get_allLoadedBeatmapLevelPackCollection()
    // Offset: 0x1102634
    GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelPackCollection();
    // public IBeatmapLevelPackCollection get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection()
    // Offset: 0x110263C
    GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection();
    // public IBeatmapLevelPackCollection get_customLevelPackCollection()
    // Offset: 0x1102644
    GlobalNamespace::IBeatmapLevelPackCollection* get_customLevelPackCollection();
    // private System.Void Init()
    // Offset: 0x110264C
    void Init();
    // protected System.Void Start()
    // Offset: 0x11029BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1102AAC
    void OnDestroy();
    // public System.Void ClearLoadedBeatmapLevelsCaches()
    // Offset: 0x1102BA0
    void ClearLoadedBeatmapLevelsCaches();
    // public System.Threading.Tasks.Task`1<IBeatmapLevelPackCollection> ReloadCustomLevelPackCollectionAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1102BF8
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection*>* ReloadCustomLevelPackCollectionAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelPack GetLevelPackForLevelId(System.String levelId)
    // Offset: 0x1102CF8
    GlobalNamespace::IBeatmapLevelPack* GetLevelPackForLevelId(::Il2CppString* levelId);
    // public IBeatmapLevelPack GetLevelPack(System.String levePacklId)
    // Offset: 0x1102FB0
    GlobalNamespace::IBeatmapLevelPack* GetLevelPack(::Il2CppString* levePacklId);
    // public IPreviewBeatmapLevel GetLevelPreviewForLevelId(System.String levelId)
    // Offset: 0x1103140
    GlobalNamespace::IPreviewBeatmapLevel* GetLevelPreviewForLevelId(::Il2CppString* levelId);
    // public System.Boolean IsBeatmapLevelLoaded(System.String levelId)
    // Offset: 0x1103338
    bool IsBeatmapLevelLoaded(::Il2CppString* levelId);
    // public IBeatmapLevel GetBeatmapLevelIfLoaded(System.String levelId)
    // Offset: 0x1103404
    GlobalNamespace::IBeatmapLevel* GetBeatmapLevelIfLoaded(::Il2CppString* levelId);
    // public System.Threading.Tasks.Task`1<BeatmapLevelsModel/GetBeatmapLevelResult> GetBeatmapLevelAsync(System.String levelID, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11034F8
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* GetBeatmapLevelAsync(::Il2CppString* levelID, System::Threading::CancellationToken cancellationToken);
    // private System.Void HandleLevelDataAssetDownloadUpdate(LevelDataAssetDownloadUpdate update)
    // Offset: 0x1103610
    void HandleLevelDataAssetDownloadUpdate(GlobalNamespace::LevelDataAssetDownloadUpdate update);
    // private System.Void UpdateLoadedPreviewLevels()
    // Offset: 0x11026F4
    void UpdateLoadedPreviewLevels();
    // private System.Void UpdateAllLoadedBeatmapLevelPacks()
    // Offset: 0x11036B0
    void UpdateAllLoadedBeatmapLevelPacks();
    // public System.Void .ctor()
    // Offset: 0x11037F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelsModel*, creationType>()));
    }
  }; // BeatmapLevelsModel
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelsModel), 120 + sizeof(GlobalNamespace::BeatmapLevelLoader*)> __GlobalNamespace_BeatmapLevelsModelSizeCheck;
  static_assert(sizeof(BeatmapLevelsModel) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult, "", "BeatmapLevelsModel/GetBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate, "", "BeatmapLevelsModel/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState, "", "BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent
// Il2CppName: add_levelDownloadingUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>*)>(&GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapLevelsModel/LevelDownloadingUpdate")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "add_levelDownloadingUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent
// Il2CppName: remove_levelDownloadingUpdateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>*)>(&GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapLevelsModel/LevelDownloadingUpdate")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "remove_levelDownloadingUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection
// Il2CppName: get_ostAndExtrasPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPackCollectionSO* (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "get_ostAndExtrasPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection
// Il2CppName: get_dlcBeatmapLevelPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection* (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "get_dlcBeatmapLevelPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection
// Il2CppName: get_allLoadedBeatmapLevelPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection* (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "get_allLoadedBeatmapLevelPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection
// Il2CppName: get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection* (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection
// Il2CppName: get_customLevelPackCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPackCollection* (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "get_customLevelPackCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches
// Il2CppName: ClearLoadedBeatmapLevelsCaches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "ClearLoadedBeatmapLevelsCaches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync
// Il2CppName: ReloadCustomLevelPackCollectionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection*>* (GlobalNamespace::BeatmapLevelsModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "ReloadCustomLevelPackCollectionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId
// Il2CppName: GetLevelPackForLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPack* (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "GetLevelPackForLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::GetLevelPack
// Il2CppName: GetLevelPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPack* (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPack)> {
  static const MethodInfo* get() {
    static auto* levePacklId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "GetLevelPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levePacklId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId
// Il2CppName: GetLevelPreviewForLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapLevelsModel::GetLevelPreviewForLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "GetLevelPreviewForLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded
// Il2CppName: IsBeatmapLevelLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "IsBeatmapLevelLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded
// Il2CppName: GetBeatmapLevelIfLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevel* (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "GetBeatmapLevelIfLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync
// Il2CppName: GetBeatmapLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* (GlobalNamespace::BeatmapLevelsModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync)> {
  static const MethodInfo* get() {
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "GetBeatmapLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelID, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate
// Il2CppName: HandleLevelDataAssetDownloadUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)(GlobalNamespace::LevelDataAssetDownloadUpdate)>(&GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate)> {
  static const MethodInfo* get() {
    static auto* update = &::il2cpp_utils::GetClassFromName("", "LevelDataAssetDownloadUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "HandleLevelDataAssetDownloadUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{update});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels
// Il2CppName: UpdateLoadedPreviewLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "UpdateLoadedPreviewLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks
// Il2CppName: UpdateAllLoadedBeatmapLevelPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelsModel::*)()>(&GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel*), "UpdateAllLoadedBeatmapLevelPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
