// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ConstrainedExecution.Consistency
  // [TokenAttribute] Offset: FFFFFFFF
  struct Consistency/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Consistency
    constexpr Consistency(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptProcess
    static constexpr const int MayCorruptProcess = 0;
    // Get static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptProcess
    static System::Runtime::ConstrainedExecution::Consistency _get_MayCorruptProcess();
    // Set static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptProcess
    static void _set_MayCorruptProcess(System::Runtime::ConstrainedExecution::Consistency value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptAppDomain
    static constexpr const int MayCorruptAppDomain = 1;
    // Get static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptAppDomain
    static System::Runtime::ConstrainedExecution::Consistency _get_MayCorruptAppDomain();
    // Set static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptAppDomain
    static void _set_MayCorruptAppDomain(System::Runtime::ConstrainedExecution::Consistency value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptInstance
    static constexpr const int MayCorruptInstance = 2;
    // Get static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptInstance
    static System::Runtime::ConstrainedExecution::Consistency _get_MayCorruptInstance();
    // Set static field: static public System.Runtime.ConstrainedExecution.Consistency MayCorruptInstance
    static void _set_MayCorruptInstance(System::Runtime::ConstrainedExecution::Consistency value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Consistency WillNotCorruptState
    static constexpr const int WillNotCorruptState = 3;
    // Get static field: static public System.Runtime.ConstrainedExecution.Consistency WillNotCorruptState
    static System::Runtime::ConstrainedExecution::Consistency _get_WillNotCorruptState();
    // Set static field: static public System.Runtime.ConstrainedExecution.Consistency WillNotCorruptState
    static void _set_WillNotCorruptState(System::Runtime::ConstrainedExecution::Consistency value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Runtime.ConstrainedExecution.Consistency
  #pragma pack(pop)
  static check_size<sizeof(Consistency), 0 + sizeof(int)> __System_Runtime_ConstrainedExecution_ConsistencySizeCheck;
  static_assert(sizeof(Consistency) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::Consistency, "System.Runtime.ConstrainedExecution", "Consistency");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
