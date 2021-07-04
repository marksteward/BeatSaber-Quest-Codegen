// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
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
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SceneSelection
  // [EditorBrowsableAttribute] Offset: E3A128
  class SceneSelection : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*/ {
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_Vertices
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<int>* m_Vertices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> m_Edges
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* m_Edges;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> m_Faces
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* m_Faces;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xE3C44C
    // public System.Int32 vertex
    // Size: 0x4
    // Offset: 0x38
    int vertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [ObsoleteAttribute] Offset: 0xE3C484
    // public UnityEngine.ProBuilder.Edge edge
    // Size: 0x8
    // Offset: 0x3C
    UnityEngine::ProBuilder::Edge edge;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Edge) == 0x8);
    // Padding between fields: edge and: face
    char __padding6[0x4] = {};
    // [ObsoleteAttribute] Offset: 0xE3C4BC
    // public UnityEngine.ProBuilder.Face face
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // Creating value type constructor for type: SceneSelection
    SceneSelection(UnityEngine::GameObject* gameObject_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}, System::Collections::Generic::List_1<int>* m_Vertices_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* m_Edges_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* m_Faces_ = {}, int vertex_ = {}, UnityEngine::ProBuilder::Edge edge_ = {}, UnityEngine::ProBuilder::Face* face_ = {}) noexcept : gameObject{gameObject_}, mesh{mesh_}, m_Vertices{m_Vertices_}, m_Edges{m_Edges_}, m_Faces{m_Faces_}, vertex{vertex_}, edge{edge_}, face{face_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*>(this);
    }
    // public System.Collections.Generic.List`1<System.Int32> get_vertexes()
    // Offset: 0x14E5CF8
    System::Collections::Generic::List_1<int>* get_vertexes();
    // public System.Void set_vertexes(System.Collections.Generic.List`1<System.Int32> value)
    // Offset: 0x14E5D00
    void set_vertexes(System::Collections::Generic::List_1<int>* value);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> get_edges()
    // Offset: 0x14E5D08
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* get_edges();
    // public System.Void set_edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> value)
    // Offset: 0x14E5D10
    void set_edges(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* value);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> get_faces()
    // Offset: 0x14E5D18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* get_faces();
    // public System.Void set_faces(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> value)
    // Offset: 0x14E5D20
    void set_faces(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* value);
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x14E5D28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(gameObject)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x14E5DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, vertex)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x14E5F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, edge)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x14E613C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, face)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> vertexes)
    // Offset: 0x14E5E9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<int>* vertexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, vertexes)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x14E603C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* edges) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, edges)));
    }
    // System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x14E61DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, faces)));
    }
    // public System.Void SetSingleFace(UnityEngine.ProBuilder.Face face)
    // Offset: 0x14E62DC
    void SetSingleFace(UnityEngine::ProBuilder::Face* face);
    // public System.Void SetSingleVertex(System.Int32 vertex)
    // Offset: 0x14E635C
    void SetSingleVertex(int vertex);
    // public System.Void SetSingleEdge(UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x14E63DC
    void SetSingleEdge(UnityEngine::ProBuilder::Edge edge);
    // public System.Void Clear()
    // Offset: 0x14E645C
    void Clear();
    // public System.Void CopyTo(UnityEngine.ProBuilder.SceneSelection dst)
    // Offset: 0x14E64E8
    void CopyTo(UnityEngine::ProBuilder::SceneSelection* dst);
    // public System.Boolean Equals(UnityEngine.ProBuilder.SceneSelection other)
    // Offset: 0x14E69F4
    bool Equals(UnityEngine::ProBuilder::SceneSelection* other);
    // public override System.String ToString()
    // Offset: 0x14E67E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14E6ADC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14E6BEC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.SceneSelection
  #pragma pack(pop)
  static check_size<sizeof(SceneSelection), 72 + sizeof(UnityEngine::ProBuilder::Face*)> __UnityEngine_ProBuilder_SceneSelectionSizeCheck;
  static_assert(sizeof(SceneSelection) == 0x50);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x14E6D5C
  bool operator ==(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x14E6D64
  bool operator !=(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SceneSelection*, "UnityEngine.ProBuilder", "SceneSelection");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_vertexes
// Il2CppName: get_vertexes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_vertexes
// Il2CppName: set_vertexes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_edges
// Il2CppName: get_edges
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_edges
// Il2CppName: set_edges
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::get_faces
// Il2CppName: get_faces
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::set_faces
// Il2CppName: set_faces
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleFace
// Il2CppName: SetSingleFace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleVertex
// Il2CppName: SetSingleVertex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::SetSingleEdge
// Il2CppName: SetSingleEdge
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Clear
// Il2CppName: Clear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::CopyTo
// Il2CppName: CopyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SceneSelection::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
