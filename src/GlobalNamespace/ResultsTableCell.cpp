// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ResultsTableCell
#include "GlobalNamespace/ResultsTableCell.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ResultsTableCell.SetData
void GlobalNamespace::ResultsTableCell::SetData(int order, GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", order, connectedPlayer, levelCompletionResults));
}
// Autogenerated method: ResultsTableCell..ctor
GlobalNamespace::ResultsTableCell* GlobalNamespace::ResultsTableCell::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ResultsTableCell*>());
}