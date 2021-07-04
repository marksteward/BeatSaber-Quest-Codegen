// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialSongController
  class TutorialSongController;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioListenerController
  class AudioListenerController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: TutorialPause
  class TutorialPause : public ::Il2CppObject/*, public GlobalNamespace::IGamePause*/ {
    public:
    // [InjectAttribute] Offset: 0xE1FDAC
    // private readonly TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1FDBC
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1FDCC
    // private readonly AudioListenerController _audioListenerController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioListenerController* audioListenerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioListenerController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1FDDC
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1FDEC
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1FDFC
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _pause
    // Size: 0x1
    // Offset: 0x40
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TutorialPause
    TutorialPause(GlobalNamespace::TutorialSongController* tutorialSongController_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::AudioListenerController* audioListenerController_ = {}, System::Action* didPauseEvent_ = {}, System::Action* willResumeEvent_ = {}, System::Action* didResumeEvent_ = {}, bool pause_ = {}) noexcept : tutorialSongController{tutorialSongController_}, saberManager{saberManager_}, audioListenerController{audioListenerController_}, didPauseEvent{didPauseEvent_}, willResumeEvent{willResumeEvent_}, didResumeEvent{didResumeEvent_}, pause{pause_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IGamePause
    operator GlobalNamespace::IGamePause() noexcept {
      return *reinterpret_cast<GlobalNamespace::IGamePause*>(this);
    }
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x111F07C
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x111F120
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0x111F1C4
    void add_willResumeEvent(System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0x111F268
    void remove_willResumeEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x111F30C
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x111F3B0
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0x111F454
    void Pause();
    // public System.Void WillResume()
    // Offset: 0x111F4D4
    void WillResume();
    // public System.Void Resume()
    // Offset: 0x111F4E8
    void Resume();
    // public System.Void .ctor()
    // Offset: 0x111F564
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialPause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialPause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialPause*, creationType>()));
    }
  }; // TutorialPause
  #pragma pack(pop)
  static check_size<sizeof(TutorialPause), 64 + sizeof(bool)> __GlobalNamespace_TutorialPauseSizeCheck;
  static_assert(sizeof(TutorialPause) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialPause*, "", "TutorialPause");
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Pause
// Il2CppName: Pause
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::WillResume
// Il2CppName: WillResume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Resume
// Il2CppName: Resume
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
