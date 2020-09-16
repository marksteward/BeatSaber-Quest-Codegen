// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor
#include "OVR/OpenVR/IVRCompositor__GetCurrentFadeColor.hpp"
// Including type: OVR.OpenVR.HmdColor_t
#include "OVR/OpenVR/HmdColor_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor..ctor
OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor* OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_GetCurrentFadeColor*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor.Invoke
OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::Invoke(bool bBackground) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdColor_t>(this, "Invoke", bBackground));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", bBackground, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor.EndInvoke
OVR::OpenVR::HmdColor_t OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HmdColor_t>(this, "EndInvoke", result));
}
