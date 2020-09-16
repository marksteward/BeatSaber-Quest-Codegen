// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_SetTrackingSpace
#include "Valve/VR/IVRCompositor__SetTrackingSpace.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_SetTrackingSpace..ctor
Valve::VR::IVRCompositor::_SetTrackingSpace* Valve::VR::IVRCompositor::_SetTrackingSpace::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_SetTrackingSpace*>(object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetTrackingSpace.Invoke
void Valve::VR::IVRCompositor::_SetTrackingSpace::Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eOrigin));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetTrackingSpace.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_SetTrackingSpace::BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eOrigin, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetTrackingSpace.EndInvoke
void Valve::VR::IVRCompositor::_SetTrackingSpace::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
