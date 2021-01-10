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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Math.EC.LongArray
  // [] Offset: FFFFFFFF
  class LongArray : public ::Il2CppObject {
    public:
    // private System.Int64[] m_ints
    // Size: 0x8
    // Offset: 0x10
    ::Array<int64_t>* m_ints;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // Creating value type constructor for type: LongArray
    LongArray(::Array<int64_t>* m_ints_ = {}) noexcept : m_ints{m_ints_} {}
    // Creating conversion operator: operator ::Array<int64_t>*
    constexpr operator ::Array<int64_t>*() const noexcept {
      return m_ints;
    }
    // Get static field: static private readonly System.UInt16[] INTERLEAVE2_TABLE
    static ::Array<uint16_t>* _get_INTERLEAVE2_TABLE();
    // Set static field: static private readonly System.UInt16[] INTERLEAVE2_TABLE
    static void _set_INTERLEAVE2_TABLE(::Array<uint16_t>* value);
    // Get static field: static private readonly System.Int32[] INTERLEAVE3_TABLE
    static ::Array<int>* _get_INTERLEAVE3_TABLE();
    // Set static field: static private readonly System.Int32[] INTERLEAVE3_TABLE
    static void _set_INTERLEAVE3_TABLE(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] INTERLEAVE4_TABLE
    static ::Array<int>* _get_INTERLEAVE4_TABLE();
    // Set static field: static private readonly System.Int32[] INTERLEAVE4_TABLE
    static void _set_INTERLEAVE4_TABLE(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] INTERLEAVE5_TABLE
    static ::Array<int>* _get_INTERLEAVE5_TABLE();
    // Set static field: static private readonly System.Int32[] INTERLEAVE5_TABLE
    static void _set_INTERLEAVE5_TABLE(::Array<int>* value);
    // Get static field: static private readonly System.Int64[] INTERLEAVE7_TABLE
    static ::Array<int64_t>* _get_INTERLEAVE7_TABLE();
    // Set static field: static private readonly System.Int64[] INTERLEAVE7_TABLE
    static void _set_INTERLEAVE7_TABLE(::Array<int64_t>* value);
    // Get static field: static readonly System.Byte[] BitLengths
    static ::Array<uint8_t>* _get_BitLengths();
    // Set static field: static readonly System.Byte[] BitLengths
    static void _set_BitLengths(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Int32 intLen)
    // Offset: 0x177FC84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongArray* New_ctor(int intLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::LongArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongArray*, creationType>(intLen)));
    }
    // public System.Void .ctor(System.Int64[] ints)
    // Offset: 0x177FCFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongArray* New_ctor(::Array<int64_t>* ints) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::LongArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongArray*, creationType>(ints)));
    }
    // public System.Void .ctor(System.Int64[] ints, System.Int32 off, System.Int32 len)
    // Offset: 0x177FD30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongArray* New_ctor(::Array<int64_t>* ints, int off, int len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::LongArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongArray*, creationType>(ints, off, len)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger bigInt)
    // Offset: 0x177FE0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongArray* New_ctor(Org::BouncyCastle::Math::BigInteger* bigInt) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::LongArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongArray*, creationType>(bigInt)));
    }
    // System.Void CopyTo(System.Int64[] z, System.Int32 zOff)
    // Offset: 0x1780064
    void CopyTo(::Array<int64_t>* z, int zOff);
    // public System.Boolean IsOne()
    // Offset: 0x1780090
    bool IsOne();
    // public System.Boolean IsZero()
    // Offset: 0x17800FC
    bool IsZero();
    // public System.Int32 GetUsedLength()
    // Offset: 0x1780160
    int GetUsedLength();
    // public System.Int32 GetUsedLengthFrom(System.Int32 from)
    // Offset: 0x178017C
    int GetUsedLengthFrom(int from);
    // public System.Int32 Degree()
    // Offset: 0x1780274
    int Degree();
    // private System.Int32 DegreeFrom(System.Int32 limit)
    // Offset: 0x17804B8
    int DegreeFrom(int limit);
    // static private System.Int32 BitLength(System.Int64 w)
    // Offset: 0x1780330
    static int BitLength(int64_t w);
    // private System.Int64[] ResizedInts(System.Int32 newLen)
    // Offset: 0x1780584
    ::Array<int64_t>* ResizedInts(int newLen);
    // public Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1780644
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // static private System.Int64 ShiftUp(System.Int64[] x, System.Int32 xOff, System.Int64[] z, System.Int32 zOff, System.Int32 count, System.Int32 shift)
    // Offset: 0x1780874
    static int64_t ShiftUp(::Array<int64_t>* x, int xOff, ::Array<int64_t>* z, int zOff, int count, int shift);
    // public Org.BouncyCastle.Math.EC.LongArray AddOne()
    // Offset: 0x1780924
    Org::BouncyCastle::Math::EC::LongArray* AddOne();
    // private System.Void AddShiftedByBitsSafe(Org.BouncyCastle.Math.EC.LongArray other, System.Int32 otherDegree, System.Int32 bits)
    // Offset: 0x1780A48
    void AddShiftedByBitsSafe(Org::BouncyCastle::Math::EC::LongArray* other, int otherDegree, int bits);
    // static private System.Int64 AddShiftedUp(System.Int64[] x, System.Int32 xOff, System.Int64[] y, System.Int32 yOff, System.Int32 count, System.Int32 shift)
    // Offset: 0x1780C04
    static int64_t AddShiftedUp(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y, int yOff, int count, int shift);
    // static private System.Int64 AddShiftedDown(System.Int64[] x, System.Int32 xOff, System.Int64[] y, System.Int32 yOff, System.Int32 count, System.Int32 shift)
    // Offset: 0x1780CC0
    static int64_t AddShiftedDown(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y, int yOff, int count, int shift);
    // public System.Void AddShiftedByWords(Org.BouncyCastle.Math.EC.LongArray other, System.Int32 words)
    // Offset: 0x1780D5C
    void AddShiftedByWords(Org::BouncyCastle::Math::EC::LongArray* other, int words);
    // static private System.Void Add(System.Int64[] x, System.Int32 xOff, System.Int64[] y, System.Int32 yOff, System.Int32 count)
    // Offset: 0x1780B74
    static void Add(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y, int yOff, int count);
    // static private System.Void Add(System.Int64[] x, System.Int32 xOff, System.Int64[] y, System.Int32 yOff, System.Int64[] z, System.Int32 zOff, System.Int32 count)
    // Offset: 0x1780E50
    static void Add(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y, int yOff, ::Array<int64_t>* z, int zOff, int count);
    // static private System.Void AddBoth(System.Int64[] x, System.Int32 xOff, System.Int64[] y1, System.Int32 y1Off, System.Int64[] y2, System.Int32 y2Off, System.Int32 count)
    // Offset: 0x1780EFC
    static void AddBoth(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y1, int y1Off, ::Array<int64_t>* y2, int y2Off, int count);
    // static private System.Void FlipWord(System.Int64[] buf, System.Int32 off, System.Int32 bit, System.Int64 word)
    // Offset: 0x1780FB0
    static void FlipWord(::Array<int64_t>* buf, int off, int bit, int64_t word);
    // public System.Boolean TestBitZero()
    // Offset: 0x1781038
    bool TestBitZero();
    // static private System.Boolean TestBit(System.Int64[] buf, System.Int32 off, System.Int32 n)
    // Offset: 0x178106C
    static bool TestBit(::Array<int64_t>* buf, int off, int n);
    // static private System.Void FlipBit(System.Int64[] buf, System.Int32 off, System.Int32 n)
    // Offset: 0x17810B8
    static void FlipBit(::Array<int64_t>* buf, int off, int n);
    // static private System.Void MultiplyWord(System.Int64 a, System.Int64[] b, System.Int32 bLen, System.Int64[] c, System.Int32 cOff)
    // Offset: 0x1781108
    static void MultiplyWord(int64_t a, ::Array<int64_t>* b, int bLen, ::Array<int64_t>* c, int cOff);
    // public Org.BouncyCastle.Math.EC.LongArray ModMultiply(Org.BouncyCastle.Math.EC.LongArray other, System.Int32 m, System.Int32[] ks)
    // Offset: 0x1781250
    Org::BouncyCastle::Math::EC::LongArray* ModMultiply(Org::BouncyCastle::Math::EC::LongArray* other, int m, ::Array<int>* ks);
    // public Org.BouncyCastle.Math.EC.LongArray Multiply(Org.BouncyCastle.Math.EC.LongArray other, System.Int32 m, System.Int32[] ks)
    // Offset: 0x17817D8
    Org::BouncyCastle::Math::EC::LongArray* Multiply(Org::BouncyCastle::Math::EC::LongArray* other, int m, ::Array<int>* ks);
    // public System.Void Reduce(System.Int32 m, System.Int32[] ks)
    // Offset: 0x1781C50
    void Reduce(int m, ::Array<int>* ks);
    // static private Org.BouncyCastle.Math.EC.LongArray ReduceResult(System.Int64[] buf, System.Int32 off, System.Int32 len, System.Int32 m, System.Int32[] ks)
    // Offset: 0x1781718
    static Org::BouncyCastle::Math::EC::LongArray* ReduceResult(::Array<int64_t>* buf, int off, int len, int m, ::Array<int>* ks);
    // static private System.Int32 ReduceInPlace(System.Int64[] buf, System.Int32 off, System.Int32 len, System.Int32 m, System.Int32[] ks)
    // Offset: 0x1781D40
    static int ReduceInPlace(::Array<int64_t>* buf, int off, int len, int m, ::Array<int>* ks);
    // static private System.Void ReduceBitWise(System.Int64[] buf, System.Int32 off, System.Int32 BitLength, System.Int32 m, System.Int32[] ks)
    // Offset: 0x17822D4
    static void ReduceBitWise(::Array<int64_t>* buf, int off, int BitLength, int m, ::Array<int>* ks);
    // static private System.Void ReduceBit(System.Int64[] buf, System.Int32 off, System.Int32 bit, System.Int32 m, System.Int32[] ks)
    // Offset: 0x17823B0
    static void ReduceBit(::Array<int64_t>* buf, int off, int bit, int m, ::Array<int>* ks);
    // static private System.Void ReduceWordWise(System.Int64[] buf, System.Int32 off, System.Int32 len, System.Int32 toBit, System.Int32 m, System.Int32[] ks)
    // Offset: 0x178213C
    static void ReduceWordWise(::Array<int64_t>* buf, int off, int len, int toBit, int m, ::Array<int>* ks);
    // static private System.Void ReduceWord(System.Int64[] buf, System.Int32 off, System.Int32 bit, System.Int64 word, System.Int32 m, System.Int32[] ks)
    // Offset: 0x17824EC
    static void ReduceWord(::Array<int64_t>* buf, int off, int bit, int64_t word, int m, ::Array<int>* ks);
    // static private System.Void ReduceVectorWise(System.Int64[] buf, System.Int32 off, System.Int32 len, System.Int32 words, System.Int32 m, System.Int32[] ks)
    // Offset: 0x1781FDC
    static void ReduceVectorWise(::Array<int64_t>* buf, int off, int len, int words, int m, ::Array<int>* ks);
    // static private System.Void FlipVector(System.Int64[] x, System.Int32 xOff, System.Int64[] y, System.Int32 yOff, System.Int32 yLen, System.Int32 bits)
    // Offset: 0x178261C
    static void FlipVector(::Array<int64_t>* x, int xOff, ::Array<int64_t>* y, int yOff, int yLen, int bits);
    // public Org.BouncyCastle.Math.EC.LongArray ModSquare(System.Int32 m, System.Int32[] ks)
    // Offset: 0x1782744
    Org::BouncyCastle::Math::EC::LongArray* ModSquare(int m, ::Array<int>* ks);
    // public Org.BouncyCastle.Math.EC.LongArray ModSquareN(System.Int32 n, System.Int32 m, System.Int32[] ks)
    // Offset: 0x17829C4
    Org::BouncyCastle::Math::EC::LongArray* ModSquareN(int n, int m, ::Array<int>* ks);
    // public Org.BouncyCastle.Math.EC.LongArray Square(System.Int32 m, System.Int32[] ks)
    // Offset: 0x1782BF0
    Org::BouncyCastle::Math::EC::LongArray* Square(int m, ::Array<int>* ks);
    // static private System.Void SquareInPlace(System.Int64[] x, System.Int32 xLen, System.Int32 m, System.Int32[] ks)
    // Offset: 0x1782AF8
    static void SquareInPlace(::Array<int64_t>* x, int xLen, int m, ::Array<int>* ks);
    // static private System.Int64 Interleave2_32to64(System.Int32 x)
    // Offset: 0x17828EC
    static int64_t Interleave2_32to64(int x);
    // public Org.BouncyCastle.Math.EC.LongArray ModInverse(System.Int32 m, System.Int32[] ks)
    // Offset: 0x1782D50
    Org::BouncyCastle::Math::EC::LongArray* ModInverse(int m, ::Array<int>* ks);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.LongArray other)
    // Offset: 0x178333C
    bool Equals(Org::BouncyCastle::Math::EC::LongArray* other);
    // public Org.BouncyCastle.Math.EC.LongArray Copy()
    // Offset: 0x17831FC
    Org::BouncyCastle::Math::EC::LongArray* Copy();
    // static private System.Void .cctor()
    // Offset: 0x1783654
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17832A4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17833FC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x178348C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Math.EC.LongArray
  static check_size<sizeof(LongArray), 16 + sizeof(::Array<int64_t>*)> __Org_BouncyCastle_Math_EC_LongArraySizeCheck;
  static_assert(sizeof(LongArray) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::LongArray*, "Org.BouncyCastle.Math.EC", "LongArray");
#pragma pack(pop)
