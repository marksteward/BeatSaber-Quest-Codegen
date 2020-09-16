// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType
#include "OVR/OpenVR/IVRApplications__SetDefaultApplicationForMimeType.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType..ctor
OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType* OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRApplications::_SetDefaultApplicationForMimeType*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType::Invoke(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", pchAppKey, pchMimeType));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType::BeginInvoke(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchAppKey, pchMimeType, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}
