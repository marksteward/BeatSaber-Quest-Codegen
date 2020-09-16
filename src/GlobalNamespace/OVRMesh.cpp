// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRMesh
#include "GlobalNamespace/OVRMesh.hpp"
// Including type: OVRMesh/IOVRMeshDataProvider
#include "GlobalNamespace/OVRMesh_IOVRMeshDataProvider.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRMesh.get_IsInitialized
bool GlobalNamespace::OVRMesh::get_IsInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsInitialized"));
}
// Autogenerated method: OVRMesh.set_IsInitialized
void GlobalNamespace::OVRMesh::set_IsInitialized(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsInitialized", value));
}
// Autogenerated method: OVRMesh.get_Mesh
UnityEngine::Mesh* GlobalNamespace::OVRMesh::get_Mesh() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Mesh*>(this, "get_Mesh"));
}
// Autogenerated method: OVRMesh.Awake
void GlobalNamespace::OVRMesh::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: OVRMesh.Initialize
void GlobalNamespace::OVRMesh::Initialize(GlobalNamespace::OVRMesh::MeshType meshType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize", meshType));
}
// Autogenerated method: OVRMesh..ctor
GlobalNamespace::OVRMesh* GlobalNamespace::OVRMesh::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<OVRMesh*>());
}
