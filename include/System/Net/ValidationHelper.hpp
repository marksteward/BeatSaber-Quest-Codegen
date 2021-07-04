// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ValidationHelper
  class ValidationHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ValidationHelper
    ValidationHelper() noexcept {}
    // Get static field: static public System.String[] EmptyArray
    static ::Array<::Il2CppString*>* _get_EmptyArray();
    // Set static field: static public System.String[] EmptyArray
    static void _set_EmptyArray(::Array<::Il2CppString*>* value);
    // Get static field: static readonly System.Char[] InvalidMethodChars
    static ::Array<::Il2CppChar>* _get_InvalidMethodChars();
    // Set static field: static readonly System.Char[] InvalidMethodChars
    static void _set_InvalidMethodChars(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] InvalidParamChars
    static ::Array<::Il2CppChar>* _get_InvalidParamChars();
    // Set static field: static readonly System.Char[] InvalidParamChars
    static void _set_InvalidParamChars(::Array<::Il2CppChar>* value);
    // static public System.String MakeStringNull(System.String stringValue)
    // Offset: 0x15BC1F4
    static ::Il2CppString* MakeStringNull(::Il2CppString* stringValue);
    // static public System.Boolean IsBlankString(System.String stringValue)
    // Offset: 0x15BC208
    static bool IsBlankString(::Il2CppString* stringValue);
    // static public System.Boolean ValidateTcpPort(System.Int32 port)
    // Offset: 0x15B9D88
    static bool ValidateTcpPort(int port);
    // static private System.Void .cctor()
    // Offset: 0x15BC224
    static void _cctor();
  }; // System.Net.ValidationHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
// Writing MetadataGetter for method: System::Net::ValidationHelper::MakeStringNull
// Il2CppName: MakeStringNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::ValidationHelper::MakeStringNull)> {
  const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "MakeStringNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::IsBlankString
// Il2CppName: IsBlankString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::ValidationHelper::IsBlankString)> {
  const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "IsBlankString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::ValidateTcpPort
// Il2CppName: ValidateTcpPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Net::ValidationHelper::ValidateTcpPort)> {
  const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "ValidateTcpPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::ValidationHelper::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
