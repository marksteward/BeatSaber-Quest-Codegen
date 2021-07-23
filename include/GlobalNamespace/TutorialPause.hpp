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
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialPause : public ::Il2CppObject/*, public GlobalNamespace::IGamePause*/ {
    public:
    // [InjectAttribute] Offset: 0xE09FF0
    // private readonly TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE0A000
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE0A010
    // private readonly AudioListenerController _audioListenerController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioListenerController* audioListenerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioListenerController*) == 0x8);
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
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
    // Get instance field: private readonly TutorialSongController _tutorialSongController
    GlobalNamespace::TutorialSongController* _get__tutorialSongController();
    // Set instance field: private readonly TutorialSongController _tutorialSongController
    void _set__tutorialSongController(GlobalNamespace::TutorialSongController* value);
    // Get instance field: private readonly SaberManager _saberManager
    GlobalNamespace::SaberManager* _get__saberManager();
    // Set instance field: private readonly SaberManager _saberManager
    void _set__saberManager(GlobalNamespace::SaberManager* value);
    // Get instance field: private readonly AudioListenerController _audioListenerController
    GlobalNamespace::AudioListenerController* _get__audioListenerController();
    // Set instance field: private readonly AudioListenerController _audioListenerController
    void _set__audioListenerController(GlobalNamespace::AudioListenerController* value);
    // Get instance field: private System.Action didPauseEvent
    System::Action* _get_didPauseEvent();
    // Set instance field: private System.Action didPauseEvent
    void _set_didPauseEvent(System::Action* value);
    // Get instance field: private System.Action willResumeEvent
    System::Action* _get_willResumeEvent();
    // Set instance field: private System.Action willResumeEvent
    void _set_willResumeEvent(System::Action* value);
    // Get instance field: private System.Action didResumeEvent
    System::Action* _get_didResumeEvent();
    // Set instance field: private System.Action didResumeEvent
    void _set_didResumeEvent(System::Action* value);
    // Get instance field: private System.Boolean _pause
    bool _get__pause();
    // Set instance field: private System.Boolean _pause
    void _set__pause(bool value);
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x1075504
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x10755A8
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0x107564C
    void add_willResumeEvent(System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0x10756F0
    void remove_willResumeEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x1075794
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x1075838
    void remove_didResumeEvent(System::Action* value);
    // public System.Void Pause()
    // Offset: 0x10758DC
    void Pause();
    // public System.Void WillResume()
    // Offset: 0x107595C
    void WillResume();
    // public System.Void Resume()
    // Offset: 0x1075970
    void Resume();
    // public System.Void .ctor()
    // Offset: 0x10759EC
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::add_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::remove_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(System::Action*)>(&GlobalNamespace::TutorialPause::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::WillResume
// Il2CppName: WillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::WillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "WillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
