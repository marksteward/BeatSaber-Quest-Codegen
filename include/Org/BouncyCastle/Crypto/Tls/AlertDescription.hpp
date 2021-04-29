// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.AlertDescription
  class AlertDescription : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AlertDescription
    AlertDescription() noexcept {}
    // static public System.String GetName(System.Byte alertDescription)
    // Offset: 0x119FBF0
    static ::Il2CppString* GetName(uint8_t alertDescription);
    // static public System.String GetText(System.Byte alertDescription)
    // Offset: 0x119FE70
    static ::Il2CppString* GetText(uint8_t alertDescription);
  }; // Org.BouncyCastle.Crypto.Tls.AlertDescription
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AlertDescription*, "Org.BouncyCastle.Crypto.Tls", "AlertDescription");
