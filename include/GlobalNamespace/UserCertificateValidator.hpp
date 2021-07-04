// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ICertificateValidator
#include "GlobalNamespace/ICertificateValidator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UserCertificateValidator
  class UserCertificateValidator : public ::Il2CppObject/*, public GlobalNamespace::ICertificateValidator*/ {
    public:
    // Creating value type constructor for type: UserCertificateValidator
    UserCertificateValidator() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ICertificateValidator
    operator GlobalNamespace::ICertificateValidator() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICertificateValidator*>(this);
    }
    // public System.Void ValidateCertificateChain(MasterServerEndPoint endPoint, System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x237DAA4
    void ValidateCertificateChain(GlobalNamespace::MasterServerEndPoint* endPoint, System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // private System.Void ValidateCertificateChainInternal(MasterServerEndPoint endPoint, System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x237DAA8
    void ValidateCertificateChainInternal(GlobalNamespace::MasterServerEndPoint* endPoint, System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // public System.Void .ctor()
    // Offset: 0x237DC34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserCertificateValidator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UserCertificateValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserCertificateValidator*, creationType>()));
    }
  }; // UserCertificateValidator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserCertificateValidator*, "", "UserCertificateValidator");
// Writing MetadataGetter for method: GlobalNamespace::UserCertificateValidator::ValidateCertificateChain
// Il2CppName: ValidateCertificateChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UserCertificateValidator::ValidateCertificateChainInternal
// Il2CppName: ValidateCertificateChainInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UserCertificateValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
