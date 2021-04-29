// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: ResultsTableCell
  class ResultsTableCell;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ResultsTableView
  class ResultsTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private ResultsTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ResultsTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x28
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: dataList
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    // Creating value type constructor for type: ResultsTableView
    ResultsTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::ResultsTableCell* cellPrefab_ = {}, float rowHeight_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, rowHeight{rowHeight_}, dataList{dataList_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Single CellSize()
    // Offset: 0xF890F4
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xF890FC
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xF891AC
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> dataList)
    // Offset: 0xF89368
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);
    // public System.Void .ctor()
    // Offset: 0xF89394
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsTableView*, creationType>()));
    }
  }; // ResultsTableView
  #pragma pack(pop)
  static check_size<sizeof(ResultsTableView), 48 + sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*)> __GlobalNamespace_ResultsTableViewSizeCheck;
  static_assert(sizeof(ResultsTableView) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsTableView*, "", "ResultsTableView");
