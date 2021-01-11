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
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat160
  // [] Offset: FFFFFFFF
  class Nat160 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat160
    Nat160() noexcept {}
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1090BEC
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1090D24
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1090E84
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x1090F94
    static ::Array<uint>* Create();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x1090FE0
    static ::Array<uint>* CreateExt();
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x109102C
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x109109C
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x10911A0
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1091218
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x1091294
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x1091300
    static bool IsZero(::Array<uint>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1091360
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1091504
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt64 Mul33Add(System.UInt32 w, System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1091650
    static uint64_t Mul33Add(uint w, ::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33DWordAdd(System.UInt32 x, System.UInt64 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1091824
    static uint Mul33DWordAdd(uint x, uint64_t y, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33WordAdd(System.UInt32 x, System.UInt32 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1091904
    static uint Mul33WordAdd(uint x, uint y, ::Array<uint>* z, int zOff);
    // static public System.UInt32 MulWordsAdd(System.UInt32 x, System.UInt32 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x10919B8
    static uint MulWordsAdd(uint x, uint y, ::Array<uint>* z, int zOff);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x1091A48
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1091C8C
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1091DC4
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x1091EC0
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat160
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat160*, "Org.BouncyCastle.Math.Raw", "Nat160");
