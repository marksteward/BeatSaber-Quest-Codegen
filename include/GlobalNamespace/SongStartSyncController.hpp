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
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: SongStartHandler
  class SongStartHandler;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SongStartSyncController
  // [TokenAttribute] Offset: FFFFFFFF
  class SongStartSyncController : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE0248C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE0249C
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // private System.Single _waitStartTime
    // Size: 0x4
    // Offset: 0x28
    float waitStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _songStarted
    // Size: 0x1
    // Offset: 0x2C
    bool songStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: songStarted and: startTime
    char __padding3[0x3] = {};
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x30
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: startTime and: sessionGameId
    char __padding4[0x4] = {};
    // private System.String _sessionGameId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* sessionGameId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private SongStartHandler _songStartHandler
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SongStartHandler* songStartHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongStartHandler*) == 0x8);
    // private System.Action syncStartFailedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* syncStartFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action`1<System.Single> syncStartSuccessEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<float>* syncStartSuccessEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private System.Action`1<System.Single> syncResumeEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<float>* syncResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // Creating value type constructor for type: SongStartSyncController
    SongStartSyncController(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, float waitStartTime_ = {}, bool songStarted_ = {}, float startTime_ = {}, ::Il2CppString* sessionGameId_ = {}, GlobalNamespace::SongStartHandler* songStartHandler_ = {}, System::Action* syncStartFailedEvent_ = {}, System::Action_1<float>* syncStartSuccessEvent_ = {}, System::Action_1<float>* syncResumeEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, waitStartTime{waitStartTime_}, songStarted{songStarted_}, startTime{startTime_}, sessionGameId{sessionGameId_}, songStartHandler{songStartHandler_}, syncStartFailedEvent{syncStartFailedEvent_}, syncStartSuccessEvent{syncStartSuccessEvent_}, syncResumeEvent{syncResumeEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kAudioLoadTimeout
    static constexpr const float kAudioLoadTimeout = 15;
    // Get static field: static private System.Single kAudioLoadTimeout
    static float _get_kAudioLoadTimeout();
    // Set static field: static private System.Single kAudioLoadTimeout
    static void _set_kAudioLoadTimeout(float value);
    // public System.Boolean get_isSongStarted()
    // Offset: 0x105CBF4
    bool get_isSongStarted();
    // public System.Single get_songStartSyncTime()
    // Offset: 0x105CBFC
    float get_songStartSyncTime();
    // public System.Void add_syncStartFailedEvent(System.Action value)
    // Offset: 0x105CC18
    void add_syncStartFailedEvent(System::Action* value);
    // public System.Void remove_syncStartFailedEvent(System.Action value)
    // Offset: 0x105CCBC
    void remove_syncStartFailedEvent(System::Action* value);
    // public System.Void add_syncStartSuccessEvent(System.Action`1<System.Single> value)
    // Offset: 0x105CD60
    void add_syncStartSuccessEvent(System::Action_1<float>* value);
    // public System.Void remove_syncStartSuccessEvent(System.Action`1<System.Single> value)
    // Offset: 0x105CE04
    void remove_syncStartSuccessEvent(System::Action_1<float>* value);
    // public System.Void add_syncResumeEvent(System.Action`1<System.Single> value)
    // Offset: 0x105CEA8
    void add_syncResumeEvent(System::Action_1<float>* value);
    // public System.Void remove_syncResumeEvent(System.Action`1<System.Single> value)
    // Offset: 0x105CF4C
    void remove_syncResumeEvent(System::Action_1<float>* value);
    // protected System.Void Start()
    // Offset: 0x105CFF0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x105CFFC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x105D010
    void Update();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x105D078
    void OnApplicationPause(bool pauseStatus);
    // public System.Void StartSong(PlayersSpecificSettingsAtGameStartModel playersSpecificSettingsAtGameStartModel, System.String sessionGameId)
    // Offset: 0x105D104
    void StartSong(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel, ::Il2CppString* sessionGameId);
    // private System.Void HandleSetSongStartSyncTime(System.Single songStartSyncTime)
    // Offset: 0x105D254
    void HandleSetSongStartSyncTime(float songStartSyncTime);
    // public System.Void .ctor()
    // Offset: 0x105D2D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongStartSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongStartSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongStartSyncController*, creationType>()));
    }
  }; // SongStartSyncController
  #pragma pack(pop)
  static check_size<sizeof(SongStartSyncController), 88 + sizeof(System::Action_1<float>*)> __GlobalNamespace_SongStartSyncControllerSizeCheck;
  static_assert(sizeof(SongStartSyncController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongStartSyncController*, "", "SongStartSyncController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::get_isSongStarted
// Il2CppName: get_isSongStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongStartSyncController::*)()>(&GlobalNamespace::SongStartSyncController::get_isSongStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "get_isSongStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::get_songStartSyncTime
// Il2CppName: get_songStartSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongStartSyncController::*)()>(&GlobalNamespace::SongStartSyncController::get_songStartSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "get_songStartSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent
// Il2CppName: add_syncStartFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action*)>(&GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "add_syncStartFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent
// Il2CppName: remove_syncStartFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action*)>(&GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "remove_syncStartFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent
// Il2CppName: add_syncStartSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "add_syncStartSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent
// Il2CppName: remove_syncStartSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "remove_syncStartSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::add_syncResumeEvent
// Il2CppName: add_syncResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartSyncController::add_syncResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "add_syncResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::remove_syncResumeEvent
// Il2CppName: remove_syncResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartSyncController::remove_syncResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "remove_syncResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)()>(&GlobalNamespace::SongStartSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)()>(&GlobalNamespace::SongStartSyncController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)()>(&GlobalNamespace::SongStartSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(bool)>(&GlobalNamespace::SongStartSyncController::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, ::Il2CppString*)>(&GlobalNamespace::SongStartSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* playersSpecificSettingsAtGameStartModel = &::il2cpp_utils::GetClassFromName("", "PlayersSpecificSettingsAtGameStartModel")->byval_arg;
    static auto* sessionGameId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersSpecificSettingsAtGameStartModel, sessionGameId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime
// Il2CppName: HandleSetSongStartSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartSyncController::*)(float)>(&GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime)> {
  static const MethodInfo* get() {
    static auto* songStartSyncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartSyncController*), "HandleSetSongStartSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songStartSyncTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
