// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestClient
  class DigestClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Creating value type constructor for type: DigestClient
    DigestClient() noexcept {}
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // Get static field: static private readonly System.Collections.Hashtable cache
    static System::Collections::Hashtable* _get_cache();
    // Set static field: static private readonly System.Collections.Hashtable cache
    static void _set_cache(System::Collections::Hashtable* value);
    // static private System.Collections.Hashtable get_Cache()
    // Offset: 0x16B467C
    static System::Collections::Hashtable* get_Cache();
    // static private System.Void CheckExpired(System.Int32 count)
    // Offset: 0x16B47CC
    static void CheckExpired(int count);
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x16B4F84
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x16B584C
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.String get_AuthenticationType()
    // Offset: 0x16B59CC
    ::Il2CppString* get_AuthenticationType();
    // static private System.Void .cctor()
    // Offset: 0x16B5A14
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x16A98DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestClient*, creationType>()));
    }
  }; // System.Net.DigestClient
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestClient*, "System.Net", "DigestClient");
// Writing MetadataGetter for method: System::Net::DigestClient::get_Cache
// Il2CppName: get_Cache
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::CheckExpired
// Il2CppName: CheckExpired
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::Authenticate
// Il2CppName: Authenticate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::PreAuthenticate
// Il2CppName: PreAuthenticate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::get_AuthenticationType
// Il2CppName: get_AuthenticationType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::DigestClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
