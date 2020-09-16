// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings/_SetInt32
#include "OVR/OpenVR/IVRSettings__SetInt32.hpp"
// Including type: OVR.OpenVR.EVRSettingsError
#include "OVR/OpenVR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetInt32..ctor
OVR::OpenVR::IVRSettings::_SetInt32* OVR::OpenVR::IVRSettings::_SetInt32::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSettings::_SetInt32*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetInt32.Invoke
void OVR::OpenVR::IVRSettings::_SetInt32::Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, OVR::OpenVR::EVRSettingsError& peError) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pchSection, pchSettingsKey, nValue, peError));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetInt32.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSettings::_SetInt32::BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, pchSettingsKey, nValue, peError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetInt32.EndInvoke
void OVR::OpenVR::IVRSettings::_SetInt32::EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", peError, result));
}
