// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
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
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: NetworkStream
  class NetworkStream;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MonoTlsStream
  class MonoTlsStream : public ::Il2CppObject {
    public:
    // private readonly Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private readonly System.Net.Sockets.NetworkStream networkStream
    // Size: 0x8
    // Offset: 0x18
    System::Net::Sockets::NetworkStream* networkStream;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::NetworkStream*) == 0x8);
    // private readonly System.Net.HttpWebRequest request
    // Size: 0x8
    // Offset: 0x20
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsSettings settings
    // Size: 0x8
    // Offset: 0x28
    Mono::Security::Interface::MonoTlsSettings* settings;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private Mono.Security.Interface.IMonoSslStream sslStream
    // Size: 0x8
    // Offset: 0x30
    Mono::Security::Interface::IMonoSslStream* sslStream;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::IMonoSslStream*) == 0x8);
    // private System.Net.WebExceptionStatus status
    // Size: 0x4
    // Offset: 0x38
    System::Net::WebExceptionStatus status;
    // Field size check
    static_assert(sizeof(System::Net::WebExceptionStatus) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCB354C
    // private System.Boolean <CertificateValidationFailed>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool CertificateValidationFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MonoTlsStream
    MonoTlsStream(Mono::Security::Interface::MonoTlsProvider* provider_ = {}, System::Net::Sockets::NetworkStream* networkStream_ = {}, System::Net::HttpWebRequest* request_ = {}, Mono::Security::Interface::MonoTlsSettings* settings_ = {}, Mono::Security::Interface::IMonoSslStream* sslStream_ = {}, System::Net::WebExceptionStatus status_ = {}, bool CertificateValidationFailed_ = {}) noexcept : provider{provider_}, networkStream{networkStream_}, request{request_}, settings{settings_}, sslStream{sslStream_}, status{status_}, CertificateValidationFailed{CertificateValidationFailed_} {}
    // System.Net.HttpWebRequest get_Request()
    // Offset: 0x1456DF0
    System::Net::HttpWebRequest* get_Request();
    // System.Net.WebExceptionStatus get_ExceptionStatus()
    // Offset: 0x1456DF8
    System::Net::WebExceptionStatus get_ExceptionStatus();
    // System.Boolean get_CertificateValidationFailed()
    // Offset: 0x1456E00
    bool get_CertificateValidationFailed();
    // System.Void set_CertificateValidationFailed(System.Boolean value)
    // Offset: 0x1456E08
    void set_CertificateValidationFailed(bool value);
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.Net.Sockets.NetworkStream networkStream)
    // Offset: 0x1456E14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsStream* New_ctor(System::Net::HttpWebRequest* request, System::Net::Sockets::NetworkStream* networkStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::MonoTlsStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsStream*, creationType>(request, networkStream)));
    }
    // System.IO.Stream CreateStream(System.Byte[] buffer)
    // Offset: 0x1456EC8
    System::IO::Stream* CreateStream(::Array<uint8_t>* buffer);
  }; // Mono.Net.Security.MonoTlsStream
  #pragma pack(pop)
  static check_size<sizeof(MonoTlsStream), 60 + sizeof(bool)> __Mono_Net_Security_MonoTlsStreamSizeCheck;
  static_assert(sizeof(MonoTlsStream) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
