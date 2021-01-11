// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidGroup
  struct OidGroup;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CAPI
  // [] Offset: FFFFFFFF
  class CAPI : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CAPI
    CAPI() noexcept {}
    // static public System.String CryptFindOIDInfoNameFromKey(System.String key, System.Security.Cryptography.OidGroup oidGroup)
    // Offset: 0x122C020
    static ::Il2CppString* CryptFindOIDInfoNameFromKey(::Il2CppString* key, System::Security::Cryptography::OidGroup oidGroup);
    // static public System.String CryptFindOIDInfoKeyFromName(System.String name, System.Security.Cryptography.OidGroup oidGroup)
    // Offset: 0x122C878
    static ::Il2CppString* CryptFindOIDInfoKeyFromName(::Il2CppString* name, System::Security::Cryptography::OidGroup oidGroup);
  }; // System.Security.Cryptography.CAPI
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CAPI*, "System.Security.Cryptography", "CAPI");
