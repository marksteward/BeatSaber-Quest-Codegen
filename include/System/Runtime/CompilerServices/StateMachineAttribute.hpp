// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
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
  // Autogenerated type: System.Runtime.CompilerServices.StateMachineAttribute
  class StateMachineAttribute : public System::Attribute {
    public:
    // private System.Type <StateMachineType>k__BackingField
    // Offset: 0x10
    System::Type* StateMachineType;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const {
      return StateMachineType;
    }
    // private System.Void set_StateMachineType(System.Type value)
    // Offset: 0x1166F04
    void set_StateMachineType(System::Type* value);
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x116614C
    static StateMachineAttribute* New_ctor(System::Type* stateMachineType);
  }; // System.Runtime.CompilerServices.StateMachineAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
#pragma pack(pop)
