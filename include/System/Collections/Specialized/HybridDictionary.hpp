// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: ListDictionary
  class ListDictionary;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
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
  // Size: 0x21
  // Autogenerated type: System.Collections.Specialized.HybridDictionary
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D45A44
  class HybridDictionary : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // private System.Collections.Specialized.ListDictionary list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary* list;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::ListDictionary*) == 0x8);
    // private System.Collections.Hashtable hashtable
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x20
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HybridDictionary
    HybridDictionary(System::Collections::Specialized::ListDictionary* list_ = {}, System::Collections::Hashtable* hashtable_ = {}, bool caseInsensitive_ = {}) noexcept : list{list_}, hashtable{hashtable_}, caseInsensitive{caseInsensitive_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // private System.Collections.Specialized.ListDictionary get_List()
    // Offset: 0x147BB34
    System::Collections::Specialized::ListDictionary* get_List();
    // private System.Void ChangeOver()
    // Offset: 0x147B644
    void ChangeOver();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x147BD8C
    System::Collections::ICollection* get_Values();
    // public System.Void .ctor()
    // Offset: 0x147B264
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HybridDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::HybridDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HybridDictionary*, creationType>()));
    }
    // public System.Object get_Item(System.Object key)
    // Offset: 0x147B26C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x147B4C8
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Count()
    // Offset: 0x147BCA0
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x147BCD4
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x147BE40
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x147C1DC
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x147C424
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x147C614
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x147C74C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.Specialized.HybridDictionary
  static check_size<sizeof(HybridDictionary), 32 + sizeof(bool)> __System_Collections_Specialized_HybridDictionarySizeCheck;
  static_assert(sizeof(HybridDictionary) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::HybridDictionary*, "System.Collections.Specialized", "HybridDictionary");
#pragma pack(pop)
