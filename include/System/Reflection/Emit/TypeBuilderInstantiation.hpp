// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.TypeBuilderInstantiation
  class TypeBuilderInstantiation : public System::Reflection::TypeInfo {
    public:
    // Creating value type constructor for type: TypeBuilderInstantiation
    TypeBuilderInstantiation() noexcept {}
    // static System.Type MakeGenericType(System.Type type, System.Type[] typeArguments)
    // Offset: 0x1B039C8
    static System::Type* MakeGenericType(System::Type* type, ::Array<System::Type*>* typeArguments);
  }; // System.Reflection.Emit.TypeBuilderInstantiation
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::TypeBuilderInstantiation*, "System.Reflection.Emit", "TypeBuilderInstantiation");
