// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.RazorDirectiveAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82C0C
  class RazorDirectiveAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82FF8
    // private System.String <Directive>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Directive;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorDirectiveAttribute
    RazorDirectiveAttribute(::Il2CppString* Directive_ = {}) noexcept : Directive{Directive_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Directive;
    }
    // public System.Void .ctor(System.String directive)
    // Offset: 0x19EE894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorDirectiveAttribute* New_ctor(::Il2CppString* directive) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorDirectiveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorDirectiveAttribute*, creationType>(directive)));
    }
    // public System.String get_Directive()
    // Offset: 0x19EE8C8
    ::Il2CppString* get_Directive();
    // private System.Void set_Directive(System.String value)
    // Offset: 0x19EE8D0
    void set_Directive(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorDirectiveAttribute
  static check_size<sizeof(RazorDirectiveAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorDirectiveAttributeSizeCheck;
  static_assert(sizeof(RazorDirectiveAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorDirectiveAttribute*, "JetBrains.Annotations", "RazorDirectiveAttribute");
