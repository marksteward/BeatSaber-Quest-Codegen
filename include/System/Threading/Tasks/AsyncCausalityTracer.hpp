// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: CausalityTraceLevel
  struct CausalityTraceLevel;
  // Forward declaring type: AsyncCausalityStatus
  struct AsyncCausalityStatus;
  // Forward declaring type: CausalityRelation
  struct CausalityRelation;
  // Forward declaring type: CausalitySynchronousWork
  struct CausalitySynchronousWork;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.AsyncCausalityTracer
  // [FriendAccessAllowedAttribute] Offset: D7D228
  class AsyncCausalityTracer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AsyncCausalityTracer
    AsyncCausalityTracer() noexcept {}
    // static System.Boolean get_LoggingOn()
    // Offset: 0x18B2664
    static bool get_LoggingOn();
    // static System.Void TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Int32 taskId, System.String operationName, System.UInt64 relatedContext)
    // Offset: 0x18B266C
    static void TraceOperationCreation(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, ::Il2CppString* operationName, uint64_t relatedContext);
    // static System.Void TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Int32 taskId, System.Threading.Tasks.AsyncCausalityStatus status)
    // Offset: 0x18B2670
    static void TraceOperationCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::AsyncCausalityStatus status);
    // static System.Void TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Int32 taskId, System.Threading.Tasks.CausalityRelation relation)
    // Offset: 0x18B2674
    static void TraceOperationRelation(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::CausalityRelation relation);
    // static System.Void TraceSynchronousWorkStart(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Int32 taskId, System.Threading.Tasks.CausalitySynchronousWork work)
    // Offset: 0x18B2678
    static void TraceSynchronousWorkStart(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::CausalitySynchronousWork work);
    // static System.Void TraceSynchronousWorkCompletion(System.Threading.Tasks.CausalityTraceLevel traceLevel, System.Threading.Tasks.CausalitySynchronousWork work)
    // Offset: 0x18B267C
    static void TraceSynchronousWorkCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::CausalitySynchronousWork work);
  }; // System.Threading.Tasks.AsyncCausalityTracer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AsyncCausalityTracer*, "System.Threading.Tasks", "AsyncCausalityTracer");
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn
// Il2CppName: get_LoggingOn
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation
// Il2CppName: TraceOperationCreation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion
// Il2CppName: TraceOperationCompletion
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationRelation
// Il2CppName: TraceOperationRelation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart
// Il2CppName: TraceSynchronousWorkStart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion
// Il2CppName: TraceSynchronousWorkCompletion
// Cannot perform method pointer template specialization from operators!
