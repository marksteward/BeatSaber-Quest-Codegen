// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
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
  // Autogenerated type: System.Collections.Specialized.ListDictionary
  class ListDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Nested type: System::Collections::Specialized::ListDictionary::NodeEnumerator
    class NodeEnumerator;
    // Nested type: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection
    class NodeKeyValueCollection;
    // Nested type: System::Collections::Specialized::ListDictionary::DictionaryNode
    class DictionaryNode;
    // private System.Collections.Specialized.ListDictionary/DictionaryNode head
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary::DictionaryNode* head;
    // private System.Int32 version
    // Offset: 0x18
    int version;
    // private System.Int32 count
    // Offset: 0x1C
    int count;
    // private System.Collections.IComparer comparer
    // Offset: 0x20
    System::Collections::IComparer* comparer;
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x14DCF20
    static ListDictionary* New_ctor(System::Collections::IComparer* comparer);
    // public System.Collections.ICollection get_Values()
    // Offset: 0x14DD1EC
    System::Collections::ICollection* get_Values();
    // public System.Void .ctor()
    // Offset: 0x14DDCA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ListDictionary* New_ctor();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x14DC770
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x14DCD10
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Count()
    // Offset: 0x14DDCB4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x14DD134
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x14DD3E0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x14DD6E0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x14DD8A8
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x14DD060
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14DDD64
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.Specialized.ListDictionary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
#pragma pack(pop)
