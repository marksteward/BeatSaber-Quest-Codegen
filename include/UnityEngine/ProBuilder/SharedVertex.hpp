// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SharedVertex
  // [DefaultMemberAttribute] Offset: E3A13C
  class SharedVertex : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<int>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::SharedVertex::$$c
    class $$c;
    // [FormerlySerializedAsAttribute] Offset: 0xE3C564
    // [FormerlySerializedAsAttribute] Offset: 0xE3C564
    // private System.Int32[] m_Vertices
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* m_Vertices;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: SharedVertex
    SharedVertex(::Array<int>* m_Vertices_ = {}) noexcept : m_Vertices{m_Vertices_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<int>
    operator System::Collections::Generic::ICollection_1<int>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<int>*>(this);
    }
    // Creating conversion operator: operator ::Array<int>*
    constexpr operator ::Array<int>*() const noexcept {
      return m_Vertices;
    }
    // System.Int32[] get_arrayInternal()
    // Offset: 0x22B990C
    ::Array<int>* get_arrayInternal();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x22B9914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedVertex* New_ctor(System::Collections::Generic::IEnumerable_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SharedVertex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedVertex*, creationType>(indexes)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.SharedVertex sharedVertex)
    // Offset: 0x22B99C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedVertex* New_ctor(UnityEngine::ProBuilder::SharedVertex* sharedVertex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SharedVertex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedVertex*, creationType>(sharedVertex)));
    }
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x22B9AB0
    int get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Int32 value)
    // Offset: 0x22B9AEC
    void set_Item(int i, int value);
    // public System.Collections.Generic.IEnumerator`1<System.Int32> GetEnumerator()
    // Offset: 0x22B9B28
    System::Collections::Generic::IEnumerator_1<int>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x22B9C34
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Add(System.Int32 item)
    // Offset: 0x22B9C38
    void Add(int item);
    // public System.Void Clear()
    // Offset: 0x22B9CA0
    void Clear();
    // public System.Boolean Contains(System.Int32 item)
    // Offset: 0x22B9CF8
    bool Contains(int item);
    // public System.Void CopyTo(System.Int32[] array, System.Int32 arrayIndex)
    // Offset: 0x22B9D64
    void CopyTo(::Array<int>* array, int arrayIndex);
    // public System.Boolean Remove(System.Int32 item)
    // Offset: 0x22B9D80
    bool Remove(int item);
    // public System.Int32 get_Count()
    // Offset: 0x22B9A94
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x22B9E10
    bool get_IsReadOnly();
    // static public System.Void GetSharedVertexLookup(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x22B9E2C
    static void GetSharedVertexLookup(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // System.Void ShiftIndexes(System.Int32 offset)
    // Offset: 0x22BA1A8
    void ShiftIndexes(int offset);
    // static UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> lookup)
    // Offset: 0x22BA214
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int, int>>* lookup);
    // static private UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> list)
    // Offset: 0x22BA668
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::List_1<System::Collections::Generic::List_1<int>*>* list);
    // static public UnityEngine.ProBuilder.SharedVertex[] GetSharedVerticesWithPositions(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions)
    // Offset: 0x22BA7C4
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions);
    // static UnityEngine.ProBuilder.SharedVertex[] RemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> remove)
    // Offset: 0x22BAC1C
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::IEnumerable_1<int>* remove);
    // static UnityEngine.ProBuilder.SharedVertex[] SortedRemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.List`1<System.Int32> remove)
    // Offset: 0x22BACB4
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::List_1<int>* remove);
    // static System.Void SetCoincident(ref System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x22BAF9C
    static void SetCoincident(System::Collections::Generic::Dictionary_2<int, int>*& lookup, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // public override System.String ToString()
    // Offset: 0x22B9BD8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.SharedVertex
  #pragma pack(pop)
  static check_size<sizeof(SharedVertex), 16 + sizeof(::Array<int>*)> __UnityEngine_ProBuilder_SharedVertexSizeCheck;
  static_assert(sizeof(SharedVertex) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex*, "UnityEngine.ProBuilder", "SharedVertex");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_arrayInternal
// Il2CppName: get_arrayInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_Item
// Il2CppName: get_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::set_Item
// Il2CppName: set_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetEnumerator
// Il2CppName: GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Clear
// Il2CppName: Clear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Contains
// Il2CppName: Contains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::CopyTo
// Il2CppName: CopyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::Remove
// Il2CppName: Remove
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_Count
// Il2CppName: get_Count
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::get_IsReadOnly
// Il2CppName: get_IsReadOnly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetSharedVertexLookup
// Il2CppName: GetSharedVertexLookup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ShiftIndexes
// Il2CppName: ShiftIndexes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToSharedVertices
// Il2CppName: ToSharedVertices
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToSharedVertices
// Il2CppName: ToSharedVertices
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::GetSharedVerticesWithPositions
// Il2CppName: GetSharedVerticesWithPositions
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::RemoveAndShift
// Il2CppName: RemoveAndShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::SortedRemoveAndShift
// Il2CppName: SortedRemoveAndShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::SetCoincident
// Il2CppName: SetCoincident
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
