// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetKeyboardText
#include "Valve/VR/IVROverlay__GetKeyboardText.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetKeyboardText..ctor
Valve::VR::IVROverlay::_GetKeyboardText* Valve::VR::IVROverlay::_GetKeyboardText::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_GetKeyboardText*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetKeyboardText.Invoke
uint Valve::VR::IVROverlay::_GetKeyboardText::Invoke(System::Text::StringBuilder* pchText, uint cchText) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchText, cchText));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetKeyboardText.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetKeyboardText::BeginInvoke(System::Text::StringBuilder* pchText, uint cchText, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchText, cchText, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetKeyboardText.EndInvoke
uint Valve::VR::IVROverlay::_GetKeyboardText::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
