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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DebuggerTypeProxyAttribute
  class DebuggerTypeProxyAttribute : public System::Attribute {
    public:
    // private System.String typeName
    // Offset: 0x10
    ::Il2CppString* typeName;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return typeName;
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0xC953D0
    static DebuggerTypeProxyAttribute* New_ctor(System::Type* type);
  }; // System.Diagnostics.DebuggerTypeProxyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerTypeProxyAttribute*, "System.Diagnostics", "DebuggerTypeProxyAttribute");
#pragma pack(pop)
