// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: MessageBase
  class MessageBase;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x18
  // Autogenerated type: Mono.Http.NtlmSession
  // [] Offset: FFFFFFFF
  class NtlmSession : public ::Il2CppObject {
    public:
    // private Mono.Security.Protocol.Ntlm.MessageBase message
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Protocol::Ntlm::MessageBase* message;
    // Field size check
    static_assert(sizeof(Mono::Security::Protocol::Ntlm::MessageBase*) == 0x8);
    // Creating value type constructor for type: NtlmSession
    NtlmSession(Mono::Security::Protocol::Ntlm::MessageBase* message_ = {}) noexcept : message{message_} {}
    // Creating conversion operator: operator Mono::Security::Protocol::Ntlm::MessageBase*
    constexpr operator Mono::Security::Protocol::Ntlm::MessageBase*() const noexcept {
      return message;
    }
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x125F648
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Void .ctor()
    // Offset: 0x125FC50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmSession*, creationType>()));
    }
  }; // Mono.Http.NtlmSession
  static check_size<sizeof(NtlmSession), 16 + sizeof(Mono::Security::Protocol::Ntlm::MessageBase*)> __Mono_Http_NtlmSessionSizeCheck;
  static_assert(sizeof(NtlmSession) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmSession*, "Mono.Http", "NtlmSession");
#pragma pack(pop)
