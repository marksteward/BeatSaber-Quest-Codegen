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
  // Autogenerated type: JetBrains.Annotations.StringFormatMethodAttribute
  // [AttributeUsageAttribute] Offset: CF0EDC
  class StringFormatMethodAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF17C4
    // private System.String <FormatParameterName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* FormatParameterName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: StringFormatMethodAttribute
    StringFormatMethodAttribute(::Il2CppString* FormatParameterName_ = {}) noexcept : FormatParameterName{FormatParameterName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return FormatParameterName;
    }
    // public System.Void .ctor(System.String formatParameterName)
    // Offset: 0x219A128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringFormatMethodAttribute* New_ctor(::Il2CppString* formatParameterName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::StringFormatMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringFormatMethodAttribute*, creationType>(formatParameterName)));
    }
    // public System.String get_FormatParameterName()
    // Offset: 0x219A154
    ::Il2CppString* get_FormatParameterName();
    // private System.Void set_FormatParameterName(System.String value)
    // Offset: 0x219A15C
    void set_FormatParameterName(::Il2CppString* value);
  }; // JetBrains.Annotations.StringFormatMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(StringFormatMethodAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_StringFormatMethodAttributeSizeCheck;
  static_assert(sizeof(StringFormatMethodAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::StringFormatMethodAttribute*, "JetBrains.Annotations", "StringFormatMethodAttribute");
