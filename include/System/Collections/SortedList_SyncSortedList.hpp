// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/SyncSortedList
  // [DefaultMemberAttribute] Offset: CAAF00
  class SortedList::SyncSortedList : public System::Collections::SortedList {
    public:
    // private System.Collections.SortedList _list
    // Size: 0x8
    // Offset: 0x48
    System::Collections::SortedList* list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // private System.Object _root
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* root;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: SyncSortedList
    SyncSortedList(System::Collections::SortedList* list_ = {}, ::Il2CppObject* root_ = {}) noexcept : list{list_}, root{root_} {}
    // System.Void .ctor(System.Collections.SortedList list)
    // Offset: 0x17EE0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::SyncSortedList* New_ctor(System::Collections::SortedList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::SyncSortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::SyncSortedList*, creationType>(list)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x17EED50
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Count()
    int get_Count();
    // public override System.Object get_SyncRoot()
    // Offset: 0x17EEE00
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x17EEE08
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x17EEEC0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x17EEF78
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Int32 get_Capacity()
    // Offset: 0x17EF030
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Capacity()
    int get_Capacity();
    // public override System.Object Clone()
    // Offset: 0x17EF0E0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::Clone()
    ::Il2CppObject* Clone();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x17EF190
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsValue(System.Object key)
    // Offset: 0x17EF248
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::ContainsValue(System.Object key)
    bool ContainsValue(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x17EF300
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // public override System.Object GetByIndex(System.Int32 index)
    // Offset: 0x17EF3B8
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetByIndex(System.Int32 index)
    ::Il2CppObject* GetByIndex(int index);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x17EF470
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IDictionaryEnumerator SortedList::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public override System.Object GetKey(System.Int32 index)
    // Offset: 0x17EF520
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetKey(System.Int32 index)
    ::Il2CppObject* GetKey(int index);
    // public override System.Collections.IList GetKeyList()
    // Offset: 0x17EF5D8
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetKeyList()
    System::Collections::IList* GetKeyList();
    // public override System.Collections.IList GetValueList()
    // Offset: 0x17EF688
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetValueList()
    System::Collections::IList* GetValueList();
    // public override System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x17EF738
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfKey(System.Object key)
    int IndexOfKey(::Il2CppObject* key);
    // public override System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x17EF878
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfValue(System.Object value)
    int IndexOfValue(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x17EF930
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
  }; // System.Collections.SortedList/SyncSortedList
  #pragma pack(pop)
  static check_size<sizeof(SortedList::SyncSortedList), 80 + sizeof(::Il2CppObject*)> __System_Collections_SortedList_SyncSortedListSizeCheck;
  static_assert(sizeof(SortedList::SyncSortedList) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
