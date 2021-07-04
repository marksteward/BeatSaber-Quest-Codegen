// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
  class Ed25519 : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm
    struct Algorithm;
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum
    class PointAccum;
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt
    class PointExt;
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp
    class PointPrecomp;
    // Creating value type constructor for type: Ed25519
    Ed25519() noexcept {}
    // Get static field: static public readonly System.Int32 PrehashSize
    static int _get_PrehashSize();
    // Set static field: static public readonly System.Int32 PrehashSize
    static void _set_PrehashSize(int value);
    // Get static field: static public readonly System.Int32 PublicKeySize
    static int _get_PublicKeySize();
    // Set static field: static public readonly System.Int32 PublicKeySize
    static void _set_PublicKeySize(int value);
    // Get static field: static public readonly System.Int32 SecretKeySize
    static int _get_SecretKeySize();
    // Set static field: static public readonly System.Int32 SecretKeySize
    static void _set_SecretKeySize(int value);
    // Get static field: static public readonly System.Int32 SignatureSize
    static int _get_SignatureSize();
    // Set static field: static public readonly System.Int32 SignatureSize
    static void _set_SignatureSize(int value);
    // Get static field: static private readonly System.Byte[] Dom2Prefix
    static ::Array<uint8_t>* _get_Dom2Prefix();
    // Set static field: static private readonly System.Byte[] Dom2Prefix
    static void _set_Dom2Prefix(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static private readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] L
    static ::Array<uint>* _get_L();
    // Set static field: static private readonly System.UInt32[] L
    static void _set_L(::Array<uint>* value);
    // Get static field: static private readonly System.Int32[] B_x
    static ::Array<int>* _get_B_x();
    // Set static field: static private readonly System.Int32[] B_x
    static void _set_B_x(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] B_y
    static ::Array<int>* _get_B_y();
    // Set static field: static private readonly System.Int32[] B_y
    static void _set_B_y(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] C_d
    static ::Array<int>* _get_C_d();
    // Set static field: static private readonly System.Int32[] C_d
    static void _set_C_d(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] C_d2
    static ::Array<int>* _get_C_d2();
    // Set static field: static private readonly System.Int32[] C_d2
    static void _set_C_d2(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] C_d4
    static ::Array<int>* _get_C_d4();
    // Set static field: static private readonly System.Int32[] C_d4
    static void _set_C_d4(::Array<int>* value);
    // Get static field: static private readonly System.Object precompLock
    static ::Il2CppObject* _get_precompLock();
    // Set static field: static private readonly System.Object precompLock
    static void _set_precompLock(::Il2CppObject* value);
    // Get static field: static private Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] precompBaseTable
    static ::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt*>* _get_precompBaseTable();
    // Set static field: static private Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] precompBaseTable
    static void _set_precompBaseTable(::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt*>* value);
    // Get static field: static private System.Int32[] precompBase
    static ::Array<int>* _get_precompBase();
    // Set static field: static private System.Int32[] precompBase
    static void _set_precompBase(::Array<int>* value);
    // static private System.Byte[] CalculateS(System.Byte[] r, System.Byte[] k, System.Byte[] s)
    // Offset: 0x1D2C398
    static ::Array<uint8_t>* CalculateS(::Array<uint8_t>* r, ::Array<uint8_t>* k, ::Array<uint8_t>* s);
    // static private System.Boolean CheckContextVar(System.Byte[] ctx, System.Byte phflag)
    // Offset: 0x1D2CAF8
    static bool CheckContextVar(::Array<uint8_t>* ctx, uint8_t phflag);
    // static private System.Int32 CheckPoint(System.Int32[] x, System.Int32[] y)
    // Offset: 0x1D2CB24
    static int CheckPoint(::Array<int>* x, ::Array<int>* y);
    // static private Org.BouncyCastle.Crypto.IDigest CreateDigest()
    // Offset: 0x1D2CC44
    static Org::BouncyCastle::Crypto::IDigest* CreateDigest();
    // static public Org.BouncyCastle.Crypto.IDigest CreatePrehash()
    // Offset: 0x1D2CCA0
    static Org::BouncyCastle::Crypto::IDigest* CreatePrehash();
    // static private System.UInt32 Decode24(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D2CCFC
    static uint Decode24(::Array<uint8_t>* bs, int off);
    // static private System.UInt32 Decode32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D2CD5C
    static uint Decode32(::Array<uint8_t>* bs, int off);
    // static private System.Void Decode32(System.Byte[] bs, System.Int32 bsOff, System.UInt32[] n, System.Int32 nOff, System.Int32 nLen)
    // Offset: 0x1D2CDD0
    static void Decode32(::Array<uint8_t>* bs, int bsOff, ::Array<uint>* n, int nOff, int nLen);
    // static private System.Void DecodeScalar(System.Byte[] k, System.Int32 kOff, System.UInt32[] n)
    // Offset: 0x1D2C544
    static void DecodeScalar(::Array<uint8_t>* k, int kOff, ::Array<uint>* n);
    // static private System.Void Dom2(Org.BouncyCastle.Crypto.IDigest d, System.Byte phflag, System.Byte[] ctx)
    // Offset: 0x1D2CEC8
    static void Dom2(Org::BouncyCastle::Crypto::IDigest* d, uint8_t phflag, ::Array<uint8_t>* ctx);
    // static private System.Void Encode24(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D2D130
    static void Encode24(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D2C5C8
    static void Encode32(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode56(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1D2D1A0
    static void Encode56(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static private System.Int32 EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum p, System.Byte[] r, System.Int32 rOff)
    // Offset: 0x1D2D22C
    static int EncodePoint(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* p, ::Array<uint8_t>* r, int rOff);
    // static public System.Void GeneratePublicKey(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff)
    // Offset: 0x1D2D380
    static void GeneratePublicKey(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff);
    // static private System.Void ImplSign(Org.BouncyCastle.Crypto.IDigest d, System.Byte[] h, System.Byte[] s, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte phflag, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1D2D6FC
    static void ImplSign(Org::BouncyCastle::Crypto::IDigest* d, ::Array<uint8_t>* h, ::Array<uint8_t>* s, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, uint8_t phflag, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void ImplSign(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte phflag, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1D2DB80
    static void ImplSign(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, uint8_t phflag, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void PointAddVar(System.Boolean negate, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt p, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt q, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt r)
    // Offset: 0x1D2DEA4
    static void PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* p, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* q, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* r);
    // static private System.Void PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp p, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum r)
    // Offset: 0x1D2E0EC
    static void PointAddPrecomp(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp* p, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* r);
    // static private Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum p)
    // Offset: 0x1D2E258
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* p);
    // static private Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt p)
    // Offset: 0x1D2E3C0
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* p);
    // static private System.Void PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum r)
    // Offset: 0x1D2E4A8
    static void PointDouble(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* r);
    // static private System.Void PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum p)
    // Offset: 0x1D2E610
    static void PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* p);
    // static private System.Void PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt p)
    // Offset: 0x1D2E6A8
    static void PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* p);
    // static private System.Void PointLookup(System.Int32 block, System.Int32 index, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp p)
    // Offset: 0x1D2E724
    static void PointLookup(int block, int index, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp* p);
    // static private Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] PointPrecompVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt p, System.Int32 count)
    // Offset: 0x1D2E868
    static ::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt*>* PointPrecompVar(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* p, int count);
    // static private System.Void PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum p)
    // Offset: 0x1D2EA24
    static void PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* p);
    // static private System.Void PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt p)
    // Offset: 0x1D2EAB4
    static void PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt* p);
    // static public System.Void Precompute()
    // Offset: 0x1D2EB3C
    static void Precompute();
    // static private System.Void PruneScalar(System.Byte[] n, System.Int32 nOff, System.Byte[] r)
    // Offset: 0x1D2D5B8
    static void PruneScalar(::Array<uint8_t>* n, int nOff, ::Array<uint8_t>* r);
    // static private System.Byte[] ReduceScalar(System.Byte[] n)
    // Offset: 0x1D2C654
    static ::Array<uint8_t>* ReduceScalar(::Array<uint8_t>* n);
    // static private System.Void ScalarMultBase(System.Byte[] k, Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum r)
    // Offset: 0x1D2F468
    static void ScalarMultBase(::Array<uint8_t>* k, Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum* r);
    // static private System.Void ScalarMultBaseEncoded(System.Byte[] k, System.Byte[] r, System.Int32 rOff)
    // Offset: 0x1D2D624
    static void ScalarMultBaseEncoded(::Array<uint8_t>* k, ::Array<uint8_t>* r, int rOff);
    // static public System.Void Sign(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1D2F724
    static void Sign(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static public System.Void Sign(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1D2F7FC
    static void Sign(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static public System.Void SignPrehash(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte[] ph, System.Int32 phOff, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1D2F8D8
    static void SignPrehash(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, ::Array<uint8_t>* ph, int phOff, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void .cctor()
    // Offset: 0x1D2F9BC
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CalculateS
// Il2CppName: CalculateS
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckContextVar
// Il2CppName: CheckContextVar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint
// Il2CppName: CheckPoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreateDigest
// Il2CppName: CreateDigest
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreatePrehash
// Il2CppName: CreatePrehash
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode24
// Il2CppName: Decode24
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32
// Il2CppName: Decode32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32
// Il2CppName: Decode32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodeScalar
// Il2CppName: DecodeScalar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Dom2
// Il2CppName: Dom2
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode24
// Il2CppName: Encode24
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode32
// Il2CppName: Encode32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode56
// Il2CppName: Encode56
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::EncodePoint
// Il2CppName: EncodePoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePublicKey
// Il2CppName: GeneratePublicKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign
// Il2CppName: ImplSign
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign
// Il2CppName: ImplSign
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar
// Il2CppName: PointAddVar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddPrecomp
// Il2CppName: PointAddPrecomp
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy
// Il2CppName: PointCopy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy
// Il2CppName: PointCopy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointDouble
// Il2CppName: PointDouble
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY
// Il2CppName: PointExtendXY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY
// Il2CppName: PointExtendXY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointLookup
// Il2CppName: PointLookup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecompVar
// Il2CppName: PointPrecompVar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral
// Il2CppName: PointSetNeutral
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral
// Il2CppName: PointSetNeutral
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Precompute
// Il2CppName: Precompute
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PruneScalar
// Il2CppName: PruneScalar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ReduceScalar
// Il2CppName: ReduceScalar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBase
// Il2CppName: ScalarMultBase
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseEncoded
// Il2CppName: ScalarMultBaseEncoded
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign
// Il2CppName: Sign
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign
// Il2CppName: Sign
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash
// Il2CppName: SignPrehash
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
