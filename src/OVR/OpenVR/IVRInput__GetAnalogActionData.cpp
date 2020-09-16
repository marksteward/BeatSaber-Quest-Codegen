// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput/_GetAnalogActionData
#include "OVR/OpenVR/IVRInput__GetAnalogActionData.hpp"
// Including type: OVR.OpenVR.EVRInputError
#include "OVR/OpenVR/EVRInputError.hpp"
// Including type: OVR.OpenVR.InputAnalogActionData_t
#include "OVR/OpenVR/InputAnalogActionData_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRInput/_GetAnalogActionData..ctor
OVR::OpenVR::IVRInput::_GetAnalogActionData* OVR::OpenVR::IVRInput::_GetAnalogActionData::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRInput::_GetAnalogActionData*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetAnalogActionData.Invoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetAnalogActionData::Invoke(uint64_t action, OVR::OpenVR::InputAnalogActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "Invoke", action, pActionData, unActionDataSize, ulRestrictToDevice));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetAnalogActionData.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRInput::_GetAnalogActionData::BeginInvoke(uint64_t action, OVR::OpenVR::InputAnalogActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetAnalogActionData.EndInvoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetAnalogActionData::EndInvoke(OVR::OpenVR::InputAnalogActionData_t& pActionData, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "EndInvoke", pActionData, result));
}
