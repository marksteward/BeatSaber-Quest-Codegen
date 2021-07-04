// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebExceptionMapping
  class WebExceptionMapping : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WebExceptionMapping
    WebExceptionMapping() noexcept {}
    // Get static field: static private readonly System.String[] s_Mapping
    static ::Array<::Il2CppString*>* _get_s_Mapping();
    // Set static field: static private readonly System.String[] s_Mapping
    static void _set_s_Mapping(::Array<::Il2CppString*>* value);
    // static System.String GetWebStatusString(System.Net.WebExceptionStatus status)
    // Offset: 0x15C7070
    static ::Il2CppString* GetWebStatusString(System::Net::WebExceptionStatus status);
    // static private System.Void .cctor()
    // Offset: 0x15C7228
    static void _cctor();
  }; // System.Net.WebExceptionMapping
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebExceptionMapping*, "System.Net", "WebExceptionMapping");
// Writing MetadataGetter for method: System::Net::WebExceptionMapping::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::WebExceptionStatus)>(&System::Net::WebExceptionMapping::GetWebStatusString)> {
  const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebExceptionMapping*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
// Writing MetadataGetter for method: System::Net::WebExceptionMapping::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebExceptionMapping::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebExceptionMapping*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
