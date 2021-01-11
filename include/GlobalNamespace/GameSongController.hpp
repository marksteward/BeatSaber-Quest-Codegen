// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: AudioPitchGainEffect
  class AudioPitchGainEffect;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: GameSongController
  // [] Offset: FFFFFFFF
  class GameSongController : public GlobalNamespace::SongController/*, public GlobalNamespace::IStartSeekSongController*/ {
    public:
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private AudioPitchGainEffect _failAudioPitchGainEffect
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioPitchGainEffect* failAudioPitchGainEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xDCB2DC
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // private System.Boolean _songDidFinish
    // Size: 0x1
    // Offset: 0x38
    bool songDidFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameSongController
    GameSongController(GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::AudioPitchGainEffect* failAudioPitchGainEffect_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, bool songDidFinish_ = {}) noexcept : audioTimeSyncController{audioTimeSyncController_}, failAudioPitchGainEffect{failAudioPitchGainEffect_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, songDidFinish{songDidFinish_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongController
    operator GlobalNamespace::IStartSeekSongController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongController*>(this);
    }
    // public System.Single get_songLength()
    // Offset: 0x1A20174
    float get_songLength();
    // protected System.Void LateUpdate()
    // Offset: 0x1A201AC
    void LateUpdate();
    // public System.Void FailStopSong()
    // Offset: 0x1A2029C
    void FailStopSong();
    // private System.Void <FailStopSong>b__13_0()
    // Offset: 0x1A203C0
    void $FailStopSong$b__13_0();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0x1A20190
    // Implemented from: IStartSeekSongController
    // Base method: UnityEngine.WaitUntil IStartSeekSongController::get_waitUntilIsReadyToStartTheSong()
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // public System.Void StartSong(System.Single songTimeOffset)
    // Offset: 0x1A20224
    // Implemented from: IStartSeekSongController
    // Base method: System.Void IStartSeekSongController::StartSong(System.Single songTimeOffset)
    void StartSong(float songTimeOffset);
    // public override System.Void StopSong()
    // Offset: 0x1A20248
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0x1A20264
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0x1A20280
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
    // public System.Void SeekTo(System.Single songTime)
    // Offset: 0x1A2039C
    // Implemented from: IStartSeekSongController
    // Base method: System.Void IStartSeekSongController::SeekTo(System.Single songTime)
    void SeekTo(float songTime);
    // public System.Void .ctor()
    // Offset: 0x1A203B8
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameSongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameSongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameSongController*, creationType>()));
    }
  }; // GameSongController
  static check_size<sizeof(GameSongController), 56 + sizeof(bool)> __GlobalNamespace_GameSongControllerSizeCheck;
  static_assert(sizeof(GameSongController) == 0x39);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameSongController*, "", "GameSongController");
