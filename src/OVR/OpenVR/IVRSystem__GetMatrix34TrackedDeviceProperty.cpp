// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
#include "OVR/OpenVR/IVRSystem__GetMatrix34TrackedDeviceProperty.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: OVR.OpenVR.ETrackedDeviceProperty
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
// Including type: OVR.OpenVR.ETrackedPropertyError
#include "OVR/OpenVR/ETrackedPropertyError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty..ctor
OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty* OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetMatrix34TrackedDeviceProperty*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty.Invoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "Invoke", unDeviceIndex, prop, pError));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, pError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty.EndInvoke
OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::IVRSystem::_GetMatrix34TrackedDeviceProperty::EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdMatrix34_t>(this, "EndInvoke", pError, result));
}
