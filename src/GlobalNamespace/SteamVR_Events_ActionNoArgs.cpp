// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SteamVR_Events/ActionNoArgs
#include "GlobalNamespace/SteamVR_Events_ActionNoArgs.hpp"
// Including type: UnityEngine.Events.UnityAction
#include "UnityEngine/Events/UnityAction.hpp"
// Including type: SteamVR_Events/Event
#include "GlobalNamespace/SteamVR_Events_Event.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SteamVR_Events/ActionNoArgs..ctor
GlobalNamespace::SteamVR_Events::ActionNoArgs* GlobalNamespace::SteamVR_Events::ActionNoArgs::New_ctor(GlobalNamespace::SteamVR_Events::Event* _event, UnityEngine::Events::UnityAction* action) {
  return THROW_UNLESS(il2cpp_utils::New<SteamVR_Events::ActionNoArgs*>(_event, action));
}
// Autogenerated method: SteamVR_Events/ActionNoArgs.Enable
void GlobalNamespace::SteamVR_Events::ActionNoArgs::Enable(bool enabled) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enable", enabled));
}
