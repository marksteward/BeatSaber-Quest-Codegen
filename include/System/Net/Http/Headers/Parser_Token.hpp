// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/Token
  // [] Offset: FFFFFFFF
  class Parser::Token : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Token
    Token() noexcept {}
    // static public System.Void Check(System.String s)
    // Offset: 0x1206FE4
    static void Check(::Il2CppString* s);
    // static public System.Boolean TryCheck(System.String s)
    // Offset: 0x1202C7C
    static bool TryCheck(::Il2CppString* s);
  }; // System.Net.Http.Headers.Parser/Token
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Token*, "System.Net.Http.Headers", "Parser/Token");
