// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.CompilationRelaxations
  struct CompilationRelaxations : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CompilationRelaxations
    constexpr CompilationRelaxations(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static constexpr const int NoStringInterning = 8;
    // Get static field: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static System::Runtime::CompilerServices::CompilationRelaxations _get_NoStringInterning();
    // Set static field: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static void _set_NoStringInterning(System::Runtime::CompilerServices::CompilationRelaxations value);
  }; // System.Runtime.CompilerServices.CompilationRelaxations
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilationRelaxations, "System.Runtime.CompilerServices", "CompilationRelaxations");
#pragma pack(pop)
