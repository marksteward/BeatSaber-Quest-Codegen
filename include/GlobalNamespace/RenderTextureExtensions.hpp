// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RenderTextureExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class RenderTextureExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RenderTextureExtensions
    RenderTextureExtensions() noexcept {}
    // static public UnityEngine.Texture2D GetTexture2D(UnityEngine.RenderTexture rt)
    // Offset: 0x103C538
    static UnityEngine::Texture2D* GetTexture2D(UnityEngine::RenderTexture* rt);
  }; // RenderTextureExtensions
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RenderTextureExtensions*, "", "RenderTextureExtensions");
