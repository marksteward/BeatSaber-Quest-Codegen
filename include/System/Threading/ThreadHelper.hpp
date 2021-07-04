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
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadHelper
  class ThreadHelper : public ::Il2CppObject {
    public:
    // private System.Delegate _start
    // Size: 0x8
    // Offset: 0x10
    System::Delegate* start;
    // Field size check
    static_assert(sizeof(System::Delegate*) == 0x8);
    // private System.Object _startArg
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* startArg;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ExecutionContext _executionContext
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ExecutionContext* executionContext;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // Creating value type constructor for type: ThreadHelper
    ThreadHelper(System::Delegate* start_ = {}, ::Il2CppObject* startArg_ = {}, System::Threading::ExecutionContext* executionContext_ = {}) noexcept : start{start_}, startArg{startArg_}, executionContext{executionContext_} {}
    // Get static field: static System.Threading.ContextCallback _ccb
    static System::Threading::ContextCallback* _get__ccb();
    // Set static field: static System.Threading.ContextCallback _ccb
    static void _set__ccb(System::Threading::ContextCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x1892638
    static void _cctor();
    // System.Void .ctor(System.Delegate start)
    // Offset: 0x1891C70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadHelper* New_ctor(System::Delegate* start) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadHelper*, creationType>(start)));
    }
    // System.Void SetExecutionContextHelper(System.Threading.ExecutionContext ec)
    // Offset: 0x18926B4
    void SetExecutionContextHelper(System::Threading::ExecutionContext* ec);
    // static private System.Void ThreadStart_Context(System.Object state)
    // Offset: 0x18926BC
    static void ThreadStart_Context(::Il2CppObject* state);
    // System.Void ThreadStart(System.Object obj)
    // Offset: 0x18929AC
    void ThreadStart(::Il2CppObject* obj);
    // System.Void ThreadStart()
    // Offset: 0x1892AA4
    void ThreadStart();
  }; // System.Threading.ThreadHelper
  #pragma pack(pop)
  static check_size<sizeof(ThreadHelper), 32 + sizeof(System::Threading::ExecutionContext*)> __System_Threading_ThreadHelperSizeCheck;
  static_assert(sizeof(ThreadHelper) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadHelper*, "System.Threading", "ThreadHelper");
// Writing MetadataGetter for method: System::Threading::ThreadHelper::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::ThreadHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ThreadHelper::SetExecutionContextHelper
// Il2CppName: SetExecutionContextHelper
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::ThreadHelper::ThreadStart_Context
// Il2CppName: ThreadStart_Context
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::ThreadHelper::ThreadStart
// Il2CppName: ThreadStart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::ThreadHelper::ThreadStart
// Il2CppName: ThreadStart
// Cannot perform method pointer template specialization from operators!
