// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Size: 0x28
  // Autogenerated type: NUnit.Framework.Internal.Execution.CountdownEvent
  // [] Offset: FFFFFFFF
  class CountdownEvent : public ::Il2CppObject {
    public:
    // private System.Int32 _initialCount
    // Size: 0x4
    // Offset: 0x10
    int initialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remainingCount
    // Size: 0x4
    // Offset: 0x14
    int remainingCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _lock
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent _event
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ManualResetEvent* event;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // Creating value type constructor for type: CountdownEvent
    CountdownEvent(int initialCount_ = {}, int remainingCount_ = {}, ::Il2CppObject* lock_ = {}, System::Threading::ManualResetEvent* event_ = {}) noexcept : initialCount{initialCount_}, remainingCount{remainingCount_}, lock{lock_}, event{event_} {}
    // public System.Void .ctor(System.Int32 initialCount)
    // Offset: 0x13F15F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownEvent* New_ctor(int initialCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Execution::CountdownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownEvent*, creationType>(initialCount)));
    }
    // public System.Int32 get_CurrentCount()
    // Offset: 0x13F16A8
    int get_CurrentCount();
    // public System.Void Signal()
    // Offset: 0x13F16B0
    void Signal();
  }; // NUnit.Framework.Internal.Execution.CountdownEvent
  static check_size<sizeof(CountdownEvent), 32 + sizeof(System::Threading::ManualResetEvent*)> __NUnit_Framework_Internal_Execution_CountdownEventSizeCheck;
  static_assert(sizeof(CountdownEvent) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::CountdownEvent*, "NUnit.Framework.Internal.Execution", "CountdownEvent");
#pragma pack(pop)
