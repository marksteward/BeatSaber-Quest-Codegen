// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
#include "OVR/OpenVR/IVROverlay__SetOverlayTransformAbsolute.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.ETrackingUniverseOrigin
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute..ctor
OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetOverlayTransformAbsolute*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute::EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pmatTrackingOriginToOverlayTransform, result));
}
