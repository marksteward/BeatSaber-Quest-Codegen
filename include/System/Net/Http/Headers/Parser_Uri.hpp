// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/Uri
  // [] Offset: FFFFFFFF
  class Parser::Uri : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Uri
    Uri() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.Uri result)
    // Offset: 0x12070E0
    static bool TryParse(::Il2CppString* input, System::Uri*& result);
  }; // System.Net.Http.Headers.Parser/Uri
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Uri*, "System.Net.Http.Headers", "Parser/Uri");
