// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsTableCell
  class MainSettingsTableCell;
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsTableView
  class MainSettingsTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private MainSettingsTableCell _cellPrefab
    // Offset: 0x20
    GlobalNamespace::MainSettingsTableCell* cellPrefab;
    // private System.Single _cellHeight
    // Offset: 0x28
    float cellHeight;
    // private System.Action`2<MainSettingsTableView,System.Int32> didSelectRowEvent
    // Offset: 0x30
    System::Action_2<GlobalNamespace::MainSettingsTableView*, int>* didSelectRowEvent;
    // private SettingsSubMenuInfo[] _settingsSubMenuInfos
    // Offset: 0x38
    ::Array<GlobalNamespace::SettingsSubMenuInfo*>* settingsSubMenuInfos;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Void add_didSelectRowEvent(System.Action`2<MainSettingsTableView,System.Int32> value)
    // Offset: 0xC001D4
    void add_didSelectRowEvent(System::Action_2<GlobalNamespace::MainSettingsTableView*, int>* value);
    // public System.Void remove_didSelectRowEvent(System.Action`2<MainSettingsTableView,System.Int32> value)
    // Offset: 0xC00ED0
    void remove_didSelectRowEvent(System::Action_2<GlobalNamespace::MainSettingsTableView*, int>* value);
    // public System.Void Init(SettingsSubMenuInfo[] settingsSubMenuInfos)
    // Offset: 0xC00278
    void Init(::Array<GlobalNamespace::SettingsSubMenuInfo*>* settingsSubMenuInfos);
    // private System.Void HandleDidSelectRow(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xC01114
    void HandleDidSelectRow(HMUI::TableView* tableView, int row);
    // public System.Void SelectRow(System.Int32 row)
    // Offset: 0xC00374
    void SelectRow(int row);
    // public System.Void ClearSelection()
    // Offset: 0xC0118C
    void ClearSelection();
    // public System.Single CellSize()
    // Offset: 0xC00F74
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xC00F7C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xC00F94
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xC011A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSettingsTableView* New_ctor();
  }; // MainSettingsTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsTableView*, "", "MainSettingsTableView");
#pragma pack(pop)
