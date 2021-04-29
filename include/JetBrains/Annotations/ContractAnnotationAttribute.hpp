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
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ContractAnnotationAttribute
  // [AttributeUsageAttribute] Offset: CF0F50
  class ContractAnnotationAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF17F4
    // private System.String <Contract>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Contract;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCF1804
    // private System.Boolean <ForceFullStates>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool ForceFullStates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ContractAnnotationAttribute
    ContractAnnotationAttribute(::Il2CppString* Contract_ = {}, bool ForceFullStates_ = {}) noexcept : Contract{Contract_}, ForceFullStates{ForceFullStates_} {}
    // public System.Void .ctor(System.String contract)
    // Offset: 0x2199B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContractAnnotationAttribute* New_ctor(::Il2CppString* contract) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::ContractAnnotationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContractAnnotationAttribute*, creationType>(contract)));
    }
    // public System.Void .ctor(System.String contract, System.Boolean forceFullStates)
    // Offset: 0x2199BC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContractAnnotationAttribute* New_ctor(::Il2CppString* contract, bool forceFullStates) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::ContractAnnotationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContractAnnotationAttribute*, creationType>(contract, forceFullStates)));
    }
    // public System.String get_Contract()
    // Offset: 0x2199C00
    ::Il2CppString* get_Contract();
    // private System.Void set_Contract(System.String value)
    // Offset: 0x2199C08
    void set_Contract(::Il2CppString* value);
    // public System.Boolean get_ForceFullStates()
    // Offset: 0x2199C10
    bool get_ForceFullStates();
    // private System.Void set_ForceFullStates(System.Boolean value)
    // Offset: 0x2199C18
    void set_ForceFullStates(bool value);
  }; // JetBrains.Annotations.ContractAnnotationAttribute
  #pragma pack(pop)
  static check_size<sizeof(ContractAnnotationAttribute), 24 + sizeof(bool)> __JetBrains_Annotations_ContractAnnotationAttributeSizeCheck;
  static_assert(sizeof(ContractAnnotationAttribute) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ContractAnnotationAttribute*, "JetBrains.Annotations", "ContractAnnotationAttribute");
