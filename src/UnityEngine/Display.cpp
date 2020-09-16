// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Display
#include "UnityEngine/Display.hpp"
// Including type: UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine/Display_DisplaysUpdatedDelegate.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public UnityEngine.Display[] displays
::Array<UnityEngine::Display*>* UnityEngine::Display::_get_displays() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<UnityEngine::Display*>*>("UnityEngine", "Display", "displays"));
}
// Autogenerated static field setter
// Set static field: static public UnityEngine.Display[] displays
void UnityEngine::Display::_set_displays(::Array<UnityEngine::Display*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Display", "displays", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Display _mainDisplay
UnityEngine::Display* UnityEngine::Display::_get__mainDisplay() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Display*>("UnityEngine", "Display", "_mainDisplay"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Display _mainDisplay
void UnityEngine::Display::_set__mainDisplay(UnityEngine::Display* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Display", "_mainDisplay", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
UnityEngine::Display::DisplaysUpdatedDelegate* UnityEngine::Display::_get_onDisplaysUpdated() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Display::DisplaysUpdatedDelegate*>("UnityEngine", "Display", "onDisplaysUpdated"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
void UnityEngine::Display::_set_onDisplaysUpdated(UnityEngine::Display::DisplaysUpdatedDelegate* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Display", "onDisplaysUpdated", value));
}
// Autogenerated method: UnityEngine.Display..ctor
UnityEngine::Display* UnityEngine::Display::New_ctor(System::IntPtr nativeDisplay) {
  return THROW_UNLESS(il2cpp_utils::New<Display*>(nativeDisplay));
}
// Autogenerated method: UnityEngine.Display.get_renderingWidth
int UnityEngine::Display::get_renderingWidth() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_renderingWidth"));
}
// Autogenerated method: UnityEngine.Display.get_renderingHeight
int UnityEngine::Display::get_renderingHeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_renderingHeight"));
}
// Autogenerated method: UnityEngine.Display.get_systemWidth
int UnityEngine::Display::get_systemWidth() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_systemWidth"));
}
// Autogenerated method: UnityEngine.Display.get_systemHeight
int UnityEngine::Display::get_systemHeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_systemHeight"));
}
// Autogenerated method: UnityEngine.Display.RelativeMouseAt
UnityEngine::Vector3 UnityEngine::Display::RelativeMouseAt(UnityEngine::Vector3 inputMouseCoordinates) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Display", "RelativeMouseAt", inputMouseCoordinates));
}
// Autogenerated method: UnityEngine.Display.get_main
UnityEngine::Display* UnityEngine::Display::get_main() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Display*>("UnityEngine", "Display", "get_main"));
}
// Autogenerated method: UnityEngine.Display.RecreateDisplayList
void UnityEngine::Display::RecreateDisplayList(::Array<System::IntPtr>* nativeDisplay) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Display", "RecreateDisplayList", nativeDisplay));
}
// Autogenerated method: UnityEngine.Display.FireDisplaysUpdated
void UnityEngine::Display::FireDisplaysUpdated() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Display", "FireDisplaysUpdated"));
}
// Autogenerated method: UnityEngine.Display.GetSystemExtImpl
void UnityEngine::Display::GetSystemExtImpl(System::IntPtr nativeDisplay, int& w, int& h) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Display", "GetSystemExtImpl", nativeDisplay, w, h));
}
// Autogenerated method: UnityEngine.Display.GetRenderingExtImpl
void UnityEngine::Display::GetRenderingExtImpl(System::IntPtr nativeDisplay, int& w, int& h) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Display", "GetRenderingExtImpl", nativeDisplay, w, h));
}
// Autogenerated method: UnityEngine.Display.RelativeMouseAtImpl
int UnityEngine::Display::RelativeMouseAtImpl(int x, int y, int& rx, int& ry) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Display", "RelativeMouseAtImpl", x, y, rx, ry));
}
// Autogenerated method: UnityEngine.Display..cctor
void UnityEngine::Display::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Display", ".cctor"));
}
// Autogenerated method: UnityEngine.Display..ctor
UnityEngine::Display* UnityEngine::Display::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Display*>());
}
