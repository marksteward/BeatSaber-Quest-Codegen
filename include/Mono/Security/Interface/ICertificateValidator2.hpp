// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Interface.ICertificateValidator
#include "Mono/Security/Interface/ICertificateValidator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: ValidationResult
  class ValidationResult;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.ICertificateValidator2
  // [TokenAttribute] Offset: FFFFFFFF
  class ICertificateValidator2/*, public Mono::Security::Interface::ICertificateValidator*/ {
    public:
    // Creating value type constructor for type: ICertificateValidator2
    ICertificateValidator2() noexcept {}
    // Creating interface conversion operator: operator Mono::Security::Interface::ICertificateValidator
    operator Mono::Security::Interface::ICertificateValidator() noexcept {
      return *reinterpret_cast<Mono::Security::Interface::ICertificateValidator*>(this);
    }
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain)
    // Offset: 0xFFFFFFFF
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain);
  }; // Mono.Security.Interface.ICertificateValidator2
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::ICertificateValidator2*, "Mono.Security.Interface", "ICertificateValidator2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::ICertificateValidator2::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult* (Mono::Security::Interface::ICertificateValidator2::*)(::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*)>(&Mono::Security::Interface::ICertificateValidator2::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* leaf = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::ICertificateValidator2*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, serverMode, leaf, chain});
  }
};
