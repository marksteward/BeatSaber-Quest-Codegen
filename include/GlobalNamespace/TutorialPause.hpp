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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: TutorialPause
  // [] Offset: FFFFFFFF
  class TutorialPause : public ::Il2CppObject/*, public GlobalNamespace::IGamePause*/ {
    public:
    // [InjectAttribute] Offset: 0xDCB588
    // private readonly TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xDCB598
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCB5A8
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCB5B8
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCB5C8
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _pause
    // Size: 0x1
    // Offset: 0x38
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TutorialPause
    TutorialPause(GlobalNamespace::TutorialSongController* tutorialSongController_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, System::Action* didPauseEvent_ = {}, System::Action* willResumeEvent_ = {}, System::Action* didResumeEvent_ = {}, bool pause_ = {}) noexcept : tutorialSongController{tutorialSongController_}, saberManager{saberManager_}, didPauseEvent{didPauseEvent_}, willResumeEvent{willResumeEvent_}, didResumeEvent{didResumeEvent_}, pause{pause_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IGamePause
    operator GlobalNamespace::IGamePause() noexcept {
      return *reinterpret_cast<GlobalNamespace::IGamePause*>(this);
    }
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0xFF283C
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didPauseEvent(System.Action value)
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0xFF28E0
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didPauseEvent(System.Action value)
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0xFF2984
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_willResumeEvent(System.Action value)
    void add_willResumeEvent(System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0xFF2A28
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_willResumeEvent(System.Action value)
    void remove_willResumeEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0xFF2ACC
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::add_didResumeEvent(System.Action value)
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0xFF2B70
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::remove_didResumeEvent(System.Action value)
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0xFF2C14
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Pause()
    void Pause();
    // public System.Void WillResume()
    // Offset: 0xFF2C84
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::WillResume()
    void WillResume();
    // public System.Void Resume()
    // Offset: 0xFF2C98
    // Implemented from: IGamePause
    // Base method: System.Void IGamePause::Resume()
    void Resume();
    // public System.Void .ctor()
    // Offset: 0xFF2D04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialPause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialPause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialPause*, creationType>()));
    }
  }; // TutorialPause
  static check_size<sizeof(TutorialPause), 56 + sizeof(bool)> __GlobalNamespace_TutorialPauseSizeCheck;
  static_assert(sizeof(TutorialPause) == 0x39);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialPause*, "", "TutorialPause");
