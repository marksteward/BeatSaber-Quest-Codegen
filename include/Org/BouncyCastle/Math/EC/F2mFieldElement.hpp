// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractF2mFieldElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: LongArray
  class LongArray;
  // Skipping declaration: ECFieldElement because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Autogenerated type: Org.BouncyCastle.Math.EC.F2mFieldElement
  class F2mFieldElement : public Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
    public:
    // private System.Int32 representation
    // Offset: 0x10
    int representation;
    // private System.Int32 m
    // Offset: 0x14
    int m;
    // private System.Int32[] ks
    // Offset: 0x18
    ::Array<int>* ks;
    // Org.BouncyCastle.Math.EC.LongArray x
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::LongArray* x;
    // public System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1D6C774
    static F2mFieldElement* New_ctor(int m, int k1, int k2, int k3, Org::BouncyCastle::Math::BigInteger* x);
    // System.Void .ctor(System.Int32 m, System.Int32[] ks, Org.BouncyCastle.Math.EC.LongArray x)
    // Offset: 0x1D6D1B4
    static F2mFieldElement* New_ctor(int m, ::Array<int>* ks, Org::BouncyCastle::Math::EC::LongArray* x);
    // static public System.Void CheckFieldElements(Org.BouncyCastle.Math.EC.ECFieldElement a, Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1D6D2BC
    static void CheckFieldElements(Org::BouncyCastle::Math::EC::ECFieldElement* a, Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.F2mFieldElement other)
    // Offset: 0x1D6DD48
    bool Equals(Org::BouncyCastle::Math::EC::F2mFieldElement* other);
    // public override System.Int32 get_BitLength()
    // Offset: 0x1D6D228
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_BitLength()
    int get_BitLength();
    // public override System.Boolean get_IsOne()
    // Offset: 0x1D6D244
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean get_IsZero()
    // Offset: 0x1D6D260
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1D6D27C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1D6D298
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1D6D2B4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1D6D434
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1D6D518
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1D6D5AC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1D6D5B8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1D6D694
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1D6D6A4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1D6D86C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1D6D8B8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1D6D8BC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1D6D958
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x1D6DAD4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePow(System.Int32 pow)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1D6DB80
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1D6DC1C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D6DC8C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D6DE20
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.F2mFieldElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mFieldElement*, "Org.BouncyCastle.Math.EC", "F2mFieldElement");
#pragma pack(pop)