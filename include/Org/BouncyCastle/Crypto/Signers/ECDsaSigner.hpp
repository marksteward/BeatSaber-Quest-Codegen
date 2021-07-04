// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.ECDsaSigner
  class ECDsaSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    // protected readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*) == 0x8);
    // protected Org.BouncyCastle.Crypto.Parameters.ECKeyParameters key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*) == 0x8);
    // protected Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: ECDsaSigner
    ECDsaSigner(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator_ = {}, Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : kCalculator{kCalculator_}, key{key_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDsaExt
    operator Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Eight
    static Org::BouncyCastle::Math::BigInteger* _get_Eight();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Eight
    static void _set_Eight(Org::BouncyCastle::Math::BigInteger* value);
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1260B18
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x1260D2C
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x1260D54
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GenerateSignature(::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x12611C8
    Org::BouncyCastle::Math::BigInteger* CalculateE(Org::BouncyCastle::Math::BigInteger* n, ::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x126129C
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
    // protected Org.BouncyCastle.Security.SecureRandom InitSecureRandom(System.Boolean needed, Org.BouncyCastle.Security.SecureRandom provided)
    // Offset: 0x12612F8
    Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool needed, Org::BouncyCastle::Security::SecureRandom* provided);
    // static private System.Void .cctor()
    // Offset: 0x1261378
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1260AA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECDsaSigner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::ECDsaSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECDsaSigner*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.ECDsaSigner
  #pragma pack(pop)
  static check_size<sizeof(ECDsaSigner), 32 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_ECDsaSignerSizeCheck;
  static_assert(sizeof(ECDsaSigner) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECDsaSigner*, "Org.BouncyCastle.Crypto.Signers", "ECDsaSigner");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_Order
// Il2CppName: get_Order
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GenerateSignature
// Il2CppName: GenerateSignature
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CalculateE
// Il2CppName: CalculateE
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CreateBasePointMultiplier
// Il2CppName: CreateBasePointMultiplier
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::InitSecureRandom
// Il2CppName: InitSecureRandom
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECDsaSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
