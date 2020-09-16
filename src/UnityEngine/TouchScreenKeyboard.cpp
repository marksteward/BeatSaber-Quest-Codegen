// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TouchScreenKeyboard
#include "UnityEngine/TouchScreenKeyboard.hpp"
// Including type: UnityEngine.TouchScreenKeyboard/Status
#include "UnityEngine/TouchScreenKeyboard_Status.hpp"
// Including type: UnityEngine.TouchScreenKeyboardType
#include "UnityEngine/TouchScreenKeyboardType.hpp"
// Including type: UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine/TouchScreenKeyboard_InternalConstructorHelperArguments.hpp"
// Including type: UnityEngine.RangeInt
#include "UnityEngine/RangeInt.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TouchScreenKeyboard.Internal_Destroy
void UnityEngine::TouchScreenKeyboard::Internal_Destroy(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "TouchScreenKeyboard", "Internal_Destroy", ptr));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.Destroy
void UnityEngine::TouchScreenKeyboard::Destroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Destroy"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard..ctor
UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::New_ctor(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit) {
  return THROW_UNLESS(il2cpp_utils::New<TouchScreenKeyboard*>(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.TouchScreenKeyboard_InternalConstructorHelper
System::IntPtr UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& arguments, ::Il2CppString* text, ::Il2CppString* textPlaceholder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine", "TouchScreenKeyboard", "TouchScreenKeyboard_InternalConstructorHelper", arguments, text, textPlaceholder));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_isSupported
bool UnityEngine::TouchScreenKeyboard::get_isSupported() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "TouchScreenKeyboard", "get_isSupported"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_isInPlaceEditingAllowed
bool UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "TouchScreenKeyboard", "get_isInPlaceEditingAllowed"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.Open
UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TouchScreenKeyboard*>("UnityEngine", "TouchScreenKeyboard", "Open", text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.Open
UnityEngine::TouchScreenKeyboard* UnityEngine::TouchScreenKeyboard::Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TouchScreenKeyboard*>("UnityEngine", "TouchScreenKeyboard", "Open", text, keyboardType, autocorrection, multiline, secure));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_text
::Il2CppString* UnityEngine::TouchScreenKeyboard::get_text() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_text"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.set_text
void UnityEngine::TouchScreenKeyboard::set_text(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_text", value));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.set_hideInput
void UnityEngine::TouchScreenKeyboard::set_hideInput(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "TouchScreenKeyboard", "set_hideInput", value));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_active
bool UnityEngine::TouchScreenKeyboard::get_active() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_active"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.set_active
void UnityEngine::TouchScreenKeyboard::set_active(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_active", value));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_status
UnityEngine::TouchScreenKeyboard::Status UnityEngine::TouchScreenKeyboard::get_status() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TouchScreenKeyboard::Status>(this, "get_status"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.set_characterLimit
void UnityEngine::TouchScreenKeyboard::set_characterLimit(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_characterLimit", value));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_canGetSelection
bool UnityEngine::TouchScreenKeyboard::get_canGetSelection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canGetSelection"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_canSetSelection
bool UnityEngine::TouchScreenKeyboard::get_canSetSelection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canSetSelection"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.get_selection
UnityEngine::RangeInt UnityEngine::TouchScreenKeyboard::get_selection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RangeInt>(this, "get_selection"));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.set_selection
void UnityEngine::TouchScreenKeyboard::set_selection(UnityEngine::RangeInt value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_selection", value));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.GetSelection
void UnityEngine::TouchScreenKeyboard::GetSelection(int& start, int& length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "TouchScreenKeyboard", "GetSelection", start, length));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.SetSelection
void UnityEngine::TouchScreenKeyboard::SetSelection(int start, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "TouchScreenKeyboard", "SetSelection", start, length));
}
// Autogenerated method: UnityEngine.TouchScreenKeyboard.Finalize
void UnityEngine::TouchScreenKeyboard::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
