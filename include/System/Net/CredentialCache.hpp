// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialCache
  // [] Offset: FFFFFFFF
  class CredentialCache : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CredentialCache
    CredentialCache() noexcept {}
    // static public System.Net.ICredentials get_DefaultCredentials()
    // Offset: 0x131531C
    static System::Net::ICredentials* get_DefaultCredentials();
  }; // System.Net.CredentialCache
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CredentialCache*, "System.Net", "CredentialCache");
