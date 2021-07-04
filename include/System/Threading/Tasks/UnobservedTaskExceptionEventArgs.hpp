// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AggregateException
  class AggregateException;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.UnobservedTaskExceptionEventArgs
  class UnobservedTaskExceptionEventArgs : public System::EventArgs {
    public:
    // private System.AggregateException m_exception
    // Size: 0x8
    // Offset: 0x10
    System::AggregateException* m_exception;
    // Field size check
    static_assert(sizeof(System::AggregateException*) == 0x8);
    // System.Boolean m_observed
    // Size: 0x1
    // Offset: 0x18
    bool m_observed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnobservedTaskExceptionEventArgs
    UnobservedTaskExceptionEventArgs(System::AggregateException* m_exception_ = {}, bool m_observed_ = {}) noexcept : m_exception{m_exception_}, m_observed{m_observed_} {}
    // public System.Void .ctor(System.AggregateException exception)
    // Offset: 0x188EAE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnobservedTaskExceptionEventArgs* New_ctor(System::AggregateException* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::UnobservedTaskExceptionEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnobservedTaskExceptionEventArgs*, creationType>(exception)));
    }
  }; // System.Threading.Tasks.UnobservedTaskExceptionEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UnobservedTaskExceptionEventArgs), 24 + sizeof(bool)> __System_Threading_Tasks_UnobservedTaskExceptionEventArgsSizeCheck;
  static_assert(sizeof(UnobservedTaskExceptionEventArgs) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::UnobservedTaskExceptionEventArgs*, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
// Writing MetadataGetter for method: System::Threading::Tasks::UnobservedTaskExceptionEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
