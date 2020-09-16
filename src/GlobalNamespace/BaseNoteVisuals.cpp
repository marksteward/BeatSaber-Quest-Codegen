// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BaseNoteVisuals
#include "GlobalNamespace/BaseNoteVisuals.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: CutoutAnimateEffect
#include "GlobalNamespace/CutoutAnimateEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BaseNoteVisuals.Awake
void GlobalNamespace::BaseNoteVisuals::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: BaseNoteVisuals.OnDestroy
void GlobalNamespace::BaseNoteVisuals::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: BaseNoteVisuals.HandleNoteControllerDidInitEvent
void GlobalNamespace::BaseNoteVisuals::HandleNoteControllerDidInitEvent(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteControllerDidInitEvent", noteController));
}
// Autogenerated method: BaseNoteVisuals.HandleNoteDidStartDissolvingEvent
void GlobalNamespace::BaseNoteVisuals::HandleNoteDidStartDissolvingEvent(GlobalNamespace::NoteController* noteController, float duration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDidStartDissolvingEvent", noteController, duration));
}
// Autogenerated method: BaseNoteVisuals.AnimateCutout
void GlobalNamespace::BaseNoteVisuals::AnimateCutout(float cutoutStart, float cutoutEnd, float duration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AnimateCutout", cutoutStart, cutoutEnd, duration));
}
// Autogenerated method: BaseNoteVisuals..ctor
GlobalNamespace::BaseNoteVisuals* GlobalNamespace::BaseNoteVisuals::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BaseNoteVisuals*>());
}
