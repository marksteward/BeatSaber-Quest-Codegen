// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum
#include "Valve/VR/IVRSystem__GetEventTypeNameFromEnum.hpp"
// Including type: Valve.VR.EVREventType
#include "Valve/VR/EVREventType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum..ctor
Valve::VR::IVRSystem::_GetEventTypeNameFromEnum* Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetEventTypeNameFromEnum*>(object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum.Invoke
System::IntPtr Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::Invoke(Valve::VR::EVREventType eType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", eType));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::BeginInvoke(Valve::VR::EVREventType eType, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eType, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum.EndInvoke
System::IntPtr Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
