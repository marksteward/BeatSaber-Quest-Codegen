// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  // Autogenerated type: System.IO.Stream
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3939C
  class Stream : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::IO::Stream::ReadWriteParameters
    struct ReadWriteParameters;
    // Nested type: System::IO::Stream::ReadWriteTask
    class ReadWriteTask;
    // Nested type: System::IO::Stream::NullStream
    class NullStream;
    // Nested type: System::IO::Stream::SynchronousAsyncResult
    class SynchronousAsyncResult;
    // Nested type: System::IO::Stream::$$c
    class $$c;
    // Nested type: System::IO::Stream::$CopyToAsyncInternal$d__27
    struct $CopyToAsyncInternal$d__27;
    // private System.IO.Stream/ReadWriteTask _activeReadWriteTask
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream::ReadWriteTask* activeReadWriteTask;
    // Field size check
    static_assert(sizeof(System::IO::Stream::ReadWriteTask*) == 0x8);
    // private System.Threading.SemaphoreSlim _asyncActiveSemaphore
    // Size: 0x8
    // Offset: 0x20
    System::Threading::SemaphoreSlim* asyncActiveSemaphore;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim*) == 0x8);
    // Creating value type constructor for type: Stream
    Stream(System::IO::Stream::ReadWriteTask* activeReadWriteTask_ = {}, System::Threading::SemaphoreSlim* asyncActiveSemaphore_ = {}) noexcept : activeReadWriteTask{activeReadWriteTask_}, asyncActiveSemaphore{asyncActiveSemaphore_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.Stream Null
    static System::IO::Stream* _get_Null();
    // Set static field: static public readonly System.IO.Stream Null
    static void _set_Null(System::IO::Stream* value);
    // static field const value: static private System.Int32 _DefaultCopyBufferSize
    static constexpr const int _DefaultCopyBufferSize = 81920;
    // Get static field: static private System.Int32 _DefaultCopyBufferSize
    static int _get__DefaultCopyBufferSize();
    // Set static field: static private System.Int32 _DefaultCopyBufferSize
    static void _set__DefaultCopyBufferSize(int value);
    // System.Threading.SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
    // Offset: 0x13A55DC
    System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanSeek()
    // Offset: 0xFFFFFFFF
    bool get_CanSeek();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFF
    int64_t get_Position();
    // public System.Void set_Position(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void set_Position(int64_t value);
    // public System.Int32 get_ReadTimeout()
    // Offset: 0x13A56D4
    int get_ReadTimeout();
    // public System.Int32 get_WriteTimeout()
    // Offset: 0x13A5784
    int get_WriteTimeout();
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination)
    // Offset: 0x13A5800
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize)
    // Offset: 0x13A580C
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13A58A0
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task CopyToAsyncInternal(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13A5AF8
    System::Threading::Tasks::Task* CopyToAsyncInternal(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
    // public System.Void Close()
    // Offset: 0x13A5C50
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13A5CE0
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xFFFFFFFF
    void Flush();
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A5CE4
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x13A5CEC
    System::IAsyncResult* BeginReadInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x13A652C
    int EndRead(System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13A6754
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Int32> BeginEndReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x13A6814
    System::Threading::Tasks::Task_1<int>* BeginEndReadAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A69E4
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginWriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x13A69EC
    System::IAsyncResult* BeginWriteInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // private System.Void RunReadWriteTaskWhenReady(System.Threading.Tasks.Task asyncWaiter, System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x13A6284
    void RunReadWriteTaskWhenReady(System::Threading::Tasks::Task* asyncWaiter, System::IO::Stream::ReadWriteTask* readWriteTask);
    // private System.Void RunReadWriteTask(System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x13A6448
    void RunReadWriteTask(System::IO::Stream::ReadWriteTask* readWriteTask);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x13A6DE8
    void EndWrite(System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x13A6FFC
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13A70A0
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task BeginEndWriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x13A7158
    System::Threading::Tasks::Task* BeginEndWriteAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xFFFFFFFF
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void SetLength(int64_t value);
    // public System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public System.Int32 ReadByte()
    // Offset: 0x13A7328
    int ReadByte();
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0x13A73CC
    void WriteByte(uint8_t value);
    // System.IAsyncResult BlockingBeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A5F74
    System::IAsyncResult* BlockingBeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Int32 BlockingEndRead(System.IAsyncResult asyncResult)
    // Offset: 0x13A6750
    static int BlockingEndRead(System::IAsyncResult* asyncResult);
    // System.IAsyncResult BlockingBeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A6C74
    System::IAsyncResult* BlockingBeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Void BlockingEndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x13A6FF8
    static void BlockingEndWrite(System::IAsyncResult* asyncResult);
    // static private System.Void .cctor()
    // Offset: 0x13A768C
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x13A5CD0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected System.Void .ctor()
    // Offset: 0x13A767C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream*, creationType>()));
    }
  }; // System.IO.Stream
  static check_size<sizeof(Stream), 32 + sizeof(System::Threading::SemaphoreSlim*)> __System_IO_StreamSizeCheck;
  static_assert(sizeof(Stream) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream*, "System.IO", "Stream");
#pragma pack(pop)
