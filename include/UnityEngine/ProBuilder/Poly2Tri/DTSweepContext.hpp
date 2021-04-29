// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFront
  class AdvancingFront;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DTSweepBasin
  class DTSweepBasin;
  // Forward declaring type: DTSweepEdgeEvent
  class DTSweepEdgeEvent;
  // Forward declaring type: DTSweepPointComparator
  class DTSweepPointComparator;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
  class DTSweepContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
    public:
    // Writing base type padding for base size: 0x3D to desired offset: 0x40
    char ___base_padding[0x3] = {};
    // private readonly System.Single ALPHA
    // Size: 0x4
    // Offset: 0x40
    float ALPHA;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: ALPHA and: Front
    char __padding0[0x4] = {};
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFront Front
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22B04
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Head>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22B14
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Tail>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin Basin
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent EdgeEvent
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator _comparator
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* comparator;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*) == 0x8);
    // Creating value type constructor for type: DTSweepContext
    DTSweepContext(float ALPHA_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent_ = {}, UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* comparator_ = {}) noexcept : ALPHA{ALPHA_}, Front{Front_}, Head{Head_}, Tail{Tail_}, Basin{Basin_}, EdgeEvent{EdgeEvent_}, comparator{comparator_} {}
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Head()
    // Offset: 0x215AA38
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head();
    // public System.Void set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x215AA40
    void set_Head(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Tail()
    // Offset: 0x215AA48
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail();
    // public System.Void set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x215AA50
    void set_Tail(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x2157978
    void RemoveFromList(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x2157FEC
    void MeshClean(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // private System.Void MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x215ABC8
    void MeshCleanReq(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2158160
    void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public System.Void RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x215A434
    void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2157FF0
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public System.Void CreateAdvancingFront()
    // Offset: 0x2156664
    void CreateAdvancingFront();
    // public System.Void MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x21578A0
    void MapTriangleToNodes(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void FinalizeTriangulation()
    // Offset: 0x2157C38
    void FinalizeTriangulation();
    // public System.Void .ctor()
    // Offset: 0x215AA58
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepContext*, creationType>()));
    }
    // public override System.Boolean get_IsDebugEnabled()
    // Offset: 0x215ABC0
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Boolean TriangulationContext::get_IsDebugEnabled()
    bool get_IsDebugEnabled();
    // public override System.Void Clear()
    // Offset: 0x215ACF8
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::Clear()
    void Clear();
    // public override System.Void PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    // Offset: 0x215ADCC
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);
    // public override UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    // Offset: 0x215B158
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
  #pragma pack(pop)
  static check_size<sizeof(DTSweepContext), 112 + sizeof(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepContextSizeCheck;
  static_assert(sizeof(DTSweepContext) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
