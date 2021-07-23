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
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioTimeSyncController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IAudioTimeSource*/ {
    public:
    // Nested type: GlobalNamespace::AudioTimeSyncController::InitData
    class InitData;
    // Nested type: GlobalNamespace::AudioTimeSyncController::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AudioTimeSyncController/State
    // [TokenAttribute] Offset: FFFFFFFF
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
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
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
    // [SpaceAttribute] Offset: 0xDFF034
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xDFF06C
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDFF0A4
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
    // Get instance field: private System.Single _audioSyncLerpSpeed
    float _get__audioSyncLerpSpeed();
    // Set instance field: private System.Single _audioSyncLerpSpeed
    void _set__audioSyncLerpSpeed(float value);
    // Get instance field: private System.Single _forcedSyncDeltaTime
    float _get__forcedSyncDeltaTime();
    // Set instance field: private System.Single _forcedSyncDeltaTime
    void _set__forcedSyncDeltaTime(float value);
    // Get instance field: private System.Single _startSyncDeltaTime
    float _get__startSyncDeltaTime();
    // Set instance field: private System.Single _startSyncDeltaTime
    void _set__startSyncDeltaTime(float value);
    // Get instance field: private System.Single _stopSyncDeltaTime
    float _get__stopSyncDeltaTime();
    // Set instance field: private System.Single _stopSyncDeltaTime
    void _set__stopSyncDeltaTime(float value);
    // Get instance field: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource* _get__audioSource();
    // Set instance field: private UnityEngine.AudioSource _audioSource
    void _set__audioSource(UnityEngine::AudioSource* value);
    // Get instance field: private FloatSO _audioLatency
    GlobalNamespace::FloatSO* _get__audioLatency();
    // Set instance field: private FloatSO _audioLatency
    void _set__audioLatency(GlobalNamespace::FloatSO* value);
    // Get instance field: private readonly AudioTimeSyncController/InitData _initData
    GlobalNamespace::AudioTimeSyncController::InitData* _get__initData();
    // Set instance field: private readonly AudioTimeSyncController/InitData _initData
    void _set__initData(GlobalNamespace::AudioTimeSyncController::InitData* value);
    // Get instance field: public System.Boolean forcedNoAudioSync
    bool _get_forcedNoAudioSync();
    // Set instance field: public System.Boolean forcedNoAudioSync
    void _set_forcedNoAudioSync(bool value);
    // Get instance field: private System.Boolean _fixingAudioSyncError
    bool _get__fixingAudioSyncError();
    // Set instance field: private System.Boolean _fixingAudioSyncError
    void _set__fixingAudioSyncError(bool value);
    // Get instance field: private System.Single _audioStartTimeOffsetSinceStart
    float _get__audioStartTimeOffsetSinceStart();
    // Set instance field: private System.Single _audioStartTimeOffsetSinceStart
    void _set__audioStartTimeOffsetSinceStart(float value);
    // Get instance field: private System.Int32 _playbackLoopIndex
    int _get__playbackLoopIndex();
    // Set instance field: private System.Int32 _playbackLoopIndex
    void _set__playbackLoopIndex(int value);
    // Get instance field: private System.Int32 _prevAudioSamplePos
    int _get__prevAudioSamplePos();
    // Set instance field: private System.Int32 _prevAudioSamplePos
    void _set__prevAudioSamplePos(int value);
    // Get instance field: private System.Single _startSongTime
    float _get__startSongTime();
    // Set instance field: private System.Single _startSongTime
    void _set__startSongTime(float value);
    // Get instance field: private System.Single _songTimeOffset
    float _get__songTimeOffset();
    // Set instance field: private System.Single _songTimeOffset
    void _set__songTimeOffset(float value);
    // Get instance field: private System.Boolean _audioStarted
    bool _get__audioStarted();
    // Set instance field: private System.Boolean _audioStarted
    void _set__audioStarted(bool value);
    // Get instance field: private System.Single _timeScale
    float _get__timeScale();
    // Set instance field: private System.Single _timeScale
    void _set__timeScale(float value);
    // Get instance field: private System.Single _songTime
    float _get__songTime();
    // Set instance field: private System.Single _songTime
    void _set__songTime(float value);
    // Get instance field: private System.Double _dspTimeOffset
    double _get__dspTimeOffset();
    // Set instance field: private System.Double _dspTimeOffset
    void _set__dspTimeOffset(double value);
    // Get instance field: private AudioTimeSyncController/State _state
    GlobalNamespace::AudioTimeSyncController::State _get__state();
    // Set instance field: private AudioTimeSyncController/State _state
    void _set__state(GlobalNamespace::AudioTimeSyncController::State value);
    // Get instance field: private System.Boolean _canStartSong
    bool _get__canStartSong();
    // Set instance field: private System.Boolean _canStartSong
    void _set__canStartSong(bool value);
    // Get instance field: private System.Boolean _isReady
    bool _get__isReady();
    // Set instance field: private System.Boolean _isReady
    void _set__isReady(bool value);
    // public AudioTimeSyncController/State get_state()
    // Offset: 0x10DC79C
    GlobalNamespace::AudioTimeSyncController::State get_state();
    // public System.Single get_songTime()
    // Offset: 0x10DC7A4
    float get_songTime();
    // public System.Single get_songLength()
    // Offset: 0x10DC7AC
    float get_songLength();
    // public System.Boolean get_isAudioLoaded()
    // Offset: 0x10DC7D4
    bool get_isAudioLoaded();
    // public System.Single get_songEndTime()
    // Offset: 0x10DC808
    float get_songEndTime();
    // public System.Single get_timeScale()
    // Offset: 0x10DC830
    float get_timeScale();
    // public System.Double get_dspTimeOffset()
    // Offset: 0x10DC838
    double get_dspTimeOffset();
    // public UnityEngine.WaitUntil get_waitUntilAudioIsLoaded()
    // Offset: 0x10DC840
    UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();
    // public System.Boolean get_isReady()
    // Offset: 0x10DC8D8
    bool get_isReady();
    // public UnityEngine.AudioSource get_audioSource()
    // Offset: 0x10DC8E0
    UnityEngine::AudioSource* get_audioSource();
    // private System.Single get_timeSinceStart()
    // Offset: 0x10DCDCC
    float get_timeSinceStart();
    // protected System.Void Awake()
    // Offset: 0x10DC8E8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x10DC93C
    void Start();
    // protected System.Void Update()
    // Offset: 0x10DCA54
    void Update();
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0x10DCDF8
    void StartSong(float startTimeOffset);
    // public System.Void SeekTo(System.Single startTimeOffset)
    // Offset: 0x10DCE04
    void SeekTo(float startTimeOffset);
    // public System.Void StopSong()
    // Offset: 0x10DCF94
    void StopSong();
    // public System.Void Pause()
    // Offset: 0x10DCFCC
    void Pause();
    // public System.Void Resume()
    // Offset: 0x10DD014
    void Resume();
    // private System.Boolean <get_waitUntilAudioIsLoaded>b__25_0()
    // Offset: 0x10DD05C
    bool $get_waitUntilAudioIsLoaded$b__25_0();
    // public System.Void .ctor()
    // Offset: 0x10DD048
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AudioTimeSyncController::State (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songTime
// Il2CppName: get_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songLength
// Il2CppName: get_songLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded
// Il2CppName: get_isAudioLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_isAudioLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songEndTime
// Il2CppName: get_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeScale
// Il2CppName: get_timeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_timeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_timeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset
// Il2CppName: get_dspTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_dspTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded
// Il2CppName: get_waitUntilAudioIsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::WaitUntil* (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_waitUntilAudioIsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_audioSource
// Il2CppName: get_audioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioSource* (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_audioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_audioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeSinceStart
// Il2CppName: get_timeSinceStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_timeSinceStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_timeSinceStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(float)>(&GlobalNamespace::AudioTimeSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(float)>(&GlobalNamespace::AudioTimeSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::$get_waitUntilAudioIsLoaded$b__25_0
// Il2CppName: <get_waitUntilAudioIsLoaded>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::$get_waitUntilAudioIsLoaded$b__25_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "<get_waitUntilAudioIsLoaded>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
