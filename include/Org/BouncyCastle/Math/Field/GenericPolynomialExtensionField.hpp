// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
#include "Org/BouncyCastle/Math/Field/IPolynomialExtensionField.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Skipping declaration: IFiniteField because it is already included!
  // Forward declaring type: IPolynomial
  class IPolynomial;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Autogenerated type: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
  class GenericPolynomialExtensionField : public ::Il2CppObject/*, public Org::BouncyCastle::Math::Field::IPolynomialExtensionField*/ {
    public:
    // protected readonly Org.BouncyCastle.Math.Field.IFiniteField subfield
    // Offset: 0x10
    Org::BouncyCastle::Math::Field::IFiniteField* subfield;
    // protected readonly Org.BouncyCastle.Math.Field.IPolynomial minimalPolynomial
    // Offset: 0x18
    Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField
    operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::Field::IPolynomialExtensionField*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Math.Field.IFiniteField subfield, Org.BouncyCastle.Math.Field.IPolynomial polynomial)
    // Offset: 0x1902D74
    static GenericPolynomialExtensionField* New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* subfield, Org::BouncyCastle::Math::Field::IPolynomial* polynomial);
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0x1903284
    // Implemented from: Org.BouncyCastle.Math.Field.IFiniteField
    // Base method: Org.BouncyCastle.Math.BigInteger IFiniteField::get_Characteristic()
    Org::BouncyCastle::Math::BigInteger* get_Characteristic();
    // public System.Int32 get_Dimension()
    // Offset: 0x1903334
    // Implemented from: Org.BouncyCastle.Math.Field.IFiniteField
    // Base method: System.Int32 IFiniteField::get_Dimension()
    int get_Dimension();
    // public Org.BouncyCastle.Math.Field.IPolynomial get_MinimalPolynomial()
    // Offset: 0x1903464
    // Implemented from: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
    // Base method: Org.BouncyCastle.Math.Field.IPolynomial IPolynomialExtensionField::get_MinimalPolynomial()
    Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x190346C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1903550
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");
#pragma pack(pop)