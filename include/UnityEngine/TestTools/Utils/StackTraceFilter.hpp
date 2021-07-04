// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.StackTraceFilter
  class StackTraceFilter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Creating value type constructor for type: StackTraceFilter
    StackTraceFilter() noexcept {}
    // Get static field: static private readonly System.String[] s_FilteredLogMessages
    static ::Array<::Il2CppString*>* _get_s_FilteredLogMessages();
    // Set static field: static private readonly System.String[] s_FilteredLogMessages
    static void _set_s_FilteredLogMessages(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.String[] s_LastMessages
    static ::Array<::Il2CppString*>* _get_s_LastMessages();
    // Set static field: static private readonly System.String[] s_LastMessages
    static void _set_s_LastMessages(::Array<::Il2CppString*>* value);
    // static public System.String Filter(System.String inputStackTrace)
    // Offset: 0x23DE268
    static ::Il2CppString* Filter(::Il2CppString* inputStackTrace);
    // static private System.Void .cctor()
    // Offset: 0x23DF234
    static void _cctor();
  }; // UnityEngine.TestTools.Utils.StackTraceFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::StackTraceFilter*, "UnityEngine.TestTools.Utils", "StackTraceFilter");
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::Filter
// Il2CppName: Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&UnityEngine::TestTools::Utils::StackTraceFilter::Filter)> {
  const MethodInfo* get() {
    static auto* inputStackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter*), "Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputStackTrace});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::Utils::StackTraceFilter::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
