// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x88
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerException
  // [] Offset: FFFFFFFF
  class TaskSchedulerException : public System::Exception {
    public:
    // Creating value type constructor for type: TaskSchedulerException
    TaskSchedulerException() noexcept {}
    // public System.Void .ctor(System.Exception innerException)
    // Offset: 0x1D11A5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor(System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>(innerException)));
    }
    // public System.Void .ctor()
    // Offset: 0x1D19744
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D197CC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskSchedulerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerException*, creationType>(info, context)));
    }
  }; // System.Threading.Tasks.TaskSchedulerException
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskSchedulerException*, "System.Threading.Tasks", "TaskSchedulerException");
#pragma pack(pop)
