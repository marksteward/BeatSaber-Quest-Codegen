// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractF2mFieldElement.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Skipping declaration: ECFieldElement because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement
  class SecT571FieldElement : public Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
    public:
    // protected internal readonly System.UInt64[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* x;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: SecT571FieldElement
    SecT571FieldElement(::Array<uint64_t>* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator ::Array<uint64_t>*
    constexpr operator ::Array<uint64_t>*() const noexcept {
      return x;
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1F75E04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT571FieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT571FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT571FieldElement*, creationType>(x)));
    }
    // protected internal System.Void .ctor(System.UInt64[] x)
    // Offset: 0x1F75EF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT571FieldElement* New_ctor(::Array<uint64_t>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT571FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT571FieldElement*, creationType>(x)));
    }
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement other)
    // Offset: 0x1F76A84
    bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571FieldElement* other);
    // public override System.Boolean get_IsOne()
    // Offset: 0x1F75F20
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean get_IsZero()
    // Offset: 0x1F75F2C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1F75F38
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1F75F70
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1F75F7C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1F75F84
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1F76078
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1F76120
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1F7612C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1F76220
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1F76230
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1F763C8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1F76414
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1F76418
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1F764C0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x1F76620
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePow(System.Int32 pow)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement HalfTrace()
    // Offset: 0x1F766E0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement AbstractF2mFieldElement::HalfTrace()
    Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();
    // public override System.Boolean get_HasFastTrace()
    // Offset: 0x1F76788
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Boolean AbstractF2mFieldElement::get_HasFastTrace()
    bool get_HasFastTrace();
    // public override System.Int32 Trace()
    // Offset: 0x1F76790
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Int32 AbstractF2mFieldElement::Trace()
    int Trace();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1F767FC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1F768A4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F7694C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x1F769E8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F76AB0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement
  #pragma pack(pop)
  static check_size<sizeof(SecT571FieldElement), 16 + sizeof(::Array<uint64_t>*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT571FieldElementSizeCheck;
  static_assert(sizeof(SecT571FieldElement) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT571FieldElement");
