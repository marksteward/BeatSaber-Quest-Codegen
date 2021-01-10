// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ConcurrentSetItem`2
#include "System/Diagnostics/Tracing/ConcurrentSetItem_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.NameInfo
  // [] Offset: FFFFFFFF
  class NameInfo : public System::Diagnostics::Tracing::ConcurrentSetItem_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags>, System::Diagnostics::Tracing::NameInfo*> {
    public:
    // readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x18
    System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventTags) == 0x4);
    // readonly System.Int32 identity
    // Size: 0x4
    // Offset: 0x1C
    int identity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Byte[] nameMetadata
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* nameMetadata;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: NameInfo
    NameInfo(::Il2CppString* name_ = {}, System::Diagnostics::Tracing::EventTags tags_ = {}, int identity_ = {}, ::Array<uint8_t>* nameMetadata_ = {}) noexcept : name{name_}, tags{tags_}, identity{identity_}, nameMetadata{nameMetadata_} {}
    // Get static field: static private System.Int32 lastIdentity
    static int _get_lastIdentity();
    // Set static field: static private System.Int32 lastIdentity
    static void _set_lastIdentity(int value);
    // static System.Void ReserveEventIDsBelow(System.Int32 eventId)
    // Offset: 0x111EE8C
    static void ReserveEventIDsBelow(int eventId);
    // public System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Int32 typeMetadataSize)
    // Offset: 0x111EF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameInfo* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, int typeMetadataSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::NameInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameInfo*, creationType>(name, tags, typeMetadataSize)));
    }
    // public System.Int32 Compare(System.Diagnostics.Tracing.NameInfo other)
    // Offset: 0x111F1F8
    int Compare(System::Diagnostics::Tracing::NameInfo* other);
    // public System.Int32 Compare(System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags> key)
    // Offset: 0x111F30C
    int Compare(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags> key);
    // private System.Int32 Compare(System.String otherName, System.Diagnostics.Tracing.EventTags otherTags)
    // Offset: 0x111F218
    int Compare(::Il2CppString* otherName, System::Diagnostics::Tracing::EventTags otherTags);
    // static private System.Void .cctor()
    // Offset: 0x111F368
    static void _cctor();
  }; // System.Diagnostics.Tracing.NameInfo
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::NameInfo*, "System.Diagnostics.Tracing", "NameInfo");
