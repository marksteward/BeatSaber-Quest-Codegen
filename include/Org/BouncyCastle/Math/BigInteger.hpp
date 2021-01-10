// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math
namespace Org::BouncyCastle::Math {
  // Size: 0x28
  // Autogenerated type: Org.BouncyCastle.Math.BigInteger
  // [] Offset: FFFFFFFF
  class BigInteger : public ::Il2CppObject {
    public:
    // private System.Int32[] magnitude
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* magnitude;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 sign
    // Size: 0x4
    // Offset: 0x18
    int sign;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nBits
    // Size: 0x4
    // Offset: 0x1C
    int nBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nBitLength
    // Size: 0x4
    // Offset: 0x20
    int nBitLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 mQuote
    // Size: 0x4
    // Offset: 0x24
    int mQuote;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BigInteger
    BigInteger(::Array<int>* magnitude_ = {}, int sign_ = {}, int nBits_ = {}, int nBitLength_ = {}, int mQuote_ = {}) noexcept : magnitude{magnitude_}, sign{sign_}, nBits{nBits_}, nBitLength{nBitLength_}, mQuote{mQuote_} {}
    // Get static field: static readonly System.Int32[][] primeLists
    static ::Array<::Array<int>*>* _get_primeLists();
    // Set static field: static readonly System.Int32[][] primeLists
    static void _set_primeLists(::Array<::Array<int>*>* value);
    // Get static field: static readonly System.Int32[] primeProducts
    static ::Array<int>* _get_primeProducts();
    // Set static field: static readonly System.Int32[] primeProducts
    static void _set_primeProducts(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] ZeroMagnitude
    static ::Array<int>* _get_ZeroMagnitude();
    // Set static field: static private readonly System.Int32[] ZeroMagnitude
    static void _set_ZeroMagnitude(::Array<int>* value);
    // Get static field: static private readonly System.Byte[] ZeroEncoding
    static ::Array<uint8_t>* _get_ZeroEncoding();
    // Set static field: static private readonly System.Byte[] ZeroEncoding
    static void _set_ZeroEncoding(::Array<uint8_t>* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger[] SMALL_CONSTANTS
    static ::Array<Org::BouncyCastle::Math::BigInteger*>* _get_SMALL_CONSTANTS();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger[] SMALL_CONSTANTS
    static void _set_SMALL_CONSTANTS(::Array<Org::BouncyCastle::Math::BigInteger*>* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Zero
    static Org::BouncyCastle::Math::BigInteger* _get_Zero();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Zero
    static void _set_Zero(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger One
    static Org::BouncyCastle::Math::BigInteger* _get_One();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger One
    static void _set_One(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Two
    static Org::BouncyCastle::Math::BigInteger* _get_Two();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Two
    static void _set_Two(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Three
    static Org::BouncyCastle::Math::BigInteger* _get_Three();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Three
    static void _set_Three(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Four
    static Org::BouncyCastle::Math::BigInteger* _get_Four();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Four
    static void _set_Four(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Ten
    static Org::BouncyCastle::Math::BigInteger* _get_Ten();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Ten
    static void _set_Ten(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly System.Byte[] BitLengthTable
    static ::Array<uint8_t>* _get_BitLengthTable();
    // Set static field: static private readonly System.Byte[] BitLengthTable
    static void _set_BitLengthTable(::Array<uint8_t>* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix2
    static Org::BouncyCastle::Math::BigInteger* _get_radix2();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix2
    static void _set_radix2(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix2E
    static Org::BouncyCastle::Math::BigInteger* _get_radix2E();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix2E
    static void _set_radix2E(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix8
    static Org::BouncyCastle::Math::BigInteger* _get_radix8();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix8
    static void _set_radix8(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix8E
    static Org::BouncyCastle::Math::BigInteger* _get_radix8E();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix8E
    static void _set_radix8E(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix10
    static Org::BouncyCastle::Math::BigInteger* _get_radix10();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix10
    static void _set_radix10(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix10E
    static Org::BouncyCastle::Math::BigInteger* _get_radix10E();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix10E
    static void _set_radix10E(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix16
    static Org::BouncyCastle::Math::BigInteger* _get_radix16();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix16
    static void _set_radix16(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger radix16E
    static Org::BouncyCastle::Math::BigInteger* _get_radix16E();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger radix16E
    static void _set_radix16E(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static Org::BouncyCastle::Security::SecureRandom* _get_RandomSource();
    // Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static void _set_RandomSource(Org::BouncyCastle::Security::SecureRandom* value);
    // Get static field: static private readonly System.Int32[] ExpWindowThresholds
    static ::Array<int>* _get_ExpWindowThresholds();
    // Set static field: static private readonly System.Int32[] ExpWindowThresholds
    static void _set_ExpWindowThresholds(::Array<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1058B8C
    static void _cctor();
    // static private System.Int32 GetByteLength(System.Int32 nBits)
    // Offset: 0x105AC0C
    static int GetByteLength(int nBits);
    // static public Org.BouncyCastle.Math.BigInteger Arbitrary(System.Int32 sizeInBits)
    // Offset: 0x105AC24
    static Org::BouncyCastle::Math::BigInteger* Arbitrary(int sizeInBits);
    // private System.Void .ctor(System.Int32 signum, System.Int32[] mag, System.Boolean checkMag)
    // Offset: 0x105A768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(int signum, ::Array<int>* mag, bool checkMag) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(signum, mag, checkMag)));
    }
    // public System.Void .ctor(System.String value)
    // Offset: 0x105ACB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(value)));
    }
    // public System.Void .ctor(System.String str, System.Int32 radix)
    // Offset: 0x10495F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Il2CppString* str, int radix) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(str, radix)));
    }
    // public System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x105AE10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bytes)));
    }
    // public System.Void .ctor(System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x105AE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Array<uint8_t>* bytes, int offset, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bytes, offset, length)));
    }
    // static private System.Int32[] MakeMagnitude(System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x105B0E4
    static ::Array<int>* MakeMagnitude(::Array<uint8_t>* bytes, int offset, int length);
    // public System.Void .ctor(System.Int32 sign, System.Byte[] bytes)
    // Offset: 0x104CEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(int sign, ::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(sign, bytes)));
    }
    // public System.Void .ctor(System.Int32 sign, System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x104C49C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(int sign, ::Array<uint8_t>* bytes, int offset, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(sign, bytes, offset, length)));
    }
    // public System.Void .ctor(System.Int32 sizeInBits, System.Random random)
    // Offset: 0x104D684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(int sizeInBits, System::Random* random) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(sizeInBits, random)));
    }
    // public Org.BouncyCastle.Math.BigInteger Abs()
    // Offset: 0x105B288
    Org::BouncyCastle::Math::BigInteger* Abs();
    // static private System.Int32[] AddMagnitudes(System.Int32[] a, System.Int32[] b)
    // Offset: 0x105B314
    static ::Array<int>* AddMagnitudes(::Array<int>* a, ::Array<int>* b);
    // public Org.BouncyCastle.Math.BigInteger Add(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x104C334
    Org::BouncyCastle::Math::BigInteger* Add(Org::BouncyCastle::Math::BigInteger* value);
    // private Org.BouncyCastle.Math.BigInteger AddToMagnitude(System.Int32[] magToAdd)
    // Offset: 0x105B3DC
    Org::BouncyCastle::Math::BigInteger* AddToMagnitude(::Array<int>* magToAdd);
    // public System.Int32 get_BitCount()
    // Offset: 0x105B564
    int get_BitCount();
    // static public System.Int32 BitCnt(System.Int32 i)
    // Offset: 0x105B69C
    static int BitCnt(int i);
    // static private System.Int32 CalcBitLength(System.Int32 sign, System.Int32 indx, System.Int32[] mag)
    // Offset: 0x105B6D0
    static int CalcBitLength(int sign, int indx, ::Array<int>* mag);
    // public System.Int32 get_BitLength()
    // Offset: 0x10427D8
    int get_BitLength();
    // static System.Int32 BitLen(System.Int32 w)
    // Offset: 0x105B7EC
    static int BitLen(int w);
    // private System.Boolean QuickPow2Check()
    // Offset: 0x105B974
    bool QuickPow2Check();
    // static private System.Int32 CompareTo(System.Int32 xIndx, System.Int32[] x, System.Int32 yIndx, System.Int32[] y)
    // Offset: 0x105B998
    static int CompareTo(int xIndx, ::Array<int>* x, int yIndx, ::Array<int>* y);
    // static private System.Int32 CompareNoLeadingZeroes(System.Int32 xIndx, System.Int32[] x, System.Int32 yIndx, System.Int32[] y)
    // Offset: 0x105BA9C
    static int CompareNoLeadingZeroes(int xIndx, ::Array<int>* x, int yIndx, ::Array<int>* y);
    // public System.Int32 CompareTo(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x104309C
    int CompareTo(Org::BouncyCastle::Math::BigInteger* value);
    // private System.Int32[] Divide(System.Int32[] x, System.Int32[] y)
    // Offset: 0x105BB30
    ::Array<int>* Divide(::Array<int>* x, ::Array<int>* y);
    // public Org.BouncyCastle.Math.BigInteger Divide(Org.BouncyCastle.Math.BigInteger val)
    // Offset: 0x105C530
    Org::BouncyCastle::Math::BigInteger* Divide(Org::BouncyCastle::Math::BigInteger* val);
    // public Org.BouncyCastle.Math.BigInteger[] DivideAndRemainder(Org.BouncyCastle.Math.BigInteger val)
    // Offset: 0x105C710
    ::Array<Org::BouncyCastle::Math::BigInteger*>* DivideAndRemainder(Org::BouncyCastle::Math::BigInteger* val);
    // private System.Boolean IsEqualMagnitude(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x105CC70
    bool IsEqualMagnitude(Org::BouncyCastle::Math::BigInteger* x);
    // public Org.BouncyCastle.Math.BigInteger Gcd(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x10491CC
    Org::BouncyCastle::Math::BigInteger* Gcd(Org::BouncyCastle::Math::BigInteger* value);
    // private Org.BouncyCastle.Math.BigInteger Inc()
    // Offset: 0x105CD50
    Org::BouncyCastle::Math::BigInteger* Inc();
    // public System.Int32 get_IntValue()
    // Offset: 0x1049170
    int get_IntValue();
    // public System.Int64 get_LongValue()
    // Offset: 0x105CF34
    int64_t get_LongValue();
    // public Org.BouncyCastle.Math.BigInteger Min(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x1055F14
    Org::BouncyCastle::Math::BigInteger* Min(Org::BouncyCastle::Math::BigInteger* value);
    // public Org.BouncyCastle.Math.BigInteger Mod(Org.BouncyCastle.Math.BigInteger m)
    // Offset: 0x104C090
    Org::BouncyCastle::Math::BigInteger* Mod(Org::BouncyCastle::Math::BigInteger* m);
    // public Org.BouncyCastle.Math.BigInteger ModInverse(Org.BouncyCastle.Math.BigInteger m)
    // Offset: 0x1045BD0
    Org::BouncyCastle::Math::BigInteger* ModInverse(Org::BouncyCastle::Math::BigInteger* m);
    // private Org.BouncyCastle.Math.BigInteger ModInversePow2(Org.BouncyCastle.Math.BigInteger m)
    // Offset: 0x105D218
    Org::BouncyCastle::Math::BigInteger* ModInversePow2(Org::BouncyCastle::Math::BigInteger* m);
    // static private System.Int32 ModInverse32(System.Int32 d)
    // Offset: 0x105D5A8
    static int ModInverse32(int d);
    // static private System.Int64 ModInverse64(System.Int64 d)
    // Offset: 0x105D570
    static int64_t ModInverse64(int64_t d);
    // static private Org.BouncyCastle.Math.BigInteger ExtEuclid(Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b, out Org.BouncyCastle.Math.BigInteger u1Out)
    // Offset: 0x105D438
    static Org::BouncyCastle::Math::BigInteger* ExtEuclid(Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger*& u1Out);
    // public Org.BouncyCastle.Math.BigInteger ModPow(Org.BouncyCastle.Math.BigInteger e, Org.BouncyCastle.Math.BigInteger m)
    // Offset: 0x1043CB8
    Org::BouncyCastle::Math::BigInteger* ModPow(Org::BouncyCastle::Math::BigInteger* e, Org::BouncyCastle::Math::BigInteger* m);
    // static private Org.BouncyCastle.Math.BigInteger ModPowBarrett(Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger e, Org.BouncyCastle.Math.BigInteger m)
    // Offset: 0x105D5D8
    static Org::BouncyCastle::Math::BigInteger* ModPowBarrett(Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger* e, Org::BouncyCastle::Math::BigInteger* m);
    // static private Org.BouncyCastle.Math.BigInteger ReduceBarrett(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger m, Org.BouncyCastle.Math.BigInteger mr, Org.BouncyCastle.Math.BigInteger yu)
    // Offset: 0x105E324
    static Org::BouncyCastle::Math::BigInteger* ReduceBarrett(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* m, Org::BouncyCastle::Math::BigInteger* mr, Org::BouncyCastle::Math::BigInteger* yu);
    // static private Org.BouncyCastle.Math.BigInteger ModPowMonty(Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger e, Org.BouncyCastle.Math.BigInteger m, System.Boolean convert)
    // Offset: 0x105DB0C
    static Org::BouncyCastle::Math::BigInteger* ModPowMonty(Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger* e, Org::BouncyCastle::Math::BigInteger* m, bool convert);
    // static private System.Int32[] GetWindowList(System.Int32[] mag, System.Int32 extraBits)
    // Offset: 0x105E444
    static ::Array<int>* GetWindowList(::Array<int>* mag, int extraBits);
    // static private System.Int32 CreateWindowEntry(System.Int32 mult, System.Int32 zeroes)
    // Offset: 0x105F2D0
    static int CreateWindowEntry(int mult, int zeroes);
    // static private System.Int32[] Square(System.Int32[] w, System.Int32[] x)
    // Offset: 0x105F2EC
    static ::Array<int>* Square(::Array<int>* w, ::Array<int>* x);
    // static private System.Int32[] Multiply(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x105F4A8
    static ::Array<int>* Multiply(::Array<int>* x, ::Array<int>* y, ::Array<int>* z);
    // private System.Int32 GetMQuote()
    // Offset: 0x105E828
    int GetMQuote();
    // static private System.Void MontgomeryReduce(System.Int32[] x, System.Int32[] m, System.UInt32 mDash)
    // Offset: 0x105F11C
    static void MontgomeryReduce(::Array<int>* x, ::Array<int>* m, uint mDash);
    // static private System.Void MultiplyMonty(System.Int32[] a, System.Int32[] x, System.Int32[] y, System.Int32[] m, System.UInt32 mDash, System.Boolean smallMontyModulus)
    // Offset: 0x105ED64
    static void MultiplyMonty(::Array<int>* a, ::Array<int>* x, ::Array<int>* y, ::Array<int>* m, uint mDash, bool smallMontyModulus);
    // static private System.Void SquareMonty(System.Int32[] a, System.Int32[] x, System.Int32[] m, System.UInt32 mDash, System.Boolean smallMontyModulus)
    // Offset: 0x105E8F0
    static void SquareMonty(::Array<int>* a, ::Array<int>* x, ::Array<int>* m, uint mDash, bool smallMontyModulus);
    // static private System.UInt32 MultiplyMontyNIsOne(System.UInt32 x, System.UInt32 y, System.UInt32 m, System.UInt32 mDash)
    // Offset: 0x105F5D8
    static uint MultiplyMontyNIsOne(uint x, uint y, uint m, uint mDash);
    // public Org.BouncyCastle.Math.BigInteger Multiply(Org.BouncyCastle.Math.BigInteger val)
    // Offset: 0x104C158
    Org::BouncyCastle::Math::BigInteger* Multiply(Org::BouncyCastle::Math::BigInteger* val);
    // public Org.BouncyCastle.Math.BigInteger Square()
    // Offset: 0x105E1D4
    Org::BouncyCastle::Math::BigInteger* Square();
    // public Org.BouncyCastle.Math.BigInteger Negate()
    // Offset: 0x105B298
    Org::BouncyCastle::Math::BigInteger* Negate();
    // public Org.BouncyCastle.Math.BigInteger Not()
    // Offset: 0x105B680
    Org::BouncyCastle::Math::BigInteger* Not();
    // public Org.BouncyCastle.Math.BigInteger Pow(System.Int32 exp)
    // Offset: 0x105AA40
    Org::BouncyCastle::Math::BigInteger* Pow(int exp);
    // private System.Int32 Remainder(System.Int32 m)
    // Offset: 0x105F604
    int Remainder(int m);
    // static private System.Int32[] Remainder(System.Int32[] x, System.Int32[] y)
    // Offset: 0x105F67C
    static ::Array<int>* Remainder(::Array<int>* x, ::Array<int>* y);
    // public Org.BouncyCastle.Math.BigInteger Remainder(Org.BouncyCastle.Math.BigInteger n)
    // Offset: 0x105CFB0
    Org::BouncyCastle::Math::BigInteger* Remainder(Org::BouncyCastle::Math::BigInteger* n);
    // private System.Int32[] LastNBits(System.Int32 n)
    // Offset: 0x105CA4C
    ::Array<int>* LastNBits(int n);
    // private Org.BouncyCastle.Math.BigInteger DivideWords(System.Int32 w)
    // Offset: 0x105E668
    Org::BouncyCastle::Math::BigInteger* DivideWords(int w);
    // private Org.BouncyCastle.Math.BigInteger RemainderWords(System.Int32 w)
    // Offset: 0x105E760
    Org::BouncyCastle::Math::BigInteger* RemainderWords(int w);
    // static private System.Int32[] ShiftLeft(System.Int32[] mag, System.Int32 n)
    // Offset: 0x105C09C
    static ::Array<int>* ShiftLeft(::Array<int>* mag, int n);
    // public Org.BouncyCastle.Math.BigInteger ShiftLeft(System.Int32 n)
    // Offset: 0x105ACB8
    Org::BouncyCastle::Math::BigInteger* ShiftLeft(int n);
    // static private System.Void ShiftRightInPlace(System.Int32 start, System.Int32[] mag, System.Int32 n)
    // Offset: 0x105C3D4
    static void ShiftRightInPlace(int start, ::Array<int>* mag, int n);
    // static private System.Void ShiftRightOneInPlace(System.Int32 start, System.Int32[] mag)
    // Offset: 0x105C320
    static void ShiftRightOneInPlace(int start, ::Array<int>* mag);
    // public Org.BouncyCastle.Math.BigInteger ShiftRight(System.Int32 n)
    // Offset: 0x10438AC
    Org::BouncyCastle::Math::BigInteger* ShiftRight(int n);
    // public System.Int32 get_SignValue()
    // Offset: 0x105FA68
    int get_SignValue();
    // static private System.Int32[] Subtract(System.Int32 xStart, System.Int32[] x, System.Int32 yStart, System.Int32[] y)
    // Offset: 0x105C258
    static ::Array<int>* Subtract(int xStart, ::Array<int>* x, int yStart, ::Array<int>* y);
    // public Org.BouncyCastle.Math.BigInteger Subtract(Org.BouncyCastle.Math.BigInteger n)
    // Offset: 0x1043160
    Org::BouncyCastle::Math::BigInteger* Subtract(Org::BouncyCastle::Math::BigInteger* n);
    // static private System.Int32[] doSubBigLil(System.Int32[] bigMag, System.Int32[] lilMag)
    // Offset: 0x105CE74
    static ::Array<int>* doSubBigLil(::Array<int>* bigMag, ::Array<int>* lilMag);
    // public System.Byte[] ToByteArray()
    // Offset: 0x105FA70
    ::Array<uint8_t>* ToByteArray();
    // public System.Byte[] ToByteArrayUnsigned()
    // Offset: 0x104FE10
    ::Array<uint8_t>* ToByteArrayUnsigned();
    // private System.Byte[] ToByteArray(System.Boolean unsigned)
    // Offset: 0x105FA78
    ::Array<uint8_t>* ToByteArray(bool _unsigned);
    // public System.String ToString(System.Int32 radix)
    // Offset: 0x105FE54
    ::Il2CppString* ToString(int radix);
    // static private System.Void ToString(System.Text.StringBuilder sb, System.Int32 radix, System.Collections.IList moduli, System.Int32 scale, Org.BouncyCastle.Math.BigInteger pos)
    // Offset: 0x1060764
    static void ToString(System::Text::StringBuilder* sb, int radix, System::Collections::IList* moduli, int scale, Org::BouncyCastle::Math::BigInteger* pos);
    // static private System.Void AppendZeroExtendedString(System.Text.StringBuilder sb, System.String s, System.Int32 minLength)
    // Offset: 0x10606FC
    static void AppendZeroExtendedString(System::Text::StringBuilder* sb, ::Il2CppString* s, int minLength);
    // static private Org.BouncyCastle.Math.BigInteger CreateUValueOf(System.UInt64 value)
    // Offset: 0x105A8E8
    static Org::BouncyCastle::Math::BigInteger* CreateUValueOf(uint64_t value);
    // static private Org.BouncyCastle.Math.BigInteger CreateValueOf(System.Int64 value)
    // Offset: 0x1060A18
    static Org::BouncyCastle::Math::BigInteger* CreateValueOf(int64_t value);
    // static public Org.BouncyCastle.Math.BigInteger ValueOf(System.Int64 value)
    // Offset: 0x104D040
    static Org::BouncyCastle::Math::BigInteger* ValueOf(int64_t value);
    // public System.Int32 GetLowestSetBit()
    // Offset: 0x1060AE8
    int GetLowestSetBit();
    // private System.Int32 GetLowestSetBitMaskFirst(System.Int32 firstWordMask)
    // Offset: 0x1060B00
    int GetLowestSetBitMaskFirst(int firstWordMask);
    // public System.Boolean TestBit(System.Int32 n)
    // Offset: 0x1042F94
    bool TestBit(int n);
    // public Org.BouncyCastle.Math.BigInteger Or(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x1060BA4
    Org::BouncyCastle::Math::BigInteger* Or(Org::BouncyCastle::Math::BigInteger* value);
    // public Org.BouncyCastle.Math.BigInteger Xor(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x1060E2C
    Org::BouncyCastle::Math::BigInteger* Xor(Org::BouncyCastle::Math::BigInteger* value);
    // public Org.BouncyCastle.Math.BigInteger SetBit(System.Int32 n)
    // Offset: 0x10610B8
    Org::BouncyCastle::Math::BigInteger* SetBit(int n);
    // private Org.BouncyCastle.Math.BigInteger FlipExistingBit(System.Int32 n)
    // Offset: 0x10611E4
    Org::BouncyCastle::Math::BigInteger* FlipExistingBit(int n);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x105CBA8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x105CCF8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x105FE4C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Math.BigInteger
  static check_size<sizeof(BigInteger), 36 + sizeof(int)> __Org_BouncyCastle_Math_BigIntegerSizeCheck;
  static_assert(sizeof(BigInteger) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::BigInteger*, "Org.BouncyCastle.Math", "BigInteger");
#pragma pack(pop)
