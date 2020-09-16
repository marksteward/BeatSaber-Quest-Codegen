// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_AddApplicationManifest
#include "OVR/OpenVR/IVRApplications__AddApplicationManifest.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_AddApplicationManifest..ctor
OVR::OpenVR::IVRApplications::_AddApplicationManifest* OVR::OpenVR::IVRApplications::_AddApplicationManifest::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRApplications::_AddApplicationManifest*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_AddApplicationManifest.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_AddApplicationManifest::Invoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", pchApplicationManifestFullPath, bTemporary));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_AddApplicationManifest.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_AddApplicationManifest::BeginInvoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchApplicationManifestFullPath, bTemporary, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_AddApplicationManifest.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_AddApplicationManifest::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}
