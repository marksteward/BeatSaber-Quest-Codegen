// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize
#include "Valve/VR/IVRSystem__GetRecommendedRenderTargetSize.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize..ctor
Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize* Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetRecommendedRenderTargetSize*>(object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize.Invoke
void Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::Invoke(uint& pnWidth, uint& pnHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pnWidth, pnHeight));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::BeginInvoke(uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pnWidth, pnHeight, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize.EndInvoke
void Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::EndInvoke(uint& pnWidth, uint& pnHeight, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnWidth, pnHeight, result));
}
