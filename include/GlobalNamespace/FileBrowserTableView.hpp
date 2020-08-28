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
  // Forward declaring type: FileBrowserTableCell
  class FileBrowserTableCell;
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
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
  // Autogenerated type: FileBrowserTableView
  class FileBrowserTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private FileBrowserTableCell _cellPrefab
    // Offset: 0x20
    GlobalNamespace::FileBrowserTableCell* cellPrefab;
    // private System.Single _cellHeight
    // Offset: 0x28
    float cellHeight;
    // private System.Action`2<FileBrowserTableView,FileBrowserItem> didSelectRow
    // Offset: 0x30
    System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* didSelectRow;
    // private FileBrowserItem[] _items
    // Offset: 0x38
    ::Array<GlobalNamespace::FileBrowserItem*>* items;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Void add_didSelectRow(System.Action`2<FileBrowserTableView,FileBrowserItem> value)
    // Offset: 0xBED878
    void add_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value);
    // public System.Void remove_didSelectRow(System.Action`2<FileBrowserTableView,FileBrowserItem> value)
    // Offset: 0xBED91C
    void remove_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView*, GlobalNamespace::FileBrowserItem*>* value);
    // public System.Void Init(FileBrowserItem[] items)
    // Offset: 0xBED9C0
    void Init(::Array<GlobalNamespace::FileBrowserItem*>* items);
    // public System.Void SetItems(FileBrowserItem[] items)
    // Offset: 0xBEDAD8
    void SetItems(::Array<GlobalNamespace::FileBrowserItem*>* items);
    // public System.Boolean SelectAndScrollRowToItemWithPath(System.String folderPath)
    // Offset: 0xBEDB34
    bool SelectAndScrollRowToItemWithPath(::Il2CppString* folderPath);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xBEDDBC
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // public System.Void SelectAndScrollRow(System.Int32 row)
    // Offset: 0xBEDBD4
    void SelectAndScrollRow(int row);
    // public System.Void ClearSelection(System.Boolean animated, System.Boolean scrollToRow0)
    // Offset: 0xBEDE5C
    void ClearSelection(bool animated, bool scrollToRow0);
    // public System.Single CellSize()
    // Offset: 0xBEDC24
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xBEDC2C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xBEDC44
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xBEDEC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FileBrowserTableView* New_ctor();
  }; // FileBrowserTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserTableView*, "", "FileBrowserTableView");
#pragma pack(pop)
