// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class NameObjectCollectionBase::NameObjectEntry : public ::Il2CppObject {
    public:
    // System.String Key
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Object Value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: NameObjectEntry
    NameObjectEntry(::Il2CppString* Key_ = {}, ::Il2CppObject* Value_ = {}) noexcept : Key{Key_}, Value{Value_} {}
    // Get instance field: System.String Key
    ::Il2CppString* _get_Key();
    // Set instance field: System.String Key
    void _set_Key(::Il2CppString* value);
    // Get instance field: System.Object Value
    ::Il2CppObject* _get_Value();
    // Set instance field: System.Object Value
    void _set_Value(::Il2CppObject* value);
    // System.Void .ctor(System.String name, System.Object value)
    // Offset: 0x18458EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase::NameObjectEntry* New_ctor(::Il2CppString* name, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase::NameObjectEntry*, creationType>(name, value)));
    }
  }; // System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry
  #pragma pack(pop)
  static check_size<sizeof(NameObjectCollectionBase::NameObjectEntry), 24 + sizeof(::Il2CppObject*)> __System_Collections_Specialized_NameObjectCollectionBase_NameObjectEntrySizeCheck;
  static_assert(sizeof(NameObjectCollectionBase::NameObjectEntry) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
