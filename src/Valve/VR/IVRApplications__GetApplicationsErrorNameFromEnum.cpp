// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum
#include "Valve/VR/IVRApplications__GetApplicationsErrorNameFromEnum.hpp"
// Including type: Valve.VR.EVRApplicationError
#include "Valve/VR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum..ctor
Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum* Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRApplications::_GetApplicationsErrorNameFromEnum*>(object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum.Invoke
System::IntPtr Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke(Valve::VR::EVRApplicationError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", error));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke(Valve::VR::EVRApplicationError error, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", error, callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum.EndInvoke
System::IntPtr Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
