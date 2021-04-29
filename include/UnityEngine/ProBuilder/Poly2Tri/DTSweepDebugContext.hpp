// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationDebugContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
  class DTSweepDebugContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext {
    public:
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _primaryTriangle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* primaryTriangle;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _secondaryTriangle
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* secondaryTriangle;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint _activePoint
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* activePoint;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode _activeNode
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* activeNode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint _activeConstraint
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* activeConstraint;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*) == 0x8);
    // Creating value type constructor for type: DTSweepDebugContext
    DTSweepDebugContext(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* primaryTriangle_ = {}, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* secondaryTriangle_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* activePoint_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* activeNode_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* activeConstraint_ = {}) noexcept : primaryTriangle{primaryTriangle_}, secondaryTriangle{secondaryTriangle_}, activePoint{activePoint_}, activeNode{activeNode_}, activeConstraint{activeConstraint_} {}
    // Deleting conversion operator: operator UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*
    constexpr operator UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*() const noexcept = delete;
    // public System.Void set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x2158758
    void set_PrimaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x2159970
    void set_SecondaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x215B1C8
    void set_ActivePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode value)
    // Offset: 0x2157D14
    void set_ActiveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);
    // public System.Void set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint value)
    // Offset: 0x2156F1C
    void set_ActiveConstraint(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);
    // public override System.Void Clear()
    // Offset: 0x215B224
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
    // Base method: System.Void TriangulationDebugContext::Clear()
    void Clear();
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
  #pragma pack(pop)
  static check_size<sizeof(DTSweepDebugContext), 56 + sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepDebugContextSizeCheck;
  static_assert(sizeof(DTSweepDebugContext) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepDebugContext");
