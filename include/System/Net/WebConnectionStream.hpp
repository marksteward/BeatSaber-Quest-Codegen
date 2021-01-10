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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xD2
  // Autogenerated type: System.Net.WebConnectionStream
  // [] Offset: FFFFFFFF
  class WebConnectionStream : public System::IO::Stream {
    public:
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass75_0
    class $$c__DisplayClass75_0;
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass76_0
    class $$c__DisplayClass76_0;
    // Nested type: System::Net::WebConnectionStream::$$c__DisplayClass80_0
    class $$c__DisplayClass80_0;
    // private System.Boolean isRead
    // Size: 0x1
    // Offset: 0x28
    bool isRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRead and: cnc
    char __padding0[0x7] = {};
    // private System.Net.WebConnection cnc
    // Size: 0x8
    // Offset: 0x30
    System::Net::WebConnection* cnc;
    // Field size check
    static_assert(sizeof(System::Net::WebConnection*) == 0x8);
    // private System.Net.HttpWebRequest request
    // Size: 0x8
    // Offset: 0x38
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // private System.Byte[] readBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* readBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 readBufferOffset
    // Size: 0x4
    // Offset: 0x48
    int readBufferOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 readBufferSize
    // Size: 0x4
    // Offset: 0x4C
    int readBufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 stream_length
    // Size: 0x4
    // Offset: 0x50
    int stream_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: stream_length and: contentLength
    char __padding6[0x4] = {};
    // private System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x58
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 totalRead
    // Size: 0x8
    // Offset: 0x60
    int64_t totalRead;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 totalWritten
    // Size: 0x8
    // Offset: 0x68
    int64_t totalWritten;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean nextReadCalled
    // Size: 0x1
    // Offset: 0x70
    bool nextReadCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: nextReadCalled and: pendingReads
    char __padding10[0x3] = {};
    // private System.Int32 pendingReads
    // Size: 0x4
    // Offset: 0x74
    int pendingReads;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 pendingWrites
    // Size: 0x4
    // Offset: 0x78
    int pendingWrites;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pendingWrites and: pending
    char __padding12[0x4] = {};
    // private System.Threading.ManualResetEvent pending
    // Size: 0x8
    // Offset: 0x80
    System::Threading::ManualResetEvent* pending;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean allowBuffering
    // Size: 0x1
    // Offset: 0x88
    bool allowBuffering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean sendChunked
    // Size: 0x1
    // Offset: 0x89
    bool sendChunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sendChunked and: writeBuffer
    char __padding15[0x6] = {};
    // private System.IO.MemoryStream writeBuffer
    // Size: 0x8
    // Offset: 0x90
    System::IO::MemoryStream* writeBuffer;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // private System.Boolean requestWritten
    // Size: 0x1
    // Offset: 0x98
    bool requestWritten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: requestWritten and: headers
    char __padding17[0x7] = {};
    // private System.Byte[] headers
    // Size: 0x8
    // Offset: 0xA0
    ::Array<uint8_t>* headers;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0xA8
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean headersSent
    // Size: 0x1
    // Offset: 0xA9
    bool headersSent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: headersSent and: locker
    char __padding20[0x6] = {};
    // private System.Object locker
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean initRead
    // Size: 0x1
    // Offset: 0xB8
    bool initRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean read_eof
    // Size: 0x1
    // Offset: 0xB9
    bool read_eof;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean complete_request_written
    // Size: 0x1
    // Offset: 0xBA
    bool complete_request_written;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: complete_request_written and: read_timeout
    char __padding24[0x1] = {};
    // private System.Int32 read_timeout
    // Size: 0x4
    // Offset: 0xBC
    int read_timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 write_timeout
    // Size: 0x4
    // Offset: 0xC0
    int write_timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: write_timeout and: cb_wrapper
    char __padding26[0x4] = {};
    // private System.AsyncCallback cb_wrapper
    // Size: 0x8
    // Offset: 0xC8
    System::AsyncCallback* cb_wrapper;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // System.Boolean IgnoreIOErrors
    // Size: 0x1
    // Offset: 0xD0
    bool IgnoreIOErrors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD460F4
    // private System.Boolean <GetResponseOnClose>k__BackingField
    // Size: 0x1
    // Offset: 0xD1
    bool GetResponseOnClose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: WebConnectionStream
    WebConnectionStream(bool isRead_ = {}, System::Net::WebConnection* cnc_ = {}, System::Net::HttpWebRequest* request_ = {}, ::Array<uint8_t>* readBuffer_ = {}, int readBufferOffset_ = {}, int readBufferSize_ = {}, int stream_length_ = {}, int64_t contentLength_ = {}, int64_t totalRead_ = {}, int64_t totalWritten_ = {}, bool nextReadCalled_ = {}, int pendingReads_ = {}, int pendingWrites_ = {}, System::Threading::ManualResetEvent* pending_ = {}, bool allowBuffering_ = {}, bool sendChunked_ = {}, System::IO::MemoryStream* writeBuffer_ = {}, bool requestWritten_ = {}, ::Array<uint8_t>* headers_ = {}, bool disposed_ = {}, bool headersSent_ = {}, ::Il2CppObject* locker_ = {}, bool initRead_ = {}, bool read_eof_ = {}, bool complete_request_written_ = {}, int read_timeout_ = {}, int write_timeout_ = {}, System::AsyncCallback* cb_wrapper_ = {}, bool IgnoreIOErrors_ = {}, bool GetResponseOnClose_ = {}) noexcept : isRead{isRead_}, cnc{cnc_}, request{request_}, readBuffer{readBuffer_}, readBufferOffset{readBufferOffset_}, readBufferSize{readBufferSize_}, stream_length{stream_length_}, contentLength{contentLength_}, totalRead{totalRead_}, totalWritten{totalWritten_}, nextReadCalled{nextReadCalled_}, pendingReads{pendingReads_}, pendingWrites{pendingWrites_}, pending{pending_}, allowBuffering{allowBuffering_}, sendChunked{sendChunked_}, writeBuffer{writeBuffer_}, requestWritten{requestWritten_}, headers{headers_}, disposed{disposed_}, headersSent{headersSent_}, locker{locker_}, initRead{initRead_}, read_eof{read_eof_}, complete_request_written{complete_request_written_}, read_timeout{read_timeout_}, write_timeout{write_timeout_}, cb_wrapper{cb_wrapper_}, IgnoreIOErrors{IgnoreIOErrors_}, GetResponseOnClose{GetResponseOnClose_} {}
    // Get static field: static private System.Byte[] crlf
    static ::Array<uint8_t>* _get_crlf();
    // Set static field: static private System.Byte[] crlf
    static void _set_crlf(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Net.WebConnection cnc, System.Net.WebConnectionData data)
    // Offset: 0x121BE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream* New_ctor(System::Net::WebConnection* cnc, System::Net::WebConnectionData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream*, creationType>(cnc, data)));
    }
    // public System.Void .ctor(System.Net.WebConnection cnc, System.Net.HttpWebRequest request)
    // Offset: 0x121C8D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream* New_ctor(System::Net::WebConnection* cnc, System::Net::HttpWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream*, creationType>(cnc, request)));
    }
    // private System.Boolean CheckAuthHeader(System.String headerName)
    // Offset: 0x1220C40
    bool CheckAuthHeader(::Il2CppString* headerName);
    // private System.Boolean IsNtlmAuth()
    // Offset: 0x12206FC
    bool IsNtlmAuth();
    // System.Void CheckResponseInBuffer()
    // Offset: 0x121C1FC
    void CheckResponseInBuffer();
    // System.Net.WebConnection get_Connection()
    // Offset: 0x1220CD8
    System::Net::WebConnection* get_Connection();
    // System.Boolean get_CompleteRequestWritten()
    // Offset: 0x1220CF0
    bool get_CompleteRequestWritten();
    // System.Void set_SendChunked(System.Boolean value)
    // Offset: 0x1220CF8
    void set_SendChunked(bool value);
    // System.Void set_ReadBuffer(System.Byte[] value)
    // Offset: 0x1220D04
    void set_ReadBuffer(::Array<uint8_t>* value);
    // System.Void set_ReadBufferOffset(System.Int32 value)
    // Offset: 0x1220D0C
    void set_ReadBufferOffset(int value);
    // System.Void set_ReadBufferSize(System.Int32 value)
    // Offset: 0x1220D14
    void set_ReadBufferSize(int value);
    // System.Byte[] get_WriteBuffer()
    // Offset: 0x1220D1C
    ::Array<uint8_t>* get_WriteBuffer();
    // System.Int32 get_WriteBufferLength()
    // Offset: 0x1220D40
    int get_WriteBufferLength();
    // System.Void ForceCompletion()
    // Offset: 0x121C250
    void ForceCompletion();
    // System.Void CheckComplete()
    // Offset: 0x1220D6C
    void CheckComplete();
    // System.Void ReadAll()
    // Offset: 0x1220840
    void ReadAll();
    // private System.Void WriteCallbackWrapper(System.IAsyncResult r)
    // Offset: 0x1220DB0
    void WriteCallbackWrapper(System::IAsyncResult* r);
    // private System.Void ReadCallbackWrapper(System.IAsyncResult r)
    // Offset: 0x122100C
    void ReadCallbackWrapper(System::IAsyncResult* r);
    // private System.Void WriteAsyncCB(System.IAsyncResult r)
    // Offset: 0x1221A80
    void WriteAsyncCB(System::IAsyncResult* r);
    // private System.Void CheckWriteOverflow(System.Int64 contentLength, System.Int64 totalWritten, System.Int64 size)
    // Offset: 0x1222454
    void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size);
    // System.Void SetHeadersAsync(System.Boolean setInternalLength, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x12228A8
    void SetHeadersAsync(bool setInternalLength, System::Net::SimpleAsyncCallback* callback);
    // private System.Boolean SetHeadersAsync(System.Net.SimpleAsyncResult result, System.Boolean setInternalLength)
    // Offset: 0x122297C
    bool SetHeadersAsync(System::Net::SimpleAsyncResult* result, bool setInternalLength);
    // System.Boolean get_RequestWritten()
    // Offset: 0x1222C90
    bool get_RequestWritten();
    // System.Boolean WriteRequestAsync(System.Net.SimpleAsyncResult result)
    // Offset: 0x1222C98
    bool WriteRequestAsync(System::Net::SimpleAsyncResult* result);
    // System.Void InternalClose()
    // Offset: 0x1222E84
    void InternalClose();
    // System.Boolean get_GetResponseOnClose()
    // Offset: 0x1222E90
    bool get_GetResponseOnClose();
    // System.Void KillBuffer()
    // Offset: 0x1221D6C
    void KillBuffer();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x1220CE0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x1220CE8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x1221230
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x12213A8
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult r)
    // Offset: 0x12216E8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult r)
    int EndRead(System::IAsyncResult* r);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x1221D78
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult r)
    // Offset: 0x1222528
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult r)
    void EndWrite(System::IAsyncResult* r);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x1222724
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.Void Flush()
    // Offset: 0x12228A4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Void Close()
    // Offset: 0x1222E98
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Int64 Seek(System.Int64 a, System.IO.SeekOrigin b)
    // Offset: 0x12231A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 a, System.IO.SeekOrigin b)
    int64_t Seek(int64_t a, System::IO::SeekOrigin b);
    // public override System.Void SetLength(System.Int64 a)
    // Offset: 0x1223204
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 a)
    void SetLength(int64_t a);
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1223264
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanRead()
    // Offset: 0x122326C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x122328C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x12232AC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1223328
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1223388
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x12233E8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // System.Net.WebConnectionStream
  static check_size<sizeof(WebConnectionStream), 209 + sizeof(bool)> __System_Net_WebConnectionStreamSizeCheck;
  static_assert(sizeof(WebConnectionStream) == 0xD2);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionStream*, "System.Net", "WebConnectionStream");
#pragma pack(pop)
