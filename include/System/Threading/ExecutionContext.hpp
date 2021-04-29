// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: IAsyncLocal
  class IAsyncLocal;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ExecutionContextSwitcher
  struct ExecutionContextSwitcher;
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: IllogicalCallContext
  class IllogicalCallContext;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ExecutionContext
  class ExecutionContext : public ::Il2CppObject/*, public System::IDisposable, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Nested type: System::Threading::ExecutionContext::Flags
    struct Flags;
    // Nested type: System::Threading::ExecutionContext::Reader
    struct Reader;
    // Nested type: System::Threading::ExecutionContext::CaptureOptions
    struct CaptureOptions;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Threading.ExecutionContext/Flags
    struct Flags/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Flags
      constexpr Flags(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Threading.ExecutionContext/Flags None
      static constexpr const int None = 0;
      // Get static field: static public System.Threading.ExecutionContext/Flags None
      static System::Threading::ExecutionContext::Flags _get_None();
      // Set static field: static public System.Threading.ExecutionContext/Flags None
      static void _set_None(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static constexpr const int IsNewCapture = 1;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static System::Threading::ExecutionContext::Flags _get_IsNewCapture();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static void _set_IsNewCapture(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static constexpr const int IsFlowSuppressed = 2;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static System::Threading::ExecutionContext::Flags _get_IsFlowSuppressed();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static void _set_IsFlowSuppressed(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static constexpr const int IsPreAllocatedDefault = 4;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static System::Threading::ExecutionContext::Flags _get_IsPreAllocatedDefault();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static void _set_IsPreAllocatedDefault(System::Threading::ExecutionContext::Flags value);
    }; // System.Threading.ExecutionContext/Flags
    #pragma pack(pop)
    static check_size<sizeof(ExecutionContext::Flags), 0 + sizeof(int)> __System_Threading_ExecutionContext_FlagsSizeCheck;
    static_assert(sizeof(ExecutionContext::Flags) == 0x4);
    // private System.Threading.SynchronizationContext _syncContext
    // Size: 0x8
    // Offset: 0x10
    System::Threading::SynchronizationContext* syncContext;
    // Field size check
    static_assert(sizeof(System::Threading::SynchronizationContext*) == 0x8);
    // private System.Threading.SynchronizationContext _syncContextNoFlow
    // Size: 0x8
    // Offset: 0x18
    System::Threading::SynchronizationContext* syncContextNoFlow;
    // Field size check
    static_assert(sizeof(System::Threading::SynchronizationContext*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _logicalCallContext
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::LogicalCallContext* logicalCallContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IllogicalCallContext _illogicalCallContext
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::IllogicalCallContext* illogicalCallContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IllogicalCallContext*) == 0x8);
    // private System.Threading.ExecutionContext/Flags _flags
    // Size: 0x4
    // Offset: 0x30
    System::Threading::ExecutionContext::Flags flags;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext::Flags) == 0x4);
    // Padding between fields: flags and: localValues
    char __padding4[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> _localValues
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal*, ::Il2CppObject*>* localValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal*, ::Il2CppObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Threading.IAsyncLocal> _localChangeNotifications
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<System::Threading::IAsyncLocal*>* localChangeNotifications;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Threading::IAsyncLocal*>*) == 0x8);
    // Creating value type constructor for type: ExecutionContext
    ExecutionContext(System::Threading::SynchronizationContext* syncContext_ = {}, System::Threading::SynchronizationContext* syncContextNoFlow_ = {}, System::Runtime::Remoting::Messaging::LogicalCallContext* logicalCallContext_ = {}, System::Runtime::Remoting::Messaging::IllogicalCallContext* illogicalCallContext_ = {}, System::Threading::ExecutionContext::Flags flags_ = {}, System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal*, ::Il2CppObject*>* localValues_ = {}, System::Collections::Generic::List_1<System::Threading::IAsyncLocal*>* localChangeNotifications_ = {}) noexcept : syncContext{syncContext_}, syncContextNoFlow{syncContextNoFlow_}, logicalCallContext{logicalCallContext_}, illogicalCallContext{illogicalCallContext_}, flags{flags_}, localValues{localValues_}, localChangeNotifications{localChangeNotifications_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
    static System::Threading::ExecutionContext* _get_s_dummyDefaultEC();
    // Set static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
    static void _set_s_dummyDefaultEC(System::Threading::ExecutionContext* value);
    // System.Boolean get_isNewCapture()
    // Offset: 0x16FD4AC
    bool get_isNewCapture();
    // System.Void set_isNewCapture(System.Boolean value)
    // Offset: 0x16FD4C0
    void set_isNewCapture(bool value);
    // System.Boolean get_isFlowSuppressed()
    // Offset: 0x16FD4DC
    bool get_isFlowSuppressed();
    // System.Void set_isFlowSuppressed(System.Boolean value)
    // Offset: 0x16FD4E8
    void set_isFlowSuppressed(bool value);
    // static System.Threading.ExecutionContext get_PreAllocatedDefault()
    // Offset: 0x16FD504
    static System::Threading::ExecutionContext* get_PreAllocatedDefault();
    // System.Boolean get_IsPreAllocatedDefault()
    // Offset: 0x16FD56C
    bool get_IsPreAllocatedDefault();
    // System.Void .ctor(System.Boolean isPreAllocatedDefault)
    // Offset: 0x16FD580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionContext* New_ctor(bool isPreAllocatedDefault) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionContext*, creationType>(isPreAllocatedDefault)));
    }
    // static System.Void OnAsyncLocalContextChanged(System.Threading.ExecutionContext previous, System.Threading.ExecutionContext current)
    // Offset: 0x16FD5B4
    static void OnAsyncLocalContextChanged(System::Threading::ExecutionContext* previous, System::Threading::ExecutionContext* current);
    // System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x16FD9FC
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // System.Void set_LogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext value)
    // Offset: 0x16FDA68
    void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value);
    // System.Runtime.Remoting.Messaging.IllogicalCallContext get_IllogicalCallContext()
    // Offset: 0x16FDA70
    System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();
    // System.Void set_IllogicalCallContext(System.Runtime.Remoting.Messaging.IllogicalCallContext value)
    // Offset: 0x16FDADC
    void set_IllogicalCallContext(System::Runtime::Remoting::Messaging::IllogicalCallContext* value);
    // System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0x16FDAE4
    System::Threading::SynchronizationContext* get_SynchronizationContext();
    // System.Void set_SynchronizationContext(System.Threading.SynchronizationContext value)
    // Offset: 0x16FDAEC
    void set_SynchronizationContext(System::Threading::SynchronizationContext* value);
    // System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0x16FDAF4
    System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // System.Void set_SynchronizationContextNoFlow(System.Threading.SynchronizationContext value)
    // Offset: 0x16FDAFC
    void set_SynchronizationContextNoFlow(System::Threading::SynchronizationContext* value);
    // public System.Void Dispose()
    // Offset: 0x16FDB04
    void Dispose();
    // static public System.Void Run(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state)
    // Offset: 0x16FA54C
    static void Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state);
    // static System.Void Run(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state, System.Boolean preserveSyncCtx)
    // Offset: 0x16FDB08
    static void Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state, bool preserveSyncCtx);
    // static System.Void RunInternal(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state, System.Boolean preserveSyncCtx)
    // Offset: 0x16FDB94
    static void RunInternal(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state, bool preserveSyncCtx);
    // static System.Void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
    // Offset: 0x16FE0FC
    static void EstablishCopyOnWriteScope(System::Threading::ExecutionContextSwitcher& ecsw);
    // static private System.Void EstablishCopyOnWriteScope(System.Threading.Thread currentThread, System.Boolean knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
    // Offset: 0x16FDE38
    static void EstablishCopyOnWriteScope(System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, System::Threading::ExecutionContextSwitcher& ecsw);
    // static System.Threading.ExecutionContextSwitcher SetExecutionContext(System.Threading.ExecutionContext executionContext, System.Boolean preserveSyncCtx)
    // Offset: 0x16FDE94
    static System::Threading::ExecutionContextSwitcher SetExecutionContext(System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);
    // public System.Threading.ExecutionContext CreateCopy()
    // Offset: 0x16FE268
    System::Threading::ExecutionContext* CreateCopy();
    // System.Threading.ExecutionContext CreateMutableCopy()
    // Offset: 0x16FE3A4
    System::Threading::ExecutionContext* CreateMutableCopy();
    // static public System.Boolean IsFlowSuppressed()
    // Offset: 0x16FE4A8
    static bool IsFlowSuppressed();
    // static public System.Threading.ExecutionContext Capture()
    // Offset: 0x16FE4DC
    static System::Threading::ExecutionContext* Capture();
    // static System.Threading.ExecutionContext FastCapture()
    // Offset: 0x16FE53C
    static System::Threading::ExecutionContext* FastCapture();
    // static System.Threading.ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, System.Threading.ExecutionContext/CaptureOptions options)
    // Offset: 0x16FAB40
    static System::Threading::ExecutionContext* Capture(System::Threading::StackCrawlMark& stackMark, System::Threading::ExecutionContext::CaptureOptions options);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16FE5B8
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16FE6B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionContext* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionContext*, creationType>(info, context)));
    }
    // System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0x16FDDB4
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // static private System.Void .cctor()
    // Offset: 0x16FE798
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x16FD578
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionContext*, creationType>()));
    }
  }; // System.Threading.ExecutionContext
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContext), 64 + sizeof(System::Collections::Generic::List_1<System::Threading::IAsyncLocal*>*)> __System_Threading_ExecutionContextSizeCheck;
  static_assert(sizeof(ExecutionContext) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext*, "System.Threading", "ExecutionContext");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::Flags, "System.Threading", "ExecutionContext/Flags");
