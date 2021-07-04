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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement
  class SecT131FieldElement : public Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
    public:
    // protected internal readonly System.UInt64[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* x;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: SecT131FieldElement
    SecT131FieldElement(::Array<uint64_t>* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator ::Array<uint64_t>*
    constexpr operator ::Array<uint64_t>*() const noexcept {
      return x;
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E4269C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT131FieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT131FieldElement*, creationType>(x)));
    }
    // protected internal System.Void .ctor(System.UInt64[] x)
    // Offset: 0x1E42790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT131FieldElement* New_ctor(::Array<uint64_t>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT131FieldElement*, creationType>(x)));
    }
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement other)
    // Offset: 0x1E432EC
    bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement* other);
    // public override System.Boolean get_IsOne()
    // Offset: 0x1E427BC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean get_IsZero()
    // Offset: 0x1E427C8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1E427D4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1E4280C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1E42818
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E42820
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1E42910
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E429B4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E429C0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E42AB0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E42AC0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1E42C50
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1E42C9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1E42CA0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1E42D44
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x1E42E9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePow(System.Int32 pow)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement HalfTrace()
    // Offset: 0x1E42F58
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement AbstractF2mFieldElement::HalfTrace()
    Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();
    // public override System.Boolean get_HasFastTrace()
    // Offset: 0x1E42FFC
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Boolean AbstractF2mFieldElement::get_HasFastTrace()
    bool get_HasFastTrace();
    // public override System.Int32 Trace()
    // Offset: 0x1E43004
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
    // Base method: System.Int32 AbstractF2mFieldElement::Trace()
    int Trace();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1E4306C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1E43110
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1E431B4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x1E43250
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E43318
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement
  #pragma pack(pop)
  static check_size<sizeof(SecT131FieldElement), 16 + sizeof(::Array<uint64_t>*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT131FieldElementSizeCheck;
  static_assert(sizeof(SecT131FieldElement) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT131FieldElement");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::get_IsOne
// Il2CppName: get_IsOne
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::get_IsZero
// Il2CppName: get_IsZero
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::TestBitZero
// Il2CppName: TestBitZero
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::ToBigInteger
// Il2CppName: ToBigInteger
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::get_FieldSize
// Il2CppName: get_FieldSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::AddOne
// Il2CppName: AddOne
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Subtract
// Il2CppName: Subtract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Multiply
// Il2CppName: Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::MultiplyMinusProduct
// Il2CppName: MultiplyMinusProduct
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::MultiplyPlusProduct
// Il2CppName: MultiplyPlusProduct
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Divide
// Il2CppName: Divide
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Negate
// Il2CppName: Negate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Square
// Il2CppName: Square
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::SquarePlusProduct
// Il2CppName: SquarePlusProduct
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::SquarePow
// Il2CppName: SquarePow
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::HalfTrace
// Il2CppName: HalfTrace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::get_HasFastTrace
// Il2CppName: get_HasFastTrace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Trace
// Il2CppName: Trace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Invert
// Il2CppName: Invert
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Sqrt
// Il2CppName: Sqrt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131FieldElement::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
