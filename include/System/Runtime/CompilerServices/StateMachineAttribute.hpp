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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.StateMachineAttribute
  // [AttributeUsageAttribute] Offset: CA97E4
  class StateMachineAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCACFAC
    // private System.Type <StateMachineType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* StateMachineType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: StateMachineAttribute
    StateMachineAttribute(System::Type* StateMachineType_ = {}) noexcept : StateMachineType{StateMachineType_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return StateMachineType;
    }
    // private System.Void set_StateMachineType(System.Type value)
    // Offset: 0x1320CCC
    void set_StateMachineType(System::Type* value);
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x131FE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateMachineAttribute* New_ctor(System::Type* stateMachineType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::StateMachineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateMachineAttribute*, creationType>(stateMachineType)));
    }
  }; // System.Runtime.CompilerServices.StateMachineAttribute
  #pragma pack(pop)
  static check_size<sizeof(StateMachineAttribute), 16 + sizeof(System::Type*)> __System_Runtime_CompilerServices_StateMachineAttributeSizeCheck;
  static_assert(sizeof(StateMachineAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
