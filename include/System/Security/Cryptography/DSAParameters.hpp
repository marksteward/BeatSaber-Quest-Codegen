// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.DSAParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6AFB4
  struct DSAParameters/*, public System::ValueType*/ {
    public:
    // public System.Byte[] P
    // Size: 0x8
    // Offset: 0x0
    ::Array<uint8_t>* P;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] Q
    // Size: 0x8
    // Offset: 0x8
    ::Array<uint8_t>* Q;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] G
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* G;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] Y
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* Y;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] J
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* J;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] X
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* X;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] Seed
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* Seed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Counter
    // Size: 0x4
    // Offset: 0x38
    int Counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DSAParameters
    constexpr DSAParameters(::Array<uint8_t>* P_ = {}, ::Array<uint8_t>* Q_ = {}, ::Array<uint8_t>* G_ = {}, ::Array<uint8_t>* Y_ = {}, ::Array<uint8_t>* J_ = {}, ::Array<uint8_t>* X_ = {}, ::Array<uint8_t>* Seed_ = {}, int Counter_ = {}) noexcept : P{P_}, Q{Q_}, G{G_}, Y{Y_}, J{J_}, X{X_}, Seed{Seed_}, Counter{Counter_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Security.Cryptography.DSAParameters
  #pragma pack(pop)
  static check_size<sizeof(DSAParameters), 56 + sizeof(int)> __System_Security_Cryptography_DSAParametersSizeCheck;
  static_assert(sizeof(DSAParameters) == 0x3C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSAParameters, "System.Security.Cryptography", "DSAParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
