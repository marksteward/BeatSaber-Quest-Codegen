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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebRequest
  class FtpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpDataStream
  class FtpDataStream : public System::IO::Stream {
    public:
    // Nested type: System::Net::FtpDataStream::WriteDelegate
    class WriteDelegate;
    // Nested type: System::Net::FtpDataStream::ReadDelegate
    class ReadDelegate;
    // private System.Net.FtpWebRequest request
    // Size: 0x8
    // Offset: 0x28
    System::Net::FtpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::FtpWebRequest*) == 0x8);
    // private System.IO.Stream networkStream
    // Size: 0x8
    // Offset: 0x30
    System::IO::Stream* networkStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x38
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isRead
    // Size: 0x1
    // Offset: 0x39
    bool isRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRead and: totalRead
    char __padding3[0x2] = {};
    // private System.Int32 totalRead
    // Size: 0x4
    // Offset: 0x3C
    int totalRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FtpDataStream
    FtpDataStream(System::Net::FtpWebRequest* request_ = {}, System::IO::Stream* networkStream_ = {}, bool disposed_ = {}, bool isRead_ = {}, int totalRead_ = {}) noexcept : request{request_}, networkStream{networkStream_}, disposed{disposed_}, isRead{isRead_}, totalRead{totalRead_} {}
    // System.Void .ctor(System.Net.FtpWebRequest request, System.IO.Stream stream, System.Boolean isRead)
    // Offset: 0x14F8614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpDataStream* New_ctor(System::Net::FtpWebRequest* request, System::IO::Stream* stream, bool isRead) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpDataStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpDataStream*, creationType>(request, stream, isRead)));
    }
    // private System.Int32 ReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F8900
    int ReadInternal(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Void WriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F91E4
    void WriteInternal(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14F98E4
    void System_IDisposable_Dispose();
    // private System.Void CheckDisposed()
    // Offset: 0x14F8D48
    void CheckDisposed();
    // public override System.Boolean get_CanRead()
    // Offset: 0x14F86E8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x14F86F0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x14F8700
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x14F8708
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x14F8768
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x14F87C8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Close()
    // Offset: 0x14F8828
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x14F883C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x14F8840
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x14F88A0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x14F8BC4
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x14F8EB8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F9000
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x14F9314
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x14F955C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F9688
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // protected override System.Void Finalize()
    // Offset: 0x14F986C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14F9964
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.FtpDataStream
  #pragma pack(pop)
  static check_size<sizeof(FtpDataStream), 60 + sizeof(int)> __System_Net_FtpDataStreamSizeCheck;
  static_assert(sizeof(FtpDataStream) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpDataStream*, "System.Net", "FtpDataStream");
