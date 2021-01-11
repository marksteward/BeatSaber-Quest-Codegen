// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
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
  // Autogenerated type: UnityEngine.ParticleSystemRenderer
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D789EC
  // [NativeHeaderAttribute] Offset: D789EC
  // [NativeHeaderAttribute] Offset: D789EC
  // [NativeHeaderAttribute] Offset: D789EC
  class ParticleSystemRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: ParticleSystemRenderer
    ParticleSystemRenderer() noexcept {}
    // public System.Int32 GetMeshes(out UnityEngine.Mesh[] meshes)
    // Offset: 0x1A0071C
    int GetMeshes(::Array<UnityEngine::Mesh*>*& meshes);
  }; // UnityEngine.ParticleSystemRenderer
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
