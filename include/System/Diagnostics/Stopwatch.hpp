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
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Stopwatch
  // [] Offset: FFFFFFFF
  class Stopwatch : public ::Il2CppObject {
    public:
    // private System.Int64 elapsed
    // Size: 0x8
    // Offset: 0x10
    int64_t elapsed;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 started
    // Size: 0x8
    // Offset: 0x18
    int64_t started;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean is_running
    // Size: 0x1
    // Offset: 0x20
    bool is_running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Stopwatch
    Stopwatch(int64_t elapsed_ = {}, int64_t started_ = {}, bool is_running_ = {}) noexcept : elapsed{elapsed_}, started{started_}, is_running{is_running_} {}
    // Get static field: static public readonly System.Int64 Frequency
    static int64_t _get_Frequency();
    // Set static field: static public readonly System.Int64 Frequency
    static void _set_Frequency(int64_t value);
    // Get static field: static public readonly System.Boolean IsHighResolution
    static bool _get_IsHighResolution();
    // Set static field: static public readonly System.Boolean IsHighResolution
    static void _set_IsHighResolution(bool value);
    // static public System.Int64 GetTimestamp()
    // Offset: 0x1485D18
    static int64_t GetTimestamp();
    // public System.TimeSpan get_Elapsed()
    // Offset: 0x1485D24
    System::TimeSpan get_Elapsed();
    // public System.Int64 get_ElapsedMilliseconds()
    // Offset: 0x1485EC0
    int64_t get_ElapsedMilliseconds();
    // public System.Int64 get_ElapsedTicks()
    // Offset: 0x1485E40
    int64_t get_ElapsedTicks();
    // public System.Boolean get_IsRunning()
    // Offset: 0x1485FCC
    bool get_IsRunning();
    // public System.Void Reset()
    // Offset: 0x1485FD4
    void Reset();
    // public System.Void Start()
    // Offset: 0x1485FE0
    void Start();
    // public System.Void Stop()
    // Offset: 0x1486058
    void Stop();
    // static private System.Void .cctor()
    // Offset: 0x14860E0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1485D1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stopwatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Stopwatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stopwatch*, creationType>()));
    }
  }; // System.Diagnostics.Stopwatch
  static check_size<sizeof(Stopwatch), 32 + sizeof(bool)> __System_Diagnostics_StopwatchSizeCheck;
  static_assert(sizeof(Stopwatch) == 0x21);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Stopwatch*, "System.Diagnostics", "Stopwatch");
