// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayAlpha
#include "OVR/OpenVR/IVROverlay__GetOverlayAlpha.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayAlpha..ctor
OVR::OpenVR::IVROverlay::_GetOverlayAlpha* OVR::OpenVR::IVROverlay::_GetOverlayAlpha::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_GetOverlayAlpha*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayAlpha.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float& pfAlpha) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pfAlpha));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayAlpha.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float& pfAlpha, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pfAlpha, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayAlpha.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayAlpha::EndInvoke(float& pfAlpha, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pfAlpha, result));
}
