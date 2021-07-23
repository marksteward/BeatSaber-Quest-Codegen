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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // private System.Boolean <CertificateValidationFailed>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool CertificateValidationFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MonoTlsStream
    MonoTlsStream(Mono::Security::Interface::MonoTlsProvider* provider_ = {}, System::Net::Sockets::NetworkStream* networkStream_ = {}, System::Net::HttpWebRequest* request_ = {}, Mono::Security::Interface::MonoTlsSettings* settings_ = {}, Mono::Security::Interface::IMonoSslStream* sslStream_ = {}, System::Net::WebExceptionStatus status_ = {}, bool CertificateValidationFailed_ = {}) noexcept : provider{provider_}, networkStream{networkStream_}, request{request_}, settings{settings_}, sslStream{sslStream_}, status{status_}, CertificateValidationFailed{CertificateValidationFailed_} {}
    // Get instance field: private readonly Mono.Security.Interface.MonoTlsProvider provider
    Mono::Security::Interface::MonoTlsProvider* _get_provider();
    // Set instance field: private readonly Mono.Security.Interface.MonoTlsProvider provider
    void _set_provider(Mono::Security::Interface::MonoTlsProvider* value);
    // Get instance field: private readonly System.Net.Sockets.NetworkStream networkStream
    System::Net::Sockets::NetworkStream* _get_networkStream();
    // Set instance field: private readonly System.Net.Sockets.NetworkStream networkStream
    void _set_networkStream(System::Net::Sockets::NetworkStream* value);
    // Get instance field: private readonly System.Net.HttpWebRequest request
    System::Net::HttpWebRequest* _get_request();
    // Set instance field: private readonly System.Net.HttpWebRequest request
    void _set_request(System::Net::HttpWebRequest* value);
    // Get instance field: private readonly Mono.Security.Interface.MonoTlsSettings settings
    Mono::Security::Interface::MonoTlsSettings* _get_settings();
    // Set instance field: private readonly Mono.Security.Interface.MonoTlsSettings settings
    void _set_settings(Mono::Security::Interface::MonoTlsSettings* value);
    // Get instance field: private Mono.Security.Interface.IMonoSslStream sslStream
    Mono::Security::Interface::IMonoSslStream* _get_sslStream();
    // Set instance field: private Mono.Security.Interface.IMonoSslStream sslStream
    void _set_sslStream(Mono::Security::Interface::IMonoSslStream* value);
    // Get instance field: private System.Net.WebExceptionStatus status
    System::Net::WebExceptionStatus _get_status();
    // Set instance field: private System.Net.WebExceptionStatus status
    void _set_status(System::Net::WebExceptionStatus value);
    // Get instance field: private System.Boolean <CertificateValidationFailed>k__BackingField
    bool _get_$CertificateValidationFailed$k__BackingField();
    // Set instance field: private System.Boolean <CertificateValidationFailed>k__BackingField
    void _set_$CertificateValidationFailed$k__BackingField(bool value);
    // System.Net.HttpWebRequest get_Request()
    // Offset: 0x15B0A24
    System::Net::HttpWebRequest* get_Request();
    // System.Net.WebExceptionStatus get_ExceptionStatus()
    // Offset: 0x15B0A2C
    System::Net::WebExceptionStatus get_ExceptionStatus();
    // System.Boolean get_CertificateValidationFailed()
    // Offset: 0x15B0A34
    bool get_CertificateValidationFailed();
    // System.Void set_CertificateValidationFailed(System.Boolean value)
    // Offset: 0x15B0A3C
    void set_CertificateValidationFailed(bool value);
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.Net.Sockets.NetworkStream networkStream)
    // Offset: 0x15B0A48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsStream* New_ctor(System::Net::HttpWebRequest* request, System::Net::Sockets::NetworkStream* networkStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::MonoTlsStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsStream*, creationType>(request, networkStream)));
    }
    // System.IO.Stream CreateStream(System.Byte[] buffer)
    // Offset: 0x15B0AFC
    System::IO::Stream* CreateStream(::Array<uint8_t>* buffer);
  }; // Mono.Net.Security.MonoTlsStream
  #pragma pack(pop)
  static check_size<sizeof(MonoTlsStream), 60 + sizeof(bool)> __Mono_Net_Security_MonoTlsStreamSizeCheck;
  static_assert(sizeof(MonoTlsStream) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_Request
// Il2CppName: get_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpWebRequest* (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_Request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_ExceptionStatus
// Il2CppName: get_ExceptionStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebExceptionStatus (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_ExceptionStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed
// Il2CppName: get_CertificateValidationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MonoTlsStream::*)()>(&Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "get_CertificateValidationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed
// Il2CppName: set_CertificateValidationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoTlsStream::*)(bool)>(&Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "set_CertificateValidationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsStream::CreateStream
// Il2CppName: CreateStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (Mono::Net::Security::MonoTlsStream::*)(::Array<uint8_t>*)>(&Mono::Net::Security::MonoTlsStream::CreateStream)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsStream*), "CreateStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
