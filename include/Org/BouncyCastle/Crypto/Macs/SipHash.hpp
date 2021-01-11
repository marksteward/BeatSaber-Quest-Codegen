// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.SipHash
  // [] Offset: FFFFFFFF
  class SipHash : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // protected readonly System.Int32 c
    // Size: 0x4
    // Offset: 0x10
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected readonly System.Int32 d
    // Size: 0x4
    // Offset: 0x14
    int d;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int64 k0
    // Size: 0x8
    // Offset: 0x18
    int64_t k0;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 k1
    // Size: 0x8
    // Offset: 0x20
    int64_t k1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v0
    // Size: 0x8
    // Offset: 0x28
    int64_t v0;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v1
    // Size: 0x8
    // Offset: 0x30
    int64_t v1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v2
    // Size: 0x8
    // Offset: 0x38
    int64_t v2;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v3
    // Size: 0x8
    // Offset: 0x40
    int64_t v3;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 m
    // Size: 0x8
    // Offset: 0x48
    int64_t m;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int32 wordPos
    // Size: 0x4
    // Offset: 0x50
    int wordPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x54
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SipHash
    SipHash(int c_ = {}, int d_ = {}, int64_t k0_ = {}, int64_t k1_ = {}, int64_t v0_ = {}, int64_t v1_ = {}, int64_t v2_ = {}, int64_t v3_ = {}, int64_t m_ = {}, int wordPos_ = {}, int wordCount_ = {}) noexcept : c{c_}, d{d_}, k0{k0_}, k1{k1_}, v0{v0_}, v1{v1_}, v2{v2_}, v3{v3_}, m{m_}, wordPos{wordPos_}, wordCount{wordCount_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // public System.Void .ctor(System.Int32 c, System.Int32 d)
    // Offset: 0x14A1238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SipHash* New_ctor(int c, int d) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::SipHash::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SipHash*, creationType>(c, d)));
    }
    // public System.Int64 DoFinal()
    // Offset: 0x14A15E0
    int64_t DoFinal();
    // protected System.Void ProcessMessageWord()
    // Offset: 0x14A172C
    void ProcessMessageWord();
    // protected System.Void ApplySipRounds(System.Int32 n)
    // Offset: 0x14A1784
    void ApplySipRounds(int n);
    // static protected System.Int64 RotateLeft(System.Int64 x, System.Int32 n)
    // Offset: 0x14A17D0
    static int64_t RotateLeft(int64_t x, int n);
    // public System.Void .ctor()
    // Offset: 0x14A1204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SipHash* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::SipHash::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SipHash*, creationType>()));
    }
    // public System.Int32 GetMacSize()
    // Offset: 0x14A1274
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14A127C
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Update(System.Byte input)
    // Offset: 0x14A13C0
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 offset, System.Int32 length)
    // Offset: 0x14A1410
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 offset, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int offset, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A1680
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x14A16C8
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.SipHash
  static check_size<sizeof(SipHash), 84 + sizeof(int)> __Org_BouncyCastle_Crypto_Macs_SipHashSizeCheck;
  static_assert(sizeof(SipHash) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::SipHash*, "Org.BouncyCastle.Crypto.Macs", "SipHash");
