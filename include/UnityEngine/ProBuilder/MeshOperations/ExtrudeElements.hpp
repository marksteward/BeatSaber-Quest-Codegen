// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: ExtrudeMethod
  struct ExtrudeMethod;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExtrudeElements : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c
    class $$c;
    // Creating value type constructor for type: ExtrudeElements
    ExtrudeElements() noexcept {}
    // static public UnityEngine.ProBuilder.Face[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.ProBuilder.ExtrudeMethod method, System.Single distance)
    // Offset: 0x13C34C4
    static ::Array<UnityEngine::ProBuilder::Face*>* Extrude(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, UnityEngine::ProBuilder::ExtrudeMethod method, float distance);
    // static public UnityEngine.ProBuilder.Edge[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Single distance, System.Boolean extrudeAsGroup, System.Boolean enableManifoldExtrude)
    // Offset: 0x13C55DC
    static ::Array<UnityEngine::ProBuilder::Edge>* Extrude(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, float distance, bool extrudeAsGroup, bool enableManifoldExtrude);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x13C654C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean deleteSourceFaces)
    // Offset: 0x13C6554
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool deleteSourceFaces);
    // static private UnityEngine.ProBuilder.Face[] ExtrudePerFace(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single distance)
    // Offset: 0x13C34D8
    static ::Array<UnityEngine::ProBuilder::Face*>* ExtrudePerFace(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, float distance);
    // static private UnityEngine.ProBuilder.Face[] ExtrudeAsGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean compensateAngleVertexDistance, System.Single distance)
    // Offset: 0x13C3F6C
    static ::Array<UnityEngine::ProBuilder::Face*>* ExtrudeAsGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool compensateAngleVertexDistance, float distance);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> GetFaceGroups(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0x13C6DB8
    static System::Collections::Generic::List_1<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>* GetFaceGroups(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static private System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,UnityEngine.ProBuilder.Face> GetPerimeterEdges(System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x13C70F4
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, UnityEngine::ProBuilder::Face*>* GetPerimeterEdges(System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* lookup);
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements");
