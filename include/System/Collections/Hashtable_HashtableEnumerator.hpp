// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/HashtableEnumerator
  class Hashtable::HashtableEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator, public System::ICloneable*/ {
    public:
    // private System.Collections.Hashtable hashtable
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Int32 bucket
    // Size: 0x4
    // Offset: 0x18
    int bucket;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean current
    // Size: 0x1
    // Offset: 0x20
    bool current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: current and: getObjectRetType
    char __padding3[0x3] = {};
    // private System.Int32 getObjectRetType
    // Size: 0x4
    // Offset: 0x24
    int getObjectRetType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentKey
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* currentKey;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object currentValue
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* currentValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: HashtableEnumerator
    HashtableEnumerator(System::Collections::Hashtable* hashtable_ = {}, int bucket_ = {}, int version_ = {}, bool current_ = {}, int getObjectRetType_ = {}, ::Il2CppObject* currentKey_ = {}, ::Il2CppObject* currentValue_ = {}) noexcept : hashtable{hashtable_}, bucket{bucket_}, version{version_}, current{current_}, getObjectRetType{getObjectRetType_}, currentKey{currentKey_}, currentValue{currentValue_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Collections.Hashtable hashtable, System.Int32 getObjRetType)
    // Offset: 0x17E8F8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::HashtableEnumerator* New_ctor(System::Collections::Hashtable* hashtable, int getObjRetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Hashtable::HashtableEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::HashtableEnumerator*, creationType>(hashtable, getObjRetType)));
    }
    // public System.Object Clone()
    // Offset: 0x17E8FF0
    ::Il2CppObject* Clone();
    // public System.Object get_Key()
    // Offset: 0x17E8FF8
    ::Il2CppObject* get_Key();
    // public System.Boolean MoveNext()
    // Offset: 0x17E9094
    bool MoveNext();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x17E91DC
    System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Current()
    // Offset: 0x17E9294
    ::Il2CppObject* get_Current();
    // public System.Object get_Value()
    // Offset: 0x17E9388
    ::Il2CppObject* get_Value();
    // public System.Void Reset()
    // Offset: 0x17E9424
    void Reset();
  }; // System.Collections.Hashtable/HashtableEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::HashtableEnumerator), 48 + sizeof(::Il2CppObject*)> __System_Collections_Hashtable_HashtableEnumeratorSizeCheck;
  static_assert(sizeof(Hashtable::HashtableEnumerator) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
