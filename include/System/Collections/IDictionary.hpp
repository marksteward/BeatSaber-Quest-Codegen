// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IDictionary
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D3C8AC
  // [ComVisibleAttribute] Offset: D3C8AC
  class IDictionary/*, public System::Collections::ICollection*/ {
    public:
    // Creating value type constructor for type: IDictionary
    IDictionary() noexcept {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // public System.Object get_Item(System.Object key)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFF
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0xFFFFFFFF
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFF
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
  }; // System.Collections.IDictionary
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IDictionary*, "System.Collections", "IDictionary");
