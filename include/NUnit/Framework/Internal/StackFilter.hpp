// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.StackFilter
  class StackFilter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StackFilter
    StackFilter() noexcept {}
    // Get static field: static private readonly System.Text.RegularExpressions.Regex assertOrAssumeRegex
    static System::Text::RegularExpressions::Regex* _get_assertOrAssumeRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex assertOrAssumeRegex
    static void _set_assertOrAssumeRegex(System::Text::RegularExpressions::Regex* value);
    // static public System.String Filter(System.String rawTrace)
    // Offset: 0x208FE20
    static ::Il2CppString* Filter(::Il2CppString* rawTrace);
    // static private System.Void .cctor()
    // Offset: 0x2090038
    static void _cctor();
  }; // NUnit.Framework.Internal.StackFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::StackFilter*, "NUnit.Framework.Internal", "StackFilter");
