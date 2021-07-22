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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeBuffer
  class SafeBuffer;
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.UnmanagedMemoryStream
  // [TokenAttribute] Offset: FFFFFFFF
  class UnmanagedMemoryStream : public System::IO::Stream {
    public:
    // private System.Runtime.InteropServices.SafeBuffer _buffer
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::InteropServices::SafeBuffer* buffer;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::SafeBuffer*) == 0x8);
    // private System.Byte* _mem
    // Size: 0x8
    // Offset: 0x30
    uint8_t* mem;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Int64 _length
    // Size: 0x8
    // Offset: 0x38
    int64_t length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _capacity
    // Size: 0x8
    // Offset: 0x40
    int64_t capacity;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _position
    // Size: 0x8
    // Offset: 0x48
    int64_t position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _offset
    // Size: 0x8
    // Offset: 0x50
    int64_t offset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.FileAccess _access
    // Size: 0x4
    // Offset: 0x58
    System::IO::FileAccess access;
    // Field size check
    static_assert(sizeof(System::IO::FileAccess) == 0x4);
    // System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x5C
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOpen and: lastReadTask
    char __padding7[0x3] = {};
    // private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    // Size: 0x8
    // Offset: 0x60
    System::Threading::Tasks::Task_1<int>* lastReadTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<int>*) == 0x8);
    // Creating value type constructor for type: UnmanagedMemoryStream
    UnmanagedMemoryStream(System::Runtime::InteropServices::SafeBuffer* buffer_ = {}, uint8_t* mem_ = {}, int64_t length_ = {}, int64_t capacity_ = {}, int64_t position_ = {}, int64_t offset_ = {}, System::IO::FileAccess access_ = {}, bool isOpen_ = {}, System::Threading::Tasks::Task_1<int>* lastReadTask_ = {}) noexcept : buffer{buffer_}, mem{mem_}, length{length_}, capacity{capacity_}, position{position_}, offset{offset_}, access{access_}, isOpen{isOpen_}, lastReadTask{lastReadTask_} {}
    // public System.Byte* get_PositionPointer()
    // Offset: 0x17F6010
    uint8_t* get_PositionPointer();
    // System.Void .ctor(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x17F5AC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnmanagedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMemoryStream*, creationType>(pointer, length, capacity, access, skipSecurityCheck)));
    }
    // System.Void Initialize(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x17F5B68
    void Initialize(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // public override System.Boolean get_CanRead()
    // Offset: 0x17F5DF8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x17F5E14
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x17F5E1C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x17F5EE8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x17F5F08
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x17F5F40
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // protected System.Void .ctor()
    // Offset: 0x17F5A50
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMemoryStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnmanagedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMemoryStream*, creationType>()));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17F5E38
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x17F5E4C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x17F6174
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x17F64EC
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Int32 ReadByte()
    // Offset: 0x17F6810
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x17F694C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin loc);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x17F6AA8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x17F6D08
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x17F70CC
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x17F739C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.UnmanagedMemoryStream
  #pragma pack(pop)
  static check_size<sizeof(UnmanagedMemoryStream), 96 + sizeof(System::Threading::Tasks::Task_1<int>*)> __System_IO_UnmanagedMemoryStreamSizeCheck;
  static_assert(sizeof(UnmanagedMemoryStream) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnmanagedMemoryStream*, "System.IO", "UnmanagedMemoryStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_PositionPointer
// Il2CppName: get_PositionPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_PositionPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_PositionPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(uint8_t*, int64_t, int64_t, System::IO::FileAccess, bool)>(&System::IO::UnmanagedMemoryStream::Initialize)> {
  static const MethodInfo* get() {
    static auto* pointer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* skipSecurityCheck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointer, length, capacity, access, skipSecurityCheck});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(int64_t)>(&System::IO::UnmanagedMemoryStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(bool)>(&System::IO::UnmanagedMemoryStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::UnmanagedMemoryStream::*)(::Array<uint8_t>*&, int, int)>(&System::IO::UnmanagedMemoryStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (System::IO::UnmanagedMemoryStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::IO::UnmanagedMemoryStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::UnmanagedMemoryStream::*)()>(&System::IO::UnmanagedMemoryStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::UnmanagedMemoryStream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::UnmanagedMemoryStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* loc = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, loc});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(int64_t)>(&System::IO::UnmanagedMemoryStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(::Array<uint8_t>*, int, int)>(&System::IO::UnmanagedMemoryStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::IO::UnmanagedMemoryStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::IO::UnmanagedMemoryStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::UnmanagedMemoryStream::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnmanagedMemoryStream::*)(uint8_t)>(&System::IO::UnmanagedMemoryStream::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnmanagedMemoryStream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
