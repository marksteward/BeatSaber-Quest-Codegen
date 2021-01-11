// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Utilities
namespace Org::BouncyCastle::Crypto::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Utilities.Pack
  // [] Offset: FFFFFFFF
  class Pack : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Pack
    Pack() noexcept {}
    // static System.Void UInt32_To_BE(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1058254
    static void UInt32_To_BE(uint n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt32_To_BE(System.UInt32[] ns, System.Byte[] bs, System.Int32 off)
    // Offset: 0x10582E0
    static void UInt32_To_BE(::Array<uint>* ns, ::Array<uint8_t>* bs, int off);
    // static System.UInt32 BE_To_UInt32(System.Byte[] bs)
    // Offset: 0x105836C
    static uint BE_To_UInt32(::Array<uint8_t>* bs);
    // static System.UInt32 BE_To_UInt32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x10583D0
    static uint BE_To_UInt32(::Array<uint8_t>* bs, int off);
    // static System.Void BE_To_UInt32(System.Byte[] bs, System.Int32 off, System.UInt32[] ns)
    // Offset: 0x1058450
    static void BE_To_UInt32(::Array<uint8_t>* bs, int off, ::Array<uint>* ns);
    // static public System.Void BE_To_UInt32(System.Byte[] bs, System.Int32 bsOff, System.UInt32[] ns, System.Int32 nsOff, System.Int32 nsLen)
    // Offset: 0x10584D8
    static void BE_To_UInt32(::Array<uint8_t>* bs, int bsOff, ::Array<uint>* ns, int nsOff, int nsLen);
    // static System.Void UInt64_To_BE(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x105857C
    static void UInt64_To_BE(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static System.UInt64 BE_To_UInt64(System.Byte[] bs, System.Int32 off)
    // Offset: 0x10585BC
    static uint64_t BE_To_UInt64(::Array<uint8_t>* bs, int off);
    // static System.Byte[] UInt32_To_LE(System.UInt32 n)
    // Offset: 0x1058600
    static ::Array<uint8_t>* UInt32_To_LE(uint n);
    // static System.Void UInt32_To_LE(System.UInt32 n, System.Byte[] bs)
    // Offset: 0x10586F8
    static void UInt32_To_LE(uint n, ::Array<uint8_t>* bs);
    // static System.Void UInt32_To_LE(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x105866C
    static void UInt32_To_LE(uint n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt32_To_LE(System.UInt32[] ns, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1058758
    static void UInt32_To_LE(::Array<uint>* ns, ::Array<uint8_t>* bs, int off);
    // static System.UInt32 LE_To_UInt32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x10587E4
    static uint LE_To_UInt32(::Array<uint8_t>* bs, int off);
    // static System.Void LE_To_UInt32(System.Byte[] bs, System.Int32 bOff, System.UInt32[] ns, System.Int32 nOff, System.Int32 count)
    // Offset: 0x1058864
    static void LE_To_UInt32(::Array<uint8_t>* bs, int bOff, ::Array<uint>* ns, int nOff, int count);
    // static System.UInt32[] LE_To_UInt32(System.Byte[] bs, System.Int32 off, System.Int32 count)
    // Offset: 0x1058908
    static ::Array<uint>* LE_To_UInt32(::Array<uint8_t>* bs, int off, int count);
    // static System.Byte[] UInt64_To_LE(System.UInt64 n)
    // Offset: 0x10589D0
    static ::Array<uint8_t>* UInt64_To_LE(uint64_t n);
    // static System.Void UInt64_To_LE(System.UInt64 n, System.Byte[] bs)
    // Offset: 0x104B060
    static void UInt64_To_LE(uint64_t n, ::Array<uint8_t>* bs);
    // static System.Void UInt64_To_LE(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1058A4C
    static void UInt64_To_LE(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt64_To_LE(System.UInt64[] ns, System.Int32 nsOff, System.Int32 nsLen, System.Byte[] bs, System.Int32 bsOff)
    // Offset: 0x1058A88
    static void UInt64_To_LE(::Array<uint64_t>* ns, int nsOff, int nsLen, ::Array<uint8_t>* bs, int bsOff);
    // static System.UInt64 LE_To_UInt64(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1058B44
    static uint64_t LE_To_UInt64(::Array<uint8_t>* bs, int off);
  }; // Org.BouncyCastle.Crypto.Utilities.Pack
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
