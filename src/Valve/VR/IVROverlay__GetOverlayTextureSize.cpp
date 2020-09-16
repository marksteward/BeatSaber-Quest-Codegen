// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayTextureSize
#include "Valve/VR/IVROverlay__GetOverlayTextureSize.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTextureSize..ctor
Valve::VR::IVROverlay::_GetOverlayTextureSize* Valve::VR::IVROverlay::_GetOverlayTextureSize::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_GetOverlayTextureSize*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTextureSize.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayTextureSize::Invoke(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pWidth, pHeight));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTextureSize.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayTextureSize::BeginInvoke(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pWidth, pHeight, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayTextureSize.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayTextureSize::EndInvoke(uint& pWidth, uint& pHeight, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pWidth, pHeight, result));
}
