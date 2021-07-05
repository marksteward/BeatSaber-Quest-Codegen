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
  // Forward declaring type: SceneStartHandler
  class SceneStartHandler;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: SceneStartSyncController
  class SceneStartSyncController : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE17F50
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE17F60
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17F70
    // private System.Action`1<System.String> syncStartDidSuccessEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Il2CppString*>* syncStartDidSuccessEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17F80
    // private System.Action`1<System.String> syncStartDidReceiveTooLateEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<::Il2CppString*>* syncStartDidReceiveTooLateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17F90
    // private System.Action syncStartDidFailEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* syncStartDidFailEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private SceneStartHandler _sceneStartHandler
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SceneStartHandler* sceneStartHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneStartHandler*) == 0x8);
    // private PlayersSpecificSettingsAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // private System.Single _waitStartTime
    // Size: 0x4
    // Offset: 0x50
    float waitStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _sceneSyncStarted
    // Size: 0x1
    // Offset: 0x54
    bool sceneSyncStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SceneStartSyncController
    SceneStartSyncController(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, System::Action_1<::Il2CppString*>* syncStartDidSuccessEvent_ = {}, System::Action_1<::Il2CppString*>* syncStartDidReceiveTooLateEvent_ = {}, System::Action* syncStartDidFailEvent_ = {}, GlobalNamespace::SceneStartHandler* sceneStartHandler_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel_ = {}, float waitStartTime_ = {}, bool sceneSyncStarted_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, syncStartDidSuccessEvent{syncStartDidSuccessEvent_}, syncStartDidReceiveTooLateEvent{syncStartDidReceiveTooLateEvent_}, syncStartDidFailEvent{syncStartDidFailEvent_}, sceneStartHandler{sceneStartHandler_}, playersAtGameStartModel{playersAtGameStartModel_}, waitStartTime{waitStartTime_}, sceneSyncStarted{sceneSyncStarted_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kLoadOtherTimeout
    static constexpr const float kLoadOtherTimeout = 15;
    // Get static field: static private System.Single kLoadOtherTimeout
    static float _get_kLoadOtherTimeout();
    // Set static field: static private System.Single kLoadOtherTimeout
    static void _set_kLoadOtherTimeout(float value);
    // static field const value: static private System.Single kLoadSelfTimeout
    static constexpr const float kLoadSelfTimeout = 20;
    // Get static field: static private System.Single kLoadSelfTimeout
    static float _get_kLoadSelfTimeout();
    // Set static field: static private System.Single kLoadSelfTimeout
    static void _set_kLoadSelfTimeout(float value);
    // public System.Void add_syncStartDidSuccessEvent(System.Action`1<System.String> value)
    // Offset: 0x10D552C
    void add_syncStartDidSuccessEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_syncStartDidSuccessEvent(System.Action`1<System.String> value)
    // Offset: 0x10D55D0
    void remove_syncStartDidSuccessEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_syncStartDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x10D5674
    void add_syncStartDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_syncStartDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x10D5718
    void remove_syncStartDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_syncStartDidFailEvent(System.Action value)
    // Offset: 0x10D57BC
    void add_syncStartDidFailEvent(System::Action* value);
    // public System.Void remove_syncStartDidFailEvent(System.Action value)
    // Offset: 0x10D5860
    void remove_syncStartDidFailEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x10D5904
    void Start();
    // protected System.Void Update()
    // Offset: 0x10D591C
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x10D5AD4
    void OnDestroy();
    // public System.Void StartSceneLoadSync(PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel)
    // Offset: 0x10D5BD0
    void StartSceneLoadSync(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);
    // private System.Void HandleSceneSetupDidFinish(System.String sessionGameId)
    // Offset: 0x10D5D14
    void HandleSceneSetupDidFinish(::Il2CppString* sessionGameId);
    // private System.Void HandleSceneSetupDidReceiveTooLate(System.String sessionGameId)
    // Offset: 0x10D5D98
    void HandleSceneSetupDidReceiveTooLate(::Il2CppString* sessionGameId);
    // public System.Void .ctor()
    // Offset: 0x10D5E1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneStartSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneStartSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneStartSyncController*, creationType>()));
    }
  }; // SceneStartSyncController
  #pragma pack(pop)
  static check_size<sizeof(SceneStartSyncController), 84 + sizeof(bool)> __GlobalNamespace_SceneStartSyncControllerSizeCheck;
  static_assert(sizeof(SceneStartSyncController) == 0x55);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartSyncController*, "", "SceneStartSyncController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::add_syncStartDidSuccessEvent
// Il2CppName: add_syncStartDidSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartSyncController::add_syncStartDidSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "add_syncStartDidSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::remove_syncStartDidSuccessEvent
// Il2CppName: remove_syncStartDidSuccessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartSyncController::remove_syncStartDidSuccessEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "remove_syncStartDidSuccessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::add_syncStartDidReceiveTooLateEvent
// Il2CppName: add_syncStartDidReceiveTooLateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartSyncController::add_syncStartDidReceiveTooLateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "add_syncStartDidReceiveTooLateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::remove_syncStartDidReceiveTooLateEvent
// Il2CppName: remove_syncStartDidReceiveTooLateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartSyncController::remove_syncStartDidReceiveTooLateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "remove_syncStartDidReceiveTooLateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::add_syncStartDidFailEvent
// Il2CppName: add_syncStartDidFailEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action*)>(&GlobalNamespace::SceneStartSyncController::add_syncStartDidFailEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "add_syncStartDidFailEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::remove_syncStartDidFailEvent
// Il2CppName: remove_syncStartDidFailEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(System::Action*)>(&GlobalNamespace::SceneStartSyncController::remove_syncStartDidFailEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "remove_syncStartDidFailEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)()>(&GlobalNamespace::SceneStartSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)()>(&GlobalNamespace::SceneStartSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)()>(&GlobalNamespace::SceneStartSyncController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::StartSceneLoadSync
// Il2CppName: StartSceneLoadSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)>(&GlobalNamespace::SceneStartSyncController::StartSceneLoadSync)> {
  static const MethodInfo* get() {
    static auto* playersAtGameStartModel = &::il2cpp_utils::GetClassFromName("", "PlayersSpecificSettingsAtGameStartModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "StartSceneLoadSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersAtGameStartModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::HandleSceneSetupDidFinish
// Il2CppName: HandleSceneSetupDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(::Il2CppString*)>(&GlobalNamespace::SceneStartSyncController::HandleSceneSetupDidFinish)> {
  static const MethodInfo* get() {
    static auto* sessionGameId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "HandleSceneSetupDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionGameId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::HandleSceneSetupDidReceiveTooLate
// Il2CppName: HandleSceneSetupDidReceiveTooLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartSyncController::*)(::Il2CppString*)>(&GlobalNamespace::SceneStartSyncController::HandleSceneSetupDidReceiveTooLate)> {
  static const MethodInfo* get() {
    static auto* sessionGameId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartSyncController*), "HandleSceneSetupDidReceiveTooLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionGameId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
