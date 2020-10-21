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
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.AsyncOperationStatus
  struct AsyncOperationStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AsyncOperationStatus
    constexpr AsyncOperationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static constexpr const int Initialize = 0;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static Mono::Net::Security::AsyncOperationStatus _get_Initialize();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Initialize
    static void _set_Initialize(Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Continue
    static constexpr const int Continue = 1;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Continue
    static Mono::Net::Security::AsyncOperationStatus _get_Continue();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Continue
    static void _set_Continue(Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static constexpr const int ReadDone = 2;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static Mono::Net::Security::AsyncOperationStatus _get_ReadDone();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus ReadDone
    static void _set_ReadDone(Mono::Net::Security::AsyncOperationStatus value);
    // static field const value: static public Mono.Net.Security.AsyncOperationStatus Complete
    static constexpr const int Complete = 3;
    // Get static field: static public Mono.Net.Security.AsyncOperationStatus Complete
    static Mono::Net::Security::AsyncOperationStatus _get_Complete();
    // Set static field: static public Mono.Net.Security.AsyncOperationStatus Complete
    static void _set_Complete(Mono::Net::Security::AsyncOperationStatus value);
  }; // Mono.Net.Security.AsyncOperationStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncOperationStatus, "Mono.Net.Security", "AsyncOperationStatus");
#pragma pack(pop)