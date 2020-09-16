// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayFlag
#include "Valve/VR/IVROverlay__GetOverlayFlag.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.VROverlayFlags
#include "Valve/VR/VROverlayFlags.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayFlag..ctor
Valve::VR::IVROverlay::_GetOverlayFlag* Valve::VR::IVROverlay::_GetOverlayFlag::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_GetOverlayFlag*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayFlag.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayFlag::Invoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool& pbEnabled) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, eOverlayFlag, pbEnabled));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayFlag.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool& pbEnabled, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayFlag.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayFlag::EndInvoke(bool& pbEnabled, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pbEnabled, result));
}
