// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
  // [] Offset: FFFFFFFF
  class GcmUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GcmUtilities
    GcmUtilities() noexcept {}
    // Get static field: static private readonly System.UInt32[] LOOKUP
    static ::Array<uint>* _get_LOOKUP();
    // Set static field: static private readonly System.UInt32[] LOOKUP
    static void _set_LOOKUP(::Array<uint>* value);
    // static private System.UInt32[] GenerateLookup()
    // Offset: 0x14A9AF8
    static ::Array<uint>* GenerateLookup();
    // static System.UInt32[] OneAsUints()
    // Offset: 0x14A9BE8
    static ::Array<uint>* OneAsUints();
    // static System.Void AsBytes(System.UInt32[] x, System.Byte[] z)
    // Offset: 0x14A9C5C
    static void AsBytes(::Array<uint>* x, ::Array<uint8_t>* z);
    // static System.UInt32[] AsUints(System.Byte[] bs)
    // Offset: 0x14A9C68
    static ::Array<uint>* AsUints(::Array<uint8_t>* bs);
    // static System.Void Multiply(System.Byte[] x, System.Byte[] y)
    // Offset: 0x14A9CD8
    static void Multiply(::Array<uint8_t>* x, ::Array<uint8_t>* y);
    // static System.Void Multiply(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x14A9D74
    static void Multiply(::Array<uint>* x, ::Array<uint>* y);
    // static System.Void MultiplyP(System.UInt32[] x)
    // Offset: 0x14A9E4C
    static void MultiplyP(::Array<uint>* x);
    // static System.Void MultiplyP8(System.UInt32[] x)
    // Offset: 0x14A9F64
    static void MultiplyP8(::Array<uint>* x);
    // static System.UInt32 ShiftRight(System.UInt32[] x)
    // Offset: 0x14A9EE8
    static uint ShiftRight(::Array<uint>* x);
    // static System.UInt32 ShiftRightN(System.UInt32[] x, System.Int32 n)
    // Offset: 0x14AA020
    static uint ShiftRightN(::Array<uint>* x, int n);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y)
    // Offset: 0x14AA0C0
    static void Xor(::Array<uint8_t>* x, ::Array<uint8_t>* y);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff)
    // Offset: 0x14AA1B8
    static void Xor(::Array<uint8_t>* x, ::Array<uint8_t>* y, int yOff);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x14AA2D0
    static void Xor(::Array<uint8_t>* x, int xOff, ::Array<uint8_t>* y, int yOff, ::Array<uint8_t>* z, int zOff);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff, System.Int32 yLen)
    // Offset: 0x14AA46C
    static void Xor(::Array<uint8_t>* x, ::Array<uint8_t>* y, int yOff, int yLen);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Int32 len)
    // Offset: 0x14AA4E0
    static void Xor(::Array<uint8_t>* x, int xOff, ::Array<uint8_t>* y, int yOff, int len);
    // static System.Void Xor(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x14AA550
    static void Xor(::Array<uint>* x, ::Array<uint>* y);
    // static private System.Void .cctor()
    // Offset: 0x14AA604
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*, "Org.BouncyCastle.Crypto.Modes.Gcm", "GcmUtilities");
