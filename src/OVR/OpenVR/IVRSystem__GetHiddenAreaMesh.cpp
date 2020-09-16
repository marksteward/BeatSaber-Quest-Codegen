// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
#include "OVR/OpenVR/IVRSystem__GetHiddenAreaMesh.hpp"
// Including type: OVR.OpenVR.HiddenAreaMesh_t
#include "OVR/OpenVR/HiddenAreaMesh_t.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: OVR.OpenVR.EHiddenAreaMeshType
#include "OVR/OpenVR/EHiddenAreaMeshType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh..ctor
OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh* OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRSystem::_GetHiddenAreaMesh*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh.Invoke
OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HiddenAreaMesh_t>(this, "Invoke", eEye, type));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, type, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh.EndInvoke
OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::IVRSystem::_GetHiddenAreaMesh::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::HiddenAreaMesh_t>(this, "EndInvoke", result));
}
