// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetGamepadFocusOverlay
#include "Valve/VR/IVROverlay__SetGamepadFocusOverlay.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetGamepadFocusOverlay..ctor
Valve::VR::IVROverlay::_SetGamepadFocusOverlay* Valve::VR::IVROverlay::_SetGamepadFocusOverlay::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetGamepadFocusOverlay*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetGamepadFocusOverlay.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulNewFocusOverlay));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetGamepadFocusOverlay.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulNewFocusOverlay, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetGamepadFocusOverlay.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetGamepadFocusOverlay::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", result));
}
