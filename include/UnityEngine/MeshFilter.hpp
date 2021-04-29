// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MeshFilter
  // [RequireComponent] Offset: CB99CC
  // [NativeHeaderAttribute] Offset: CB99CC
  class MeshFilter : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: MeshFilter
    MeshFilter() noexcept {}
    // private System.Void DontStripMeshFilter()
    // Offset: 0x1AB3998
    void DontStripMeshFilter();
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x1AB399C
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x1AB39DC
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x1AB3A2C
    UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x1AB3A6C
    void set_mesh(UnityEngine::Mesh* value);
  }; // UnityEngine.MeshFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
