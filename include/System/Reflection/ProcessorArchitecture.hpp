// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ProcessorArchitecture
  // [ComVisibleAttribute] Offset: CA58A8
  struct ProcessorArchitecture/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ProcessorArchitecture
    constexpr ProcessorArchitecture(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.ProcessorArchitecture None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.ProcessorArchitecture None
    static System::Reflection::ProcessorArchitecture _get_None();
    // Set static field: static public System.Reflection.ProcessorArchitecture None
    static void _set_None(System::Reflection::ProcessorArchitecture value);
    // static field const value: static public System.Reflection.ProcessorArchitecture MSIL
    static constexpr const int MSIL = 1;
    // Get static field: static public System.Reflection.ProcessorArchitecture MSIL
    static System::Reflection::ProcessorArchitecture _get_MSIL();
    // Set static field: static public System.Reflection.ProcessorArchitecture MSIL
    static void _set_MSIL(System::Reflection::ProcessorArchitecture value);
    // static field const value: static public System.Reflection.ProcessorArchitecture X86
    static constexpr const int X86 = 2;
    // Get static field: static public System.Reflection.ProcessorArchitecture X86
    static System::Reflection::ProcessorArchitecture _get_X86();
    // Set static field: static public System.Reflection.ProcessorArchitecture X86
    static void _set_X86(System::Reflection::ProcessorArchitecture value);
    // static field const value: static public System.Reflection.ProcessorArchitecture IA64
    static constexpr const int IA64 = 3;
    // Get static field: static public System.Reflection.ProcessorArchitecture IA64
    static System::Reflection::ProcessorArchitecture _get_IA64();
    // Set static field: static public System.Reflection.ProcessorArchitecture IA64
    static void _set_IA64(System::Reflection::ProcessorArchitecture value);
    // static field const value: static public System.Reflection.ProcessorArchitecture Amd64
    static constexpr const int Amd64 = 4;
    // Get static field: static public System.Reflection.ProcessorArchitecture Amd64
    static System::Reflection::ProcessorArchitecture _get_Amd64();
    // Set static field: static public System.Reflection.ProcessorArchitecture Amd64
    static void _set_Amd64(System::Reflection::ProcessorArchitecture value);
    // static field const value: static public System.Reflection.ProcessorArchitecture Arm
    static constexpr const int Arm = 5;
    // Get static field: static public System.Reflection.ProcessorArchitecture Arm
    static System::Reflection::ProcessorArchitecture _get_Arm();
    // Set static field: static public System.Reflection.ProcessorArchitecture Arm
    static void _set_Arm(System::Reflection::ProcessorArchitecture value);
  }; // System.Reflection.ProcessorArchitecture
  #pragma pack(pop)
  static check_size<sizeof(ProcessorArchitecture), 0 + sizeof(int)> __System_Reflection_ProcessorArchitectureSizeCheck;
  static_assert(sizeof(ProcessorArchitecture) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ProcessorArchitecture, "System.Reflection", "ProcessorArchitecture");
