// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PrivateKeyParameters
  class Ed25519PrivateKeyParameters;
  // Forward declaring type: Ed25519PublicKeyParameters
  class Ed25519PublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner
  class Ed25519ctxSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer
    class Buffer;
    // private readonly Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner/Buffer buffer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer* buffer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer*) == 0x8);
    // private readonly System.Byte[] context
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* context;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x20
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: privateKey
    char __padding2[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*) == 0x8);
    // Creating value type constructor for type: Ed25519ctxSigner
    Ed25519ctxSigner(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer* buffer_ = {}, ::Array<uint8_t>* context_ = {}, bool forSigning_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey_ = {}) noexcept : buffer{buffer_}, context{context_}, forSigning{forSigning_}, privateKey{privateKey_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(System.Byte[] context)
    // Offset: 0x1262558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519ctxSigner* New_ctor(::Array<uint8_t>* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519ctxSigner*, creationType>(context)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1262608
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x12626C0
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x12626E4
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x12628E0
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner
  #pragma pack(pop)
  static check_size<sizeof(Ed25519ctxSigner), 48 + sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Signers_Ed25519ctxSignerSizeCheck;
  static_assert(sizeof(Ed25519ctxSigner) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
