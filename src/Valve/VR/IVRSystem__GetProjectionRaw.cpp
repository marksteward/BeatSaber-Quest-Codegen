// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetProjectionRaw
#include "Valve/VR/IVRSystem__GetProjectionRaw.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetProjectionRaw..ctor
Valve::VR::IVRSystem::_GetProjectionRaw* Valve::VR::IVRSystem::_GetProjectionRaw::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetProjectionRaw*>(object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetProjectionRaw.Invoke
void Valve::VR::IVRSystem::_GetProjectionRaw::Invoke(Valve::VR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eEye, pfLeft, pfRight, pfTop, pfBottom));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetProjectionRaw.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetProjectionRaw::BeginInvoke(Valve::VR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetProjectionRaw.EndInvoke
void Valve::VR::IVRSystem::_GetProjectionRaw::EndInvoke(float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pfLeft, pfRight, pfTop, pfBottom, result));
}
