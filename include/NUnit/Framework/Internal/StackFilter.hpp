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
    // Offset: 0x22ADD54
    static ::Il2CppString* Filter(::Il2CppString* rawTrace);
    // static private System.Void .cctor()
    // Offset: 0x22ADF6C
    static void _cctor();
  }; // NUnit.Framework.Internal.StackFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::StackFilter*, "NUnit.Framework.Internal", "StackFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::StackFilter::Filter
// Il2CppName: Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&NUnit::Framework::Internal::StackFilter::Filter)> {
  static const MethodInfo* get() {
    static auto* rawTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StackFilter*), "Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawTrace});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::StackFilter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::StackFilter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StackFilter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
