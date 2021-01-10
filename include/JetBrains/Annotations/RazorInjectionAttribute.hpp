// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x20
  // Autogenerated type: JetBrains.Annotations.RazorInjectionAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82BD4
  class RazorInjectionAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82FD8
    // private System.String <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD82FE8
    // private System.String <FieldName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* FieldName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorInjectionAttribute
    RazorInjectionAttribute(::Il2CppString* Type_ = {}, ::Il2CppString* FieldName_ = {}) noexcept : Type{Type_}, FieldName{FieldName_} {}
    // public System.Void .ctor(System.String type, System.String fieldName)
    // Offset: 0x19EE924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorInjectionAttribute* New_ctor(::Il2CppString* type, ::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorInjectionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorInjectionAttribute*, creationType>(type, fieldName)));
    }
    // public System.String get_Type()
    // Offset: 0x19EE974
    ::Il2CppString* get_Type();
    // private System.Void set_Type(System.String value)
    // Offset: 0x19EE97C
    void set_Type(::Il2CppString* value);
    // public System.String get_FieldName()
    // Offset: 0x19EE984
    ::Il2CppString* get_FieldName();
    // private System.Void set_FieldName(System.String value)
    // Offset: 0x19EE98C
    void set_FieldName(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorInjectionAttribute
  static check_size<sizeof(RazorInjectionAttribute), 24 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorInjectionAttributeSizeCheck;
  static_assert(sizeof(RazorInjectionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorInjectionAttribute*, "JetBrains.Annotations", "RazorInjectionAttribute");
#pragma pack(pop)
