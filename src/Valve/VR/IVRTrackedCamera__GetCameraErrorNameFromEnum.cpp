// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum
#include "Valve/VR/IVRTrackedCamera__GetCameraErrorNameFromEnum.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum..ctor
Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum* Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRTrackedCamera::_GetCameraErrorNameFromEnum*>(object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum.Invoke
System::IntPtr Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::Invoke(Valve::VR::EVRTrackedCameraError eCameraError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", eCameraError));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::BeginInvoke(Valve::VR::EVRTrackedCameraError eCameraError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eCameraError, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum.EndInvoke
System::IntPtr Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
