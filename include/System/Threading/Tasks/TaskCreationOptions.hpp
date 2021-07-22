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
  // Autogenerated type: System.Threading.Tasks.TaskCreationOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TaskCreationOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TaskCreationOptions
    constexpr TaskCreationOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions None
    static System::Threading::Tasks::TaskCreationOptions _get_None();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions None
    static void _set_None(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions PreferFairness
    static constexpr const int PreferFairness = 1;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions PreferFairness
    static System::Threading::Tasks::TaskCreationOptions _get_PreferFairness();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions PreferFairness
    static void _set_PreferFairness(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions LongRunning
    static constexpr const int LongRunning = 2;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions LongRunning
    static System::Threading::Tasks::TaskCreationOptions _get_LongRunning();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions LongRunning
    static void _set_LongRunning(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions AttachedToParent
    static constexpr const int AttachedToParent = 4;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions AttachedToParent
    static System::Threading::Tasks::TaskCreationOptions _get_AttachedToParent();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions AttachedToParent
    static void _set_AttachedToParent(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions DenyChildAttach
    static constexpr const int DenyChildAttach = 8;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions DenyChildAttach
    static System::Threading::Tasks::TaskCreationOptions _get_DenyChildAttach();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions DenyChildAttach
    static void _set_DenyChildAttach(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions HideScheduler
    static constexpr const int HideScheduler = 16;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions HideScheduler
    static System::Threading::Tasks::TaskCreationOptions _get_HideScheduler();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions HideScheduler
    static void _set_HideScheduler(System::Threading::Tasks::TaskCreationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskCreationOptions RunContinuationsAsynchronously
    static constexpr const int RunContinuationsAsynchronously = 64;
    // Get static field: static public System.Threading.Tasks.TaskCreationOptions RunContinuationsAsynchronously
    static System::Threading::Tasks::TaskCreationOptions _get_RunContinuationsAsynchronously();
    // Set static field: static public System.Threading.Tasks.TaskCreationOptions RunContinuationsAsynchronously
    static void _set_RunContinuationsAsynchronously(System::Threading::Tasks::TaskCreationOptions value);
  }; // System.Threading.Tasks.TaskCreationOptions
  #pragma pack(pop)
  static check_size<sizeof(TaskCreationOptions), 0 + sizeof(int)> __System_Threading_Tasks_TaskCreationOptionsSizeCheck;
  static_assert(sizeof(TaskCreationOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskCreationOptions, "System.Threading.Tasks", "TaskCreationOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
