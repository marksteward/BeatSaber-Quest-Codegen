// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: PlayerNetworkFailReason
  struct PlayerNetworkFailReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerLevelEndActionsListener
  // [] Offset: FFFFFFFF
  class IMultiplayerLevelEndActionsListener {
    public:
    // Creating value type constructor for type: IMultiplayerLevelEndActionsListener
    IMultiplayerLevelEndActionsListener() noexcept {}
    // public System.Void ReportPlayerDidFinish(LevelCompletionResults results)
    // Offset: 0xFFFFFFFF
    void ReportPlayerDidFinish(GlobalNamespace::LevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0xFFFFFFFF
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
  }; // IMultiplayerLevelEndActionsListener
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerLevelEndActionsListener*, "", "IMultiplayerLevelEndActionsListener");
