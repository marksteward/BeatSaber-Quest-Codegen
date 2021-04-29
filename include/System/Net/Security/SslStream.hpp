// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Security.AuthenticatedStream
#include "System/Net/Security/AuthenticatedStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.SslStream
  class SslStream : public System::Net::Security::AuthenticatedStream {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    // private Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x38
    Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private Mono.Security.Interface.IMonoSslStream impl
    // Size: 0x8
    // Offset: 0x40
    Mono::Security::Interface::IMonoSslStream* impl;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::IMonoSslStream*) == 0x8);
    // Creating value type constructor for type: SslStream
    SslStream(Mono::Security::Interface::MonoTlsProvider* provider_ = {}, Mono::Security::Interface::IMonoSslStream* impl_ = {}) noexcept : provider{provider_}, impl{impl_} {}
    // Mono.Security.Interface.IMonoSslStream get_Impl()
    // Offset: 0x13500E8
    Mono::Security::Interface::IMonoSslStream* get_Impl();
    // System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x1350190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SslStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Security::SslStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SslStream*, creationType>(innerStream, leaveInnerStreamOpen, provider, settings)));
    }
    // static Mono.Security.Interface.IMonoSslStream CreateMonoSslStream(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x1350204
    static Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings);
    // public System.Void AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0x135029C
    void AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // private System.Void CheckDisposed()
    // Offset: 0x135010C
    void CheckDisposed();
    // public override System.Boolean get_IsAuthenticated()
    // Offset: 0x1350388
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Boolean AuthenticatedStream::get_IsAuthenticated()
    bool get_IsAuthenticated();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1350444
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanRead()
    // Offset: 0x135044C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x135050C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x13505CC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x1350688
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Int64 get_Length()
    // Offset: 0x1350744
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1350800
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x13508BC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x135093C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1350A08
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void Flush()
    // Offset: 0x1350A88
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1350AAC
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Void AuthenticatedStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1350BBC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1350CA0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1350D84
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1350E80
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1350F4C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x1351048
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
  }; // System.Net.Security.SslStream
  #pragma pack(pop)
  static check_size<sizeof(SslStream), 64 + sizeof(Mono::Security::Interface::IMonoSslStream*)> __System_Net_Security_SslStreamSizeCheck;
  static_assert(sizeof(SslStream) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslStream*, "System.Net.Security", "SslStream");
