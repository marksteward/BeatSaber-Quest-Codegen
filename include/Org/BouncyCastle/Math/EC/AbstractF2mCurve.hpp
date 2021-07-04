// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
  class AbstractF2mCurve : public Org::BouncyCastle::Math::EC::ECCurve {
    public:
    // private Org.BouncyCastle.Math.BigInteger[] si
    // Size: 0x8
    // Offset: 0x50
    ::Array<Org::BouncyCastle::Math::BigInteger*>* si;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::BigInteger*>*) == 0x8);
    // Creating value type constructor for type: AbstractF2mCurve
    AbstractF2mCurve(::Array<Org::BouncyCastle::Math::BigInteger*>* si_ = {}) noexcept : si{si_} {}
    // Creating conversion operator: operator ::Array<Org::BouncyCastle::Math::BigInteger*>*
    constexpr operator ::Array<Org::BouncyCastle::Math::BigInteger*>*() const noexcept {
      return si;
    }
    // static private Org.BouncyCastle.Math.Field.IFiniteField BuildField(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x1D0EEBC
    static Org::BouncyCastle::Math::Field::IFiniteField* BuildField(int m, int k1, int k2, int k3);
    // protected System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x1D0F088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mCurve* New_ctor(int m, int k1, int k2, int k3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::AbstractF2mCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mCurve*, creationType>(m, k1, k2, k3)));
    }
    // Org.BouncyCastle.Math.EC.ECFieldElement SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement beta)
    // Offset: 0x1D0F554
    Org::BouncyCastle::Math::EC::ECFieldElement* SolveQuadraticEquation(Org::BouncyCastle::Math::EC::ECFieldElement* beta);
    // Org.BouncyCastle.Math.BigInteger[] GetSi()
    // Offset: 0x1D0F844
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GetSi();
    // public System.Boolean get_IsKoblitz()
    // Offset: 0x1D0F914
    bool get_IsKoblitz();
    // static private Org.BouncyCastle.Math.BigInteger ImplRandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r, System.Int32 m)
    // Offset: 0x1D0F2E8
    static Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r, int m);
    // public override Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    // Offset: 0x1D0F0C8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x1D0F250
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
    // protected override Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0x1D0F32C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1);
  }; // Org.BouncyCastle.Math.EC.AbstractF2mCurve
  #pragma pack(pop)
  static check_size<sizeof(AbstractF2mCurve), 80 + sizeof(::Array<Org::BouncyCastle::Math::BigInteger*>*)> __Org_BouncyCastle_Math_EC_AbstractF2mCurveSizeCheck;
  static_assert(sizeof(AbstractF2mCurve) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mCurve*, "Org.BouncyCastle.Math.EC", "AbstractF2mCurve");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField
// Il2CppName: BuildField
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation
// Il2CppName: SolveQuadraticEquation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi
// Il2CppName: GetSi
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz
// Il2CppName: get_IsKoblitz
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult
// Il2CppName: ImplRandomFieldElementMult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint
// Il2CppName: CreatePoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult
// Il2CppName: RandomFieldElementMult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint
// Il2CppName: DecompressPoint
// Cannot perform method pointer template specialization from operators!
