// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IRsa
  class IRsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
  class RsaDigestSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher rsaEngine
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine;
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IDigest* digest;
    // private System.Boolean forSigning
    // Offset: 0x28
    bool forSigning;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get static field: static private readonly System.Collections.IDictionary oidMap
    static System::Collections::IDictionary* _get_oidMap();
    // Set static field: static private readonly System.Collections.IDictionary oidMap
    static void _set_oidMap(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0xF57384
    static void _cctor();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xF57AFC
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.DerObjectIdentifier digestOid)
    // Offset: 0xF57CA4
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0xF57D58
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IRsa rsa, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0xF57DD4
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IRsa* rsa, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher rsaEngine, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0xF57E60
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);
    // public System.Void Reset()
    // Offset: 0xF584BC
    void Reset();
    // private System.Byte[] DerEncode(System.Byte[] hash)
    // Offset: 0xF58420
    ::Array<uint8_t>* DerEncode(::Array<uint8_t>* hash);
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xF57F14
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xF5811C
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0xF581F8
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "RsaDigestSigner");
#pragma pack(pop)
