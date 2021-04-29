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
  // Autogenerated type: JetBrains.Annotations.AspMvcActionAttribute
  // [AttributeUsageAttribute] Offset: CF1290
  class AspMvcActionAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF1934
    // private System.String <AnonymousProperty>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* AnonymousProperty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspMvcActionAttribute
    AspMvcActionAttribute(::Il2CppString* AnonymousProperty_ = {}) noexcept : AnonymousProperty{AnonymousProperty_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return AnonymousProperty;
    }
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x21997C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor(::Il2CppString* anonymousProperty) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>(anonymousProperty)));
    }
    // public System.String get_AnonymousProperty()
    // Offset: 0x21997EC
    ::Il2CppString* get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x21997F4
    void set_AnonymousProperty(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x21997B8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcActionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcActionAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcActionAttributeSizeCheck;
  static_assert(sizeof(AspMvcActionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcActionAttribute*, "JetBrains.Annotations", "AspMvcActionAttribute");
