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
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: ElementTryParser`1<T>
  template<typename T>
  class ElementTryParser_1;
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.CollectionParser
  // [] Offset: FFFFFFFF
  class CollectionParser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CollectionParser
    CollectionParser() noexcept {}
    // static public System.Boolean TryParse(System.String input, System.Int32 minimalCount, System.Net.Http.Headers.ElementTryParser`1<T> parser, out System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Net::Http::Headers::ElementTryParser_1<T>* parser, System::Collections::Generic::List_1<T>*& result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::CollectionParser::TryParse");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionParser", "TryParse", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(input, minimalCount, parser, result)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, input, minimalCount, parser, result);
    }
    // static public System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.String> result)
    // Offset: 0x11FE850
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<::Il2CppString*>*& result);
    // static private System.Boolean TryParseStringElement(System.Net.Http.Headers.Lexer lexer, out System.String parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x11FE8F0
    static bool TryParseStringElement(System::Net::Http::Headers::Lexer* lexer, ::Il2CppString*& parsedValue, System::Net::Http::Headers::Token& t);
  }; // System.Net.Http.Headers.CollectionParser
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CollectionParser*, "System.Net.Http.Headers", "CollectionParser");
