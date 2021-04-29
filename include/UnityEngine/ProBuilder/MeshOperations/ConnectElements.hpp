// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ConnectFaceRebuildData
  class ConnectFaceRebuildData;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: Vertex
  class Vertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ConnectElements : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Creating value type constructor for type: ConnectElements
    ConnectElements() noexcept {}
    // static public UnityEngine.ProBuilder.Face[] Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x13B9014
    static ::Array<UnityEngine::ProBuilder::Face*>* Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face[],UnityEngine.ProBuilder.Edge[]> Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x13BA630
    static UnityEngine::ProBuilder::SimpleTuple_2<::Array<UnityEngine::ProBuilder::Face*>*, ::Array<UnityEngine::ProBuilder::Edge>*> Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public System.Int32[] Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x13BA6D0
    static ::Array<int>* Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.ProBuilder.ActionResult Connect(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, out UnityEngine.ProBuilder.Face[] addedFaces, out UnityEngine.ProBuilder.Edge[] connections, System.Boolean returnFaces, System.Boolean returnEdges, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> faceMask)
    // Offset: 0x13B9244
    static UnityEngine::ProBuilder::ActionResult* Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, ::Array<UnityEngine::ProBuilder::Face*>*& addedFaces, ::Array<UnityEngine::ProBuilder::Edge>*& connections, bool returnFaces, bool returnEdges, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* faceMask);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine.ProBuilder.Face face, UnityEngine.ProBuilder.WingedEdge a, UnityEngine.ProBuilder.WingedEdge b, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x13BCE68
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(UnityEngine::ProBuilder::Face* face, UnityEngine::ProBuilder::WingedEdge* a, UnityEngine::ProBuilder::WingedEdge* b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> edges, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x13BC748
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices);
    // static private System.Boolean InsertVertices(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> edges, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, out UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData data)
    // Offset: 0x13BC320
    static bool InsertVertices(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*& data);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine.ProBuilder.Face face, System.Int32 a, System.Int32 b, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x13BBC68
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(UnityEngine::ProBuilder::Face* face, int a, int b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine.ProBuilder.Face face, System.Collections.Generic.List`1<System.Int32> indexes, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Int32 sharedIndexOffset)
    // Offset: 0x13BB438
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<int>* indexes, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup, int sharedIndexOffset);
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectElements
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectElements*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements");
