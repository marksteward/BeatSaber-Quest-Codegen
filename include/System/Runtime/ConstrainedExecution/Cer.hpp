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
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Autogenerated type: System.Runtime.ConstrainedExecution.Cer
  struct Cer : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Cer
    constexpr Cer(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer None
    static constexpr const int None = 0;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer None
    static System::Runtime::ConstrainedExecution::Cer _get_None();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer None
    static void _set_None(System::Runtime::ConstrainedExecution::Cer value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static constexpr const int MayFail = 1;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static System::Runtime::ConstrainedExecution::Cer _get_MayFail();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static void _set_MayFail(System::Runtime::ConstrainedExecution::Cer value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer Success
    static constexpr const int Success = 2;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer Success
    static System::Runtime::ConstrainedExecution::Cer _get_Success();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer Success
    static void _set_Success(System::Runtime::ConstrainedExecution::Cer value);
  }; // System.Runtime.ConstrainedExecution.Cer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::Cer, "System.Runtime.ConstrainedExecution", "Cer");
#pragma pack(pop)
