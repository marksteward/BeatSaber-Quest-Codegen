// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings/_SetFloat
#include "Valve/VR/IVRSettings__SetFloat.hpp"
// Including type: Valve.VR.EVRSettingsError
#include "Valve/VR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSettings/_SetFloat..ctor
Valve::VR::IVRSettings::_SetFloat* Valve::VR::IVRSettings::_SetFloat::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSettings::_SetFloat*>(object, method));
}
// Autogenerated method: Valve.VR.IVRSettings/_SetFloat.Invoke
void Valve::VR::IVRSettings::_SetFloat::Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, Valve::VR::EVRSettingsError& peError) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pchSection, pchSettingsKey, flValue, peError));
}
// Autogenerated method: Valve.VR.IVRSettings/_SetFloat.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSettings::_SetFloat::BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, pchSettingsKey, flValue, peError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSettings/_SetFloat.EndInvoke
void Valve::VR::IVRSettings::_SetFloat::EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", peError, result));
}
