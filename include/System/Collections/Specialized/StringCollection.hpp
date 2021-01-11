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
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D45AEC
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
    // Offset: 0x147F9D4
    ::Il2CppString* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.String value)
    // Offset: 0x147FA60
    void set_Item(int index, ::Il2CppString* value);
    // public System.Int32 Add(System.String value)
    // Offset: 0x147FAB0
    int Add(::Il2CppString* value);
    // public System.Boolean Contains(System.String value)
    // Offset: 0x147FAF8
    bool Contains(::Il2CppString* value);
    // public System.Void CopyTo(System.String[] array, System.Int32 index)
    // Offset: 0x147FB1C
    void CopyTo(::Array<::Il2CppString*>* array, int index);
    // public System.Int32 IndexOf(System.String value)
    // Offset: 0x147FB40
    int IndexOf(::Il2CppString* value);
    // public System.Void Insert(System.Int32 index, System.String value)
    // Offset: 0x147FB64
    void Insert(int index, ::Il2CppString* value);
    // public System.Void Remove(System.String value)
    // Offset: 0x147FB88
    void Remove(::Il2CppString* value);
    // public System.Int32 get_Count()
    // Offset: 0x147FA84
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x147FAA8
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Void Clear()
    // Offset: 0x147FAD4
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x147FBAC
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x147FBD0
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x147FBD4
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x147FC68
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x147FCF4
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object value)
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x147FD80
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x147FE0C
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x147FEA0
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object value)
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x147FF2C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x147FF50
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x147FF74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::StringCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringCollection*, creationType>()));
    }
  }; // System.Collections.Specialized.StringCollection
  static check_size<sizeof(StringCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Collections_Specialized_StringCollectionSizeCheck;
  static_assert(sizeof(StringCollection) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::StringCollection*, "System.Collections.Specialized", "StringCollection");
