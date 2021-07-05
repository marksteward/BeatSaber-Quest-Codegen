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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn
// Il2CppName: get_LoggingOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "get_LoggingOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation
// Il2CppName: TraceOperationCreation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, int, ::Il2CppString*, uint64_t)>(&System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation)> {
  static const MethodInfo* get() {
    static auto* traceLevel = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityTraceLevel")->byval_arg;
    static auto* taskId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* operationName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* relatedContext = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "TraceOperationCreation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceLevel, taskId, operationName, relatedContext});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion
// Il2CppName: TraceOperationCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, int, System::Threading::Tasks::AsyncCausalityStatus)>(&System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion)> {
  static const MethodInfo* get() {
    static auto* traceLevel = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityTraceLevel")->byval_arg;
    static auto* taskId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "AsyncCausalityStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "TraceOperationCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceLevel, taskId, status});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceOperationRelation
// Il2CppName: TraceOperationRelation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, int, System::Threading::Tasks::CausalityRelation)>(&System::Threading::Tasks::AsyncCausalityTracer::TraceOperationRelation)> {
  static const MethodInfo* get() {
    static auto* traceLevel = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityTraceLevel")->byval_arg;
    static auto* taskId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "TraceOperationRelation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceLevel, taskId, relation});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart
// Il2CppName: TraceSynchronousWorkStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, int, System::Threading::Tasks::CausalitySynchronousWork)>(&System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart)> {
  static const MethodInfo* get() {
    static auto* traceLevel = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityTraceLevel")->byval_arg;
    static auto* taskId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* work = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalitySynchronousWork")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "TraceSynchronousWorkStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceLevel, taskId, work});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion
// Il2CppName: TraceSynchronousWorkCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::CausalitySynchronousWork)>(&System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion)> {
  static const MethodInfo* get() {
    static auto* traceLevel = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalityTraceLevel")->byval_arg;
    static auto* work = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "CausalitySynchronousWork")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::AsyncCausalityTracer*), "TraceSynchronousWorkCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{traceLevel, work});
  }
};
