// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: TableViewWithDetailCell/IDataSource
#include "GlobalNamespace/TableViewWithDetailCell_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TableViewWithDetailCell because it is already included!
  // Forward declaring type: GameServerListTableCell
  class GameServerListTableCell;
  // Forward declaring type: GameServerListDetailTableCell
  class GameServerListDetailTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameServersListTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServersListTableView : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::TableViewWithDetailCell::IDataSource*/ {
    public:
    // private TableViewWithDetailCell _tableView
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TableViewWithDetailCell* tableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TableViewWithDetailCell*) == 0x8);
    // private GameServerListTableCell _gameServerListCellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameServerListTableCell* gameServerListCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerListTableCell*) == 0x8);
    // private GameServerListDetailTableCell _gameServerDetailCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameServerListDetailTableCell* gameServerDetailCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerListDetailTableCell*) == 0x8);
    // [InjectAttribute] Offset: 0xEBDD00
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x40
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: gamesList
    char __padding5[0x7] = {};
    // private INetworkPlayer[] _gamesList
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::INetworkPlayer*>* gamesList;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // private INetworkPlayer _selectedServer
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::INetworkPlayer* selectedServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // Creating value type constructor for type: GameServersListTableView
    GameServersListTableView(GlobalNamespace::TableViewWithDetailCell* tableView_ = {}, GlobalNamespace::GameServerListTableCell* gameServerListCellPrefab_ = {}, GlobalNamespace::GameServerListDetailTableCell* gameServerDetailCellPrefab_ = {}, Zenject::DiContainer* container_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* joinButtonPressedEvent_ = {}, bool isInitialized_ = {}, ::Array<GlobalNamespace::INetworkPlayer*>* gamesList_ = {}, GlobalNamespace::INetworkPlayer* selectedServer_ = {}) noexcept : tableView{tableView_}, gameServerListCellPrefab{gameServerListCellPrefab_}, gameServerDetailCellPrefab{gameServerDetailCellPrefab_}, container{container_}, joinButtonPressedEvent{joinButtonPressedEvent_}, isInitialized{isInitialized_}, gamesList{gamesList_}, selectedServer{selectedServer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::TableViewWithDetailCell::IDataSource
    operator GlobalNamespace::TableViewWithDetailCell::IDataSource() noexcept {
      return *reinterpret_cast<GlobalNamespace::TableViewWithDetailCell::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellReuseIdentifier
    static constexpr const char* kCellReuseIdentifier = "Cell";
    // Get static field: static private System.String kCellReuseIdentifier
    static ::Il2CppString* _get_kCellReuseIdentifier();
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kDetailCellReuseIdentifier
    static constexpr const char* kDetailCellReuseIdentifier = "DetailCell";
    // Get static field: static private System.String kDetailCellReuseIdentifier
    static ::Il2CppString* _get_kDetailCellReuseIdentifier();
    // Set static field: static private System.String kDetailCellReuseIdentifier
    static void _set_kDetailCellReuseIdentifier(::Il2CppString* value);
    // Get instance field: private TableViewWithDetailCell _tableView
    GlobalNamespace::TableViewWithDetailCell* _get__tableView();
    // Set instance field: private TableViewWithDetailCell _tableView
    void _set__tableView(GlobalNamespace::TableViewWithDetailCell* value);
    // Get instance field: private GameServerListTableCell _gameServerListCellPrefab
    GlobalNamespace::GameServerListTableCell* _get__gameServerListCellPrefab();
    // Set instance field: private GameServerListTableCell _gameServerListCellPrefab
    void _set__gameServerListCellPrefab(GlobalNamespace::GameServerListTableCell* value);
    // Get instance field: private GameServerListDetailTableCell _gameServerDetailCellPrefab
    GlobalNamespace::GameServerListDetailTableCell* _get__gameServerDetailCellPrefab();
    // Set instance field: private GameServerListDetailTableCell _gameServerDetailCellPrefab
    void _set__gameServerDetailCellPrefab(GlobalNamespace::GameServerListDetailTableCell* value);
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer* _get__container();
    // Set instance field: private readonly Zenject.DiContainer _container
    void _set__container(Zenject::DiContainer* value);
    // Get instance field: private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    System::Action_1<GlobalNamespace::INetworkPlayer*>* _get_joinButtonPressedEvent();
    // Set instance field: private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    void _set_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // Get instance field: private System.Boolean _isInitialized
    bool _get__isInitialized();
    // Set instance field: private System.Boolean _isInitialized
    void _set__isInitialized(bool value);
    // Get instance field: private INetworkPlayer[] _gamesList
    ::Array<GlobalNamespace::INetworkPlayer*>* _get__gamesList();
    // Set instance field: private INetworkPlayer[] _gamesList
    void _set__gamesList(::Array<GlobalNamespace::INetworkPlayer*>* value);
    // Get instance field: private INetworkPlayer _selectedServer
    GlobalNamespace::INetworkPlayer* _get__selectedServer();
    // Set instance field: private INetworkPlayer _selectedServer
    void _set__selectedServer(GlobalNamespace::INetworkPlayer* value);
    // public System.Void add_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1F1B720
    void add_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1F1B7C4
    void remove_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Single CellSize()
    // Offset: 0x1F1B868
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x1F1B874
    int NumberOfCells();
    // private System.Void Init()
    // Offset: 0x1F1B88C
    void Init();
    // public HMUI.TableCell CellForContent(TableViewWithDetailCell tableView, System.Int32 idx, System.Boolean detailOpened)
    // Offset: 0x1F1B99C
    HMUI::TableCell* CellForContent(GlobalNamespace::TableViewWithDetailCell* tableView, int idx, bool detailOpened);
    // public HMUI.TableCell CellForDetail(TableViewWithDetailCell tableView, System.Int32 contentIdx)
    // Offset: 0x1F1BAF0
    HMUI::TableCell* CellForDetail(GlobalNamespace::TableViewWithDetailCell* tableView, int contentIdx);
    // public System.Void SetData(System.Collections.Generic.IEnumerable`1<INetworkPlayer> servers, System.Boolean clearSelection)
    // Offset: 0x1F1BC80
    void SetData(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* servers, bool clearSelection);
    // private System.Void HandleGameServerListDetailTableCellJoinServerButtonWasPressed()
    // Offset: 0x1F1BD94
    void HandleGameServerListDetailTableCellJoinServerButtonWasPressed();
    // private System.Void HandleTableViewDidSelectCellWithIdx(HMUI.TableView tableView, System.Int32 id)
    // Offset: 0x1F1BDFC
    void HandleTableViewDidSelectCellWithIdx(HMUI::TableView* tableView, int id);
    // private System.Void HandleTableViewDidDeselectCellWithIdx(TableViewWithDetailCell arg1, System.Int32 arg2)
    // Offset: 0x1F1BE3C
    void HandleTableViewDidDeselectCellWithIdx(GlobalNamespace::TableViewWithDetailCell* arg1, int arg2);
    // protected System.Void OnDestroy()
    // Offset: 0x1F1BE44
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1F1BF24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServersListTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServersListTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServersListTableView*, creationType>()));
    }
  }; // GameServersListTableView
  #pragma pack(pop)
  static check_size<sizeof(GameServersListTableView), 80 + sizeof(GlobalNamespace::INetworkPlayer*)> __GlobalNamespace_GameServersListTableViewSizeCheck;
  static_assert(sizeof(GameServersListTableView) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersListTableView*, "", "GameServersListTableView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::add_joinButtonPressedEvent
// Il2CppName: add_joinButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::GameServersListTableView::add_joinButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "add_joinButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::remove_joinButtonPressedEvent
// Il2CppName: remove_joinButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(System::Action_1<GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::GameServersListTableView::remove_joinButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "remove_joinButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellForContent
// Il2CppName: CellForContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::GameServersListTableView::*)(GlobalNamespace::TableViewWithDetailCell*, int, bool)>(&GlobalNamespace::GameServersListTableView::CellForContent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* detailOpened = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellForContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx, detailOpened});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellForDetail
// Il2CppName: CellForDetail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::GameServersListTableView::*)(GlobalNamespace::TableViewWithDetailCell*, int)>(&GlobalNamespace::GameServersListTableView::CellForDetail)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* contentIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellForDetail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, contentIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, bool)>(&GlobalNamespace::GameServersListTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* servers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    static auto* clearSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{servers, clearSelection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleGameServerListDetailTableCellJoinServerButtonWasPressed
// Il2CppName: HandleGameServerListDetailTableCellJoinServerButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::HandleGameServerListDetailTableCellJoinServerButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleGameServerListDetailTableCellJoinServerButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleTableViewDidSelectCellWithIdx
// Il2CppName: HandleTableViewDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::GameServersListTableView::HandleTableViewDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleTableViewDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, id});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleTableViewDidDeselectCellWithIdx
// Il2CppName: HandleTableViewDidDeselectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(GlobalNamespace::TableViewWithDetailCell*, int)>(&GlobalNamespace::GameServersListTableView::HandleTableViewDidDeselectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleTableViewDidDeselectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
