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
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerLevelEndActionsListener
  class IMultiplayerLevelEndActionsListener;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: MultiplayerLocalActivePlayerInGameMenuController
  class MultiplayerLocalActivePlayerInGameMenuController;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
  // Forward declaring type: SaberManager
  class SaberManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData
    class InitData;
    // [InjectAttribute] Offset: 0xE07938
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE07948
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE07958
    // private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsListener*) == 0x8);
    // [InjectAttribute] Offset: 0xE07968
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0xE07978
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xE07988
    // private readonly MultiplayerLocalActivePlayerInGameMenuController _inGameMenuController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* inGameMenuController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0xE07998
    // private readonly IVRPlatformHelper _platformHelper
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IVRPlatformHelper* platformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE079A8
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE079B8
    // private readonly MultiplayerLocalActivePlayerGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE079C8
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // private System.Boolean _levelFinishedOrFailed
    // Size: 0x1
    // Offset: 0x68
    bool levelFinishedOrFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerGameplayManager
    MultiplayerLocalActivePlayerGameplayManager(GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* inGameMenuController_ = {}, GlobalNamespace::IVRPlatformHelper* platformHelper_ = {}, GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData* initData_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, bool levelFinishedOrFailed_ = {}) noexcept : gameSongController{gameSongController_}, multiplayerSessionManager{multiplayerSessionManager_}, multiplayerLevelEndActions{multiplayerLevelEndActions_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, gameEnergyCounter{gameEnergyCounter_}, inGameMenuController{inGameMenuController_}, platformHelper{platformHelper_}, disconnectHelper{disconnectHelper_}, initData{initData_}, saberManager{saberManager_}, levelFinishedOrFailed{levelFinishedOrFailed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x23D42A4
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x23D482C
    void OnDisable();
    // private System.Void PerformPlayerFail()
    // Offset: 0x23D4DD0
    void PerformPlayerFail();
    // private System.Void PerformPlayerGivenUp()
    // Offset: 0x23D4FF4
    void PerformPlayerGivenUp();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0x23D51F8
    void HandleGameEnergyDidReach0();
    // private System.Void HandleInGameMenuControllerDidGiveUp()
    // Offset: 0x23D521C
    void HandleInGameMenuControllerDidGiveUp();
    // private System.Void HandleInGameMenuControllerRequestsDisconnect()
    // Offset: 0x23D5220
    void HandleInGameMenuControllerRequestsDisconnect();
    // private System.Void HandleSongDidFinish()
    // Offset: 0x23D53E8
    void HandleSongDidFinish();
    // private System.Void HandleHmdUnmounted()
    // Offset: 0x23D560C
    void HandleHmdUnmounted();
    // private System.Void HandleVrFocusWasCapturedEvent()
    // Offset: 0x23D5610
    void HandleVrFocusWasCapturedEvent();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x23D480C
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x23D5614
    void HandleInputFocusReleased();
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x23D5650
    void OnApplicationFocus(bool hasFocus);
    // public System.Void .ctor()
    // Offset: 0x23D565C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerGameplayManager*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerGameplayManager), 104 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerGameplayManagerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerGameplayManager) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*, "", "MultiplayerLocalActivePlayerGameplayManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail
// Il2CppName: PerformPlayerFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "PerformPlayerFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp
// Il2CppName: PerformPlayerGivenUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "PerformPlayerGivenUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0
// Il2CppName: HandleGameEnergyDidReach0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleGameEnergyDidReach0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp
// Il2CppName: HandleInGameMenuControllerDidGiveUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInGameMenuControllerDidGiveUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect
// Il2CppName: HandleInGameMenuControllerRequestsDisconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInGameMenuControllerRequestsDisconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish
// Il2CppName: HandleSongDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleSongDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted
// Il2CppName: HandleHmdUnmounted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleHmdUnmounted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent
// Il2CppName: HandleVrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleVrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured
// Il2CppName: HandleInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased
// Il2CppName: HandleInputFocusReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)(bool)>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
