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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardTableCell
  class LeaderboardTableCell;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardTableView
  // [] Offset: FFFFFFFF
  class LeaderboardTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::LeaderboardTableView::ScoreData
    class ScoreData;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private LeaderboardTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LeaderboardTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x28
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: scores
    char __padding2[0x4] = {};
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private System.Int32 _specialScorePos
    // Size: 0x4
    // Offset: 0x38
    int specialScorePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LeaderboardTableView
    LeaderboardTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::LeaderboardTableCell* cellPrefab_ = {}, float rowHeight_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores_ = {}, int specialScorePos_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, rowHeight{rowHeight_}, scores{scores_}, specialScorePos{specialScorePos_} {}
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
    // public System.Void SetScores(System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> scores, System.Int32 specialScorePos)
    // Offset: 0xF1E780
    void SetScores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores, int specialScorePos);
    // public System.Single CellSize()
    // Offset: 0xF1E544
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xF1E54C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xF1E5A0
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xF1E7D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardTableView*, creationType>()));
    }
  }; // LeaderboardTableView
  static check_size<sizeof(LeaderboardTableView), 56 + sizeof(int)> __GlobalNamespace_LeaderboardTableViewSizeCheck;
  static_assert(sizeof(LeaderboardTableView) == 0x3C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableView*, "", "LeaderboardTableView");
