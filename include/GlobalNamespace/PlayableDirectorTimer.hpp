// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: PlayableDirectorTimer
  // [] Offset: FFFFFFFF
  class PlayableDirectorTimer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Playables.PlayableDirector _playableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* playableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [InjectAttribute] Offset: 0xDD28D0
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // Creating value type constructor for type: PlayableDirectorTimer
    PlayableDirectorTimer(UnityEngine::Playables::PlayableDirector* playableDirector_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}) noexcept : playableDirector{playableDirector_}, audioTimeSyncController{audioTimeSyncController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0xF0B238
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF0B284
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableDirectorTimer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayableDirectorTimer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableDirectorTimer*, creationType>()));
    }
  }; // PlayableDirectorTimer
  static check_size<sizeof(PlayableDirectorTimer), 32 + sizeof(GlobalNamespace::AudioTimeSyncController*)> __GlobalNamespace_PlayableDirectorTimerSizeCheck;
  static_assert(sizeof(PlayableDirectorTimer) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayableDirectorTimer*, "", "PlayableDirectorTimer");
#pragma pack(pop)
