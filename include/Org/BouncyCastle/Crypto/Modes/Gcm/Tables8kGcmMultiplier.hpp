// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
#include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmMultiplier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
  // [] Offset: FFFFFFFF
  class Tables8kGcmMultiplier : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*/ {
    public:
    // private System.Byte[] H
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* H;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[][][] M
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Array<::Array<uint>*>*>* M;
    // Field size check
    static_assert(sizeof(::Array<::Array<::Array<uint>*>*>*) == 0x8);
    // Creating value type constructor for type: Tables8kGcmMultiplier
    Tables8kGcmMultiplier(::Array<uint8_t>* H_ = {}, ::Array<::Array<::Array<uint>*>*>* M_ = {}) noexcept : H{H_}, M{M_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier
    operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(this);
    }
    // public System.Void Init(System.Byte[] H)
    // Offset: 0x14AACB0
    // Implemented from: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
    // Base method: System.Void IGcmMultiplier::Init(System.Byte[] H)
    void Init(::Array<uint8_t>* H);
    // public System.Void MultiplyH(System.Byte[] x)
    // Offset: 0x14AB5D4
    // Implemented from: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
    // Base method: System.Void IGcmMultiplier::MultiplyH(System.Byte[] x)
    void MultiplyH(::Array<uint8_t>* x);
    // public System.Void .ctor()
    // Offset: 0x14AB7F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tables8kGcmMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tables8kGcmMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
  static check_size<sizeof(Tables8kGcmMultiplier), 24 + sizeof(::Array<::Array<::Array<uint>*>*>*)> __Org_BouncyCastle_Crypto_Modes_Gcm_Tables8kGcmMultiplierSizeCheck;
  static_assert(sizeof(Tables8kGcmMultiplier) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables8kGcmMultiplier");
