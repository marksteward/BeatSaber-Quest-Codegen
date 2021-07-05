// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.ThreadState
#include "System/Threading/ThreadState.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x120
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.InternalThread
  class InternalThread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
    public:
    // private System.Int32 lock_thread_id
    // Size: 0x4
    // Offset: 0x10
    int lock_thread_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lock_thread_id and: handle
    char __padding0[0x4] = {};
    // private System.IntPtr handle
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr native_handle
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr native_handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr unused3
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr unused3;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr name
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr name;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 name_len
    // Size: 0x4
    // Offset: 0x38
    int name_len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.ThreadState state
    // Size: 0x4
    // Offset: 0x3C
    System::Threading::ThreadState state;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadState) == 0x4);
    // private System.Object abort_exc
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* abort_exc;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 abort_state_handle
    // Size: 0x4
    // Offset: 0x48
    int abort_state_handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: abort_state_handle and: thread_id
    char __padding8[0x4] = {};
    // System.Int64 thread_id
    // Size: 0x8
    // Offset: 0x50
    int64_t thread_id;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IntPtr debugger_thread
    // Size: 0x8
    // Offset: 0x58
    System::IntPtr debugger_thread;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.UIntPtr static_data
    // Size: 0x8
    // Offset: 0x60
    System::UIntPtr static_data;
    // Field size check
    static_assert(sizeof(System::UIntPtr) == 0x8);
    // private System.IntPtr runtime_thread_info
    // Size: 0x8
    // Offset: 0x68
    System::IntPtr runtime_thread_info;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object current_appcontext
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* current_appcontext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object root_domain_thread
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* root_domain_thread;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Byte[] _serialized_principal
    // Size: 0x8
    // Offset: 0x80
    ::Array<uint8_t>* serialized_principal;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int32 _serialized_principal_version
    // Size: 0x4
    // Offset: 0x88
    int serialized_principal_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: serialized_principal_version and: appdomain_refs
    char __padding16[0x4] = {};
    // private System.IntPtr appdomain_refs
    // Size: 0x8
    // Offset: 0x90
    System::IntPtr appdomain_refs;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 interruption_requested
    // Size: 0x4
    // Offset: 0x98
    int interruption_requested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: interruption_requested and: synch_cs
    char __padding18[0x4] = {};
    // private System.IntPtr synch_cs
    // Size: 0x8
    // Offset: 0xA0
    System::IntPtr synch_cs;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.Boolean threadpool_thread
    // Size: 0x1
    // Offset: 0xA8
    bool threadpool_thread;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean thread_interrupt_requested
    // Size: 0x1
    // Offset: 0xA9
    bool thread_interrupt_requested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thread_interrupt_requested and: stack_size
    char __padding21[0x2] = {};
    // System.Int32 stack_size
    // Size: 0x4
    // Offset: 0xAC
    int stack_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte apartment_state
    // Size: 0x1
    // Offset: 0xB0
    uint8_t apartment_state;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: apartment_state and: critical_region_level
    char __padding23[0x3] = {};
    // System.Int32 critical_region_level
    // Size: 0x4
    // Offset: 0xB4
    int critical_region_level;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 managed_id
    // Size: 0x4
    // Offset: 0xB8
    int managed_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 small_id
    // Size: 0x4
    // Offset: 0xBC
    int small_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr manage_callback
    // Size: 0x8
    // Offset: 0xC0
    System::IntPtr manage_callback;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr unused4
    // Size: 0x8
    // Offset: 0xC8
    System::IntPtr unused4;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr flags
    // Size: 0x8
    // Offset: 0xD0
    System::IntPtr flags;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr thread_pinning_ref
    // Size: 0x8
    // Offset: 0xD8
    System::IntPtr thread_pinning_ref;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr abort_protected_block_count
    // Size: 0x8
    // Offset: 0xE0
    System::IntPtr abort_protected_block_count;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 priority
    // Size: 0x4
    // Offset: 0xE8
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: priority and: owned_mutex
    char __padding32[0x4] = {};
    // private System.IntPtr owned_mutex
    // Size: 0x8
    // Offset: 0xF0
    System::IntPtr owned_mutex;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr suspended_event
    // Size: 0x8
    // Offset: 0xF8
    System::IntPtr suspended_event;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 self_suspended
    // Size: 0x4
    // Offset: 0x100
    int self_suspended;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: self_suspended and: unused1
    char __padding35[0x4] = {};
    // private System.IntPtr unused1
    // Size: 0x8
    // Offset: 0x108
    System::IntPtr unused1;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr unused2
    // Size: 0x8
    // Offset: 0x110
    System::IntPtr unused2;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr last
    // Size: 0x8
    // Offset: 0x118
    System::IntPtr last;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: InternalThread
    InternalThread(int lock_thread_id_ = {}, System::IntPtr handle_ = {}, System::IntPtr native_handle_ = {}, System::IntPtr unused3_ = {}, System::IntPtr name_ = {}, int name_len_ = {}, System::Threading::ThreadState state_ = {}, ::Il2CppObject* abort_exc_ = {}, int abort_state_handle_ = {}, int64_t thread_id_ = {}, System::IntPtr debugger_thread_ = {}, System::UIntPtr static_data_ = {}, System::IntPtr runtime_thread_info_ = {}, ::Il2CppObject* current_appcontext_ = {}, ::Il2CppObject* root_domain_thread_ = {}, ::Array<uint8_t>* serialized_principal_ = {}, int serialized_principal_version_ = {}, System::IntPtr appdomain_refs_ = {}, int interruption_requested_ = {}, System::IntPtr synch_cs_ = {}, bool threadpool_thread_ = {}, bool thread_interrupt_requested_ = {}, int stack_size_ = {}, uint8_t apartment_state_ = {}, int critical_region_level_ = {}, int managed_id_ = {}, int small_id_ = {}, System::IntPtr manage_callback_ = {}, System::IntPtr unused4_ = {}, System::IntPtr flags_ = {}, System::IntPtr thread_pinning_ref_ = {}, System::IntPtr abort_protected_block_count_ = {}, int priority_ = {}, System::IntPtr owned_mutex_ = {}, System::IntPtr suspended_event_ = {}, int self_suspended_ = {}, System::IntPtr unused1_ = {}, System::IntPtr unused2_ = {}, System::IntPtr last_ = {}) noexcept : lock_thread_id{lock_thread_id_}, handle{handle_}, native_handle{native_handle_}, unused3{unused3_}, name{name_}, name_len{name_len_}, state{state_}, abort_exc{abort_exc_}, abort_state_handle{abort_state_handle_}, thread_id{thread_id_}, debugger_thread{debugger_thread_}, static_data{static_data_}, runtime_thread_info{runtime_thread_info_}, current_appcontext{current_appcontext_}, root_domain_thread{root_domain_thread_}, serialized_principal{serialized_principal_}, serialized_principal_version{serialized_principal_version_}, appdomain_refs{appdomain_refs_}, interruption_requested{interruption_requested_}, synch_cs{synch_cs_}, threadpool_thread{threadpool_thread_}, thread_interrupt_requested{thread_interrupt_requested_}, stack_size{stack_size_}, apartment_state{apartment_state_}, critical_region_level{critical_region_level_}, managed_id{managed_id_}, small_id{small_id_}, manage_callback{manage_callback_}, unused4{unused4_}, flags{flags_}, thread_pinning_ref{thread_pinning_ref_}, abort_protected_block_count{abort_protected_block_count_}, priority{priority_}, owned_mutex{owned_mutex_}, suspended_event{suspended_event_}, self_suspended{self_suspended_}, unused1{unused1_}, unused2{unused2_}, last{last_} {}
    // private System.Void Thread_free_internal()
    // Offset: 0x18AC69C
    void Thread_free_internal();
    // protected override System.Void Finalize()
    // Offset: 0x18AC6A0
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public System.Void .ctor()
    // Offset: 0x18AC708
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalThread* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::InternalThread::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalThread*, creationType>()));
    }
  }; // System.Threading.InternalThread
  #pragma pack(pop)
  static check_size<sizeof(InternalThread), 280 + sizeof(System::IntPtr)> __System_Threading_InternalThreadSizeCheck;
  static_assert(sizeof(InternalThread) == 0x120);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::InternalThread*, "System.Threading", "InternalThread");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::InternalThread::Thread_free_internal
// Il2CppName: Thread_free_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::InternalThread::*)()>(&System::Threading::InternalThread::Thread_free_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::InternalThread*), "Thread_free_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::InternalThread::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::InternalThread::*)()>(&System::Threading::InternalThread::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::InternalThread*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::InternalThread::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
