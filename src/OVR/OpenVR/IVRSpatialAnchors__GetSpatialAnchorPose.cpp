// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
#include "OVR/OpenVR/IVRSpatialAnchors__GetSpatialAnchorPose.hpp"
// Including type: OVR.OpenVR.EVRSpatialAnchorError
#include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
// Including type: OVR.OpenVR.ETrackingUniverseOrigin
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
// Including type: OVR.OpenVR.SpatialAnchorPose_t
#include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose..ctor
OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose* OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSpatialAnchors::_GetSpatialAnchorPose*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose.Invoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::Invoke(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "Invoke", unHandle, eOrigin, pPoseOut));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::BeginInvoke(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unHandle, eOrigin, pPoseOut, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose.EndInvoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::EndInvoke(OVR::OpenVR::SpatialAnchorPose_t& pPoseOut, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "EndInvoke", pPoseOut, result));
}
