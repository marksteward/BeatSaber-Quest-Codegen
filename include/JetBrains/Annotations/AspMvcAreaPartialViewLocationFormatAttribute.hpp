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
  // Size: 0x18
  // Autogenerated type: JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D8275C
  class AspMvcAreaPartialViewLocationFormatAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82EC8
    // private System.String <Format>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Format;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspMvcAreaPartialViewLocationFormatAttribute
    AspMvcAreaPartialViewLocationFormatAttribute(::Il2CppString* Format_ = {}) noexcept : Format{Format_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Format;
    }
    // public System.Void .ctor(System.String format)
    // Offset: 0x19EE0FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaPartialViewLocationFormatAttribute* New_ctor(::Il2CppString* format) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaPartialViewLocationFormatAttribute*, creationType>(format)));
    }
    // public System.String get_Format()
    // Offset: 0x19EE130
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x19EE138
    void set_Format(::Il2CppString* value);
  }; // JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
  static check_size<sizeof(AspMvcAreaPartialViewLocationFormatAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcAreaPartialViewLocationFormatAttributeSizeCheck;
  static_assert(sizeof(AspMvcAreaPartialViewLocationFormatAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaPartialViewLocationFormatAttribute");
#pragma pack(pop)
