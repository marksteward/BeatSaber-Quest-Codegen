// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
#include "Valve/VR/IVROverlay__SetOverlayTransformTrackedDeviceRelative.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative..ctor
Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative* Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetOverlayTransformTrackedDeviceRelative*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, uint unTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, uint unTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative::EndInvoke(Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pmatTrackedDeviceToOverlayTransform, result));
}
