// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IMaterialModifier
  class IMaterialModifier {
    public:
    // Creating value type constructor for type: IMaterialModifier
    IMaterialModifier() noexcept {}
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0xFFFFFFFF
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
  }; // UnityEngine.UI.IMaterialModifier
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMaterialModifier*, "UnityEngine.UI", "IMaterialModifier");
// Writing MetadataGetter for method: UnityEngine::UI::IMaterialModifier::GetModifiedMaterial
// Il2CppName: GetModifiedMaterial
// Cannot perform method pointer template specialization from operators!
