// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorNoteVisuals
#include "GlobalNamespace/ColorNoteVisuals.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: UnityEngine.SpriteRenderer
#include "UnityEngine/SpriteRenderer.hpp"
// Including type: MaterialPropertyBlockController
#include "GlobalNamespace/MaterialPropertyBlockController.hpp"
// Including type: UnityEngine.MeshRenderer
#include "UnityEngine/MeshRenderer.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDC58A8
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _colorId
int GlobalNamespace::ColorNoteVisuals::_get__colorId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("_get__colorId");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ColorNoteVisuals", "_colorId"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _colorId
void GlobalNamespace::ColorNoteVisuals::_set__colorId(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("_set__colorId");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ColorNoteVisuals", "_colorId", value));
}
// Autogenerated method: ColorNoteVisuals.add_didInitEvent
void GlobalNamespace::ColorNoteVisuals::add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("add_didInitEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_didInitEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ColorNoteVisuals.remove_didInitEvent
void GlobalNamespace::ColorNoteVisuals::remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("remove_didInitEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_didInitEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ColorNoteVisuals.get_noteColor
UnityEngine::Color GlobalNamespace::ColorNoteVisuals::get_noteColor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("get_noteColor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_noteColor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Color, false>(this, ___internal__method);
}
// Autogenerated method: ColorNoteVisuals.set_showArrow
void GlobalNamespace::ColorNoteVisuals::set_showArrow(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("set_showArrow");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_showArrow", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ColorNoteVisuals.set_showCircle
void GlobalNamespace::ColorNoteVisuals::set_showCircle(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("set_showCircle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_showCircle", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ColorNoteVisuals.Awake
void GlobalNamespace::ColorNoteVisuals::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ColorNoteVisuals.OnDestroy
void GlobalNamespace::ColorNoteVisuals::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ColorNoteVisuals.HandleNoteControllerDidInit
void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit(GlobalNamespace::NoteController* noteController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("HandleNoteControllerDidInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteControllerDidInit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(noteController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController);
}
// Autogenerated method: ColorNoteVisuals.HandleNoteControllerNoteDidPassJumpThreeQuarters
void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteController* noteController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("HandleNoteControllerNoteDidPassJumpThreeQuarters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(noteController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController);
}
// Autogenerated method: ColorNoteVisuals.HandleNoteDidStartDissolving
void GlobalNamespace::ColorNoteVisuals::HandleNoteDidStartDissolving(GlobalNamespace::NoteController* noteController, float duration) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext("HandleNoteDidStartDissolving");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteDidStartDissolving", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(noteController, duration)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController, duration);
}
// Autogenerated method: ColorNoteVisuals..cctor
void GlobalNamespace::ColorNoteVisuals::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorNoteVisuals").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "ColorNoteVisuals", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
