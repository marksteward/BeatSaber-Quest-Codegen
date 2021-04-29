// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
  // Forward declaring type: X509ChainImpl
  class X509ChainImpl;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2
  class X509Helper2 : public ::Il2CppObject {
    public:
    // Nested type: System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper
    class MyNativeHelper;
    // Creating value type constructor for type: X509Helper2
    X509Helper2() noexcept {}
    // static System.Void Initialize()
    // Offset: 0x16B81E4
    static void Initialize();
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x16AC030
    static void ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags, System.Boolean disableProvider)
    // Offset: 0x16AC618
    static System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, bool disableProvider);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Security.Cryptography.X509Certificates.X509Certificate cert, System.Boolean disableProvider)
    // Offset: 0x16AC234
    static System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(System::Security::Cryptography::X509Certificates::X509Certificate* cert, bool disableProvider);
    // static Mono.Security.X509.X509Certificate GetMonoCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x16ACD64
    static Mono::Security::X509::X509Certificate* GetMonoCertificate(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // static System.Security.Cryptography.X509Certificates.X509ChainImpl CreateChainImpl(System.Boolean useMachineContext)
    // Offset: 0x16B2A5C
    static System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool useMachineContext);
    // static public System.Boolean IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x16B824C
    static bool IsValid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x16B298C
    static void ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Exception GetInvalidChainContextException()
    // Offset: 0x16B8260
    static System::Exception* GetInvalidChainContextException();
  }; // System.Security.Cryptography.X509Certificates.X509Helper2
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Helper2*, "System.Security.Cryptography.X509Certificates", "X509Helper2");
