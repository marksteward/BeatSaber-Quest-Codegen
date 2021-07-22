// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskContinuation
#include "System/Threading/Tasks/TaskContinuation.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.AwaitTaskContinuation
  // [TokenAttribute] Offset: FFFFFFFF
  class AwaitTaskContinuation : public System::Threading::Tasks::TaskContinuation/*, public System::Threading::IThreadPoolWorkItem*/ {
    public:
    // Nested type: System::Threading::Tasks::AwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.ExecutionContext m_capturedContext
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ExecutionContext* m_capturedContext;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // protected readonly System.Action m_action
    // Size: 0x8
    // Offset: 0x18
    System::Action* m_action;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: AwaitTaskContinuation
    AwaitTaskContinuation(System::Threading::ExecutionContext* m_capturedContext_ = {}, System::Action* m_action_ = {}) noexcept : m_capturedContext{m_capturedContext_}, m_action{m_action_} {}
    // Creating interface conversion operator: operator System::Threading::IThreadPoolWorkItem
    operator System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get static field: static private System.Threading.ContextCallback s_invokeActionCallback
    static System::Threading::ContextCallback* _get_s_invokeActionCallback();
    // Set static field: static private System.Threading.ContextCallback s_invokeActionCallback
    static void _set_s_invokeActionCallback(System::Threading::ContextCallback* value);
    // static System.Boolean get_IsValidLocationForInlining()
    // Offset: 0x18ABFD8
    static bool get_IsValidLocationForInlining();
    // System.Void .ctor(System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x18ABB7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitTaskContinuation* New_ctor(System::Action* action, bool flowExecutionContext, System::Threading::StackCrawlMark& stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::AwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitTaskContinuation*, creationType>(action, flowExecutionContext, stackMark)));
    }
    // System.Void .ctor(System.Action action, System.Boolean flowExecutionContext)
    // Offset: 0x18ABC0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitTaskContinuation* New_ctor(System::Action* action, bool flowExecutionContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::AwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitTaskContinuation*, creationType>(action, flowExecutionContext)));
    }
    // protected System.Threading.Tasks.Task CreateTask(System.Action`1<System.Object> action, System.Object state, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x18ABC98
    System::Threading::Tasks::Task* CreateTask(System::Action_1<::Il2CppObject*>* action, ::Il2CppObject* state, System::Threading::Tasks::TaskScheduler* scheduler);
    // private System.Void ExecuteWorkItemHelper()
    // Offset: 0x18AC2B4
    void ExecuteWorkItemHelper();
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x18AC40C
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x18AC434
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
    // static private System.Void InvokeAction(System.Object state)
    // Offset: 0x18AC438
    static void InvokeAction(::Il2CppObject* state);
    // static protected System.Threading.ContextCallback GetInvokeActionCallback()
    // Offset: 0x18AC4A4
    static System::Threading::ContextCallback* GetInvokeActionCallback();
    // protected System.Void RunCallback(System.Threading.ContextCallback callback, System.Object state, ref System.Threading.Tasks.Task currentTask)
    // Offset: 0x18AC128
    void RunCallback(System::Threading::ContextCallback* callback, ::Il2CppObject* state, System::Threading::Tasks::Task*& currentTask);
    // static System.Void RunOrScheduleAction(System.Action action, System.Boolean allowInlining, ref System.Threading.Tasks.Task currentTask)
    // Offset: 0x18AC67C
    static void RunOrScheduleAction(System::Action* action, bool allowInlining, System::Threading::Tasks::Task*& currentTask);
    // static System.Void UnsafeScheduleAction(System.Action action, System.Threading.Tasks.Task task)
    // Offset: 0x18AC7F0
    static void UnsafeScheduleAction(System::Action* action, System::Threading::Tasks::Task* task);
    // static protected System.Void ThrowAsyncIfNecessary(System.Exception exc)
    // Offset: 0x18AC52C
    static void ThrowAsyncIfNecessary(System::Exception* exc);
    // override System.Void Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    // Offset: 0x18ABEB4
    // Implemented from: System.Threading.Tasks.TaskContinuation
    // Base method: System.Void TaskContinuation::Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.AwaitTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(AwaitTaskContinuation), 24 + sizeof(System::Action*)> __System_Threading_Tasks_AwaitTaskContinuationSizeCheck;
  static_assert(sizeof(AwaitTaskContinuation) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AwaitTaskContinuation*, "System.Threading.Tasks", "AwaitTaskContinuation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining
// Il2CppName: get_IsValidLocationForInlining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "get_IsValidLocationForInlining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::CreateTask
// Il2CppName: CreateTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, System::Threading::Tasks::TaskScheduler*)>(&System::Threading::Tasks::AwaitTaskContinuation::CreateTask)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* scheduler = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskScheduler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "CreateTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, state, scheduler});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::ExecuteWorkItemHelper
// Il2CppName: ExecuteWorkItemHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)()>(&System::Threading::Tasks::AwaitTaskContinuation::ExecuteWorkItemHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "ExecuteWorkItemHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
// Il2CppName: System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)()>(&System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_MarkAborted
// Il2CppName: System.Threading.IThreadPoolWorkItem.MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::ThreadAbortException*)>(&System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::InvokeAction
// Il2CppName: InvokeAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Tasks::AwaitTaskContinuation::InvokeAction)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "InvokeAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback
// Il2CppName: GetInvokeActionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ContextCallback* (*)()>(&System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "GetInvokeActionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::RunCallback
// Il2CppName: RunCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::ContextCallback*, ::Il2CppObject*, System::Threading::Tasks::Task*&)>(&System::Threading::Tasks::AwaitTaskContinuation::RunCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "ContextCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* currentTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "RunCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state, currentTask});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction
// Il2CppName: RunOrScheduleAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action*, bool, System::Threading::Tasks::Task*&)>(&System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* allowInlining = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* currentTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "RunOrScheduleAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, allowInlining, currentTask});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction
// Il2CppName: UnsafeScheduleAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action*, System::Threading::Tasks::Task*)>(&System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "UnsafeScheduleAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, task});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary
// Il2CppName: ThrowAsyncIfNecessary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*)>(&System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary)> {
  static const MethodInfo* get() {
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "ThrowAsyncIfNecessary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exc});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AwaitTaskContinuation::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::AwaitTaskContinuation::Run)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* canInlineContinuationTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AwaitTaskContinuation*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, canInlineContinuationTask});
  }
};
