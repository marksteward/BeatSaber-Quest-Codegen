// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EdgeUtility
#include "UnityEngine/ProBuilder/EdgeUtility.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EdgeUtility/<>c__DisplayClass0_0
  class EdgeUtility::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Offset: 0x10
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Creating conversion operator: operator UnityEngine::ProBuilder::ProBuilderMesh*
    constexpr operator UnityEngine::ProBuilder::ProBuilderMesh*() const {
      return mesh;
    }
    // UnityEngine.ProBuilder.Edge <GetSharedVertexHandleEdges>b__0(UnityEngine.ProBuilder.Edge x)
    // Offset: 0xF930C4
    UnityEngine::ProBuilder::Edge $GetSharedVertexHandleEdges$b__0(UnityEngine::ProBuilder::Edge x);
    // public System.Void .ctor()
    // Offset: 0xF9282C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EdgeUtility::$$c__DisplayClass0_0* New_ctor();
  }; // UnityEngine.ProBuilder.EdgeUtility/<>c__DisplayClass0_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeUtility::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder", "EdgeUtility/<>c__DisplayClass0_0");
#pragma pack(pop)
