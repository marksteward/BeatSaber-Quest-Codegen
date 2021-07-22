// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: PlayerNetworkFailReason
  struct PlayerNetworkFailReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerLevelEndActionsListener
  // [TokenAttribute] Offset: FFFFFFFF
  class IMultiplayerLevelEndActionsListener : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IMultiplayerLevelEndActionsListener
    IMultiplayerLevelEndActionsListener() noexcept {}
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0xFFFFFFFF
    void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0xFFFFFFFF
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
  }; // IMultiplayerLevelEndActionsListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerLevelEndActionsListener*, "", "IMultiplayerLevelEndActionsListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish
// Il2CppName: ReportPlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsListener*), "ReportPlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed
// Il2CppName: ReportPlayerNetworkDidFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(GlobalNamespace::PlayerNetworkFailReason)>(&GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed)> {
  static const MethodInfo* get() {
    static auto* failReason = &::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerLevelEndActionsListener*), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failReason});
  }
};
