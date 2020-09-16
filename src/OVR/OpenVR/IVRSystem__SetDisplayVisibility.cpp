// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_SetDisplayVisibility
#include "OVR/OpenVR/IVRSystem__SetDisplayVisibility.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_SetDisplayVisibility..ctor
OVR::OpenVR::IVRSystem::_SetDisplayVisibility* OVR::OpenVR::IVRSystem::_SetDisplayVisibility::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_SetDisplayVisibility*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_SetDisplayVisibility.Invoke
bool OVR::OpenVR::IVRSystem::_SetDisplayVisibility::Invoke(bool bIsVisibleOnDesktop) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", bIsVisibleOnDesktop));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_SetDisplayVisibility.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_SetDisplayVisibility::BeginInvoke(bool bIsVisibleOnDesktop, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", bIsVisibleOnDesktop, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_SetDisplayVisibility.EndInvoke
bool OVR::OpenVR::IVRSystem::_SetDisplayVisibility::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
