// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge
  class WingedEdge : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c
    class $$c;
    // [CompilerGeneratedAttribute] Offset: 0xE3C8D0
    // private UnityEngine.ProBuilder.EdgeLookup <edge>k__BackingField
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::ProBuilder::EdgeLookup edge;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::EdgeLookup) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE3C8E0
    // private UnityEngine.ProBuilder.Face <face>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE3C8F0
    // private UnityEngine.ProBuilder.WingedEdge <next>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ProBuilder::WingedEdge* next;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE3C900
    // private UnityEngine.ProBuilder.WingedEdge <previous>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::WingedEdge* previous;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE3C910
    // private UnityEngine.ProBuilder.WingedEdge <opposite>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ProBuilder::WingedEdge* opposite;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // Creating value type constructor for type: WingedEdge
    WingedEdge(UnityEngine::ProBuilder::EdgeLookup edge_ = {}, UnityEngine::ProBuilder::Face* face_ = {}, UnityEngine::ProBuilder::WingedEdge* next_ = {}, UnityEngine::ProBuilder::WingedEdge* previous_ = {}, UnityEngine::ProBuilder::WingedEdge* opposite_ = {}) noexcept : edge{edge_}, face{face_}, next{next_}, previous{previous_}, opposite{opposite_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* _get_k_OppositeEdgeDictionary();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static void _set_k_OppositeEdgeDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* value);
    // public UnityEngine.ProBuilder.EdgeLookup get_edge()
    // Offset: 0x22C73E8
    UnityEngine::ProBuilder::EdgeLookup get_edge();
    // private System.Void set_edge(UnityEngine.ProBuilder.EdgeLookup value)
    // Offset: 0x22C73F4
    void set_edge(UnityEngine::ProBuilder::EdgeLookup value);
    // public UnityEngine.ProBuilder.Face get_face()
    // Offset: 0x22C73FC
    UnityEngine::ProBuilder::Face* get_face();
    // private System.Void set_face(UnityEngine.ProBuilder.Face value)
    // Offset: 0x22C7404
    void set_face(UnityEngine::ProBuilder::Face* value);
    // public UnityEngine.ProBuilder.WingedEdge get_next()
    // Offset: 0x22C740C
    UnityEngine::ProBuilder::WingedEdge* get_next();
    // private System.Void set_next(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x22C7414
    void set_next(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_previous()
    // Offset: 0x22C741C
    UnityEngine::ProBuilder::WingedEdge* get_previous();
    // private System.Void set_previous(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x22C7424
    void set_previous(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_opposite()
    // Offset: 0x22C742C
    UnityEngine::ProBuilder::WingedEdge* get_opposite();
    // private System.Void set_opposite(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x22C7434
    void set_opposite(UnityEngine::ProBuilder::WingedEdge* value);
    // public System.Boolean Equals(UnityEngine.ProBuilder.WingedEdge other)
    // Offset: 0x22C7444
    bool Equals(UnityEngine::ProBuilder::WingedEdge* other);
    // public System.Int32 Count()
    // Offset: 0x22C758C
    int Count();
    // static System.Int32[] MakeQuad(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right)
    // Offset: 0x22C7784
    static ::Array<int>* MakeQuad(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right);
    // public UnityEngine.ProBuilder.WingedEdge GetAdjacentEdgeWithCommonIndex(System.Int32 common)
    // Offset: 0x22C7BA0
    UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(int common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> SortEdgesByAdjacency(UnityEngine.ProBuilder.Face face)
    // Offset: 0x22C7C28
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(UnityEngine::ProBuilder::Face* face);
    // static public System.Void SortEdgesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x22C7D20
    static void SortEdgesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge>> GetSpokes(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0x22C7EE0
    static System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*>* GetSpokes(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static System.Collections.Generic.List`1<System.Int32> SortCommonIndexesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings, System.Collections.Generic.HashSet`1<System.Int32> common)
    // Offset: 0x22C81DC
    static System::Collections::Generic::List_1<int>* SortCommonIndexesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings, System::Collections::Generic::HashSet_1<int>* common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Boolean oneWingPerFace)
    // Offset: 0x22C847C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, bool oneWingPerFace);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean oneWingPerFace)
    // Offset: 0x22BBC04
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool oneWingPerFace);
    // static private System.Void .cctor()
    // Offset: 0x22C8570
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x22C743C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::WingedEdge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdge*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x22C7488
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x22C7560
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x22C75C0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.WingedEdge
  #pragma pack(pop)
  static check_size<sizeof(WingedEdge), 56 + sizeof(UnityEngine::ProBuilder::WingedEdge*)> __UnityEngine_ProBuilder_WingedEdgeSizeCheck;
  static_assert(sizeof(WingedEdge) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge*, "UnityEngine.ProBuilder", "WingedEdge");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_edge
// Il2CppName: get_edge
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_edge
// Il2CppName: set_edge
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_face
// Il2CppName: get_face
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_face
// Il2CppName: set_face
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_next
// Il2CppName: get_next
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_next
// Il2CppName: set_next
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_previous
// Il2CppName: get_previous
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_previous
// Il2CppName: set_previous
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::get_opposite
// Il2CppName: get_opposite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::set_opposite
// Il2CppName: set_opposite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Count
// Il2CppName: Count
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::MakeQuad
// Il2CppName: MakeQuad
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex
// Il2CppName: GetAdjacentEdgeWithCommonIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency
// Il2CppName: SortEdgesByAdjacency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency
// Il2CppName: SortEdgesByAdjacency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetSpokes
// Il2CppName: GetSpokes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency
// Il2CppName: SortCommonIndexesByAdjacency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetWingedEdges
// Il2CppName: GetWingedEdges
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetWingedEdges
// Il2CppName: GetWingedEdges
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
