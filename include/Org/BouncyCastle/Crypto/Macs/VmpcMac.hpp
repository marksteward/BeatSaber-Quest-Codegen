// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x44
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.VmpcMac
  // [] Offset: FFFFFFFF
  class VmpcMac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte g
    // Size: 0x1
    // Offset: 0x10
    uint8_t g;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte n
    // Size: 0x1
    // Offset: 0x11
    uint8_t n;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: n and: P
    char __padding1[0x6] = {};
    // private System.Byte[] P
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* P;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte s
    // Size: 0x1
    // Offset: 0x20
    uint8_t s;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: s and: T
    char __padding3[0x7] = {};
    // private System.Byte[] T
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* T;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workingIV
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* workingIV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte x1
    // Size: 0x1
    // Offset: 0x40
    uint8_t x1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x2
    // Size: 0x1
    // Offset: 0x41
    uint8_t x2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x3
    // Size: 0x1
    // Offset: 0x42
    uint8_t x3;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte x4
    // Size: 0x1
    // Offset: 0x43
    uint8_t x4;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: VmpcMac
    VmpcMac(uint8_t g_ = {}, uint8_t n_ = {}, ::Array<uint8_t>* P_ = {}, uint8_t s_ = {}, ::Array<uint8_t>* T_ = {}, ::Array<uint8_t>* workingIV_ = {}, ::Array<uint8_t>* workingKey_ = {}, uint8_t x1_ = {}, uint8_t x2_ = {}, uint8_t x3_ = {}, uint8_t x4_ = {}) noexcept : g{g_}, n{n_}, P{P_}, s{s_}, T{T_}, workingIV{workingIV_}, workingKey{workingKey_}, x1{x1_}, x2{x2_}, x3{x3_}, x4{x4_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // private System.Void initKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x14A1E10
    void initKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A17DC
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Int32 GetMacSize()
    // Offset: 0x14A1C5C
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14A1C64
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Reset()
    // Offset: 0x14A2048
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
    // public System.Void Update(System.Byte input)
    // Offset: 0x14A2100
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x14A236C
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Void .ctor()
    // Offset: 0x14A2494
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcMac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::VmpcMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcMac*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Macs.VmpcMac
  static check_size<sizeof(VmpcMac), 67 + sizeof(uint8_t)> __Org_BouncyCastle_Crypto_Macs_VmpcMacSizeCheck;
  static_assert(sizeof(VmpcMac) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::VmpcMac*, "Org.BouncyCastle.Crypto.Macs", "VmpcMac");
#pragma pack(pop)
