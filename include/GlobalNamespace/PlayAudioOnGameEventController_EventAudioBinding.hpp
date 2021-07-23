// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayAudioOnGameEventController
#include "GlobalNamespace/PlayAudioOnGameEventController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: LocalizedAudioClipSO
  class LocalizedAudioClipSO;
  // Forward declaring type: AudioClipQueue
  class AudioClipQueue;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayAudioOnGameEventController/EventAudioBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayAudioOnGameEventController::EventAudioBinding : public ::Il2CppObject {
    public:
    // [HeaderAttribute] Offset: 0xE13B80
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // private System.Single _delay
    // Size: 0x4
    // Offset: 0x18
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: localizedAudioClips
    char __padding1[0x4] = {};
    // private LocalizedAudioClipSO[] _localizedAudioClips
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::LocalizedAudioClipSO*>* localizedAudioClips;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LocalizedAudioClipSO*>*) == 0x8);
    // private AudioClipQueue _audioClipQueue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioClipQueue* audioClipQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipQueue*) == 0x8);
    // private RandomObjectPicker`1<LocalizedAudioClipSO> _randomObjectPicker
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* randomObjectPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>*) == 0x8);
    // Creating value type constructor for type: EventAudioBinding
    EventAudioBinding(GlobalNamespace::Signal* signal_ = {}, float delay_ = {}, ::Array<GlobalNamespace::LocalizedAudioClipSO*>* localizedAudioClips_ = {}, GlobalNamespace::AudioClipQueue* audioClipQueue_ = {}, GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* randomObjectPicker_ = {}) noexcept : signal{signal_}, delay{delay_}, localizedAudioClips{localizedAudioClips_}, audioClipQueue{audioClipQueue_}, randomObjectPicker{randomObjectPicker_} {}
    // Get instance field: private Signal _signal
    GlobalNamespace::Signal* _get__signal();
    // Set instance field: private Signal _signal
    void _set__signal(GlobalNamespace::Signal* value);
    // Get instance field: private System.Single _delay
    float _get__delay();
    // Set instance field: private System.Single _delay
    void _set__delay(float value);
    // Get instance field: private LocalizedAudioClipSO[] _localizedAudioClips
    ::Array<GlobalNamespace::LocalizedAudioClipSO*>* _get__localizedAudioClips();
    // Set instance field: private LocalizedAudioClipSO[] _localizedAudioClips
    void _set__localizedAudioClips(::Array<GlobalNamespace::LocalizedAudioClipSO*>* value);
    // Get instance field: private AudioClipQueue _audioClipQueue
    GlobalNamespace::AudioClipQueue* _get__audioClipQueue();
    // Set instance field: private AudioClipQueue _audioClipQueue
    void _set__audioClipQueue(GlobalNamespace::AudioClipQueue* value);
    // Get instance field: private RandomObjectPicker`1<LocalizedAudioClipSO> _randomObjectPicker
    GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* _get__randomObjectPicker();
    // Set instance field: private RandomObjectPicker`1<LocalizedAudioClipSO> _randomObjectPicker
    void _set__randomObjectPicker(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* value);
    // public System.Void Init(AudioClipQueue audioClipQueue)
    // Offset: 0x10FF0B4
    void Init(GlobalNamespace::AudioClipQueue* audioClipQueue);
    // public System.Void Deinit()
    // Offset: 0x10FF1E8
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0x10FF27C
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0x10FF350
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayAudioOnGameEventController::EventAudioBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayAudioOnGameEventController::EventAudioBinding*, creationType>()));
    }
  }; // PlayAudioOnGameEventController/EventAudioBinding
  #pragma pack(pop)
  static check_size<sizeof(PlayAudioOnGameEventController::EventAudioBinding), 48 + sizeof(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>*)> __GlobalNamespace_PlayAudioOnGameEventController_EventAudioBindingSizeCheck;
  static_assert(sizeof(PlayAudioOnGameEventController::EventAudioBinding) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::*)(GlobalNamespace::AudioClipQueue*)>(&GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::Init)> {
  static const MethodInfo* get() {
    static auto* audioClipQueue = &::il2cpp_utils::GetClassFromName("", "AudioClipQueue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClipQueue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::Deinit
// Il2CppName: Deinit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::Deinit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*), "Deinit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::HandleGameEvent
// Il2CppName: HandleGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::HandleGameEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*), "HandleGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
