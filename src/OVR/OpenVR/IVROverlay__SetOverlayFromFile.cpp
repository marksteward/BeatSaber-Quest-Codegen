// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayFromFile
#include "OVR/OpenVR/IVROverlay__SetOverlayFromFile.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFromFile..ctor
OVR::OpenVR::IVROverlay::_SetOverlayFromFile* OVR::OpenVR::IVROverlay::_SetOverlayFromFile::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetOverlayFromFile*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFromFile.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayFromFile::Invoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pchFilePath));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFromFile.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayFromFile::BeginInvoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pchFilePath, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFromFile.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayFromFile::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
