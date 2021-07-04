// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
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
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/ValueList
  // [DefaultMemberAttribute] Offset: D80154
  class SortedList::ValueList : public ::Il2CppObject/*, public System::Collections::IList*/ {
    public:
    // private System.Collections.SortedList sortedList
    // Size: 0x8
    // Offset: 0x10
    System::Collections::SortedList* sortedList;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // Creating value type constructor for type: ValueList
    ValueList(System::Collections::SortedList* sortedList_ = {}) noexcept : sortedList{sortedList_} {}
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator System::Collections::SortedList*
    constexpr operator System::Collections::SortedList*() const noexcept {
      return sortedList;
    }
    // System.Void .ctor(System.Collections.SortedList sortedList)
    // Offset: 0x1975EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::ValueList* New_ctor(System::Collections::SortedList* sortedList) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::SortedList::ValueList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::ValueList*, creationType>(sortedList)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1977CB4
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1977CD0
    bool get_IsReadOnly();
    // public System.Int32 Add(System.Object key)
    // Offset: 0x1977CD8
    int Add(::Il2CppObject* key);
    // public System.Void Clear()
    // Offset: 0x1977D58
    void Clear();
    // public System.Boolean Contains(System.Object value)
    // Offset: 0x1977DD8
    bool Contains(::Il2CppObject* value);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1977DFC
    void CopyTo(System::Array* array, int arrayIndex);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0x1977EEC
    void Insert(int index, ::Il2CppObject* value);
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x1977F6C
    ::Il2CppObject* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1977F90
    void set_Item(int index, ::Il2CppObject* value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1978010
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0x19780AC
    int IndexOf(::Il2CppObject* value);
    // public System.Void Remove(System.Object value)
    // Offset: 0x1978134
    void Remove(::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x19781B4
    void RemoveAt(int index);
  }; // System.Collections.SortedList/ValueList
  #pragma pack(pop)
  static check_size<sizeof(SortedList::ValueList), 16 + sizeof(System::Collections::SortedList*)> __System_Collections_SortedList_ValueListSizeCheck;
  static_assert(sizeof(SortedList::ValueList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::ValueList*, "System.Collections", "SortedList/ValueList");
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_IsReadOnly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Add)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Contains)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(System::Array*, int)>(&System::Collections::SortedList::ValueList::CopyTo)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int, ::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Insert)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::ValueList::*)(int)>(&System::Collections::SortedList::ValueList::get_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int, ::Il2CppObject*)>(&System::Collections::SortedList::ValueList::set_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::IndexOf)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Remove)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int)>(&System::Collections::SortedList::ValueList::RemoveAt)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
