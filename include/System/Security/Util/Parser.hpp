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
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityDocument
  class SecurityDocument;
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: Tokenizer
  class Tokenizer;
  // Forward declaring type: TokenizerStream
  class TokenizerStream;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Parser
  class Parser : public ::Il2CppObject {
    public:
    // private System.Security.SecurityDocument _doc
    // Size: 0x8
    // Offset: 0x10
    System::Security::SecurityDocument* doc;
    // Field size check
    static_assert(sizeof(System::Security::SecurityDocument*) == 0x8);
    // private System.Security.Util.Tokenizer _t
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::Tokenizer* t;
    // Field size check
    static_assert(sizeof(System::Security::Util::Tokenizer*) == 0x8);
    // Creating value type constructor for type: Parser
    Parser(System::Security::SecurityDocument* doc_ = {}, System::Security::Util::Tokenizer* t_ = {}) noexcept : doc{doc_}, t{t_} {}
    // System.Security.SecurityElement GetTopElement()
    // Offset: 0x195F814
    System::Security::SecurityElement* GetTopElement();
    // private System.Void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref System.Int32 index)
    // Offset: 0x19724A4
    void GetRequiredSizes(System::Security::Util::TokenizerStream* stream, int& index);
    // private System.Int32 DetermineFormat(System.Security.Util.TokenizerStream stream)
    // Offset: 0x1972AB4
    int DetermineFormat(System::Security::Util::TokenizerStream* stream);
    // private System.Void ParseContents()
    // Offset: 0x1972CA4
    void ParseContents();
    // private System.Void .ctor(System.Security.Util.Tokenizer t)
    // Offset: 0x1972F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser* New_ctor(System::Security::Util::Tokenizer* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::Parser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser*, creationType>(t)));
    }
    // System.Void .ctor(System.String input)
    // Offset: 0x195F7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser* New_ctor(::Il2CppString* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::Parser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser*, creationType>(input)));
    }
  }; // System.Security.Util.Parser
  #pragma pack(pop)
  static check_size<sizeof(Parser), 24 + sizeof(System::Security::Util::Tokenizer*)> __System_Security_Util_ParserSizeCheck;
  static_assert(sizeof(Parser) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Parser*, "System.Security.Util", "Parser");
