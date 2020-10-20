// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
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
  // Autogenerated type: System.Net.NetworkCredential
  class NetworkCredential : public ::Il2CppObject/*, public System::Net::ICredentials*/ {
    public:
    // private System.String m_domain
    // Offset: 0x10
    ::Il2CppString* m_domain;
    // private System.String m_userName
    // Offset: 0x18
    ::Il2CppString* m_userName;
    // private System.Security.SecureString m_password
    // Offset: 0x20
    System::Security::SecureString* m_password;
    // Creating interface conversion operator: operator System::Net::ICredentials
    operator System::Net::ICredentials() noexcept {
      return *reinterpret_cast<System::Net::ICredentials*>(this);
    }
    // public System.Void .ctor(System.String userName, System.String password)
    // Offset: 0x124B7F8
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password);
    // public System.Void .ctor(System.String userName, System.String password, System.String domain)
    // Offset: 0x124B868
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password, ::Il2CppString* domain);
    // public System.String get_UserName()
    // Offset: 0x124B9FC
    ::Il2CppString* get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x124B8D0
    void set_UserName(::Il2CppString* value);
    // public System.String get_Password()
    // Offset: 0x124BA04
    ::Il2CppString* get_Password();
    // public System.Void set_Password(System.String value)
    // Offset: 0x124B94C
    void set_Password(::Il2CppString* value);
    // public System.String get_Domain()
    // Offset: 0x124BA1C
    ::Il2CppString* get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x124B980
    void set_Domain(::Il2CppString* value);
    // System.String InternalGetUserName()
    // Offset: 0x124BA24
    ::Il2CppString* InternalGetUserName();
    // System.String InternalGetPassword()
    // Offset: 0x124BA10
    ::Il2CppString* InternalGetPassword();
    // System.String InternalGetDomain()
    // Offset: 0x124BA2C
    ::Il2CppString* InternalGetDomain();
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0x124BA34
    // Implemented from: System.Net.ICredentials
    // Base method: System.Net.NetworkCredential ICredentials::GetCredential(System.Uri uri, System.String authType)
    System::Net::NetworkCredential* GetCredential(System::Uri* uri, ::Il2CppString* authType);
  }; // System.Net.NetworkCredential
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
#pragma pack(pop)
