// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskToApm
#include "System/Threading/Tasks/TaskToApm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D39FC8
  class TaskToApm::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.AsyncCallback callback
    // Size: 0x8
    // Offset: 0x10
    System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // public System.IAsyncResult asyncResult
    // Size: 0x8
    // Offset: 0x18
    System::IAsyncResult* asyncResult;
    // Field size check
    static_assert(sizeof(System::IAsyncResult*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(System::AsyncCallback* callback_ = {}, System::IAsyncResult* asyncResult_ = {}) noexcept : callback{callback_}, asyncResult{asyncResult_} {}
    // System.Void <InvokeCallbackWhenTaskCompletes>b__0()
    // Offset: 0x1D19B8C
    void $InvokeCallbackWhenTaskCompletes$b__0();
    // public System.Void .ctor()
    // Offset: 0x1D19B84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskToApm::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskToApm::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
  static check_size<sizeof(TaskToApm::$$c__DisplayClass3_0), 24 + sizeof(System::IAsyncResult*)> __System_Threading_Tasks_TaskToApm_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(TaskToApm::$$c__DisplayClass3_0) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0*, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
