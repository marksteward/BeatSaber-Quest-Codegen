// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty
#include "OVR/OpenVR/IVRSystem__GetArrayTrackedDeviceProperty.hpp"
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
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty..ctor
OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty* OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetArrayTrackedDeviceProperty*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty.Invoke
uint OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty.EndInvoke
uint OVR::OpenVR::IVRSystem::_GetArrayTrackedDeviceProperty::EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pError, result));
}
