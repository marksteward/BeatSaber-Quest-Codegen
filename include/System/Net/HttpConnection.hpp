// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPointListener
  class EndPointListener;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: ListenerPrefix
  class ListenerPrefix;
  // Forward declaring type: RequestStream
  class RequestStream;
  // Forward declaring type: ResponseStream
  class ResponseStream;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpConnection
  class HttpConnection : public ::Il2CppObject {
    public:
    // Nested type: System::Net::HttpConnection::InputState
    struct InputState;
    // Nested type: System::Net::HttpConnection::LineState
    struct LineState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.HttpConnection/InputState
    struct InputState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: InputState
      constexpr InputState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.HttpConnection/InputState RequestLine
      static constexpr const int RequestLine = 0;
      // Get static field: static public System.Net.HttpConnection/InputState RequestLine
      static System::Net::HttpConnection::InputState _get_RequestLine();
      // Set static field: static public System.Net.HttpConnection/InputState RequestLine
      static void _set_RequestLine(System::Net::HttpConnection::InputState value);
      // static field const value: static public System.Net.HttpConnection/InputState Headers
      static constexpr const int Headers = 1;
      // Get static field: static public System.Net.HttpConnection/InputState Headers
      static System::Net::HttpConnection::InputState _get_Headers();
      // Set static field: static public System.Net.HttpConnection/InputState Headers
      static void _set_Headers(System::Net::HttpConnection::InputState value);
    }; // System.Net.HttpConnection/InputState
    #pragma pack(pop)
    static check_size<sizeof(HttpConnection::InputState), 0 + sizeof(int)> __System_Net_HttpConnection_InputStateSizeCheck;
    static_assert(sizeof(HttpConnection::InputState) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.HttpConnection/LineState
    struct LineState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LineState
      constexpr LineState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.HttpConnection/LineState None
      static constexpr const int None = 0;
      // Get static field: static public System.Net.HttpConnection/LineState None
      static System::Net::HttpConnection::LineState _get_None();
      // Set static field: static public System.Net.HttpConnection/LineState None
      static void _set_None(System::Net::HttpConnection::LineState value);
      // static field const value: static public System.Net.HttpConnection/LineState CR
      static constexpr const int CR = 1;
      // Get static field: static public System.Net.HttpConnection/LineState CR
      static System::Net::HttpConnection::LineState _get_CR();
      // Set static field: static public System.Net.HttpConnection/LineState CR
      static void _set_CR(System::Net::HttpConnection::LineState value);
      // static field const value: static public System.Net.HttpConnection/LineState LF
      static constexpr const int LF = 2;
      // Get static field: static public System.Net.HttpConnection/LineState LF
      static System::Net::HttpConnection::LineState _get_LF();
      // Set static field: static public System.Net.HttpConnection/LineState LF
      static void _set_LF(System::Net::HttpConnection::LineState value);
    }; // System.Net.HttpConnection/LineState
    #pragma pack(pop)
    static check_size<sizeof(HttpConnection::LineState), 0 + sizeof(int)> __System_Net_HttpConnection_LineStateSizeCheck;
    static_assert(sizeof(HttpConnection::LineState) == 0x4);
    // private System.Net.Sockets.Socket sock
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::Socket* sock;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Net.EndPointListener epl
    // Size: 0x8
    // Offset: 0x20
    System::Net::EndPointListener* epl;
    // Field size check
    static_assert(sizeof(System::Net::EndPointListener*) == 0x8);
    // private System.IO.MemoryStream ms
    // Size: 0x8
    // Offset: 0x28
    System::IO::MemoryStream* ms;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x38
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // private System.Text.StringBuilder current_line
    // Size: 0x8
    // Offset: 0x40
    System::Text::StringBuilder* current_line;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Net.ListenerPrefix prefix
    // Size: 0x8
    // Offset: 0x48
    System::Net::ListenerPrefix* prefix;
    // Field size check
    static_assert(sizeof(System::Net::ListenerPrefix*) == 0x8);
    // private System.Net.RequestStream i_stream
    // Size: 0x8
    // Offset: 0x50
    System::Net::RequestStream* i_stream;
    // Field size check
    static_assert(sizeof(System::Net::RequestStream*) == 0x8);
    // private System.Net.ResponseStream o_stream
    // Size: 0x8
    // Offset: 0x58
    System::Net::ResponseStream* o_stream;
    // Field size check
    static_assert(sizeof(System::Net::ResponseStream*) == 0x8);
    // private System.Boolean chunked
    // Size: 0x1
    // Offset: 0x60
    bool chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: chunked and: reuses
    char __padding10[0x3] = {};
    // private System.Int32 reuses
    // Size: 0x4
    // Offset: 0x64
    int reuses;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean context_bound
    // Size: 0x1
    // Offset: 0x68
    bool context_bound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean secure
    // Size: 0x1
    // Offset: 0x69
    bool secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secure and: cert
    char __padding13[0x6] = {};
    // private System.Security.Cryptography.X509Certificates.X509Certificate cert
    // Size: 0x8
    // Offset: 0x70
    System::Security::Cryptography::X509Certificates::X509Certificate* cert;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Int32 s_timeout
    // Size: 0x4
    // Offset: 0x78
    int s_timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: s_timeout and: timer
    char __padding15[0x4] = {};
    // private System.Threading.Timer timer
    // Size: 0x8
    // Offset: 0x80
    System::Threading::Timer* timer;
    // Field size check
    static_assert(sizeof(System::Threading::Timer*) == 0x8);
    // private System.Net.IPEndPoint local_ep
    // Size: 0x8
    // Offset: 0x88
    System::Net::IPEndPoint* local_ep;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.HttpListener last_listener
    // Size: 0x8
    // Offset: 0x90
    System::Net::HttpListener* last_listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // private System.Int32[] client_cert_errors
    // Size: 0x8
    // Offset: 0x98
    ::Array<int>* client_cert_errors;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 client_cert
    // Size: 0x8
    // Offset: 0xA0
    System::Security::Cryptography::X509Certificates::X509Certificate2* client_cert;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate2*) == 0x8);
    // private System.Net.Security.SslStream ssl_stream
    // Size: 0x8
    // Offset: 0xA8
    System::Net::Security::SslStream* ssl_stream;
    // Field size check
    static_assert(sizeof(System::Net::Security::SslStream*) == 0x8);
    // private System.Net.HttpConnection/InputState input_state
    // Size: 0x4
    // Offset: 0xB0
    System::Net::HttpConnection::InputState input_state;
    // Field size check
    static_assert(sizeof(System::Net::HttpConnection::InputState) == 0x4);
    // private System.Net.HttpConnection/LineState line_state
    // Size: 0x4
    // Offset: 0xB4
    System::Net::HttpConnection::LineState line_state;
    // Field size check
    static_assert(sizeof(System::Net::HttpConnection::LineState) == 0x4);
    // private System.Int32 position
    // Size: 0x4
    // Offset: 0xB8
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HttpConnection
    HttpConnection(System::Net::Sockets::Socket* sock_ = {}, System::IO::Stream* stream_ = {}, System::Net::EndPointListener* epl_ = {}, System::IO::MemoryStream* ms_ = {}, ::Array<uint8_t>* buffer_ = {}, System::Net::HttpListenerContext* context_ = {}, System::Text::StringBuilder* current_line_ = {}, System::Net::ListenerPrefix* prefix_ = {}, System::Net::RequestStream* i_stream_ = {}, System::Net::ResponseStream* o_stream_ = {}, bool chunked_ = {}, int reuses_ = {}, bool context_bound_ = {}, bool secure_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* cert_ = {}, int s_timeout_ = {}, System::Threading::Timer* timer_ = {}, System::Net::IPEndPoint* local_ep_ = {}, System::Net::HttpListener* last_listener_ = {}, ::Array<int>* client_cert_errors_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate2* client_cert_ = {}, System::Net::Security::SslStream* ssl_stream_ = {}, System::Net::HttpConnection::InputState input_state_ = {}, System::Net::HttpConnection::LineState line_state_ = {}, int position_ = {}) noexcept : sock{sock_}, stream{stream_}, epl{epl_}, ms{ms_}, buffer{buffer_}, context{context_}, current_line{current_line_}, prefix{prefix_}, i_stream{i_stream_}, o_stream{o_stream_}, chunked{chunked_}, reuses{reuses_}, context_bound{context_bound_}, secure{secure_}, cert{cert_}, s_timeout{s_timeout_}, timer{timer_}, local_ep{local_ep_}, last_listener{last_listener_}, client_cert_errors{client_cert_errors_}, client_cert{client_cert_}, ssl_stream{ssl_stream_}, input_state{input_state_}, line_state{line_state_}, position{position_} {}
    // Get static field: static private System.AsyncCallback onread_cb
    static System::AsyncCallback* _get_onread_cb();
    // Set static field: static private System.AsyncCallback onread_cb
    static void _set_onread_cb(System::AsyncCallback* value);
    // public System.Void .ctor(System.Net.Sockets.Socket sock, System.Net.EndPointListener epl, System.Boolean secure, System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x1492894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpConnection* New_ctor(System::Net::Sockets::Socket* sock, System::Net::EndPointListener* epl, bool secure, System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpConnection*, creationType>(sock, epl, secure, cert)));
    }
    // private System.Void Init()
    // Offset: 0x1492C18
    void Init();
    // public System.Int32 get_Reuses()
    // Offset: 0x1492D54
    int get_Reuses();
    // public System.Net.IPEndPoint get_LocalEndPoint()
    // Offset: 0x1492D5C
    System::Net::IPEndPoint* get_LocalEndPoint();
    // public System.Boolean get_IsSecure()
    // Offset: 0x1492DF8
    bool get_IsSecure();
    // public System.Void set_Prefix(System.Net.ListenerPrefix value)
    // Offset: 0x1492E00
    void set_Prefix(System::Net::ListenerPrefix* value);
    // private System.Void OnTimeout(System.Object unused)
    // Offset: 0x1492E08
    void OnTimeout(::Il2CppObject* unused);
    // public System.Void BeginReadRequest()
    // Offset: 0x1492F8C
    void BeginReadRequest();
    // public System.Net.RequestStream GetRequestStream(System.Boolean chunked, System.Int64 contentlength)
    // Offset: 0x1493130
    System::Net::RequestStream* GetRequestStream(bool chunked, int64_t contentlength);
    // public System.Net.ResponseStream GetResponseStream()
    // Offset: 0x149337C
    System::Net::ResponseStream* GetResponseStream();
    // static private System.Void OnRead(System.IAsyncResult ares)
    // Offset: 0x1493450
    static void OnRead(System::IAsyncResult* ares);
    // private System.Void OnReadInternal(System.IAsyncResult ares)
    // Offset: 0x1493528
    void OnReadInternal(System::IAsyncResult* ares);
    // private System.Void RemoveConnection()
    // Offset: 0x1494550
    void RemoveConnection();
    // private System.Boolean ProcessInput(System.IO.MemoryStream ms)
    // Offset: 0x1493C7C
    bool ProcessInput(System::IO::MemoryStream* ms);
    // private System.String ReadLine(System.Byte[] buffer, System.Int32 offset, System.Int32 len, ref System.Int32 used)
    // Offset: 0x14948F4
    ::Il2CppString* ReadLine(::Array<uint8_t>* buffer, int offset, int len, int& used);
    // public System.Void SendError(System.String msg, System.Int32 status)
    // Offset: 0x1493858
    void SendError(::Il2CppString* msg, int status);
    // public System.Void SendError()
    // Offset: 0x1493C5C
    void SendError();
    // private System.Void Unbind()
    // Offset: 0x1492F4C
    void Unbind();
    // private System.Void CloseSocket()
    // Offset: 0x1492E2C
    void CloseSocket();
    // System.Void Close(System.Boolean force_close)
    // Offset: 0x1493A1C
    void Close(bool force_close);
    // static private System.Void .cctor()
    // Offset: 0x14960C8
    static void _cctor();
    // private System.Boolean <.ctor>b__24_0(System.Object t, System.Security.Cryptography.X509Certificates.X509Certificate c, System.Security.Cryptography.X509Certificates.X509Chain ch, System.Net.Security.SslPolicyErrors e)
    // Offset: 0x1496144
    bool $_ctor$b__24_0(::Il2CppObject* t, System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, System::Net::Security::SslPolicyErrors e);
  }; // System.Net.HttpConnection
  #pragma pack(pop)
  static check_size<sizeof(HttpConnection), 184 + sizeof(int)> __System_Net_HttpConnectionSizeCheck;
  static_assert(sizeof(HttpConnection) == 0xBC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpConnection*, "System.Net", "HttpConnection");
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpConnection::InputState, "System.Net", "HttpConnection/InputState");
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpConnection::LineState, "System.Net", "HttpConnection/LineState");
