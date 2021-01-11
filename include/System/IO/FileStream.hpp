// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IO.FileMode
#include "System/IO/FileMode.hpp"
// Including type: System.IO.FileShare
#include "System/IO/FileShare.hpp"
// Including type: System.IO.FileOptions
#include "System/IO/FileOptions.hpp"
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
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeFileHandle
  class SafeFileHandle;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileStream
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D395A4
  class FileStream : public System::IO::Stream {
    public:
    // Nested type: System::IO::FileStream::ReadDelegate
    class ReadDelegate;
    // Nested type: System::IO::FileStream::WriteDelegate
    class WriteDelegate;
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Microsoft.Win32.SafeHandles.SafeFileHandle safeHandle
    // Size: 0x8
    // Offset: 0x38
    Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle;
    // Field size check
    static_assert(sizeof(Microsoft::Win32::SafeHandles::SafeFileHandle*) == 0x8);
    // private System.Boolean isExposed
    // Size: 0x1
    // Offset: 0x40
    bool isExposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isExposed and: append_startpos
    char __padding3[0x7] = {};
    // private System.Int64 append_startpos
    // Size: 0x8
    // Offset: 0x48
    int64_t append_startpos;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.FileAccess access
    // Size: 0x4
    // Offset: 0x50
    System::IO::FileAccess access;
    // Field size check
    static_assert(sizeof(System::IO::FileAccess) == 0x4);
    // private System.Boolean owner
    // Size: 0x1
    // Offset: 0x54
    bool owner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean async
    // Size: 0x1
    // Offset: 0x55
    bool async;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean canseek
    // Size: 0x1
    // Offset: 0x56
    bool canseek;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean anonymous
    // Size: 0x1
    // Offset: 0x57
    bool anonymous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean buf_dirty
    // Size: 0x1
    // Offset: 0x58
    bool buf_dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: buf_dirty and: buf_size
    char __padding10[0x3] = {};
    // private System.Int32 buf_size
    // Size: 0x4
    // Offset: 0x5C
    int buf_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 buf_length
    // Size: 0x4
    // Offset: 0x60
    int buf_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 buf_offset
    // Size: 0x4
    // Offset: 0x64
    int buf_offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 buf_start
    // Size: 0x8
    // Offset: 0x68
    int64_t buf_start;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: FileStream
    FileStream(::Array<uint8_t>* buf_ = {}, ::Il2CppString* name_ = {}, Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle_ = {}, bool isExposed_ = {}, int64_t append_startpos_ = {}, System::IO::FileAccess access_ = {}, bool owner_ = {}, bool async_ = {}, bool canseek_ = {}, bool anonymous_ = {}, bool buf_dirty_ = {}, int buf_size_ = {}, int buf_length_ = {}, int buf_offset_ = {}, int64_t buf_start_ = {}) noexcept : buf{buf_}, name{name_}, safeHandle{safeHandle_}, isExposed{isExposed_}, append_startpos{append_startpos_}, access{access_}, owner{owner_}, async{async_}, canseek{canseek_}, anonymous{anonymous_}, buf_dirty{buf_dirty_}, buf_size{buf_size_}, buf_length{buf_length_}, buf_offset{buf_offset_}, buf_start{buf_start_} {}
    // static field const value: static System.Int32 DefaultBufferSize
    static constexpr const int DefaultBufferSize = 4096;
    // Get static field: static System.Int32 DefaultBufferSize
    static int _get_DefaultBufferSize();
    // Set static field: static System.Int32 DefaultBufferSize
    static void _set_DefaultBufferSize(int value);
    // Get static field: static private System.Byte[] buf_recycle
    static ::Array<uint8_t>* _get_buf_recycle();
    // Set static field: static private System.Byte[] buf_recycle
    static void _set_buf_recycle(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Object buf_recycle_lock
    static ::Il2CppObject* _get_buf_recycle_lock();
    // Set static field: static private readonly System.Object buf_recycle_lock
    static void _set_buf_recycle_lock(::Il2CppObject* value);
    // System.Void .ctor(System.IntPtr handle, System.IO.FileAccess access, System.Boolean ownsHandle, System.Int32 bufferSize, System.Boolean isAsync, System.Boolean isConsoleWrapper)
    // Offset: 0x14396EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(System::IntPtr handle, System::IO::FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode)
    // Offset: 0x1439B74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access)
    // Offset: 0x143A2E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share)
    // Offset: 0x1436C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize)
    // Offset: 0x1436514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize, System.Boolean useAsync)
    // Offset: 0x143A344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize, bool useAsync) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize, useAsync)));
    }
    // public System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize, System.IO.FileOptions options)
    // Offset: 0x143A378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize, System::IO::FileOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize, options)));
    }
    // System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize, System.IO.FileOptions options, System.String msgPath, System.Boolean bFromProxy, System.Boolean useLongPath, System.Boolean checkHost)
    // Offset: 0x143A39C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize, System::IO::FileOptions options, ::Il2CppString* msgPath, bool bFromProxy, bool useLongPath, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize, options, msgPath, bFromProxy, useLongPath, checkHost)));
    }
    // System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize, System.Boolean isAsync, System.Boolean anonymous)
    // Offset: 0x143A31C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize, bool isAsync, bool anonymous) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize, isAsync, anonymous)));
    }
    // System.Void .ctor(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.Int32 bufferSize, System.Boolean anonymous, System.IO.FileOptions options)
    // Offset: 0x1439BB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream* New_ctor(::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, int bufferSize, bool anonymous, System::IO::FileOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream*, creationType>(path, mode, access, share, bufferSize, anonymous, options)));
    }
    // private System.Void Init(Microsoft.Win32.SafeHandles.SafeFileHandle safeHandle, System.IO.FileAccess access, System.Boolean ownsHandle, System.Int32 bufferSize, System.Boolean isAsync, System.Boolean isConsoleWrapper)
    // Offset: 0x1439878
    void Init(Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, System::IO::FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper);
    // public Microsoft.Win32.SafeHandles.SafeFileHandle get_SafeFileHandle()
    // Offset: 0x143AFC8
    Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle();
    // private System.Void ExposeHandle()
    // Offset: 0x143A96C
    void ExposeHandle();
    // private System.Int32 ReadInternal(System.Byte[] dest, System.Int32 offset, System.Int32 count)
    // Offset: 0x143B858
    int ReadInternal(::Array<uint8_t>* dest, int offset, int count);
    // private System.Void WriteInternal(System.Byte[] src, System.Int32 offset, System.Int32 count)
    // Offset: 0x143C080
    void WriteInternal(::Array<uint8_t>* src, int offset, int count);
    // private System.Int32 ReadSegment(System.Byte[] dest, System.Int32 dest_offset, System.Int32 count)
    // Offset: 0x143B900
    int ReadSegment(::Array<uint8_t>* dest, int dest_offset, int count);
    // private System.Int32 WriteSegment(System.Byte[] src, System.Int32 src_offset, System.Int32 count)
    // Offset: 0x143C384
    int WriteSegment(::Array<uint8_t>* src, int src_offset, int count);
    // private System.Void FlushBuffer()
    // Offset: 0x143B010
    void FlushBuffer();
    // private System.Void FlushBufferIfDirty()
    // Offset: 0x143AC64
    void FlushBufferIfDirty();
    // private System.Void RefillBuffer()
    // Offset: 0x143B45C
    void RefillBuffer();
    // private System.Int32 ReadData(System.Runtime.InteropServices.SafeHandle safeHandle, System.Byte[] buf, System.Int32 offset, System.Int32 count)
    // Offset: 0x143B320
    int ReadData(System::Runtime::InteropServices::SafeHandle* safeHandle, ::Array<uint8_t>* buf, int offset, int count);
    // private System.Void InitBuffer(System.Int32 size, System.Boolean isZeroSize)
    // Offset: 0x143A6E0
    void InitBuffer(int size, bool isZeroSize);
    // private System.String GetSecureFileName(System.String filename)
    // Offset: 0x143A52C
    ::Il2CppString* GetSecureFileName(::Il2CppString* filename);
    // private System.String GetSecureFileName(System.String filename, System.Boolean full)
    // Offset: 0x143A3A8
    ::Il2CppString* GetSecureFileName(::Il2CppString* filename, bool full);
    // public override System.Boolean get_CanRead()
    // Offset: 0x143AAC0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x143AAD4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x143AAE8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x143AAF0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x143AD84
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x143AF04
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 ReadByte()
    // Offset: 0x143B1BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x143B498
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
    // public override System.Int32 Read(in System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x143B614
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] array, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& array, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 numBytes, System.AsyncCallback userCallback, System.Object stateObject)
    // Offset: 0x143B9C8
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 numBytes, System.AsyncCallback userCallback, System.Object stateObject)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* array, int offset, int numBytes, System::AsyncCallback* userCallback, ::Il2CppObject* stateObject);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x143BCE8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.Void Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x143BE60
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* array, int offset, int count);
    // public override System.IAsyncResult BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 numBytes, System.AsyncCallback userCallback, System.Object stateObject)
    // Offset: 0x143C400
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 numBytes, System.AsyncCallback userCallback, System.Object stateObject)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* array, int offset, int numBytes, System::AsyncCallback* userCallback, ::Il2CppObject* stateObject);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x143C840
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x143C99C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x143CBE4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x143CF04
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Finalize()
    // Offset: 0x143CF9C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x143D014
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x143D378
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x143D380
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // static private System.Void .cctor()
    // Offset: 0x143D52C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // System.IO.FileStream
  static check_size<sizeof(FileStream), 104 + sizeof(int64_t)> __System_IO_FileStreamSizeCheck;
  static_assert(sizeof(FileStream) == 0x70);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStream*, "System.IO", "FileStream");
