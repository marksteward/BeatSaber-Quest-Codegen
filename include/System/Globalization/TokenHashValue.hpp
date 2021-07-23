// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TokenType
#include "System/TokenType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TokenHashValue
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenHashValue : public ::Il2CppObject {
    public:
    // System.String tokenString
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* tokenString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.TokenType tokenType
    // Size: 0x4
    // Offset: 0x18
    System::TokenType tokenType;
    // Field size check
    static_assert(sizeof(System::TokenType) == 0x4);
    // System.Int32 tokenValue
    // Size: 0x4
    // Offset: 0x1C
    int tokenValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TokenHashValue
    TokenHashValue(::Il2CppString* tokenString_ = {}, System::TokenType tokenType_ = {}, int tokenValue_ = {}) noexcept : tokenString{tokenString_}, tokenType{tokenType_}, tokenValue{tokenValue_} {}
    // Get instance field: System.String tokenString
    ::Il2CppString* _get_tokenString();
    // Set instance field: System.String tokenString
    void _set_tokenString(::Il2CppString* value);
    // Get instance field: System.TokenType tokenType
    System::TokenType _get_tokenType();
    // Set instance field: System.TokenType tokenType
    void _set_tokenType(System::TokenType value);
    // Get instance field: System.Int32 tokenValue
    int _get_tokenValue();
    // Set instance field: System.Int32 tokenValue
    void _set_tokenValue(int value);
    // System.Void .ctor(System.String tokenString, System.TokenType tokenType, System.Int32 tokenValue)
    // Offset: 0x19CFE44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenHashValue* New_ctor(::Il2CppString* tokenString, System::TokenType tokenType, int tokenValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::TokenHashValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenHashValue*, creationType>(tokenString, tokenType, tokenValue)));
    }
  }; // System.Globalization.TokenHashValue
  #pragma pack(pop)
  static check_size<sizeof(TokenHashValue), 28 + sizeof(int)> __System_Globalization_TokenHashValueSizeCheck;
  static_assert(sizeof(TokenHashValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TokenHashValue*, "System.Globalization", "TokenHashValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TokenHashValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
