// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: FilteredBeatmapLevel
  // [] Offset: FFFFFFFF
  class FilteredBeatmapLevel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData
    class FilteredBeatmapLevelData;
    // [CompilerGeneratedAttribute] Offset: 0xDCFAD8
    // private PreviewDifficultyBeatmapSet[] <previewDifficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFAE8
    // private IBeatmapLevelData <beatmapLevelData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // private readonly IBeatmapLevel _beatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapLevel* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // Creating value type constructor for type: FilteredBeatmapLevel
    FilteredBeatmapLevel(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_}, beatmapLevelData{beatmapLevelData_}, beatmapLevel{beatmapLevel_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // private System.Void set_previewDifficultyBeatmapSets(PreviewDifficultyBeatmapSet[] value)
    // Offset: 0x1A11FB0
    void set_previewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);
    // private System.Void set_beatmapLevelData(IBeatmapLevelData value)
    // Offset: 0x1A12148
    void set_beatmapLevelData(GlobalNamespace::IBeatmapLevelData* value);
    // public System.Boolean get_isEmpty()
    // Offset: 0x1A12150
    bool get_isEmpty();
    // public System.Void .ctor(IBeatmapLevel beatmapLevel, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0x1A12218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel* New_ctor(GlobalNamespace::IBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FilteredBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel*, creationType>(beatmapLevel, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
    // public System.String get_levelID()
    // Offset: 0x1A115D4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x1A11684
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x1A11738
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x1A117EC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x1A118A0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1A11954
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x1A11A08
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x1A11ABC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x1A11B70
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x1A11C24
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x1A11CD8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public System.Single get_songDuration()
    // Offset: 0x1A11D8C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x1A11E40
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x1A11EF4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x1A11FA8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A11FB8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A1207C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Sprite> IPreviewBeatmapLevel::GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1A12140
    // Implemented from: IBeatmapLevel
    // Base method: IBeatmapLevelData IBeatmapLevel::get_beatmapLevelData()
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
  }; // FilteredBeatmapLevel
  static check_size<sizeof(FilteredBeatmapLevel), 32 + sizeof(GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_FilteredBeatmapLevelSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel*, "", "FilteredBeatmapLevel");
#pragma pack(pop)
