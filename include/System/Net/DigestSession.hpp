// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: DigestHeaderParser
  class DigestHeaderParser;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestSession
  // [] Offset: FFFFFFFF
  class DigestSession : public ::Il2CppObject {
    public:
    // private System.DateTime lastUse
    // Size: 0x8
    // Offset: 0x10
    System::DateTime lastUse;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.Int32 _nc
    // Size: 0x4
    // Offset: 0x18
    int nc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nc and: hash
    char __padding1[0x4] = {};
    // private System.Security.Cryptography.HashAlgorithm hash
    // Size: 0x8
    // Offset: 0x20
    System::Security::Cryptography::HashAlgorithm* hash;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Net.DigestHeaderParser parser
    // Size: 0x8
    // Offset: 0x28
    System::Net::DigestHeaderParser* parser;
    // Field size check
    static_assert(sizeof(System::Net::DigestHeaderParser*) == 0x8);
    // private System.String _cnonce
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* cnonce;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DigestSession
    DigestSession(System::DateTime lastUse_ = {}, int nc_ = {}, System::Security::Cryptography::HashAlgorithm* hash_ = {}, System::Net::DigestHeaderParser* parser_ = {}, ::Il2CppString* cnonce_ = {}) noexcept : lastUse{lastUse_}, nc{nc_}, hash{hash_}, parser{parser_}, cnonce{cnonce_} {}
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(System::Security::Cryptography::RandomNumberGenerator* value);
    // static private System.Void .cctor()
    // Offset: 0x1317080
    static void _cctor();
    // public System.String get_Algorithm()
    // Offset: 0x13170E0
    ::Il2CppString* get_Algorithm();
    // public System.String get_Realm()
    // Offset: 0x13170F8
    ::Il2CppString* get_Realm();
    // public System.String get_Nonce()
    // Offset: 0x13160A8
    ::Il2CppString* get_Nonce();
    // public System.String get_Opaque()
    // Offset: 0x1317110
    ::Il2CppString* get_Opaque();
    // public System.String get_QOP()
    // Offset: 0x1317128
    ::Il2CppString* get_QOP();
    // public System.String get_CNonce()
    // Offset: 0x1317140
    ::Il2CppString* get_CNonce();
    // public System.Boolean Parse(System.String challenge)
    // Offset: 0x1315FB0
    bool Parse(::Il2CppString* challenge);
    // private System.String HashToHexString(System.String toBeHashed)
    // Offset: 0x1317248
    ::Il2CppString* HashToHexString(::Il2CppString* toBeHashed);
    // private System.String HA1(System.String username, System.String password)
    // Offset: 0x13173A0
    ::Il2CppString* HA1(::Il2CppString* username, ::Il2CppString* password);
    // private System.String HA2(System.Net.HttpWebRequest webRequest)
    // Offset: 0x13174C0
    ::Il2CppString* HA2(System::Net::HttpWebRequest* webRequest);
    // private System.String Response(System.String username, System.String password, System.Net.HttpWebRequest webRequest)
    // Offset: 0x1317594
    ::Il2CppString* Response(::Il2CppString* username, ::Il2CppString* password, System::Net::HttpWebRequest* webRequest);
    // public System.Net.Authorization Authenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x13160C0
    System::Net::Authorization* Authenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.DateTime get_LastUse()
    // Offset: 0x13176E4
    System::DateTime get_LastUse();
    // public System.Void .ctor()
    // Offset: 0x1315F30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestSession*, creationType>()));
    }
  }; // System.Net.DigestSession
  static check_size<sizeof(DigestSession), 48 + sizeof(::Il2CppString*)> __System_Net_DigestSessionSizeCheck;
  static_assert(sizeof(DigestSession) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestSession*, "System.Net", "DigestSession");
