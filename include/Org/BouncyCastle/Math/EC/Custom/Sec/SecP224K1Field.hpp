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
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Field
  class SecP224K1Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecP224K1Field
    SecP224K1Field() noexcept {}
    // Get static field: static readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] PExt
    static ::Array<uint>* _get_PExt();
    // Set static field: static private readonly System.UInt32[] PExt
    static void _set_PExt(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] PExtInv
    static ::Array<uint>* _get_PExtInv();
    // Set static field: static private readonly System.UInt32[] PExtInv
    static void _set_PExtInv(::Array<uint>* value);
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1B86BCC
    static void Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void AddOne(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B86CBC
    static void AddOne(::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1B86DA8
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B86E94
    static void Inv(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x1B871C8
    static int IsZero(::Array<uint>* x);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1B872B8
    static void Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void MultiplyAddToExt(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1B87548
    static void MultiplyAddToExt(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Negate(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B876A8
    static void Negate(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Random(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x1B8777C
    static void Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void RandomMult(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x1B866F0
    static void RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void Reduce(System.UInt32[] xx, System.UInt32[] z)
    // Offset: 0x1B87434
    static void Reduce(::Array<uint>* xx, ::Array<uint>* z);
    // static public System.Void Reduce32(System.UInt32 x, System.UInt32[] z)
    // Offset: 0x1B87858
    static void Reduce32(uint x, ::Array<uint>* z);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B87228
    static void Square(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void SquareN(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x1B87350
    static void SquareN(::Array<uint>* x, int n, ::Array<uint>* z);
    // static public System.Void Subtract(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1B8794C
    static void Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Twice(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B87990
    static void Twice(::Array<uint>* x, ::Array<uint>* z);
    // static private System.Void .cctor()
    // Offset: 0x1B87A80
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224K1Field");
