// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineAsset
  // [] Offset: FFFFFFFF
  class RenderPipelineAsset : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: RenderPipelineAsset
    RenderPipelineAsset() noexcept {}
    // UnityEngine.Rendering.RenderPipeline InternalCreatePipeline()
    // Offset: 0x16BC79C
    UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();
    // public System.String[] get_renderingLayerMaskNames()
    // Offset: 0x16BCA8C
    ::Array<::Il2CppString*>* get_renderingLayerMaskNames();
    // public UnityEngine.Material get_defaultMaterial()
    // Offset: 0x16BCA94
    UnityEngine::Material* get_defaultMaterial();
    // public UnityEngine.Shader get_autodeskInteractiveShader()
    // Offset: 0x16BCA9C
    UnityEngine::Shader* get_autodeskInteractiveShader();
    // public UnityEngine.Shader get_autodeskInteractiveTransparentShader()
    // Offset: 0x16BCAA4
    UnityEngine::Shader* get_autodeskInteractiveTransparentShader();
    // public UnityEngine.Shader get_autodeskInteractiveMaskedShader()
    // Offset: 0x16BCAAC
    UnityEngine::Shader* get_autodeskInteractiveMaskedShader();
    // public UnityEngine.Shader get_terrainDetailLitShader()
    // Offset: 0x16BCAB4
    UnityEngine::Shader* get_terrainDetailLitShader();
    // public UnityEngine.Shader get_terrainDetailGrassShader()
    // Offset: 0x16BCABC
    UnityEngine::Shader* get_terrainDetailGrassShader();
    // public UnityEngine.Shader get_terrainDetailGrassBillboardShader()
    // Offset: 0x16BCAC4
    UnityEngine::Shader* get_terrainDetailGrassBillboardShader();
    // public UnityEngine.Material get_defaultParticleMaterial()
    // Offset: 0x16BCACC
    UnityEngine::Material* get_defaultParticleMaterial();
    // public UnityEngine.Material get_defaultLineMaterial()
    // Offset: 0x16BCAD4
    UnityEngine::Material* get_defaultLineMaterial();
    // public UnityEngine.Material get_defaultTerrainMaterial()
    // Offset: 0x16BCADC
    UnityEngine::Material* get_defaultTerrainMaterial();
    // public UnityEngine.Material get_defaultUIMaterial()
    // Offset: 0x16BCAE4
    UnityEngine::Material* get_defaultUIMaterial();
    // public UnityEngine.Material get_defaultUIOverdrawMaterial()
    // Offset: 0x16BCAEC
    UnityEngine::Material* get_defaultUIOverdrawMaterial();
    // public UnityEngine.Material get_defaultUIETC1SupportedMaterial()
    // Offset: 0x16BCAF4
    UnityEngine::Material* get_defaultUIETC1SupportedMaterial();
    // public UnityEngine.Material get_default2DMaterial()
    // Offset: 0x16BCAFC
    UnityEngine::Material* get_default2DMaterial();
    // public UnityEngine.Shader get_defaultShader()
    // Offset: 0x16BCB04
    UnityEngine::Shader* get_defaultShader();
    // public UnityEngine.Shader get_defaultSpeedTree7Shader()
    // Offset: 0x16BCB0C
    UnityEngine::Shader* get_defaultSpeedTree7Shader();
    // public UnityEngine.Shader get_defaultSpeedTree8Shader()
    // Offset: 0x16BCB14
    UnityEngine::Shader* get_defaultSpeedTree8Shader();
    // protected UnityEngine.Rendering.RenderPipeline CreatePipeline()
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::RenderPipeline* CreatePipeline();
    // protected System.Void OnValidate()
    // Offset: 0x16BCB1C
    void OnValidate();
    // protected System.Void OnDisable()
    // Offset: 0x16BCDC4
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0x16BCE20
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderPipelineAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rendering::RenderPipelineAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderPipelineAsset*, creationType>()));
    }
  }; // UnityEngine.Rendering.RenderPipelineAsset
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
