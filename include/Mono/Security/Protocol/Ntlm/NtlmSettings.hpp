// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
#include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.NtlmSettings
  // [] Offset: FFFFFFFF
  class NtlmSettings : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NtlmSettings
    NtlmSettings() noexcept {}
    // Get static field: static private Mono.Security.Protocol.Ntlm.NtlmAuthLevel defaultAuthLevel
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_defaultAuthLevel();
    // Set static field: static private Mono.Security.Protocol.Ntlm.NtlmAuthLevel defaultAuthLevel
    static void _set_defaultAuthLevel(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
    // static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel get_DefaultAuthLevel()
    // Offset: 0x17BB920
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel();
    // static private System.Void .cctor()
    // Offset: 0x17BB988
    static void _cctor();
  }; // Mono.Security.Protocol.Ntlm.NtlmSettings
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmSettings*, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
