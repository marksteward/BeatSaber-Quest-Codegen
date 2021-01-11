// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.ProcessThreadTimes
  // [] Offset: FFFFFFFF
  class ProcessThreadTimes : public ::Il2CppObject {
    public:
    // System.Int64 create
    // Size: 0x8
    // Offset: 0x10
    int64_t create;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 exit
    // Size: 0x8
    // Offset: 0x18
    int64_t exit;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 kernel
    // Size: 0x8
    // Offset: 0x20
    int64_t kernel;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 user
    // Size: 0x8
    // Offset: 0x28
    int64_t user;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: ProcessThreadTimes
    ProcessThreadTimes(int64_t create_ = {}, int64_t exit_ = {}, int64_t kernel_ = {}, int64_t user_ = {}) noexcept : create{create_}, exit{exit_}, kernel{kernel_}, user{user_} {}
    // public System.TimeSpan get_TotalProcessorTime()
    // Offset: 0x1485178
    System::TimeSpan get_TotalProcessorTime();
    // public System.Void .ctor()
    // Offset: 0x1484F54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProcessThreadTimes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::ProcessThreadTimes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProcessThreadTimes*, creationType>()));
    }
  }; // System.Diagnostics.ProcessThreadTimes
  static check_size<sizeof(ProcessThreadTimes), 40 + sizeof(int64_t)> __System_Diagnostics_ProcessThreadTimesSizeCheck;
  static_assert(sizeof(ProcessThreadTimes) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessThreadTimes*, "System.Diagnostics", "ProcessThreadTimes");
