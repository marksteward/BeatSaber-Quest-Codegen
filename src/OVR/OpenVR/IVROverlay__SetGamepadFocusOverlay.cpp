// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay
#include "OVR/OpenVR/IVROverlay__SetGamepadFocusOverlay.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay..ctor
OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay* OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetGamepadFocusOverlay*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulNewFocusOverlay));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulNewFocusOverlay, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
