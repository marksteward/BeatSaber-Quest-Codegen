// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Tls.TlsException
#include "Org/BouncyCastle/Crypto/Tls/TlsException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x91
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsFatalAlert
  // [] Offset: FFFFFFFF
  class TlsFatalAlert : public Org::BouncyCastle::Crypto::Tls::TlsException {
    public:
    // private readonly System.Byte alertDescription
    // Size: 0x1
    // Offset: 0x90
    uint8_t alertDescription;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: TlsFatalAlert
    TlsFatalAlert(uint8_t alertDescription_ = {}) noexcept : alertDescription{alertDescription_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // public System.Void .ctor(System.Byte alertDescription)
    // Offset: 0x1056F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsFatalAlert* New_ctor(uint8_t alertDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsFatalAlert*, creationType>(alertDescription)));
    }
    // public System.Void .ctor(System.Byte alertDescription, System.Exception alertCause)
    // Offset: 0x1057130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsFatalAlert* New_ctor(uint8_t alertDescription, System::Exception* alertCause) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsFatalAlert*, creationType>(alertDescription, alertCause)));
    }
  }; // Org.BouncyCastle.Crypto.Tls.TlsFatalAlert
  static check_size<sizeof(TlsFatalAlert), 144 + sizeof(uint8_t)> __Org_BouncyCastle_Crypto_Tls_TlsFatalAlertSizeCheck;
  static_assert(sizeof(TlsFatalAlert) == 0x91);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlert");
#pragma pack(pop)
