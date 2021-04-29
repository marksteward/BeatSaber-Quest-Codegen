// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.TailStream
  class TailStream : public System::IO::Stream {
    public:
    // private System.Byte[] _Buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _BufferSize
    // Size: 0x4
    // Offset: 0x30
    int BufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _BufferIndex
    // Size: 0x4
    // Offset: 0x34
    int BufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _BufferFull
    // Size: 0x1
    // Offset: 0x38
    bool BufferFull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TailStream
    TailStream(::Array<uint8_t>* Buffer_ = {}, int BufferSize_ = {}, int BufferIndex_ = {}, bool BufferFull_ = {}) noexcept : Buffer{Buffer_}, BufferSize{BufferSize_}, BufferIndex{BufferIndex_}, BufferFull{BufferFull_} {}
    // public System.Void .ctor(System.Int32 bufferSize)
    // Offset: 0x196A64C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TailStream* New_ctor(int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::TailStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TailStream*, creationType>(bufferSize)));
    }
    // public System.Void Clear()
    // Offset: 0x196A6E0
    void Clear();
    // public System.Byte[] get_Buffer()
    // Offset: 0x196A780
    ::Array<uint8_t>* get_Buffer();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x196A6F0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Boolean get_CanRead()
    // Offset: 0x196A800
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x196A808
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x196A810
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x196A820
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x196A8A0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x196A920
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x196A9A0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x196A9A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x196AA24
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x196AAA4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x196AB24
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
  }; // System.Security.Cryptography.TailStream
  #pragma pack(pop)
  static check_size<sizeof(TailStream), 56 + sizeof(bool)> __System_Security_Cryptography_TailStreamSizeCheck;
  static_assert(sizeof(TailStream) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::TailStream*, "System.Security.Cryptography", "TailStream");
