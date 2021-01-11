// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: SortedList
  class SortedList;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Timer/Scheduler
  // [] Offset: FFFFFFFF
  class Timer::Scheduler : public ::Il2CppObject {
    public:
    // private System.Collections.SortedList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::SortedList* list;
    // Field size check
    static_assert(sizeof(System::Collections::SortedList*) == 0x8);
    // private System.Threading.ManualResetEvent changed
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* changed;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // Creating value type constructor for type: Scheduler
    Scheduler(System::Collections::SortedList* list_ = {}, System::Threading::ManualResetEvent* changed_ = {}) noexcept : list{list_}, changed{changed_} {}
    // Get static field: static private System.Threading.Timer/Scheduler instance
    static System::Threading::Timer::Scheduler* _get_instance();
    // Set static field: static private System.Threading.Timer/Scheduler instance
    static void _set_instance(System::Threading::Timer::Scheduler* value);
    // static private System.Void .cctor()
    // Offset: 0x1D1E550
    static void _cctor();
    // static public System.Threading.Timer/Scheduler get_Instance()
    // Offset: 0x1D1E6F4
    static System::Threading::Timer::Scheduler* get_Instance();
    // public System.Void Remove(System.Threading.Timer timer)
    // Offset: 0x1D1E250
    void Remove(System::Threading::Timer* timer);
    // public System.Void Change(System.Threading.Timer timer, System.Int64 new_next_run)
    // Offset: 0x1D1E310
    void Change(System::Threading::Timer* timer, int64_t new_next_run);
    // private System.Int32 FindByDueTime(System.Int64 nr)
    // Offset: 0x1D1E8F4
    int FindByDueTime(int64_t nr);
    // private System.Void Add(System.Threading.Timer timer)
    // Offset: 0x1D1E7C4
    void Add(System::Threading::Timer* timer);
    // private System.Int32 InternalRemove(System.Threading.Timer timer)
    // Offset: 0x1D1E764
    int InternalRemove(System::Threading::Timer* timer);
    // static private System.Void TimerCB(System.Object o)
    // Offset: 0x1D1EA50
    static void TimerCB(::Il2CppObject* o);
    // private System.Void SchedulerThread()
    // Offset: 0x1D1EE7C
    void SchedulerThread();
    // private System.Void ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer> list, System.Int32 initial)
    // Offset: 0x1D1F3F4
    void ShrinkIfNeeded(System::Collections::Generic::List_1<System::Threading::Timer*>* list, int initial);
    // private System.Void .ctor()
    // Offset: 0x1D1E5B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Timer::Scheduler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Timer::Scheduler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Timer::Scheduler*, creationType>()));
    }
  }; // System.Threading.Timer/Scheduler
  static check_size<sizeof(Timer::Scheduler), 24 + sizeof(System::Threading::ManualResetEvent*)> __System_Threading_Timer_SchedulerSizeCheck;
  static_assert(sizeof(Timer::Scheduler) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer::Scheduler*, "System.Threading", "Timer/Scheduler");
