// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetControllerState
#include "OVR/OpenVR/IVRSystem__GetControllerState.hpp"
// Including type: OVR.OpenVR.VRControllerState_t
#include "OVR/OpenVR/VRControllerState_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetControllerState..ctor
OVR::OpenVR::IVRSystem::_GetControllerState* OVR::OpenVR::IVRSystem::_GetControllerState::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetControllerState*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetControllerState.Invoke
bool OVR::OpenVR::IVRSystem::_GetControllerState::Invoke(uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", unControllerDeviceIndex, pControllerState, unControllerStateSize));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetControllerState.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetControllerState::BeginInvoke(uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetControllerState.EndInvoke
bool OVR::OpenVR::IVRSystem::_GetControllerState::EndInvoke(OVR::OpenVR::VRControllerState_t& pControllerState, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pControllerState, result));
}
