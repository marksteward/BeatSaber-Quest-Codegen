// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSessionManager/<>c__DisplayClass92_0
#include "GlobalNamespace/MultiplayerSessionManager_--c__DisplayClass92_0.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerSessionManager/<>c__DisplayClass92_0.<GetConnectedPlayerByUserId>b__0
bool GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass92_0::$GetConnectedPlayerByUserId$b__0(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c__DisplayClass92_0").WithContext("<GetConnectedPlayerByUserId>b__0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetConnectedPlayerByUserId>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(player))));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, player);
}