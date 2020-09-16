// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetOverlayIntersectionMask
#include "Valve/VR/IVROverlay__SetOverlayIntersectionMask.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.VROverlayIntersectionMaskPrimitive_t
#include "Valve/VR/VROverlayIntersectionMaskPrimitive_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayIntersectionMask..ctor
Valve::VR::IVROverlay::_SetOverlayIntersectionMask* Valve::VR::IVROverlay::_SetOverlayIntersectionMask::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVROverlay::_SetOverlayIntersectionMask*>(object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayIntersectionMask.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayIntersectionMask.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayIntersectionMask.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayIntersectionMask::EndInvoke(Valve::VR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pMaskPrimitives, result));
}
