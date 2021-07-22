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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Offset: 0x236B028
    void set_PrimaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x236C240
    void set_SecondaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x236DA98
    void set_ActivePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode value)
    // Offset: 0x236A5E4
    void set_ActiveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);
    // public System.Void set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint value)
    // Offset: 0x23697EC
    void set_ActiveConstraint(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);
    // public override System.Void Clear()
    // Offset: 0x236DAF4
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle
// Il2CppName: set_PrimaryTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_PrimaryTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle
// Il2CppName: set_SecondaryTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_SecondaryTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActivePoint
// Il2CppName: set_ActivePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActivePoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActivePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveNode
// Il2CppName: set_ActiveNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActiveNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint
// Il2CppName: set_ActiveConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActiveConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
