// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Principal.GenericIdentity
#include "System/Security/Principal/GenericIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerBasicIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerBasicIdentity : public System::Security::Principal::GenericIdentity {
    public:
    // private System.String password
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: HttpListenerBasicIdentity
    HttpListenerBasicIdentity(::Il2CppString* password_ = {}) noexcept : password{password_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return password;
    }
    // Get instance field: private System.String password
    ::Il2CppString* _get_password();
    // Set instance field: private System.String password
    void _set_password(::Il2CppString* value);
    // public System.Void .ctor(System.String username, System.String password)
    // Offset: 0x16349B4
    // Implemented from: System.Security.Principal.GenericIdentity
    // Base method: System.Void GenericIdentity::.ctor(System.String username, System.String password)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerBasicIdentity* New_ctor(::Il2CppString* username, ::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerBasicIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerBasicIdentity*, creationType>(username, password)));
    }
  }; // System.Net.HttpListenerBasicIdentity
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerBasicIdentity), 136 + sizeof(::Il2CppString*)> __System_Net_HttpListenerBasicIdentitySizeCheck;
  static_assert(sizeof(HttpListenerBasicIdentity) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerBasicIdentity*, "System.Net", "HttpListenerBasicIdentity");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerBasicIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
