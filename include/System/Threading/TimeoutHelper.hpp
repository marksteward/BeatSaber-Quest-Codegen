// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.TimeoutHelper
  // [] Offset: FFFFFFFF
  class TimeoutHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimeoutHelper
    TimeoutHelper() noexcept {}
    // static public System.UInt32 GetTime()
    // Offset: 0x1D0ABD0
    static uint GetTime();
    // static public System.Int32 UpdateTimeOut(System.UInt32 startTime, System.Int32 originalWaitMillisecondsTimeout)
    // Offset: 0x1D0B060
    static int UpdateTimeOut(uint startTime, int originalWaitMillisecondsTimeout);
  }; // System.Threading.TimeoutHelper
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
