// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x50
  // Autogenerated type: System.IO.MemoryStream
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39374
  class MemoryStream : public System::IO::Stream {
    public:
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _origin
    // Size: 0x4
    // Offset: 0x30
    int origin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _position
    // Size: 0x4
    // Offset: 0x34
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x38
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x3C
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _expandable
    // Size: 0x1
    // Offset: 0x40
    bool expandable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _writable
    // Size: 0x1
    // Offset: 0x41
    bool writable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _exposable
    // Size: 0x1
    // Offset: 0x42
    bool exposable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x43
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOpen and: lastReadTask
    char __padding8[0x4] = {};
    // private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    // Size: 0x8
    // Offset: 0x48
    System::Threading::Tasks::Task_1<int>* lastReadTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<int>*) == 0x8);
    // Creating value type constructor for type: MemoryStream
    MemoryStream(::Array<uint8_t>* buffer_ = {}, int origin_ = {}, int position_ = {}, int length_ = {}, int capacity_ = {}, bool expandable_ = {}, bool writable_ = {}, bool exposable_ = {}, bool isOpen_ = {}, System::Threading::Tasks::Task_1<int>* lastReadTask_ = {}) noexcept : buffer{buffer_}, origin{origin_}, position{position_}, length{length_}, capacity{capacity_}, expandable{expandable_}, writable{writable_}, exposable{exposable_}, isOpen{isOpen_}, lastReadTask{lastReadTask_} {}
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x143E348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Byte[] buffer)
    // Offset: 0x143E450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::Array<uint8_t>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer)));
    }
    // public System.Void .ctor(System.Byte[] buffer, System.Boolean writable)
    // Offset: 0x143E458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::Array<uint8_t>* buffer, bool writable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer, writable)));
    }
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x143E560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::Array<uint8_t>* buffer, int index, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer, index, count)));
    }
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Boolean writable)
    // Offset: 0x143E778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::Array<uint8_t>* buffer, int index, int count, bool writable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer, index, count, writable)));
    }
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Boolean writable, System.Boolean publiclyVisible)
    // Offset: 0x143E56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::Array<uint8_t>* buffer, int index, int count, bool writable, bool publiclyVisible) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer, index, count, writable, publiclyVisible)));
    }
    // private System.Void EnsureWriteable()
    // Offset: 0x143E79C
    void EnsureWriteable();
    // private System.Boolean EnsureCapacity(System.Int32 value)
    // Offset: 0x143E854
    bool EnsureCapacity(int value);
    // public System.Byte[] GetBuffer()
    // Offset: 0x143E950
    ::Array<uint8_t>* GetBuffer();
    // System.Byte[] InternalGetBuffer()
    // Offset: 0x143E9EC
    ::Array<uint8_t>* InternalGetBuffer();
    // System.Int32 InternalGetPosition()
    // Offset: 0x14311C0
    int InternalGetPosition();
    // System.Int32 InternalReadInt32()
    // Offset: 0x1430658
    int InternalReadInt32();
    // System.Int32 InternalEmulateRead(System.Int32 count)
    // Offset: 0x14311F0
    int InternalEmulateRead(int count);
    // public System.Int32 get_Capacity()
    // Offset: 0x143E9F4
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x143EA2C
    void set_Capacity(int value);
    // public System.Byte[] ToArray()
    // Offset: 0x143FA80
    ::Array<uint8_t>* ToArray();
    // public System.Void WriteTo(System.IO.Stream stream)
    // Offset: 0x1440258
    void WriteTo(System::IO::Stream* stream);
    // public System.Void .ctor()
    // Offset: 0x143E340
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>()));
    }
    // public override System.Boolean get_CanRead()
    // Offset: 0x143E784
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x143E78C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x143E794
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x143E7C8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x143E94C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x143EBA8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x143EBE4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x143EC1C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x143ECFC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x143EF4C
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Int32 ReadByte()
    // Offset: 0x143F2D8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x143F350
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x143F7BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin loc);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x143F95C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x143FB38
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x143FE48
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x1440168
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.MemoryStream
  static check_size<sizeof(MemoryStream), 72 + sizeof(System::Threading::Tasks::Task_1<int>*)> __System_IO_MemoryStreamSizeCheck;
  static_assert(sizeof(MemoryStream) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::MemoryStream*, "System.IO", "MemoryStream");
#pragma pack(pop)
