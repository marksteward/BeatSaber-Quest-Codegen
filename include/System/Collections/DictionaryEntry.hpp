// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.DictionaryEntry
  struct DictionaryEntry : public System::ValueType {
    public:
    // private System.Object _key
    // Offset: 0x0
    ::Il2CppObject* key;
    // private System.Object _value
    // Offset: 0x8
    ::Il2CppObject* value;
    // Creating value type constructor for type: DictionaryEntry
    constexpr DictionaryEntry(::Il2CppObject* key_ = {}, ::Il2CppObject* value_ = {}) : key{key_}, value{value_} {}
    // public System.Void .ctor(System.Object key, System.Object value)
    // Offset: 0xA467CC
    static DictionaryEntry* New_ctor(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Object get_Key()
    // Offset: 0xA46800
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0xA46808
    ::Il2CppObject* get_Value();
  }; // System.Collections.DictionaryEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
#pragma pack(pop)
