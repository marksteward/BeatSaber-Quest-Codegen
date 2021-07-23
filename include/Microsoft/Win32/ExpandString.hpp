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
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.ExpandString
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpandString : public ::Il2CppObject {
    public:
    // private System.String value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ExpandString
    ExpandString(::Il2CppString* value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return value;
    }
    // Get instance field: private System.String value
    ::Il2CppString* _get_value();
    // Set instance field: private System.String value
    void _set_value(::Il2CppString* value);
    // public System.Void .ctor(System.String s)
    // Offset: 0x1A0C340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpandString* New_ctor(::Il2CppString* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::ExpandString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpandString*, creationType>(s)));
    }
    // public System.String Expand()
    // Offset: 0x1A0C374
    ::Il2CppString* Expand();
    // public override System.String ToString()
    // Offset: 0x1A0C36C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Microsoft.Win32.ExpandString
  #pragma pack(pop)
  static check_size<sizeof(ExpandString), 16 + sizeof(::Il2CppString*)> __Microsoft_Win32_ExpandStringSizeCheck;
  static_assert(sizeof(ExpandString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::ExpandString*, "Microsoft.Win32", "ExpandString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::ExpandString::*)()>(&Microsoft::Win32::ExpandString::Expand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::ExpandString*), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::ExpandString::*)()>(&Microsoft::Win32::ExpandString::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::ExpandString*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
