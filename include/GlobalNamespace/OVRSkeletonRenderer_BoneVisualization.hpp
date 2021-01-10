// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: OVRSkeletonRenderer/BoneVisualization
  // [] Offset: FFFFFFFF
  class OVRSkeletonRenderer::BoneVisualization : public ::Il2CppObject {
    public:
    // private UnityEngine.GameObject BoneGO
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* BoneGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Transform BoneBegin
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* BoneBegin;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform BoneEnd
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* BoneEnd;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.LineRenderer Line
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::LineRenderer* Line;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.Material RenderMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* RenderMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material SystemGestureMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* SystemGestureMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BoneVisualization
    BoneVisualization(UnityEngine::GameObject* BoneGO_ = {}, UnityEngine::Transform* BoneBegin_ = {}, UnityEngine::Transform* BoneEnd_ = {}, UnityEngine::LineRenderer* Line_ = {}, UnityEngine::Material* RenderMaterial_ = {}, UnityEngine::Material* SystemGestureMaterial_ = {}) noexcept : BoneGO{BoneGO_}, BoneBegin{BoneBegin_}, BoneEnd{BoneEnd_}, Line{Line_}, RenderMaterial{RenderMaterial_}, SystemGestureMaterial{SystemGestureMaterial_} {}
    // public System.Void .ctor(UnityEngine.GameObject rootGO, UnityEngine.Material renderMat, UnityEngine.Material systemGestureMat, System.Single scale, UnityEngine.Transform begin, UnityEngine.Transform end)
    // Offset: 0x1978A64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeletonRenderer::BoneVisualization* New_ctor(UnityEngine::GameObject* rootGO, UnityEngine::Material* renderMat, UnityEngine::Material* systemGestureMat, float scale, UnityEngine::Transform* begin, UnityEngine::Transform* end) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeletonRenderer::BoneVisualization*, creationType>(rootGO, renderMat, systemGestureMat, scale, begin, end)));
    }
    // public System.Void Update(System.Single scale, System.Boolean shouldRender, System.Boolean shouldUseSystemGestureMaterial, OVRSkeletonRenderer/ConfidenceBehavior confidenceBehavior, OVRSkeletonRenderer/SystemGestureBehavior systemGestureBehavior)
    // Offset: 0x197906C
    void Update(float scale, bool shouldRender, bool shouldUseSystemGestureMaterial, GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior, GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior);
  }; // OVRSkeletonRenderer/BoneVisualization
  static check_size<sizeof(OVRSkeletonRenderer::BoneVisualization), 56 + sizeof(UnityEngine::Material*)> __GlobalNamespace_OVRSkeletonRenderer_BoneVisualizationSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer::BoneVisualization) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*, "", "OVRSkeletonRenderer/BoneVisualization");
#pragma pack(pop)
