// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47
  // [CompilerGeneratedAttribute] Offset: D874C0
  struct MobileAuthenticatedStream::$ProcessAuthentication$d__47/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Boolean serverMode
    // Size: 0x1
    // Offset: 0x20
    bool serverMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    // Size: 0x8
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // public System.String targetHost
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* targetHost;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Size: 0x8
    // Offset: 0x38
    Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // public System.Boolean runSynchronously
    // Size: 0x1
    // Offset: 0x40
    bool runSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Security.Authentication.SslProtocols enabledProtocols
    // Size: 0x4
    // Offset: 0x44
    System::Security::Authentication::SslProtocols enabledProtocols;
    // Field size check
    static_assert(sizeof(System::Security::Authentication::SslProtocols) == 0x4);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    // Size: 0x8
    // Offset: 0x48
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // public System.Boolean clientCertRequired
    // Size: 0x1
    // Offset: 0x50
    bool clientCertRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Mono.Net.Security.AsyncProtocolResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1;
    // Creating value type constructor for type: $ProcessAuthentication$d__47
    constexpr $ProcessAuthentication$d__47(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, bool serverMode_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate_ = {}, ::Il2CppString* targetHost_ = {}, Mono::Net::Security::MobileAuthenticatedStream* $$4__this_ = {}, bool runSynchronously_ = {}, System::Security::Authentication::SslProtocols enabledProtocols_ = {}, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates_ = {}, bool clientCertRequired_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<Mono::Net::Security::AsyncProtocolResult*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, serverMode{serverMode_}, serverCertificate{serverCertificate_}, targetHost{targetHost_}, $$4__this{$$4__this_}, runSynchronously{runSynchronously_}, enabledProtocols{enabledProtocols_}, clientCertificates{clientCertificates_}, clientCertRequired{clientCertRequired_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEF6F40
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEF6F48
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__47");
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47::SetStateMachine
// Il2CppName: SetStateMachine
// Cannot perform method pointer template specialization from operators!
