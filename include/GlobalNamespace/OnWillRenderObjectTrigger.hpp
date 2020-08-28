// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OnWillRenderObjectTrigger
  class OnWillRenderObjectTrigger : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Shader _overrideShader
    // Offset: 0x18
    UnityEngine::Shader* overrideShader;
    // private System.Int32 _renderQueue
    // Offset: 0x20
    int renderQueue;
    // private UnityEngine.Material _material
    // Offset: 0x28
    UnityEngine::Material* material;
    // private UnityEngine.Mesh _mesh
    // Offset: 0x30
    UnityEngine::Mesh* mesh;
    // private UnityEngine.MeshFilter _meshFilter
    // Offset: 0x38
    UnityEngine::MeshFilter* meshFilter;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x40
    UnityEngine::MeshRenderer* meshRenderer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void OnEnable()
    // Offset: 0x182D3B0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x182D7FC
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x182D850
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OnWillRenderObjectTrigger* New_ctor();
  }; // OnWillRenderObjectTrigger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnWillRenderObjectTrigger*, "", "OnWillRenderObjectTrigger");
#pragma pack(pop)
