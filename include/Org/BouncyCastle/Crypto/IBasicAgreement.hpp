// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IBasicAgreement
  class IBasicAgreement {
    public:
    // Creating value type constructor for type: IBasicAgreement
    IBasicAgreement() noexcept {}
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFF
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetFieldSize()
    // Offset: 0xFFFFFFFF
    int GetFieldSize();
    // public Org.BouncyCastle.Math.BigInteger CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters* pubKey);
  }; // Org.BouncyCastle.Crypto.IBasicAgreement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IBasicAgreement*, "Org.BouncyCastle.Crypto", "IBasicAgreement");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IBasicAgreement::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IBasicAgreement::GetFieldSize
// Il2CppName: GetFieldSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IBasicAgreement::CalculateAgreement
// Il2CppName: CalculateAgreement
// Cannot perform method pointer template specialization from operators!
