// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: PbeParametersGenerator
  class PbeParametersGenerator;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.PbeUtilities
  // [] Offset: FFFFFFFF
  class PbeUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PbeUtilities
    PbeUtilities() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary algorithmType
    static System::Collections::IDictionary* _get_algorithmType();
    // Set static field: static private readonly System.Collections.IDictionary algorithmType
    static void _set_algorithmType(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x10C954C
    static void _cctor();
    // static private Org.BouncyCastle.Crypto.PbeParametersGenerator MakePbeGenerator(System.String type, Org.BouncyCastle.Crypto.IDigest digest, System.Byte[] key, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x10CEB64
    static Org::BouncyCastle::Crypto::PbeParametersGenerator* MakePbeGenerator(::Il2CppString* type, Org::BouncyCastle::Crypto::IDigest* digest, ::Array<uint8_t>* key, ::Array<uint8_t>* salt, int iterationCount);
    // static public System.Boolean IsPkcs12(System.String algorithm)
    // Offset: 0x10CED50
    static bool IsPkcs12(::Il2CppString* algorithm);
    // static public System.Boolean IsPkcs5Scheme2(System.String algorithm)
    // Offset: 0x10CEF4C
    static bool IsPkcs5Scheme2(::Il2CppString* algorithm);
    // static public Org.BouncyCastle.Crypto.ICipherParameters GenerateCipherParameters(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Char[] password, System.Boolean wrongPkcs12Zero)
    // Offset: 0x10CF148
    static Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Array<::Il2CppChar>* password, bool wrongPkcs12Zero);
    // static public Org.BouncyCastle.Crypto.ICipherParameters GenerateCipherParameters(System.String algorithm, System.Char[] password, System.Boolean wrongPkcs12Zero, Org.BouncyCastle.Asn1.Asn1Encodable pbeParameters)
    // Offset: 0x10CF200
    static Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::Il2CppString* algorithm, ::Array<::Il2CppChar>* password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters);
    // static public System.Object CreateEngine(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID)
    // Offset: 0x10D0478
    static ::Il2CppObject* CreateEngine(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID);
    // static public System.Object CreateEngine(System.String algorithm)
    // Offset: 0x10D05AC
    static ::Il2CppObject* CreateEngine(::Il2CppString* algorithm);
    // static private Org.BouncyCastle.Crypto.ICipherParameters FixDesParity(System.String mechanism, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x10D0284
    static Org::BouncyCastle::Crypto::ICipherParameters* FixDesParity(::Il2CppString* mechanism, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
  }; // Org.BouncyCastle.Security.PbeUtilities
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PbeUtilities*, "Org.BouncyCastle.Security", "PbeUtilities");
