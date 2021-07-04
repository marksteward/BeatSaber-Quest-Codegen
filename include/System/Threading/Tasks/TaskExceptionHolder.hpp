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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: EventArgs
  class EventArgs;
  // Forward declaring type: AggregateException
  class AggregateException;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskExceptionHolder
  class TaskExceptionHolder : public ::Il2CppObject {
    public:
    // private readonly System.Threading.Tasks.Task m_task
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::Task* m_task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // private System.Collections.Generic.List`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> m_faultExceptions
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*) == 0x8);
    // private System.Runtime.ExceptionServices.ExceptionDispatchInfo m_cancellationException
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException;
    // Field size check
    static_assert(sizeof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
    // private System.Boolean m_isHandled
    // Size: 0x1
    // Offset: 0x28
    bool m_isHandled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TaskExceptionHolder
    TaskExceptionHolder(System::Threading::Tasks::Task* m_task_ = {}, System::Collections::Generic::List_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions_ = {}, System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException_ = {}, bool m_isHandled_ = {}) noexcept : m_task{m_task_}, m_faultExceptions{m_faultExceptions_}, m_cancellationException{m_cancellationException_}, m_isHandled{m_isHandled_} {}
    // Get static field: static private readonly System.Boolean s_failFastOnUnobservedException
    static bool _get_s_failFastOnUnobservedException();
    // Set static field: static private readonly System.Boolean s_failFastOnUnobservedException
    static void _set_s_failFastOnUnobservedException(bool value);
    // Get static field: static private System.Boolean s_domainUnloadStarted
    static bool _get_s_domainUnloadStarted();
    // Set static field: static private System.Boolean s_domainUnloadStarted
    static void _set_s_domainUnloadStarted(bool value);
    // Get static field: static private System.EventHandler s_adUnloadEventHandler
    static System::EventHandler* _get_s_adUnloadEventHandler();
    // Set static field: static private System.EventHandler s_adUnloadEventHandler
    static void _set_s_adUnloadEventHandler(System::EventHandler* value);
    // System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0x188E2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskExceptionHolder* New_ctor(System::Threading::Tasks::Task* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskExceptionHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskExceptionHolder*, creationType>(task)));
    }
    // static private System.Boolean ShouldFailFastOnUnobservedException()
    // Offset: 0x188E460
    static bool ShouldFailFastOnUnobservedException();
    // static private System.Void EnsureADUnloadCallbackRegistered()
    // Offset: 0x188E33C
    static void EnsureADUnloadCallbackRegistered();
    // static private System.Void AppDomainUnloadCallback(System.Object sender, System.EventArgs e)
    // Offset: 0x188E468
    static void AppDomainUnloadCallback(::Il2CppObject* sender, System::EventArgs* e);
    // System.Boolean get_ContainsFaultList()
    // Offset: 0x188EC84
    bool get_ContainsFaultList();
    // System.Void Add(System.Object exceptionObject, System.Boolean representsCancellation)
    // Offset: 0x188ECAC
    void Add(::Il2CppObject* exceptionObject, bool representsCancellation);
    // private System.Void SetCancellationException(System.Object exceptionObject)
    // Offset: 0x188ECB8
    void SetCancellationException(::Il2CppObject* exceptionObject);
    // private System.Void AddFaultException(System.Object exceptionObject)
    // Offset: 0x188ED74
    void AddFaultException(::Il2CppObject* exceptionObject);
    // private System.Void MarkAsUnhandled()
    // Offset: 0x188F334
    void MarkAsUnhandled();
    // System.Void MarkAsHandled(System.Boolean calledFromFinalizer)
    // Offset: 0x188F2A0
    void MarkAsHandled(bool calledFromFinalizer);
    // System.AggregateException CreateExceptionObject(System.Boolean calledFromFinalizer, System.Exception includeThisException)
    // Offset: 0x188F3B4
    System::AggregateException* CreateExceptionObject(bool calledFromFinalizer, System::Exception* includeThisException);
    // System.Collections.ObjectModel.ReadOnlyCollection`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> GetExceptionDispatchInfos()
    // Offset: 0x188F554
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos();
    // System.Runtime.ExceptionServices.ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
    // Offset: 0x188F5D4
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo();
    // static private System.Void .cctor()
    // Offset: 0x188F5DC
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x188E4D8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Threading.Tasks.TaskExceptionHolder
  #pragma pack(pop)
  static check_size<sizeof(TaskExceptionHolder), 40 + sizeof(bool)> __System_Threading_Tasks_TaskExceptionHolderSizeCheck;
  static_assert(sizeof(TaskExceptionHolder) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskExceptionHolder*, "System.Threading.Tasks", "TaskExceptionHolder");
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException
// Il2CppName: ShouldFailFastOnUnobservedException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::EnsureADUnloadCallbackRegistered
// Il2CppName: EnsureADUnloadCallbackRegistered
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::AppDomainUnloadCallback
// Il2CppName: AppDomainUnloadCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList
// Il2CppName: get_ContainsFaultList
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::SetCancellationException
// Il2CppName: SetCancellationException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::AddFaultException
// Il2CppName: AddFaultException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled
// Il2CppName: MarkAsUnhandled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled
// Il2CppName: MarkAsHandled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject
// Il2CppName: CreateExceptionObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos
// Il2CppName: GetExceptionDispatchInfos
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo
// Il2CppName: GetCancellationExceptionDispatchInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExceptionHolder::Finalize
// Il2CppName: Finalize
// Cannot perform method pointer template specialization from operators!
