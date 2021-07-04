// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT163Field
  class SecT163Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecT163Field
    SecT163Field() noexcept {}
    // Get static field: static private readonly System.UInt64[] ROOT_Z
    static ::Array<uint64_t>* _get_ROOT_Z();
    // Set static field: static private readonly System.UInt64[] ROOT_Z
    static void _set_ROOT_Z(::Array<uint64_t>* value);
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E8FDF0
    static void Add(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x1E8FEA4
    static void AddExt(::Array<uint64_t>* xx, ::Array<uint64_t>* yy, ::Array<uint64_t>* zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E8FFE8
    static void AddOne(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E90064
    static void AddTo(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E900F4
    static ::Array<uint64_t>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E90104
    static void HalfTrace(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E90368
    static void Invert(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E906D0
    static void Multiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E90A9C
    static void MultiplyAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x1E90268
    static void Reduce(::Array<uint64_t>* xx, ::Array<uint64_t>* z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E90B38
    static void Sqrt(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E90558
    static void Square(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E90C94
    static void SquareAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x1E905E8
    static void SquareN(::Array<uint64_t>* x, int n, ::Array<uint64_t>* z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x1E90D28
    static uint Trace(::Array<uint64_t>* x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x1E90D6C
    static void ImplCompactExt(::Array<uint64_t>* zz);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E90768
    static void ImplMultiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static protected System.Void ImplMulw(System.UInt64 x, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1E90E04
    static void ImplMulw(uint64_t x, uint64_t y, ::Array<uint64_t>* z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E901E0
    static void ImplSquare(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static private System.Void .cctor()
    // Offset: 0x1E90FB4
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT163Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT163Field");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::AddExt
// Il2CppName: AddExt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::AddOne
// Il2CppName: AddOne
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::AddTo
// Il2CppName: AddTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::FromBigInteger
// Il2CppName: FromBigInteger
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::HalfTrace
// Il2CppName: HalfTrace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Invert
// Il2CppName: Invert
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Multiply
// Il2CppName: Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Reduce
// Il2CppName: Reduce
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Sqrt
// Il2CppName: Sqrt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Square
// Il2CppName: Square
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::SquareAddToExt
// Il2CppName: SquareAddToExt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::SquareN
// Il2CppName: SquareN
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::Trace
// Il2CppName: Trace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::ImplCompactExt
// Il2CppName: ImplCompactExt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::ImplMultiply
// Il2CppName: ImplMultiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::ImplMulw
// Il2CppName: ImplMulw
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::ImplSquare
// Il2CppName: ImplSquare
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
