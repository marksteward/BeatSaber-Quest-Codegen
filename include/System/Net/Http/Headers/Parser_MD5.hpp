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
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/MD5
  class Parser::MD5 : public ::Il2CppObject {
    public:
    // Nested type: System::Net::Http::Headers::Parser::MD5::$$c
    class $$c;
    // Creating value type constructor for type: MD5
    MD5() noexcept {}
    // Get static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static System::Func_2<::Il2CppObject*, ::Il2CppString*>* _get_ToString();
    // Set static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static void _set_ToString(System::Func_2<::Il2CppObject*, ::Il2CppString*>* value);
    // static public System.Boolean TryParse(System.String input, out System.Byte[] result)
    // Offset: 0x1598288
    static bool TryParse(::Il2CppString* input, ::Array<uint8_t>*& result);
    // static private System.Void .cctor()
    // Offset: 0x1598388
    static void _cctor();
  }; // System.Net.Http.Headers.Parser/MD5
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::MD5*, "System.Net.Http.Headers", "Parser/MD5");
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::TryParse
// Il2CppName: TryParse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
