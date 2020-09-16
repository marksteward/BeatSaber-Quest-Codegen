// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SteamVR_Events/Event
#include "GlobalNamespace/SteamVR_Events_Event.hpp"
// Including type: UnityEngine.Events.UnityAction
#include "UnityEngine/Events/UnityAction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SteamVR_Events/Event.Listen
void GlobalNamespace::SteamVR_Events::Event::Listen(UnityEngine::Events::UnityAction* action) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Listen", action));
}
// Autogenerated method: SteamVR_Events/Event.Remove
void GlobalNamespace::SteamVR_Events::Event::Remove(UnityEngine::Events::UnityAction* action) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", action));
}
// Autogenerated method: SteamVR_Events/Event.Send
void GlobalNamespace::SteamVR_Events::Event::Send() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send"));
}
// Autogenerated method: SteamVR_Events/Event..ctor
GlobalNamespace::SteamVR_Events::Event* GlobalNamespace::SteamVR_Events::Event::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SteamVR_Events::Event*>());
}
