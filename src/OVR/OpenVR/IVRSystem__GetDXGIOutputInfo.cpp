// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
#include "OVR/OpenVR/IVRSystem__GetDXGIOutputInfo.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo..ctor
OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo* OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetDXGIOutputInfo*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo.Invoke
void OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::Invoke(int& pnAdapterIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pnAdapterIndex));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::BeginInvoke(int& pnAdapterIndex, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pnAdapterIndex, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo.EndInvoke
void OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::EndInvoke(int& pnAdapterIndex, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnAdapterIndex, result));
}
