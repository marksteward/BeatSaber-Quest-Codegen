// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameServerPlayersTableView
  class GameServerPlayersTableView;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: LobbyPlayerPermissionsModel
  class LobbyPlayerPermissionsModel;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: MultiplayerLobbyState
  struct MultiplayerLobbyState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: ServerPlayerListViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerPlayerListViewController : public HMUI::ViewController {
    public:
    // private GameServerPlayersTableView _gameServerPlayersTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameServerPlayersTableView* gameServerPlayersTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerPlayersTableView*) == 0x8);
    // [InjectAttribute] Offset: 0xEBCFC8
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xEBCFD8
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xEBCFE8
    // private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyPlayerPermissionsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xEBCFF8
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedBeatmapEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* selectSuggestedBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::GameplayModifiers*>*) == 0x8);
    // private System.Action`1<System.String> kickPlayerEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<::Il2CppString*>* kickPlayerEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: ServerPlayerListViewController
    ServerPlayerListViewController(GlobalNamespace::GameServerPlayersTableView* gameServerPlayersTableView_ = {}, GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel_ = {}, GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel_ = {}, GlobalNamespace::ILobbyGameStateController* lobbyGameStateController_ = {}, System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* selectSuggestedBeatmapEvent_ = {}, System::Action_1<GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent_ = {}, System::Action_1<::Il2CppString*>* kickPlayerEvent_ = {}) noexcept : gameServerPlayersTableView{gameServerPlayersTableView_}, lobbyPlayersDataModel{lobbyPlayersDataModel_}, lobbyStateDataModel{lobbyStateDataModel_}, lobbyPlayerPermissionsModel{lobbyPlayerPermissionsModel_}, lobbyGameStateController{lobbyGameStateController_}, selectSuggestedBeatmapEvent{selectSuggestedBeatmapEvent_}, selectSuggestedGameplayModifiersEvent{selectSuggestedGameplayModifiersEvent_}, kickPlayerEvent{kickPlayerEvent_} {}
    // Get instance field: private GameServerPlayersTableView _gameServerPlayersTableView
    GlobalNamespace::GameServerPlayersTableView* _get__gameServerPlayersTableView();
    // Set instance field: private GameServerPlayersTableView _gameServerPlayersTableView
    void _set__gameServerPlayersTableView(GlobalNamespace::GameServerPlayersTableView* value);
    // Get instance field: private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    GlobalNamespace::ILobbyPlayersDataModel* _get__lobbyPlayersDataModel();
    // Set instance field: private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    void _set__lobbyPlayersDataModel(GlobalNamespace::ILobbyPlayersDataModel* value);
    // Get instance field: private readonly ILobbyStateDataModel _lobbyStateDataModel
    GlobalNamespace::ILobbyStateDataModel* _get__lobbyStateDataModel();
    // Set instance field: private readonly ILobbyStateDataModel _lobbyStateDataModel
    void _set__lobbyStateDataModel(GlobalNamespace::ILobbyStateDataModel* value);
    // Get instance field: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    GlobalNamespace::LobbyPlayerPermissionsModel* _get__lobbyPlayerPermissionsModel();
    // Set instance field: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    void _set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel* value);
    // Get instance field: private readonly ILobbyGameStateController _lobbyGameStateController
    GlobalNamespace::ILobbyGameStateController* _get__lobbyGameStateController();
    // Set instance field: private readonly ILobbyGameStateController _lobbyGameStateController
    void _set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController* value);
    // Get instance field: private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedBeatmapEvent
    System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* _get_selectSuggestedBeatmapEvent();
    // Set instance field: private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedBeatmapEvent
    void _set_selectSuggestedBeatmapEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // Get instance field: private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    System::Action_1<GlobalNamespace::GameplayModifiers*>* _get_selectSuggestedGameplayModifiersEvent();
    // Set instance field: private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    void _set_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // Get instance field: private System.Action`1<System.String> kickPlayerEvent
    System::Action_1<::Il2CppString*>* _get_kickPlayerEvent();
    // Set instance field: private System.Action`1<System.String> kickPlayerEvent
    void _set_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_selectSuggestedBeatmapEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0x1EBC198
    void add_selectSuggestedBeatmapEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void remove_selectSuggestedBeatmapEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0x1EBC23C
    void remove_selectSuggestedBeatmapEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void add_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0x1EBC2E0
    void add_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0x1EBC384
    void remove_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void add_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0x1EBC428
    void add_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0x1EBC4CC
    void remove_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // private System.Void HandleLobbyPlayersDataDidChange(System.String userId)
    // Offset: 0x1EBCC88
    void HandleLobbyPlayersDataDidChange(::Il2CppString* userId);
    // private System.Void HandleLobbyGameStateControllerLobbyStateChanged(MultiplayerLobbyState _)
    // Offset: 0x1EBCC8C
    void HandleLobbyGameStateControllerLobbyStateChanged(GlobalNamespace::MultiplayerLobbyState _);
    // private System.Void SetDataToTable()
    // Offset: 0x1EBC7F0
    void SetDataToTable();
    // private System.Void HandleSelectSuggestedLevel(System.String levelId, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x1EBCC90
    void HandleSelectSuggestedLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void HandleSelectSuggestedGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x1EBCD20
    void HandleSelectSuggestedGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void HandleKickPlayer(System.String userId)
    // Offset: 0x1EBCD94
    void HandleKickPlayer(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1EBCE08
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerPlayerListViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ServerPlayerListViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerPlayerListViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1EBC570
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1EBCA0C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // ServerPlayerListViewController
  #pragma pack(pop)
  static check_size<sizeof(ServerPlayerListViewController), 168 + sizeof(System::Action_1<::Il2CppString*>*)> __GlobalNamespace_ServerPlayerListViewControllerSizeCheck;
  static_assert(sizeof(ServerPlayerListViewController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPlayerListViewController*, "", "ServerPlayerListViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedBeatmapEvent
// Il2CppName: add_selectSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "add_selectSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedBeatmapEvent
// Il2CppName: remove_selectSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "remove_selectSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedGameplayModifiersEvent
// Il2CppName: add_selectSuggestedGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_1<GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "add_selectSuggestedGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedGameplayModifiersEvent
// Il2CppName: remove_selectSuggestedGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_1<GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "remove_selectSuggestedGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::add_kickPlayerEvent
// Il2CppName: add_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::ServerPlayerListViewController::add_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "add_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::remove_kickPlayerEvent
// Il2CppName: remove_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::ServerPlayerListViewController::remove_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "remove_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayersDataDidChange
// Il2CppName: HandleLobbyPlayersDataDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(::Il2CppString*)>(&GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayersDataDidChange)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "HandleLobbyPlayersDataDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::HandleLobbyGameStateControllerLobbyStateChanged
// Il2CppName: HandleLobbyGameStateControllerLobbyStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::ServerPlayerListViewController::HandleLobbyGameStateControllerLobbyStateChanged)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "HandleLobbyGameStateControllerLobbyStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::SetDataToTable
// Il2CppName: SetDataToTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)()>(&GlobalNamespace::ServerPlayerListViewController::SetDataToTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "SetDataToTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedLevel
// Il2CppName: HandleSelectSuggestedLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedLevel)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "HandleSelectSuggestedLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, beatmapCharacteristic, beatmapDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedGameplayModifiers
// Il2CppName: HandleSelectSuggestedGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "HandleSelectSuggestedGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::HandleKickPlayer
// Il2CppName: HandleKickPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(::Il2CppString*)>(&GlobalNamespace::ServerPlayerListViewController::HandleKickPlayer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "HandleKickPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(bool, bool, bool)>(&GlobalNamespace::ServerPlayerListViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerPlayerListViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerPlayerListViewController::*)(bool, bool)>(&GlobalNamespace::ServerPlayerListViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerPlayerListViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
