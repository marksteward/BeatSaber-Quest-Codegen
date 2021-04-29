// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/Timer
  class TimerThread::Timer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly System.Int32 m_StartTimeMilliseconds
    // Size: 0x4
    // Offset: 0x10
    int m_StartTimeMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 m_DurationMilliseconds
    // Size: 0x4
    // Offset: 0x14
    int m_DurationMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Timer
    Timer(int m_StartTimeMilliseconds_ = {}, int m_DurationMilliseconds_ = {}) noexcept : m_StartTimeMilliseconds{m_StartTimeMilliseconds_}, m_DurationMilliseconds{m_DurationMilliseconds_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0x1425AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Timer* New_ctor(int durationMilliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::TimerThread::Timer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Timer*, creationType>(durationMilliseconds)));
    }
    // System.Boolean Cancel()
    // Offset: 0xFFFFFFFF
    bool Cancel();
    // public System.Void Dispose()
    // Offset: 0x1425AF0
    void Dispose();
  }; // System.Net.TimerThread/Timer
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::Timer), 20 + sizeof(int)> __System_Net_TimerThread_TimerSizeCheck;
  static_assert(sizeof(TimerThread::Timer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::Timer*, "System.Net", "TimerThread/Timer");
