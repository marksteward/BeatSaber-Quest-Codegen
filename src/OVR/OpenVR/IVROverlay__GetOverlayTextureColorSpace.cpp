// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
#include "OVR/OpenVR/IVROverlay__GetOverlayTextureColorSpace.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.EColorSpace
#include "OVR/OpenVR/EColorSpace.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace..ctor
OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace* OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_GetOverlayTextureColorSpace*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace& peTextureColorSpace) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, peTextureColorSpace));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace& peTextureColorSpace, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, peTextureColorSpace, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::EndInvoke(OVR::OpenVR::EColorSpace& peTextureColorSpace, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", peTextureColorSpace, result));
}
