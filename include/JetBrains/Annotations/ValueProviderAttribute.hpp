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
  // Autogenerated type: JetBrains.Annotations.ValueProviderAttribute
  // [AttributeUsageAttribute] Offset: CF0EF0
  class ValueProviderAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF17D4
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ValueProviderAttribute
    ValueProviderAttribute(::Il2CppString* Name_ = {}) noexcept : Name{Name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x219A254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueProviderAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::ValueProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueProviderAttribute*, creationType>(name)));
    }
    // public System.String get_Name()
    // Offset: 0x219A280
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x219A288
    void set_Name(::Il2CppString* value);
  }; // JetBrains.Annotations.ValueProviderAttribute
  #pragma pack(pop)
  static check_size<sizeof(ValueProviderAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_ValueProviderAttributeSizeCheck;
  static_assert(sizeof(ValueProviderAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ValueProviderAttribute*, "JetBrains.Annotations", "ValueProviderAttribute");
