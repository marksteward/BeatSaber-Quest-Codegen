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
  // Autogenerated type: System.Threading.Tasks.AsyncCausalityStatus
  // [TokenAttribute] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: D6A988
  struct AsyncCausalityStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AsyncCausalityStatus
    constexpr AsyncCausalityStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.AsyncCausalityStatus Started
    static constexpr const int Started = 0;
    // Get static field: static public System.Threading.Tasks.AsyncCausalityStatus Started
    static System::Threading::Tasks::AsyncCausalityStatus _get_Started();
    // Set static field: static public System.Threading.Tasks.AsyncCausalityStatus Started
    static void _set_Started(System::Threading::Tasks::AsyncCausalityStatus value);
    // static field const value: static public System.Threading.Tasks.AsyncCausalityStatus Completed
    static constexpr const int Completed = 1;
    // Get static field: static public System.Threading.Tasks.AsyncCausalityStatus Completed
    static System::Threading::Tasks::AsyncCausalityStatus _get_Completed();
    // Set static field: static public System.Threading.Tasks.AsyncCausalityStatus Completed
    static void _set_Completed(System::Threading::Tasks::AsyncCausalityStatus value);
    // static field const value: static public System.Threading.Tasks.AsyncCausalityStatus Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public System.Threading.Tasks.AsyncCausalityStatus Canceled
    static System::Threading::Tasks::AsyncCausalityStatus _get_Canceled();
    // Set static field: static public System.Threading.Tasks.AsyncCausalityStatus Canceled
    static void _set_Canceled(System::Threading::Tasks::AsyncCausalityStatus value);
    // static field const value: static public System.Threading.Tasks.AsyncCausalityStatus Error
    static constexpr const int Error = 3;
    // Get static field: static public System.Threading.Tasks.AsyncCausalityStatus Error
    static System::Threading::Tasks::AsyncCausalityStatus _get_Error();
    // Set static field: static public System.Threading.Tasks.AsyncCausalityStatus Error
    static void _set_Error(System::Threading::Tasks::AsyncCausalityStatus value);
  }; // System.Threading.Tasks.AsyncCausalityStatus
  #pragma pack(pop)
  static check_size<sizeof(AsyncCausalityStatus), 0 + sizeof(int)> __System_Threading_Tasks_AsyncCausalityStatusSizeCheck;
  static_assert(sizeof(AsyncCausalityStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AsyncCausalityStatus, "System.Threading.Tasks", "AsyncCausalityStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
