// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  // Autogenerated type: System.Net.NetworkCredential
  // [] Offset: FFFFFFFF
  class NetworkCredential : public ::Il2CppObject/*, public System::Net::ICredentials*/ {
    public:
    // private System.String m_domain
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Security.SecureString m_password
    // Size: 0x8
    // Offset: 0x20
    System::Security::SecureString* m_password;
    // Field size check
    static_assert(sizeof(System::Security::SecureString*) == 0x8);
    // Creating value type constructor for type: NetworkCredential
    NetworkCredential(::Il2CppString* m_domain_ = {}, ::Il2CppString* m_userName_ = {}, System::Security::SecureString* m_password_ = {}) noexcept : m_domain{m_domain_}, m_userName{m_userName_}, m_password{m_password_} {}
    // Creating interface conversion operator: operator System::Net::ICredentials
    operator System::Net::ICredentials() noexcept {
      return *reinterpret_cast<System::Net::ICredentials*>(this);
    }
    // public System.Void .ctor(System.String userName, System.String password)
    // Offset: 0x12C08F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password)));
    }
    // public System.Void .ctor(System.String userName, System.String password, System.String domain)
    // Offset: 0x12C0964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password, ::Il2CppString* domain) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password, domain)));
    }
    // public System.String get_UserName()
    // Offset: 0x12C0AF8
    ::Il2CppString* get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x12C09CC
    void set_UserName(::Il2CppString* value);
    // public System.String get_Password()
    // Offset: 0x12C0B00
    ::Il2CppString* get_Password();
    // public System.Void set_Password(System.String value)
    // Offset: 0x12C0A48
    void set_Password(::Il2CppString* value);
    // public System.String get_Domain()
    // Offset: 0x12C0B18
    ::Il2CppString* get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x12C0A7C
    void set_Domain(::Il2CppString* value);
    // System.String InternalGetUserName()
    // Offset: 0x12C0B20
    ::Il2CppString* InternalGetUserName();
    // System.String InternalGetPassword()
    // Offset: 0x12C0B0C
    ::Il2CppString* InternalGetPassword();
    // System.String InternalGetDomain()
    // Offset: 0x12C0B28
    ::Il2CppString* InternalGetDomain();
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0x12C0B30
    // Implemented from: System.Net.ICredentials
    // Base method: System.Net.NetworkCredential ICredentials::GetCredential(System.Uri uri, System.String authType)
    System::Net::NetworkCredential* GetCredential(System::Uri* uri, ::Il2CppString* authType);
  }; // System.Net.NetworkCredential
  static check_size<sizeof(NetworkCredential), 32 + sizeof(System::Security::SecureString*)> __System_Net_NetworkCredentialSizeCheck;
  static_assert(sizeof(NetworkCredential) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
#pragma pack(pop)
