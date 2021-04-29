// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentialPolicy
  class ICredentialPolicy;
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationManager
  class AuthenticationManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AuthenticationManager
    AuthenticationManager() noexcept {}
    // Get static field: static private System.Collections.ArrayList modules
    static System::Collections::ArrayList* _get_modules();
    // Set static field: static private System.Collections.ArrayList modules
    static void _set_modules(System::Collections::ArrayList* value);
    // Get static field: static private System.Object locker
    static ::Il2CppObject* _get_locker();
    // Set static field: static private System.Object locker
    static void _set_locker(::Il2CppObject* value);
    // Get static field: static private System.Net.ICredentialPolicy credential_policy
    static System::Net::ICredentialPolicy* _get_credential_policy();
    // Set static field: static private System.Net.ICredentialPolicy credential_policy
    static void _set_credential_policy(System::Net::ICredentialPolicy* value);
    // static private System.Void EnsureModules()
    // Offset: 0x14E3FF4
    static void EnsureModules();
    // static public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x14E4228
    static System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static private System.Net.Authorization DoAuthenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x14E4324
    static System::Net::Authorization* DoAuthenticate(::Il2CppString* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static public System.Net.Authorization PreAuthenticate(System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x14E477C
    static System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* request, System::Net::ICredentials* credentials);
    // static private System.Void .cctor()
    // Offset: 0x14E4C10
    static void _cctor();
  }; // System.Net.AuthenticationManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationManager*, "System.Net", "AuthenticationManager");
