// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose
#include "Valve/VR/IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose..ctor
Valve::VR::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose* Valve::VR::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose*>(object, method));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose.Invoke
bool Valve::VR::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose::Invoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pmatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose::BeginInvoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pmatSeatedZeroPoseToRawTrackingPose, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose.EndInvoke
bool Valve::VR::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose::EndInvoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pmatSeatedZeroPoseToRawTrackingPose, result));
}
