// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  // Autogenerated type: System.Collections.DictionaryEntry
  // [] Offset: FFFFFFFF
  struct DictionaryEntry/*, public System::ValueType*/ {
    public:
    // private System.Object _key
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: DictionaryEntry
    constexpr DictionaryEntry(::Il2CppObject* key_ = {}, ::Il2CppObject* value_ = {}) noexcept : key{key_}, value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Object key, System.Object value)
    // Offset: 0xE8BBD8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  DictionaryEntry(::Il2CppObject* key, ::Il2CppObject* value)
    // public System.Object get_Key()
    // Offset: 0xE8BC0C
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0xE8BC14
    ::Il2CppObject* get_Value();
  }; // System.Collections.DictionaryEntry
  static check_size<sizeof(DictionaryEntry), 8 + sizeof(::Il2CppObject*)> __System_Collections_DictionaryEntrySizeCheck;
  static_assert(sizeof(DictionaryEntry) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
#pragma pack(pop)
