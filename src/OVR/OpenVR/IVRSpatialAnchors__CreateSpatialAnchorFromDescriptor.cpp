// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
#include "OVR/OpenVR/IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor.hpp"
// Including type: OVR.OpenVR.EVRSpatialAnchorError
#include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor..ctor
OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor.Invoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::Invoke(::Il2CppString* pchDescriptor, uint& pHandleOut) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "Invoke", pchDescriptor, pHandleOut));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::BeginInvoke(::Il2CppString* pchDescriptor, uint& pHandleOut, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchDescriptor, pHandleOut, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor.EndInvoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::EndInvoke(uint& pHandleOut, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "EndInvoke", pHandleOut, result));
}
