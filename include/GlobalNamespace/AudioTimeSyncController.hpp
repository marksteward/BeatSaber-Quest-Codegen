// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: State because it is already included!
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x76
  #pragma pack(push, 1)
  // Autogenerated type: AudioTimeSyncController
  class AudioTimeSyncController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IAudioTimeSource*/ {
    public:
    // Nested type: GlobalNamespace::AudioTimeSyncController::InitData
    class InitData;
    // Nested type: GlobalNamespace::AudioTimeSyncController::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AudioTimeSyncController/State
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AudioTimeSyncController/State Playing
      static constexpr const int Playing = 0;
      // Get static field: static public AudioTimeSyncController/State Playing
      static GlobalNamespace::AudioTimeSyncController::State _get_Playing();
      // Set static field: static public AudioTimeSyncController/State Playing
      static void _set_Playing(GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Paused
      static constexpr const int Paused = 1;
      // Get static field: static public AudioTimeSyncController/State Paused
      static GlobalNamespace::AudioTimeSyncController::State _get_Paused();
      // Set static field: static public AudioTimeSyncController/State Paused
      static void _set_Paused(GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Stopped
      static constexpr const int Stopped = 2;
      // Get static field: static public AudioTimeSyncController/State Stopped
      static GlobalNamespace::AudioTimeSyncController::State _get_Stopped();
      // Set static field: static public AudioTimeSyncController/State Stopped
      static void _set_Stopped(GlobalNamespace::AudioTimeSyncController::State value);
    }; // AudioTimeSyncController/State
    #pragma pack(pop)
    static check_size<sizeof(AudioTimeSyncController::State), 0 + sizeof(int)> __GlobalNamespace_AudioTimeSyncController_StateSizeCheck;
    static_assert(sizeof(AudioTimeSyncController::State) == 0x4);
    // private System.Single _audioSyncLerpSpeed
    // Size: 0x4
    // Offset: 0x18
    float audioSyncLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _forcedSyncDeltaTime
    // Size: 0x4
    // Offset: 0x1C
    float forcedSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSyncDeltaTime
    // Size: 0x4
    // Offset: 0x20
    float startSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stopSyncDeltaTime
    // Size: 0x4
    // Offset: 0x24
    float stopSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE14CC0
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14CF8
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE14D30
    // private readonly AudioTimeSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AudioTimeSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController::InitData*) == 0x8);
    // public System.Boolean forcedNoAudioSync
    // Size: 0x1
    // Offset: 0x40
    bool forcedNoAudioSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fixingAudioSyncError
    // Size: 0x1
    // Offset: 0x41
    bool fixingAudioSyncError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixingAudioSyncError and: audioStartTimeOffsetSinceStart
    char __padding8[0x2] = {};
    // private System.Single _audioStartTimeOffsetSinceStart
    // Size: 0x4
    // Offset: 0x44
    float audioStartTimeOffsetSinceStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _playbackLoopIndex
    // Size: 0x4
    // Offset: 0x48
    int playbackLoopIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prevAudioSamplePos
    // Size: 0x4
    // Offset: 0x4C
    int prevAudioSamplePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x50
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x54
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _audioStarted
    // Size: 0x1
    // Offset: 0x58
    bool audioStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: audioStarted and: timeScale
    char __padding14[0x3] = {};
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x5C
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x60
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songTime and: dspTimeOffset
    char __padding16[0x4] = {};
    // private System.Double _dspTimeOffset
    // Size: 0x8
    // Offset: 0x68
    double dspTimeOffset;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private AudioTimeSyncController/State _state
    // Size: 0x4
    // Offset: 0x70
    GlobalNamespace::AudioTimeSyncController::State state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController::State) == 0x4);
    // private System.Boolean _canStartSong
    // Size: 0x1
    // Offset: 0x74
    bool canStartSong;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x75
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AudioTimeSyncController
    AudioTimeSyncController(float audioSyncLerpSpeed_ = {}, float forcedSyncDeltaTime_ = {}, float startSyncDeltaTime_ = {}, float stopSyncDeltaTime_ = {}, UnityEngine::AudioSource* audioSource_ = {}, GlobalNamespace::FloatSO* audioLatency_ = {}, GlobalNamespace::AudioTimeSyncController::InitData* initData_ = {}, bool forcedNoAudioSync_ = {}, bool fixingAudioSyncError_ = {}, float audioStartTimeOffsetSinceStart_ = {}, int playbackLoopIndex_ = {}, int prevAudioSamplePos_ = {}, float startSongTime_ = {}, float songTimeOffset_ = {}, bool audioStarted_ = {}, float timeScale_ = {}, float songTime_ = {}, double dspTimeOffset_ = {}, GlobalNamespace::AudioTimeSyncController::State state_ = {}, bool canStartSong_ = {}, bool isReady_ = {}) noexcept : audioSyncLerpSpeed{audioSyncLerpSpeed_}, forcedSyncDeltaTime{forcedSyncDeltaTime_}, startSyncDeltaTime{startSyncDeltaTime_}, stopSyncDeltaTime{stopSyncDeltaTime_}, audioSource{audioSource_}, audioLatency{audioLatency_}, initData{initData_}, forcedNoAudioSync{forcedNoAudioSync_}, fixingAudioSyncError{fixingAudioSyncError_}, audioStartTimeOffsetSinceStart{audioStartTimeOffsetSinceStart_}, playbackLoopIndex{playbackLoopIndex_}, prevAudioSamplePos{prevAudioSamplePos_}, startSongTime{startSongTime_}, songTimeOffset{songTimeOffset_}, audioStarted{audioStarted_}, timeScale{timeScale_}, songTime{songTime_}, dspTimeOffset{dspTimeOffset_}, state{state_}, canStartSong{canStartSong_}, isReady{isReady_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAudioTimeSource
    operator GlobalNamespace::IAudioTimeSource() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAudioTimeSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public AudioTimeSyncController/State get_state()
    // Offset: 0x11325FC
    GlobalNamespace::AudioTimeSyncController::State get_state();
    // public System.Single get_songTime()
    // Offset: 0x1132604
    float get_songTime();
    // public System.Single get_songLength()
    // Offset: 0x113260C
    float get_songLength();
    // public System.Boolean get_isAudioLoaded()
    // Offset: 0x1132634
    bool get_isAudioLoaded();
    // public System.Single get_songEndTime()
    // Offset: 0x1132668
    float get_songEndTime();
    // public System.Single get_timeScale()
    // Offset: 0x1132690
    float get_timeScale();
    // public System.Double get_dspTimeOffset()
    // Offset: 0x1132698
    double get_dspTimeOffset();
    // public UnityEngine.WaitUntil get_waitUntilAudioIsLoaded()
    // Offset: 0x11326A0
    UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();
    // public System.Boolean get_isReady()
    // Offset: 0x1132738
    bool get_isReady();
    // public UnityEngine.AudioSource get_audioSource()
    // Offset: 0x1132740
    UnityEngine::AudioSource* get_audioSource();
    // protected System.Void Awake()
    // Offset: 0x1132748
    void Awake();
    // protected System.Void Start()
    // Offset: 0x113279C
    void Start();
    // protected System.Void Update()
    // Offset: 0x11328B4
    void Update();
    // private System.Single get_timeSinceStart()
    // Offset: 0x1132C2C
    float get_timeSinceStart();
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0x1132C58
    void StartSong(float startTimeOffset);
    // public System.Void SeekTo(System.Single startTimeOffset)
    // Offset: 0x1132C64
    void SeekTo(float startTimeOffset);
    // public System.Void StopSong()
    // Offset: 0x1132DF4
    void StopSong();
    // public System.Void Pause()
    // Offset: 0x1132E2C
    void Pause();
    // public System.Void Resume()
    // Offset: 0x1132E74
    void Resume();
    // private System.Boolean <get_waitUntilAudioIsLoaded>b__25_0()
    // Offset: 0x1132EBC
    bool $get_waitUntilAudioIsLoaded$b__25_0();
    // public System.Void .ctor()
    // Offset: 0x1132EA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioTimeSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioTimeSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioTimeSyncController*, creationType>()));
    }
  }; // AudioTimeSyncController
  #pragma pack(pop)
  static check_size<sizeof(AudioTimeSyncController), 117 + sizeof(bool)> __GlobalNamespace_AudioTimeSyncControllerSizeCheck;
  static_assert(sizeof(AudioTimeSyncController) == 0x76);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController::State, "", "AudioTimeSyncController/State");
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_state
// Il2CppName: get_state
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songTime
// Il2CppName: get_songTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songLength
// Il2CppName: get_songLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded
// Il2CppName: get_isAudioLoaded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songEndTime
// Il2CppName: get_songEndTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeScale
// Il2CppName: get_timeScale
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset
// Il2CppName: get_dspTimeOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded
// Il2CppName: get_waitUntilAudioIsLoaded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isReady
// Il2CppName: get_isReady
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_audioSource
// Il2CppName: get_audioSource
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeSinceStart
// Il2CppName: get_timeSinceStart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StartSong
// Il2CppName: StartSong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::SeekTo
// Il2CppName: SeekTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StopSong
// Il2CppName: StopSong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Pause
// Il2CppName: Pause
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Resume
// Il2CppName: Resume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::$get_waitUntilAudioIsLoaded$b__25_0
// Il2CppName: <get_waitUntilAudioIsLoaded>b__25_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
