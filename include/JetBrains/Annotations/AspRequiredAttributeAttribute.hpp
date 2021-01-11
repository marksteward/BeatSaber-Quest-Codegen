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
  // Autogenerated type: JetBrains.Annotations.AspRequiredAttributeAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82B50
  class AspRequiredAttributeAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD82FA8
    // private System.String <Attribute>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Attribute;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspRequiredAttributeAttribute
    AspRequiredAttributeAttribute(::Il2CppString* Attribute_ = {}) noexcept : Attribute{Attribute_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Attribute;
    }
    // public System.Void .ctor(System.String attribute)
    // Offset: 0x19EE2EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspRequiredAttributeAttribute* New_ctor(::Il2CppString* attribute) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspRequiredAttributeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspRequiredAttributeAttribute*, creationType>(attribute)));
    }
    // public System.String get_Attribute()
    // Offset: 0x19EE320
    ::Il2CppString* get_Attribute();
    // private System.Void set_Attribute(System.String value)
    // Offset: 0x19EE328
    void set_Attribute(::Il2CppString* value);
  }; // JetBrains.Annotations.AspRequiredAttributeAttribute
  static check_size<sizeof(AspRequiredAttributeAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspRequiredAttributeAttributeSizeCheck;
  static_assert(sizeof(AspRequiredAttributeAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
