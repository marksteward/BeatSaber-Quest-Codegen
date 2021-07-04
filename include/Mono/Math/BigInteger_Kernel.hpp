// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger.hpp"
// Completed includes
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger/Kernel
  class BigInteger::Kernel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Kernel
    Kernel() noexcept {}
    // static public Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1D6BE08
    static Mono::Math::BigInteger* Subtract(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1D6E040
    static void MinusEq(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1D6E160
    static void PlusEq(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger/Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1D6BCB8
    static Mono::Math::BigInteger::Sign Compare(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public System.UInt32 SingleByteDivideInPlace(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1D6D6F8
    static uint SingleByteDivideInPlace(Mono::Math::BigInteger* n, uint d);
    // static public System.UInt32 DwordMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1D6BFD0
    static uint DwordMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1D6E2E8
    static ::Array<Mono::Math::BigInteger*>* DwordDivMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1D6C080
    static ::Array<Mono::Math::BigInteger*>* multiByteDivide(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1D6C84C
    static Mono::Math::BigInteger* LeftShift(Mono::Math::BigInteger* bi, int n);
    // static public Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1D6CA34
    static Mono::Math::BigInteger* RightShift(Mono::Math::BigInteger* bi, int n);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32 xOffset, System.UInt32 xLen, System.UInt32[] y, System.UInt32 yOffset, System.UInt32 yLen, System.UInt32[] d, System.UInt32 dOffset)
    // Offset: 0x1D6C74C
    static void Multiply(::Array<uint>* x, uint xOffset, uint xLen, ::Array<uint>* y, uint yOffset, uint yLen, ::Array<uint>* d, uint dOffset);
    // static public System.Void MultiplyMod2p32pmod(System.UInt32[] x, System.Int32 xOffset, System.Int32 xLen, System.UInt32[] y, System.Int32 yOffest, System.Int32 yLen, System.UInt32[] d, System.Int32 dOffset, System.Int32 mod)
    // Offset: 0x1D6E494
    static void MultiplyMod2p32pmod(::Array<uint>* x, int xOffset, int xLen, ::Array<uint>* y, int yOffest, int yLen, ::Array<uint>* d, int dOffset, int mod);
    // static public System.UInt32 modInverse(Mono.Math.BigInteger bi, System.UInt32 modulus)
    // Offset: 0x1D6E5C4
    static uint modInverse(Mono::Math::BigInteger* bi, uint modulus);
    // static public Mono.Math.BigInteger modInverse(Mono.Math.BigInteger bi, Mono.Math.BigInteger modulus)
    // Offset: 0x1D6D954
    static Mono::Math::BigInteger* modInverse(Mono::Math::BigInteger* bi, Mono::Math::BigInteger* modulus);
  }; // Mono.Math.BigInteger/Kernel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger::Kernel*, "Mono.Math", "BigInteger/Kernel");
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Subtract
// Il2CppName: Subtract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::MinusEq
// Il2CppName: MinusEq
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::PlusEq
// Il2CppName: PlusEq
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Compare
// Il2CppName: Compare
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::SingleByteDivideInPlace
// Il2CppName: SingleByteDivideInPlace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::DwordMod
// Il2CppName: DwordMod
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::DwordDivMod
// Il2CppName: DwordDivMod
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::multiByteDivide
// Il2CppName: multiByteDivide
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::LeftShift
// Il2CppName: LeftShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::RightShift
// Il2CppName: RightShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Multiply
// Il2CppName: Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::MultiplyMod2p32pmod
// Il2CppName: MultiplyMod2p32pmod
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::modInverse
// Il2CppName: modInverse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::modInverse
// Il2CppName: modInverse
// Cannot perform method pointer template specialization from operators!
