// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
#include "OVR/OpenVR/IVRSystem__GetPropErrorNameFromEnum.hpp"
// Including type: OVR.OpenVR.ETrackedPropertyError
#include "OVR/OpenVR/ETrackedPropertyError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum..ctor
OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum* OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetPropErrorNameFromEnum*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum.Invoke
System::IntPtr OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::Invoke(OVR::OpenVR::ETrackedPropertyError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", error));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::BeginInvoke(OVR::OpenVR::ETrackedPropertyError error, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", error, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum.EndInvoke
System::IntPtr OVR::OpenVR::IVRSystem::_GetPropErrorNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
