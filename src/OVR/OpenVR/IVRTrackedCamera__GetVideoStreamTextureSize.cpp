// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize
#include "OVR/OpenVR/IVRTrackedCamera__GetVideoStreamTextureSize.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraError
#include "OVR/OpenVR/EVRTrackedCameraError.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraFrameType
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
// Including type: OVR.OpenVR.VRTextureBounds_t
#include "OVR/OpenVR/VRTextureBounds_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize..ctor
OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize* OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureSize*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize.Invoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "Invoke", nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize.EndInvoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::EndInvoke(OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "EndInvoke", pTextureBounds, pnWidth, pnHeight, result));
}
