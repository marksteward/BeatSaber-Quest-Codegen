// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc7748
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
  class X25519Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X25519Field
    X25519Field() noexcept {}
    // Get static field: static private readonly System.Int32[] RootNegOne
    static ::Array<int>* _get_RootNegOne();
    // Set static field: static private readonly System.Int32[] RootNegOne
    static void _set_RootNegOne(::Array<int>* value);
    // static public System.Void Add(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x1D28D78
    static void Add(::Array<int>* x, ::Array<int>* y, ::Array<int>* z);
    // static public System.Void AddOne(System.Int32[] z)
    // Offset: 0x1D28DF8
    static void AddOne(::Array<int>* z);
    // static public System.Void Apm(System.Int32[] x, System.Int32[] y, System.Int32[] zp, System.Int32[] zm)
    // Offset: 0x1D28E30
    static void Apm(::Array<int>* x, ::Array<int>* y, ::Array<int>* zp, ::Array<int>* zm);
    // static public System.Void Carry(System.Int32[] z)
    // Offset: 0x1D28ECC
    static void Carry(::Array<int>* z);
    // static public System.Void CMov(System.Int32 cond, System.Int32[] x, System.Int32 xOff, System.Int32[] z, System.Int32 zOff)
    // Offset: 0x1D28FE4
    static void CMov(int cond, ::Array<int>* x, int xOff, ::Array<int>* z, int zOff);
    // static public System.Void CNegate(System.Int32 negate, System.Int32[] z)
    // Offset: 0x1D29070
    static void CNegate(int negate, ::Array<int>* z);
    // static public System.Void Copy(System.Int32[] x, System.Int32 xOff, System.Int32[] z, System.Int32 zOff)
    // Offset: 0x1D290CC
    static void Copy(::Array<int>* x, int xOff, ::Array<int>* z, int zOff);
    // static public System.Int32[] Create()
    // Offset: 0x1D29148
    static ::Array<int>* Create();
    // static public System.Void CSwap(System.Int32 swap, System.Int32[] a, System.Int32[] b)
    // Offset: 0x1D29194
    static void CSwap(int swap, ::Array<int>* a, ::Array<int>* b);
    // static public System.Void Encode(System.Int32[] x, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x1D29220
    static void Encode(::Array<int>* x, ::Array<uint8_t>* z, int zOff);
    // static private System.Void Encode128(System.Int32[] x, System.Int32 xOff, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D292B4
    static void Encode128(::Array<int>* x, int xOff, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D293FC
    static void Encode32(uint n, ::Array<uint8_t>* bs, int off);
    // static public System.Void Inv(System.Int32[] x, System.Int32[] z)
    // Offset: 0x1D29488
    static void Inv(::Array<int>* x, ::Array<int>* z);
    // static public System.Int32 IsZero(System.Int32[] x)
    // Offset: 0x1D29D28
    static int IsZero(::Array<int>* x);
    // static public System.Void Mul(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x1D297CC
    static void Mul(::Array<int>* x, ::Array<int>* y, ::Array<int>* z);
    // static public System.Void Normalize(System.Int32[] z)
    // Offset: 0x1D29D88
    static void Normalize(::Array<int>* z);
    // static public System.Void One(System.Int32[] z)
    // Offset: 0x1D29EEC
    static void One(::Array<int>* z);
    // static private System.Void PowPm5d8(System.Int32[] x, System.Int32[] rx2, System.Int32[] rz)
    // Offset: 0x1D29530
    static void PowPm5d8(::Array<int>* x, ::Array<int>* rx2, ::Array<int>* rz);
    // static private System.Void Reduce(System.Int32[] z, System.Int32 x)
    // Offset: 0x1D29E24
    static void Reduce(::Array<int>* z, int x);
    // static public System.Void Sqr(System.Int32[] x, System.Int32[] z)
    // Offset: 0x1D29F48
    static void Sqr(::Array<int>* x, ::Array<int>* z);
    // static public System.Void Sqr(System.Int32[] x, System.Int32 n, System.Int32[] z)
    // Offset: 0x1D29714
    static void Sqr(::Array<int>* x, int n, ::Array<int>* z);
    // static public System.Void Sub(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x1D2A2CC
    static void Sub(::Array<int>* x, ::Array<int>* y, ::Array<int>* z);
    // static public System.Void Zero(System.Int32[] z)
    // Offset: 0x1D2A34C
    static void Zero(::Array<int>* z);
    // static private System.Void .cctor()
    // Offset: 0x1D2A398
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::AddOne
// Il2CppName: AddOne
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Apm
// Il2CppName: Apm
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Carry
// Il2CppName: Carry
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CMov
// Il2CppName: CMov
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CNegate
// Il2CppName: CNegate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Copy
// Il2CppName: Copy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CSwap
// Il2CppName: CSwap
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode
// Il2CppName: Encode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode128
// Il2CppName: Encode128
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode32
// Il2CppName: Encode32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Inv
// Il2CppName: Inv
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::IsZero
// Il2CppName: IsZero
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Mul
// Il2CppName: Mul
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Normalize
// Il2CppName: Normalize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::One
// Il2CppName: One
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::PowPm5d8
// Il2CppName: PowPm5d8
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Reduce
// Il2CppName: Reduce
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr
// Il2CppName: Sqr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr
// Il2CppName: Sqr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sub
// Il2CppName: Sub
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Zero
// Il2CppName: Zero
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
