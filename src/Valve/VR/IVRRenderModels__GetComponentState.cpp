// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels/_GetComponentState
#include "Valve/VR/IVRRenderModels__GetComponentState.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.VRControllerState_t
#include "Valve/VR/VRControllerState_t.hpp"
// Including type: Valve.VR.RenderModel_ControllerMode_State_t
#include "Valve/VR/RenderModel_ControllerMode_State_t.hpp"
// Including type: Valve.VR.RenderModel_ComponentState_t
#include "Valve/VR/RenderModel_ComponentState_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentState..ctor
Valve::VR::IVRRenderModels::_GetComponentState* Valve::VR::IVRRenderModels::_GetComponentState::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRRenderModels::_GetComponentState*>(object, method));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentState.Invoke
bool Valve::VR::IVRRenderModels::_GetComponentState::Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentState.BeginInvoke
System::IAsyncResult* Valve::VR::IVRRenderModels::_GetComponentState::BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentState.EndInvoke
bool Valve::VR::IVRRenderModels::_GetComponentState::EndInvoke(Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pControllerState, pState, pComponentState, result));
}
