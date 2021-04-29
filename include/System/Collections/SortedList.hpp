// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList
  // [DebuggerDisplayAttribute] Offset: CAAE40
  // [DefaultMemberAttribute] Offset: CAAE40
  // [ComVisibleAttribute] Offset: CAAE40
  // [DebuggerTypeProxyAttribute] Offset: CAAE40
  class SortedList : public ::Il2CppObject/*, public System::Collections::IDictionary, public System::ICloneable*/ {
    public:
    // Nested type: System::Collections::SortedList::SyncSortedList
    class SyncSortedList;
    // Nested type: System::Collections::SortedList::SortedListEnumerator
    class SortedListEnumerator;
    // Nested type: System::Collections::SortedList::KeyList
    class KeyList;
    // Nested type: System::Collections::SortedList::ValueList
    class ValueList;
    // Nested type: System::Collections::SortedList::SortedListDebugView
    class SortedListDebugView;
    // private System.Object[] keys
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* keys;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object[] values
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* values;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x24
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x28
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // private System.Collections.SortedList/KeyList keyList
    // Size: 0x8
    // Offset: 0x30
    System::Collections::SortedList::KeyList* keyList;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList::KeyList*) == 0x8);
    // private System.Collections.SortedList/ValueList valueList
    // Size: 0x8
    // Offset: 0x38
    System::Collections::SortedList::ValueList* valueList;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList::ValueList*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: SortedList
    SortedList(::Array<::Il2CppObject*>* keys_ = {}, ::Array<::Il2CppObject*>* values_ = {}, int size_ = {}, int version_ = {}, System::Collections::IComparer* comparer_ = {}, System::Collections::SortedList::KeyList* keyList_ = {}, System::Collections::SortedList::ValueList* valueList_ = {}, ::Il2CppObject* syncRoot_ = {}) noexcept : keys{keys_}, values{values_}, size{size_}, version{version_}, comparer{comparer_}, keyList{keyList_}, valueList{valueList_}, syncRoot{syncRoot_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // static field const value: static private System.Int32 _defaultCapacity
    static constexpr const int _defaultCapacity = 16;
    // Get static field: static private System.Int32 _defaultCapacity
    static int _get__defaultCapacity();
    // Set static field: static private System.Int32 _defaultCapacity
    static void _set__defaultCapacity(int value);
    // Get static field: static private System.Object[] emptyArray
    static ::Array<::Il2CppObject*>* _get_emptyArray();
    // Set static field: static private System.Object[] emptyArray
    static void _set_emptyArray(::Array<::Il2CppObject*>* value);
    // private System.Void Init()
    // Offset: 0x17ECBE8
    void Init();
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x17ECCC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(initialCapacity)));
    }
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x17ECDF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(comparer)));
    }
    // public System.Void .ctor(System.Collections.IComparer comparer, System.Int32 capacity)
    // Offset: 0x17ECE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor(System::Collections::IComparer* comparer, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>(comparer, capacity)));
    }
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x17ECE68
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Capacity()
    // Offset: 0x17ED14C
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x17ED168
    void set_Capacity(int value);
    // public System.Int32 get_Count()
    // Offset: 0x17ED30C
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x17ED314
    System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0x17ED324
    System::Collections::ICollection* get_Values();
    // public System.Object get_SyncRoot()
    // Offset: 0x17ED334
    ::Il2CppObject* get_SyncRoot();
    // public System.Object Clone()
    // Offset: 0x17ED3AC
    ::Il2CppObject* Clone();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x17ED470
    bool Contains(::Il2CppObject* key);
    // public System.Boolean ContainsValue(System.Object value)
    // Offset: 0x17ED498
    bool ContainsValue(::Il2CppObject* value);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x17ED4C0
    void CopyTo(System::Array* array, int arrayIndex);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0x17ED730
    void EnsureCapacity(int min);
    // public System.Object GetByIndex(System.Int32 index)
    // Offset: 0x17ED77C
    ::Il2CppObject* GetByIndex(int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x17ED870
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x17ED954
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public System.Object GetKey(System.Int32 index)
    // Offset: 0x17ED9CC
    ::Il2CppObject* GetKey(int index);
    // public System.Collections.IList GetKeyList()
    // Offset: 0x17EDAC0
    System::Collections::IList* GetKeyList();
    // public System.Collections.IList GetValueList()
    // Offset: 0x17EDB5C
    System::Collections::IList* GetValueList();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x17EDBF8
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x17EDC5C
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x17EDDAC
    int IndexOfKey(::Il2CppObject* key);
    // public System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x17EDE7C
    int IndexOfValue(::Il2CppObject* value);
    // private System.Void Insert(System.Int32 index, System.Object key, System.Object value)
    // Offset: 0x17ED010
    void Insert(int index, ::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x17EDEE4
    void RemoveAt(int index);
    // static public System.Collections.SortedList Synchronized(System.Collections.SortedList list)
    // Offset: 0x17EE058
    static System::Collections::SortedList* Synchronized(System::Collections::SortedList* list);
    // static private System.Void .cctor()
    // Offset: 0x17EE19C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17ECBC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList*, creationType>()));
    }
  }; // System.Collections.SortedList
  #pragma pack(pop)
  static check_size<sizeof(SortedList), 64 + sizeof(::Il2CppObject*)> __System_Collections_SortedListSizeCheck;
  static_assert(sizeof(SortedList) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList*, "System.Collections", "SortedList");
