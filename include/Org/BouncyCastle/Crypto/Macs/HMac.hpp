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
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Forward declaring type: IMemoable
  class IMemoable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x40
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.HMac
  // [] Offset: FFFFFFFF
  class HMac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly System.Int32 digestSize
    // Size: 0x4
    // Offset: 0x18
    int digestSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 blockLength
    // Size: 0x4
    // Offset: 0x1C
    int blockLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Org.BouncyCastle.Utilities.IMemoable ipadState
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Utilities::IMemoable* ipadState;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Utilities::IMemoable*) == 0x8);
    // private Org.BouncyCastle.Utilities.IMemoable opadState
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Utilities::IMemoable* opadState;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Utilities::IMemoable*) == 0x8);
    // private readonly System.Byte[] inputPad
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* inputPad;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] outputBuf
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* outputBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: HMac
    HMac(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, int digestSize_ = {}, int blockLength_ = {}, Org::BouncyCastle::Utilities::IMemoable* ipadState_ = {}, Org::BouncyCastle::Utilities::IMemoable* opadState_ = {}, ::Array<uint8_t>* inputPad_ = {}, ::Array<uint8_t>* outputBuf_ = {}) noexcept : digest{digest_}, digestSize{digestSize_}, blockLength{blockLength_}, ipadState{ipadState_}, opadState{opadState_}, inputPad{inputPad_}, outputBuf{outputBuf_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x149A5C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMac* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::HMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMac*, creationType>(digest)));
    }
    // static private System.Void XorPad(System.Byte[] pad, System.Int32 len, System.Byte n)
    // Offset: 0x149EDBC
    static void XorPad(::Array<uint8_t>* pad, int len, uint8_t n);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x149E838
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x149EE18
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x149EE20
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x149EEE4
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x149EFC0
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x149F4AC
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.HMac
  static check_size<sizeof(HMac), 56 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Macs_HMacSizeCheck;
  static_assert(sizeof(HMac) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::HMac*, "Org.BouncyCastle.Crypto.Macs", "HMac");
#pragma pack(pop)
