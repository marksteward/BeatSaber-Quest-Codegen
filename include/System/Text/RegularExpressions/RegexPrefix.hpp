// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexPrefix
  class RegexPrefix : public ::Il2CppObject {
    public:
    // System.String _prefix
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* prefix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean _caseInsensitive
    // Size: 0x1
    // Offset: 0x18
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RegexPrefix
    RegexPrefix(::Il2CppString* prefix_ = {}, bool caseInsensitive_ = {}) noexcept : prefix{prefix_}, caseInsensitive{caseInsensitive_} {}
    // Get static field: static System.Text.RegularExpressions.RegexPrefix _empty
    static System::Text::RegularExpressions::RegexPrefix* _get__empty();
    // Set static field: static System.Text.RegularExpressions.RegexPrefix _empty
    static void _set__empty(System::Text::RegularExpressions::RegexPrefix* value);
    // System.Void .ctor(System.String prefix, System.Boolean ci)
    // Offset: 0x198D188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexPrefix* New_ctor(::Il2CppString* prefix, bool ci) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexPrefix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexPrefix*, creationType>(prefix, ci)));
    }
    // System.String get_Prefix()
    // Offset: 0x1996B78
    ::Il2CppString* get_Prefix();
    // System.Boolean get_CaseInsensitive()
    // Offset: 0x1996B80
    bool get_CaseInsensitive();
    // static System.Text.RegularExpressions.RegexPrefix get_Empty()
    // Offset: 0x1996B88
    static System::Text::RegularExpressions::RegexPrefix* get_Empty();
    // static private System.Void .cctor()
    // Offset: 0x1996BF0
    static void _cctor();
  }; // System.Text.RegularExpressions.RegexPrefix
  #pragma pack(pop)
  static check_size<sizeof(RegexPrefix), 24 + sizeof(bool)> __System_Text_RegularExpressions_RegexPrefixSizeCheck;
  static_assert(sizeof(RegexPrefix) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexPrefix*, "System.Text.RegularExpressions", "RegexPrefix");
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexPrefix::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexPrefix::get_Prefix
// Il2CppName: get_Prefix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexPrefix::get_CaseInsensitive
// Il2CppName: get_CaseInsensitive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexPrefix::get_Empty
// Il2CppName: get_Empty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexPrefix::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
