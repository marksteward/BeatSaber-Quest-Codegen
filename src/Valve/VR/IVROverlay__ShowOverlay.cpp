// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_ShowOverlay
#include "Valve/VR/IVROverlay__ShowOverlay.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_ShowOverlay..ctor
Valve::VR::IVROverlay::_ShowOverlay* Valve::VR::IVROverlay::_ShowOverlay::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_ShowOverlay*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowOverlay.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_ShowOverlay::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowOverlay.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_ShowOverlay::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowOverlay.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_ShowOverlay::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", result));
}
