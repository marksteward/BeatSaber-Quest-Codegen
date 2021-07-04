// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPublicKeyParameters
  class DHPublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.PublicKeyFactory
  class PublicKeyFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PublicKeyFactory
    PublicKeyFactory() noexcept {}
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(System.Byte[] keyInfoData)
    // Offset: 0x136FEE0
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::Array<uint8_t>* keyInfoData);
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo keyInfo)
    // Offset: 0x136FF00
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);
    // static private System.Byte[] GetRawKey(Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo keyInfo, System.Int32 expectedSize)
    // Offset: 0x13715A8
    static ::Array<uint8_t>* GetRawKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo, int expectedSize);
    // static private System.Boolean IsPkcsDHParam(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1371338
    static bool IsPkcsDHParam(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // static private Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters ReadPkcsDHParam(Org.BouncyCastle.Asn1.DerObjectIdentifier algOid, Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1371488
    static Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ReadPkcsDHParam(Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Asn1::Asn1Sequence* seq);
  }; // Org.BouncyCastle.Security.PublicKeyFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PublicKeyFactory*, "Org.BouncyCastle.Security", "PublicKeyFactory");
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::CreateKey
// Il2CppName: CreateKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::CreateKey
// Il2CppName: CreateKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey
// Il2CppName: GetRawKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam
// Il2CppName: IsPkcsDHParam
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam
// Il2CppName: ReadPkcsDHParam
// Cannot perform method pointer template specialization from operators!
