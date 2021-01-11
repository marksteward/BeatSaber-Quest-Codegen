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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.RazorPageBaseTypeAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82C44
  class RazorPageBaseTypeAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD83008
    // private System.String <BaseType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* BaseType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD83018
    // private System.String <PageName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* PageName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RazorPageBaseTypeAttribute
    RazorPageBaseTypeAttribute(::Il2CppString* BaseType_ = {}, ::Il2CppString* PageName_ = {}) noexcept : BaseType{BaseType_}, PageName{PageName_} {}
    // public System.Void .ctor(System.String baseType)
    // Offset: 0x19EE99C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorPageBaseTypeAttribute* New_ctor(::Il2CppString* baseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorPageBaseTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorPageBaseTypeAttribute*, creationType>(baseType)));
    }
    // public System.Void .ctor(System.String baseType, System.String pageName)
    // Offset: 0x19EE9D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorPageBaseTypeAttribute* New_ctor(::Il2CppString* baseType, ::Il2CppString* pageName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorPageBaseTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorPageBaseTypeAttribute*, creationType>(baseType, pageName)));
    }
    // public System.String get_BaseType()
    // Offset: 0x19EEA20
    ::Il2CppString* get_BaseType();
    // private System.Void set_BaseType(System.String value)
    // Offset: 0x19EEA28
    void set_BaseType(::Il2CppString* value);
    // public System.String get_PageName()
    // Offset: 0x19EEA30
    ::Il2CppString* get_PageName();
    // private System.Void set_PageName(System.String value)
    // Offset: 0x19EEA38
    void set_PageName(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorPageBaseTypeAttribute
  static check_size<sizeof(RazorPageBaseTypeAttribute), 24 + sizeof(::Il2CppString*)> __JetBrains_Annotations_RazorPageBaseTypeAttributeSizeCheck;
  static_assert(sizeof(RazorPageBaseTypeAttribute) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorPageBaseTypeAttribute*, "JetBrains.Annotations", "RazorPageBaseTypeAttribute");
