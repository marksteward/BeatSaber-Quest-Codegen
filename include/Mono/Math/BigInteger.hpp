// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger
  class BigInteger : public ::Il2CppObject {
    public:
    // Nested type: Mono::Math::BigInteger::Sign
    struct Sign;
    // Nested type: Mono::Math::BigInteger::ModulusRing
    class ModulusRing;
    // Nested type: Mono::Math::BigInteger::Kernel
    class Kernel;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Mono.Math.BigInteger/Sign
    struct Sign/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Sign
      constexpr Sign(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Mono.Math.BigInteger/Sign Negative
      static constexpr const int Negative = -1;
      // Get static field: static public Mono.Math.BigInteger/Sign Negative
      static Mono::Math::BigInteger::Sign _get_Negative();
      // Set static field: static public Mono.Math.BigInteger/Sign Negative
      static void _set_Negative(Mono::Math::BigInteger::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Sign Zero
      static constexpr const int Zero = 0;
      // Get static field: static public Mono.Math.BigInteger/Sign Zero
      static Mono::Math::BigInteger::Sign _get_Zero();
      // Set static field: static public Mono.Math.BigInteger/Sign Zero
      static void _set_Zero(Mono::Math::BigInteger::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Sign Positive
      static constexpr const int Positive = 1;
      // Get static field: static public Mono.Math.BigInteger/Sign Positive
      static Mono::Math::BigInteger::Sign _get_Positive();
      // Set static field: static public Mono.Math.BigInteger/Sign Positive
      static void _set_Positive(Mono::Math::BigInteger::Sign value);
    }; // Mono.Math.BigInteger/Sign
    #pragma pack(pop)
    static check_size<sizeof(BigInteger::Sign), 0 + sizeof(int)> __Mono_Math_BigInteger_SignSizeCheck;
    static_assert(sizeof(BigInteger::Sign) == 0x4);
    // private System.UInt32 length
    // Size: 0x4
    // Offset: 0x10
    uint length;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: length and: data
    char __padding0[0x4] = {};
    // private System.UInt32[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* data;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: BigInteger
    BigInteger(uint length_ = {}, ::Array<uint>* data_ = {}) noexcept : length{length_}, data{data_} {}
    // Get static field: static readonly System.UInt32[] smallPrimes
    static ::Array<uint>* _get_smallPrimes();
    // Set static field: static readonly System.UInt32[] smallPrimes
    static void _set_smallPrimes(::Array<uint>* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(System::Security::Cryptography::RandomNumberGenerator* value);
    // public System.Void .ctor(Mono.Math.BigInteger/Sign sign, System.UInt32 len)
    // Offset: 0x1B91D00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger::Sign sign, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(sign, len)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi)
    // Offset: 0x1B91D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger* bi) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bi)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi, System.UInt32 len)
    // Offset: 0x1B91E2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(Mono::Math::BigInteger* bi, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(bi, len)));
    }
    // public System.Void .ctor(System.Byte[] inData)
    // Offset: 0x1B91F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(::Array<uint8_t>* inData) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(inData)));
    }
    // public System.Void .ctor(System.UInt32 ui)
    // Offset: 0x1B92208
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger* New_ctor(uint ui) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Math::BigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger*, creationType>(ui)));
    }
    // static private System.Security.Cryptography.RandomNumberGenerator get_Rng()
    // Offset: 0x1B934C4
    static System::Security::Cryptography::RandomNumberGenerator* get_Rng();
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits, System.Security.Cryptography.RandomNumberGenerator rng)
    // Offset: 0x1B9358C
    static Mono::Math::BigInteger* GenerateRandom(int bits, System::Security::Cryptography::RandomNumberGenerator* rng);
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits)
    // Offset: 0x1B93714
    static Mono::Math::BigInteger* GenerateRandom(int bits);
    // public System.Int32 BitCount()
    // Offset: 0x1B93780
    int BitCount();
    // public System.Boolean TestBit(System.Int32 bitNum)
    // Offset: 0x1B93800
    bool TestBit(int bitNum);
    // public System.Void SetBit(System.UInt32 bitNum)
    // Offset: 0x1B938D0
    void SetBit(uint bitNum);
    // public System.Void SetBit(System.UInt32 bitNum, System.Boolean value)
    // Offset: 0x1B938D8
    void SetBit(uint bitNum, bool value);
    // public System.Int32 LowestSetBit()
    // Offset: 0x1B93940
    int LowestSetBit();
    // public System.Byte[] GetBytes()
    // Offset: 0x1B939CC
    ::Array<uint8_t>* GetBytes();
    // public System.String ToString(System.UInt32 radix)
    // Offset: 0x1B93D8C
    ::Il2CppString* ToString(uint radix);
    // public System.String ToString(System.UInt32 radix, System.String characterSet)
    // Offset: 0x1B93DEC
    ::Il2CppString* ToString(uint radix, ::Il2CppString* characterSet);
    // private System.Void Normalize()
    // Offset: 0x1B921A4
    void Normalize();
    // public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
    // Offset: 0x1B94230
    Mono::Math::BigInteger* ModInverse(Mono::Math::BigInteger* modulus);
    // static public Mono.Math.BigInteger GeneratePseudoPrime(System.Int32 bits)
    // Offset: 0x1B94758
    static Mono::Math::BigInteger* GeneratePseudoPrime(int bits);
    // public System.Void Incr2()
    // Offset: 0x1B947D4
    void Incr2();
    // static private System.Void .cctor()
    // Offset: 0x1B948A4
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B94070
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1B940D4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1B940DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // Mono.Math.BigInteger
  #pragma pack(pop)
  static check_size<sizeof(BigInteger), 24 + sizeof(::Array<uint>*)> __Mono_Math_BigIntegerSizeCheck;
  static_assert(sizeof(BigInteger) == 0x20);
  // static public Mono.Math.BigInteger op_Subtraction(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B923A0
  Mono::Math::BigInteger* operator-(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.UInt32 op_Modulus(Mono.Math.BigInteger bi, System.UInt32 ui)
  // Offset: 0x1B928AC
  uint operator%(Mono::Math::BigInteger& bi, const uint& ui);
  // static public Mono.Math.BigInteger op_Modulus(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B92928
  Mono::Math::BigInteger* operator%(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_Division(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B92E34
  Mono::Math::BigInteger* operator/(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_Multiply(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B92E68
  Mono::Math::BigInteger* operator*(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public Mono.Math.BigInteger op_LeftShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1B93128
  Mono::Math::BigInteger* operator<<(Mono::Math::BigInteger& bi1, const int& shiftVal);
  // static public Mono.Math.BigInteger op_RightShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1B93310
  Mono::Math::BigInteger* operator>>(Mono::Math::BigInteger& bi1, const int& shiftVal);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1B92520
  bool operator ==(Mono::Math::BigInteger& bi1, const uint& ui);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1B93B08
  bool operator !=(Mono::Math::BigInteger& bi1, const uint& ui);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93B80
  bool operator ==(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93C50
  bool operator !=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_GreaterThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93D20
  bool operator >(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_LessThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93D3C
  bool operator <(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_GreaterThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93D54
  bool operator >=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
  // static public System.Boolean op_LessThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1B93D70
  bool operator <=(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger& bi2);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger::Sign, "Mono.Math", "BigInteger/Sign");
