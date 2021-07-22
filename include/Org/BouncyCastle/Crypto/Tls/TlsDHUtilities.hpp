// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
  // Forward declaring type: DHPrivateKeyParameters
  class DHPrivateKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsDHUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsDHUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TlsDHUtilities
    TlsDHUtilities() noexcept {}
    // Get static field: static readonly Org.BouncyCastle.Math.BigInteger Two
    static Org::BouncyCastle::Math::BigInteger* _get_Two();
    // Set static field: static readonly Org.BouncyCastle.Math.BigInteger Two
    static void _set_Two(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly System.String draft_ffdhe2432_p
    static ::Il2CppString* _get_draft_ffdhe2432_p();
    // Set static field: static private readonly System.String draft_ffdhe2432_p
    static void _set_draft_ffdhe2432_p(::Il2CppString* value);
    // Get static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe2432
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_draft_ffdhe2432();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe2432
    static void _set_draft_ffdhe2432(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String draft_ffdhe3072_p
    static ::Il2CppString* _get_draft_ffdhe3072_p();
    // Set static field: static private readonly System.String draft_ffdhe3072_p
    static void _set_draft_ffdhe3072_p(::Il2CppString* value);
    // Get static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe3072
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_draft_ffdhe3072();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe3072
    static void _set_draft_ffdhe3072(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String draft_ffdhe4096_p
    static ::Il2CppString* _get_draft_ffdhe4096_p();
    // Set static field: static private readonly System.String draft_ffdhe4096_p
    static void _set_draft_ffdhe4096_p(::Il2CppString* value);
    // Get static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe4096
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_draft_ffdhe4096();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe4096
    static void _set_draft_ffdhe4096(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String draft_ffdhe6144_p
    static ::Il2CppString* _get_draft_ffdhe6144_p();
    // Set static field: static private readonly System.String draft_ffdhe6144_p
    static void _set_draft_ffdhe6144_p(::Il2CppString* value);
    // Get static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe6144
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_draft_ffdhe6144();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe6144
    static void _set_draft_ffdhe6144(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String draft_ffdhe8192_p
    static ::Il2CppString* _get_draft_ffdhe8192_p();
    // Set static field: static private readonly System.String draft_ffdhe8192_p
    static void _set_draft_ffdhe8192_p(::Il2CppString* value);
    // Get static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe8192
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_draft_ffdhe8192();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Parameters.DHParameters draft_ffdhe8192
    static void _set_draft_ffdhe8192(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // static private System.Void .cctor()
    // Offset: 0x1239CB0
    static void _cctor();
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x1239734
    static Org::BouncyCastle::Math::BigInteger* FromHex(::Il2CppString* hex);
    // static private Org.BouncyCastle.Crypto.Parameters.DHParameters FromSafeP(System.String hexP)
    // Offset: 0x12397CC
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* FromSafeP(::Il2CppString* hexP);
    // static public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateDHKeyPair(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams)
    // Offset: 0x123988C
    static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateDHKeyPair(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);
    // static public Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams, System.IO.Stream output)
    // Offset: 0x1239950
    static Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* GenerateEphemeralClientKeyExchange(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, System::IO::Stream* output);
    // static public Org.BouncyCastle.Math.BigInteger ReadDHParameter(System.IO.Stream input)
    // Offset: 0x1239AEC
    static Org::BouncyCastle::Math::BigInteger* ReadDHParameter(System::IO::Stream* input);
    // static public System.Void WriteDHParameter(Org.BouncyCastle.Math.BigInteger x, System.IO.Stream output)
    // Offset: 0x1239A64
    static void WriteDHParameter(Org::BouncyCastle::Math::BigInteger* x, System::IO::Stream* output);
  }; // Org.BouncyCastle.Crypto.Tls.TlsDHUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsDHUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex)> {
  static const MethodInfo* get() {
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP
// Il2CppName: FromSafeP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP)> {
  static const MethodInfo* get() {
    static auto* hexP = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "FromSafeP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hexP});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair
// Il2CppName: GenerateDHKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(Org::BouncyCastle::Security::SecureRandom*, Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* dhParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "GenerateDHKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, dhParams});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange
// Il2CppName: GenerateEphemeralClientKeyExchange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* (*)(Org::BouncyCastle::Security::SecureRandom*, Org::BouncyCastle::Crypto::Parameters::DHParameters*, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* dhParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "GenerateEphemeralClientKeyExchange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, dhParams, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter
// Il2CppName: ReadDHParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "ReadDHParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter
// Il2CppName: WriteDHParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::BigInteger*, System::IO::Stream*)>(&Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*), "WriteDHParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, output});
  }
};
