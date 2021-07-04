// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.StringCollection
  // [DefaultMemberAttribute] Offset: D882E4
  class StringCollection : public ::Il2CppObject/*, public System::Collections::IList*/ {
    public:
    // private System.Collections.ArrayList data
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* data;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: StringCollection
    StringCollection(System::Collections::ArrayList* data_ = {}) noexcept : data{data_} {}
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return data;
    }
    // public System.String get_Item(System.Int32 index)
    // Offset: 0x1865F04
    ::Il2CppString* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.String value)
    // Offset: 0x1865F90
    void set_Item(int index, ::Il2CppString* value);
    // public System.Int32 get_Count()
    // Offset: 0x1865FB4
    int get_Count();
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x1865FD8
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Int32 Add(System.String value)
    // Offset: 0x1865FE0
    int Add(::Il2CppString* value);
    // public System.Void Clear()
    // Offset: 0x1866004
    void Clear();
    // public System.Boolean Contains(System.String value)
    // Offset: 0x1866028
    bool Contains(::Il2CppString* value);
    // public System.Void CopyTo(System.String[] array, System.Int32 index)
    // Offset: 0x186604C
    void CopyTo(::Array<::Il2CppString*>* array, int index);
    // public System.Int32 IndexOf(System.String value)
    // Offset: 0x1866070
    int IndexOf(::Il2CppString* value);
    // public System.Void Insert(System.Int32 index, System.String value)
    // Offset: 0x1866094
    void Insert(int index, ::Il2CppString* value);
    // public System.Void Remove(System.String value)
    // Offset: 0x18660B8
    void Remove(::Il2CppString* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x18660DC
    void RemoveAt(int index);
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x1866100
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1866104
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x1866198
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x1866224
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x18662B0
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x186633C
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x18663D0
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x186645C
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1866480
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x18664A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::StringCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringCollection*, creationType>()));
    }
  }; // System.Collections.Specialized.StringCollection
  #pragma pack(pop)
  static check_size<sizeof(StringCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Collections_Specialized_StringCollectionSizeCheck;
  static_assert(sizeof(StringCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::StringCollection*, "System.Collections.Specialized", "StringCollection");
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::get_Item
// Il2CppName: get_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::set_Item
// Il2CppName: set_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::get_Count
// Il2CppName: get_Count
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Clear
// Il2CppName: Clear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Contains
// Il2CppName: Contains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::CopyTo
// Il2CppName: CopyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::IndexOf
// Il2CppName: IndexOf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Insert
// Il2CppName: Insert
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Remove
// Il2CppName: Remove
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::RemoveAt
// Il2CppName: RemoveAt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Contains
// Il2CppName: System.Collections.IList.Contains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_IndexOf
// Il2CppName: System.Collections.IList.IndexOf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
