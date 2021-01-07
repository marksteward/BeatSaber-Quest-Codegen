// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DifficultyTableView
#include "GlobalNamespace/DifficultyTableView.hpp"
// Including type: DifficultyTableCell
#include "GlobalNamespace/DifficultyTableCell.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCellIdentifier
::Il2CppString* GlobalNamespace::DifficultyTableView::_get_kCellIdentifier() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("_get_kCellIdentifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "DifficultyTableView", "kCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCellIdentifier
void GlobalNamespace::DifficultyTableView::_set_kCellIdentifier(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("_set_kCellIdentifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "DifficultyTableView", "kCellIdentifier", value));
}
// Autogenerated static field getter
// Get static field: static private System.String kNonSelectableCellIdentifier
::Il2CppString* GlobalNamespace::DifficultyTableView::_get_kNonSelectableCellIdentifier() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("_get_kNonSelectableCellIdentifier");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "DifficultyTableView", "kNonSelectableCellIdentifier"));
}
// Autogenerated static field setter
// Set static field: static private System.String kNonSelectableCellIdentifier
void GlobalNamespace::DifficultyTableView::_set_kNonSelectableCellIdentifier(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("_set_kNonSelectableCellIdentifier");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "DifficultyTableView", "kNonSelectableCellIdentifier", value));
}
// Autogenerated method: DifficultyTableView.add_didSelectRow
void GlobalNamespace::DifficultyTableView::add_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("add_didSelectRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_didSelectRow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: DifficultyTableView.remove_didSelectRow
void GlobalNamespace::DifficultyTableView::remove_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("remove_didSelectRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_didSelectRow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: DifficultyTableView.Init
void GlobalNamespace::DifficultyTableView::Init(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(difficultyBeatmaps)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, difficultyBeatmaps);
}
// Autogenerated method: DifficultyTableView.SetDifficultyBeatmaps
void GlobalNamespace::DifficultyTableView::SetDifficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("SetDifficultyBeatmaps");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetDifficultyBeatmaps", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(difficultyBeatmaps)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, difficultyBeatmaps);
}
// Autogenerated method: DifficultyTableView.HandleDidSelectRowEvent
void GlobalNamespace::DifficultyTableView::HandleDidSelectRowEvent(HMUI::TableView* tableView, int row) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("HandleDidSelectRowEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleDidSelectRowEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(tableView, row)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, tableView, row);
}
// Autogenerated method: DifficultyTableView.SelectRow
void GlobalNamespace::DifficultyTableView::SelectRow(int row, bool callbackTable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("SelectRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SelectRow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(row, callbackTable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, row, callbackTable);
}
// Autogenerated method: DifficultyTableView.SelectRow
void GlobalNamespace::DifficultyTableView::SelectRow(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool callbackTable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("SelectRow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SelectRow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(difficultyBeatmap, callbackTable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, difficultyBeatmap, callbackTable);
}
// Autogenerated method: DifficultyTableView.ClearSelection
void GlobalNamespace::DifficultyTableView::ClearSelection() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("ClearSelection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearSelection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: DifficultyTableView.CellSize
float GlobalNamespace::DifficultyTableView::CellSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("CellSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CellSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: DifficultyTableView.NumberOfCells
int GlobalNamespace::DifficultyTableView::NumberOfCells() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("NumberOfCells");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "NumberOfCells", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: DifficultyTableView.CellForIdx
HMUI::TableCell* GlobalNamespace::DifficultyTableView::CellForIdx(HMUI::TableView* tableView, int row) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("DifficultyTableView").WithContext("CellForIdx");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CellForIdx", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(tableView, row)));
  return ::il2cpp_utils::RunMethodThrow<HMUI::TableCell*, false>(this, ___internal__method, tableView, row);
}
