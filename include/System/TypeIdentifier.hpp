// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.TypeName
#include "System/TypeName.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeIdentifier
  // [] Offset: FFFFFFFF
  class TypeIdentifier/*, public System::TypeName*/ {
    public:
    // Creating value type constructor for type: TypeIdentifier
    TypeIdentifier() noexcept {}
    // Creating interface conversion operator: operator System::TypeName
    operator System::TypeName() noexcept {
      return *reinterpret_cast<System::TypeName*>(this);
    }
    // public System.String get_InternalName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_InternalName();
  }; // System.TypeIdentifier
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeIdentifier*, "System", "TypeIdentifier");
