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
  // Forward declaring type: AudioClipQueue
  class AudioClipQueue;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayAudioOnGameEventController
  class PlayAudioOnGameEventController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding
    class EventAudioBinding;
    // private AudioClipQueue _audioClipQueue
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioClipQueue* audioClipQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipQueue*) == 0x8);
    // private PlayAudioOnGameEventController/EventAudioBinding[] _eventAudioBindings
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>* eventAudioBindings;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>*) == 0x8);
    // Creating value type constructor for type: PlayAudioOnGameEventController
    PlayAudioOnGameEventController(GlobalNamespace::AudioClipQueue* audioClipQueue_ = {}, ::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>* eventAudioBindings_ = {}) noexcept : audioClipQueue{audioClipQueue_}, eventAudioBindings{eventAudioBindings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF1EBD4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF1ED18
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xF1EE0C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayAudioOnGameEventController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayAudioOnGameEventController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayAudioOnGameEventController*, creationType>()));
    }
  }; // PlayAudioOnGameEventController
  #pragma pack(pop)
  static check_size<sizeof(PlayAudioOnGameEventController), 32 + sizeof(::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>*)> __GlobalNamespace_PlayAudioOnGameEventControllerSizeCheck;
  static_assert(sizeof(PlayAudioOnGameEventController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController*, "", "PlayAudioOnGameEventController");
