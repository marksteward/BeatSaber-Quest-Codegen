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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private System.DateTime lastUse
    System::DateTime _get_lastUse();
    // Set instance field: private System.DateTime lastUse
    void _set_lastUse(System::DateTime value);
    // Get instance field: private System.Int32 _nc
    int _get__nc();
    // Set instance field: private System.Int32 _nc
    void _set__nc(int value);
    // Get instance field: private System.Security.Cryptography.HashAlgorithm hash
    System::Security::Cryptography::HashAlgorithm* _get_hash();
    // Set instance field: private System.Security.Cryptography.HashAlgorithm hash
    void _set_hash(System::Security::Cryptography::HashAlgorithm* value);
    // Get instance field: private System.Net.DigestHeaderParser parser
    System::Net::DigestHeaderParser* _get_parser();
    // Set instance field: private System.Net.DigestHeaderParser parser
    void _set_parser(System::Net::DigestHeaderParser* value);
    // Get instance field: private System.String _cnonce
    ::Il2CppString* _get__cnonce();
    // Set instance field: private System.String _cnonce
    void _set__cnonce(::Il2CppString* value);
    // public System.String get_Algorithm()
    // Offset: 0x169E99C
    ::Il2CppString* get_Algorithm();
    // public System.String get_Realm()
    // Offset: 0x169E9B4
    ::Il2CppString* get_Realm();
    // public System.String get_Nonce()
    // Offset: 0x169DA30
    ::Il2CppString* get_Nonce();
    // public System.String get_Opaque()
    // Offset: 0x169E9CC
    ::Il2CppString* get_Opaque();
    // public System.String get_QOP()
    // Offset: 0x169E9E4
    ::Il2CppString* get_QOP();
    // public System.String get_CNonce()
    // Offset: 0x169E9FC
    ::Il2CppString* get_CNonce();
    // public System.DateTime get_LastUse()
    // Offset: 0x169EF94
    System::DateTime get_LastUse();
    // static private System.Void .cctor()
    // Offset: 0x169E944
    static void _cctor();
    // public System.Boolean Parse(System.String challenge)
    // Offset: 0x169D954
    bool Parse(::Il2CppString* challenge);
    // private System.String HashToHexString(System.String toBeHashed)
    // Offset: 0x169EAF8
    ::Il2CppString* HashToHexString(::Il2CppString* toBeHashed);
    // private System.String HA1(System.String username, System.String password)
    // Offset: 0x169EC50
    ::Il2CppString* HA1(::Il2CppString* username, ::Il2CppString* password);
    // private System.String HA2(System.Net.HttpWebRequest webRequest)
    // Offset: 0x169ED70
    ::Il2CppString* HA2(System::Net::HttpWebRequest* webRequest);
    // private System.String Response(System.String username, System.String password, System.Net.HttpWebRequest webRequest)
    // Offset: 0x169EE44
    ::Il2CppString* Response(::Il2CppString* username, ::Il2CppString* password, System::Net::HttpWebRequest* webRequest);
    // public System.Net.Authorization Authenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x169DA48
    System::Net::Authorization* Authenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Void .ctor()
    // Offset: 0x169D8D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestSession*, creationType>()));
    }
  }; // System.Net.DigestSession
  #pragma pack(pop)
  static check_size<sizeof(DigestSession), 48 + sizeof(::Il2CppString*)> __System_Net_DigestSessionSizeCheck;
  static_assert(sizeof(DigestSession) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestSession*, "System.Net", "DigestSession");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DigestSession::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Realm
// Il2CppName: get_Realm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Realm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Realm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Nonce
// Il2CppName: get_Nonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Nonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Nonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Opaque
// Il2CppName: get_Opaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Opaque)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Opaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_QOP
// Il2CppName: get_QOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_QOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_QOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_CNonce
// Il2CppName: get_CNonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_CNonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_CNonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_LastUse
// Il2CppName: get_LastUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_LastUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_LastUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::DigestSession::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestSession::*)(::Il2CppString*)>(&System::Net::DigestSession::Parse)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HashToHexString
// Il2CppName: HashToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)(::Il2CppString*)>(&System::Net::DigestSession::HashToHexString)> {
  static const MethodInfo* get() {
    static auto* toBeHashed = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HashToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toBeHashed});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HA1
// Il2CppName: HA1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::DigestSession::HA1)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HA1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HA2
// Il2CppName: HA2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)(System::Net::HttpWebRequest*)>(&System::Net::DigestSession::HA2)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HA2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::Response
// Il2CppName: Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestSession::*)(::Il2CppString*, ::Il2CppString*, System::Net::HttpWebRequest*)>(&System::Net::DigestSession::Response)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password, webRequest});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (System::Net::DigestSession::*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::DigestSession::Authenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
