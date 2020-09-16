// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: DeeplinkManagerToDestinationRequestManagerAdapter
#include "GlobalNamespace/DeeplinkManagerToDestinationRequestManagerAdapter.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: BeatmapCharacteristicCollectionSO
#include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
// Including type: Deeplink
#include "GlobalNamespace/Deeplink.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.Init
void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Init(GlobalNamespace::IDeeplinkManager* deeplinkManager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", deeplinkManager));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.HandleDeeplinkManagerDidReceiveDeeplink
void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::HandleDeeplinkManagerDidReceiveDeeplink(GlobalNamespace::Deeplink* deeplink) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDeeplinkManagerDidReceiveDeeplink", deeplink));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.add_didSendMenuDestinationRequestEvent
void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::add_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSendMenuDestinationRequestEvent", value));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.remove_didSendMenuDestinationRequestEvent
void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::remove_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSendMenuDestinationRequestEvent", value));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.get_currentMenuDestinationRequest
GlobalNamespace::MenuDestination* GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::get_currentMenuDestinationRequest() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MenuDestination*>(this, "get_currentMenuDestinationRequest"));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter.Clear
void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: DeeplinkManagerToDestinationRequestManagerAdapter..ctor
GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter* GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<DeeplinkManagerToDestinationRequestManagerAdapter*>());
}
