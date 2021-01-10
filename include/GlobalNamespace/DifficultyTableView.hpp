// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: DifficultyTableCell
  class DifficultyTableCell;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
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
  // Size: 0x48
  // Autogenerated type: DifficultyTableView
  // [] Offset: FFFFFFFF
  class DifficultyTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private DifficultyTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::DifficultyTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DifficultyTableCell*) == 0x8);
    // private DifficultyTableCell _nonSelectableCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DifficultyTableCell* nonSelectableCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DifficultyTableCell*) == 0x8);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x30
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellHeight and: didSelectRow
    char __padding3[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD19D4
    // private System.Action`2<DifficultyTableView,System.Int32> didSelectRow
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::DifficultyTableView*, int>* didSelectRow;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::DifficultyTableView*, int>*) == 0x8);
    // private IDifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyTableView
    DifficultyTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::DifficultyTableCell* cellPrefab_ = {}, GlobalNamespace::DifficultyTableCell* nonSelectableCellPrefab_ = {}, float cellHeight_ = {}, System::Action_2<GlobalNamespace::DifficultyTableView*, int>* didSelectRow_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, nonSelectableCellPrefab{nonSelectableCellPrefab_}, cellHeight{cellHeight_}, didSelectRow{didSelectRow_}, difficultyBeatmaps{difficultyBeatmaps_} {}
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
    // static field const value: static private System.String kNonSelectableCellIdentifier
    static constexpr const char* kNonSelectableCellIdentifier = "NonSelectableCell";
    // Get static field: static private System.String kNonSelectableCellIdentifier
    static ::Il2CppString* _get_kNonSelectableCellIdentifier();
    // Set static field: static private System.String kNonSelectableCellIdentifier
    static void _set_kNonSelectableCellIdentifier(::Il2CppString* value);
    // public System.Void add_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0x1A5A868
    void add_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void remove_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0x1A5A90C
    void remove_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void Init(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1A5A9B0
    void Init(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Void SetDifficultyBeatmaps(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1A5AAB0
    void SetDifficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x1A5AE84
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // public System.Void SelectRow(System.Int32 row, System.Boolean callbackTable)
    // Offset: 0x1A5AF2C
    void SelectRow(int row, bool callbackTable);
    // public System.Void SelectRow(IDifficultyBeatmap difficultyBeatmap, System.Boolean callbackTable)
    // Offset: 0x1A5AF4C
    void SelectRow(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool callbackTable);
    // public System.Void ClearSelection()
    // Offset: 0x1A5AFDC
    void ClearSelection();
    // public System.Single CellSize()
    // Offset: 0x1A5AAEC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x1A5AAF4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x1A5AB14
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0x1A5AFF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DifficultyTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifficultyTableView*, creationType>()));
    }
  }; // DifficultyTableView
  static check_size<sizeof(DifficultyTableView), 64 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*)> __GlobalNamespace_DifficultyTableViewSizeCheck;
  static_assert(sizeof(DifficultyTableView) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyTableView*, "", "DifficultyTableView");
#pragma pack(pop)
