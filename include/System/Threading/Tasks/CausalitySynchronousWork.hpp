// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.CausalitySynchronousWork
  // [TokenAttribute] Offset: FFFFFFFF
  struct CausalitySynchronousWork/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CausalitySynchronousWork
    constexpr CausalitySynchronousWork(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.CausalitySynchronousWork CompletionNotification
    static constexpr const int CompletionNotification = 0;
    // Get static field: static public System.Threading.Tasks.CausalitySynchronousWork CompletionNotification
    static System::Threading::Tasks::CausalitySynchronousWork _get_CompletionNotification();
    // Set static field: static public System.Threading.Tasks.CausalitySynchronousWork CompletionNotification
    static void _set_CompletionNotification(System::Threading::Tasks::CausalitySynchronousWork value);
    // static field const value: static public System.Threading.Tasks.CausalitySynchronousWork ProgressNotification
    static constexpr const int ProgressNotification = 1;
    // Get static field: static public System.Threading.Tasks.CausalitySynchronousWork ProgressNotification
    static System::Threading::Tasks::CausalitySynchronousWork _get_ProgressNotification();
    // Set static field: static public System.Threading.Tasks.CausalitySynchronousWork ProgressNotification
    static void _set_ProgressNotification(System::Threading::Tasks::CausalitySynchronousWork value);
    // static field const value: static public System.Threading.Tasks.CausalitySynchronousWork Execution
    static constexpr const int Execution = 2;
    // Get static field: static public System.Threading.Tasks.CausalitySynchronousWork Execution
    static System::Threading::Tasks::CausalitySynchronousWork _get_Execution();
    // Set static field: static public System.Threading.Tasks.CausalitySynchronousWork Execution
    static void _set_Execution(System::Threading::Tasks::CausalitySynchronousWork value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Threading.Tasks.CausalitySynchronousWork
  #pragma pack(pop)
  static check_size<sizeof(CausalitySynchronousWork), 0 + sizeof(int)> __System_Threading_Tasks_CausalitySynchronousWorkSizeCheck;
  static_assert(sizeof(CausalitySynchronousWork) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::CausalitySynchronousWork, "System.Threading.Tasks", "CausalitySynchronousWork");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
