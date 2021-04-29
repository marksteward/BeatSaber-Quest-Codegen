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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
  class SecT409Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecT409Field
    SecT409Field() noexcept {}
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1D40114
    static void Add(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x1D40288
    static void AddExt(::Array<uint64_t>* xx, ::Array<uint64_t>* yy, ::Array<uint64_t>* zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D40308
    static void AddOne(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D403F4
    static void AddTo(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1D40514
    static ::Array<uint64_t>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D40524
    static void HalfTrace(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D4083C
    static void Invert(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1D40B0C
    static void Multiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1D40C44
    static void MultiplyAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x1D406D0
    static void Reduce(::Array<uint64_t>* xx, ::Array<uint64_t>* z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D40C98
    static void Sqrt(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D40A3C
    static void Square(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1D40E74
    static void SquareAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x1D40A88
    static void SquareN(::Array<uint64_t>* x, int n, ::Array<uint64_t>* z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x1D40EC4
    static uint Trace(::Array<uint64_t>* x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x1D40EF8
    static void ImplCompactExt(::Array<uint64_t>* zz);
    // static protected System.Void ImplExpand(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1D41030
    static void ImplExpand(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1D40B5C
    static void ImplMultiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static protected System.Void ImplMulwAcc(System.UInt64[] xs, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1D41124
    static void ImplMulwAcc(::Array<uint64_t>* xs, uint64_t y, ::Array<uint64_t>* z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1D405B8
    static void ImplSquare(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409Field");
