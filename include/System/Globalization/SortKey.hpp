// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.SortKey
  // [ComVisibleAttribute] Offset: D7CCA8
  class SortKey : public ::Il2CppObject {
    public:
    // private readonly System.String source
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* source;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Byte[] key
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Globalization.CompareOptions options
    // Size: 0x4
    // Offset: 0x20
    System::Globalization::CompareOptions options;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareOptions) == 0x4);
    // private readonly System.Int32 lcid
    // Size: 0x4
    // Offset: 0x24
    int lcid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SortKey
    SortKey(::Il2CppString* source_ = {}, ::Array<uint8_t>* key_ = {}, System::Globalization::CompareOptions options_ = {}, int lcid_ = {}) noexcept : source{source_}, key{key_}, options{options_}, lcid{lcid_} {}
    // static public System.Int32 Compare(System.Globalization.SortKey sortkey1, System.Globalization.SortKey sortkey2)
    // Offset: 0x19F8EA8
    static int Compare(System::Globalization::SortKey* sortkey1, System::Globalization::SortKey* sortkey2);
    // System.Void .ctor(System.Int32 lcid, System.String source, System.Globalization.CompareOptions opt)
    // Offset: 0x19F9038
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor(int lcid, ::Il2CppString* source, System::Globalization::CompareOptions opt) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>(lcid, source, opt)));
    }
    // System.Void .ctor(System.Int32 lcid, System.String source, System.Byte[] buffer, System.Globalization.CompareOptions opt, System.Int32 lv1Length, System.Int32 lv2Length, System.Int32 lv3Length, System.Int32 kanaSmallLength, System.Int32 markTypeLength, System.Int32 katakanaLength, System.Int32 kanaWidthLength, System.Int32 identLength)
    // Offset: 0x19F9078
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor(int lcid, ::Il2CppString* source, ::Array<uint8_t>* buffer, System::Globalization::CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>(lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength, katakanaLength, kanaWidthLength, identLength)));
    }
    // public System.String get_OriginalString()
    // Offset: 0x19F90C4
    ::Il2CppString* get_OriginalString();
    // public System.Byte[] get_KeyData()
    // Offset: 0x19F90CC
    ::Array<uint8_t>* get_KeyData();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x19F90D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19F9194
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19F9208
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0x19F93E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>()));
    }
  }; // System.Globalization.SortKey
  #pragma pack(pop)
  static check_size<sizeof(SortKey), 36 + sizeof(int)> __System_Globalization_SortKeySizeCheck;
  static_assert(sizeof(SortKey) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::SortKey*, "System.Globalization", "SortKey");
// Writing MetadataGetter for method: System::Globalization::SortKey::Compare
// Il2CppName: Compare
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::SortKey::get_OriginalString
// Il2CppName: get_OriginalString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::get_KeyData
// Il2CppName: get_KeyData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
