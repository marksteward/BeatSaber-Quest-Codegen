// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D3C744
  class EmptyReadOnlyDictionaryInternal : public ::Il2CppObject/*, public System::Collections::IDictionary*/ {
    public:
    // Nested type: System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator
    class NodeEnumerator;
    // Creating value type constructor for type: EmptyReadOnlyDictionaryInternal
    EmptyReadOnlyDictionaryInternal() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1CB5734
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::EmptyReadOnlyDictionaryInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal*, creationType>()));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1CB573C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1CB57A0
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Int32 get_Count()
    // Offset: 0x1CB5928
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1CB5930
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1CB59D0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1CB5B78
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x1CB5BE0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1CB5BE8
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1CB5D90
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
  }; // System.Collections.EmptyReadOnlyDictionaryInternal
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Collections::EmptyReadOnlyDictionaryInternal*, "System.Collections", "EmptyReadOnlyDictionaryInternal");
