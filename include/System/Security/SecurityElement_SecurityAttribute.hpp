// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.SecurityElement
#include "System/Security/SecurityElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityElement/SecurityAttribute
  class SecurityElement::SecurityAttribute : public ::Il2CppObject {
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SecurityAttribute
    SecurityAttribute(::Il2CppString* name_ = {}, ::Il2CppString* value_ = {}) noexcept : name{name_}, value{value_} {}
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x1971344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityElement::SecurityAttribute* New_ctor(::Il2CppString* name, ::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityElement::SecurityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityElement::SecurityAttribute*, creationType>(name, value)));
    }
    // public System.String get_Name()
    // Offset: 0x19721CC
    ::Il2CppString* get_Name();
    // public System.String get_Value()
    // Offset: 0x19721D4
    ::Il2CppString* get_Value();
  }; // System.Security.SecurityElement/SecurityAttribute
  #pragma pack(pop)
  static check_size<sizeof(SecurityElement::SecurityAttribute), 24 + sizeof(::Il2CppString*)> __System_Security_SecurityElement_SecurityAttributeSizeCheck;
  static_assert(sizeof(SecurityElement::SecurityAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElement::SecurityAttribute*, "System.Security", "SecurityElement/SecurityAttribute");
