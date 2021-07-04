// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.MD4
#include "Mono/Security/Cryptography/MD4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD4Managed
  class MD4Managed : public Mono::Security::Cryptography::MD4 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* state;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[] count
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* count;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] x
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* x;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Byte[] digest
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* digest;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: MD4Managed
    MD4Managed(::Array<uint>* state_ = {}, ::Array<uint8_t>* buffer_ = {}, ::Array<uint>* count_ = {}, ::Array<uint>* x_ = {}, ::Array<uint8_t>* digest_ = {}) noexcept : state{state_}, buffer{buffer_}, count{count_}, x{x_}, digest{digest_} {}
    // private System.Byte[] Padding(System.Int32 nLength)
    // Offset: 0x1D752EC
    ::Array<uint8_t>* Padding(int nLength);
    // private System.UInt32 F(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1D75374
    uint F(uint x, uint y, uint z);
    // private System.UInt32 G(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1D75384
    uint G(uint x, uint y, uint z);
    // private System.UInt32 H(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1D75398
    uint H(uint x, uint y, uint z);
    // private System.UInt32 ROL(System.UInt32 x, System.Byte n)
    // Offset: 0x1D753A4
    uint ROL(uint x, uint8_t n);
    // private System.Void FF(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1D753B0
    void FF(uint& a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void GG(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1D753D8
    void GG(uint& a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void HH(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1D75410
    void HH(uint& a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void Encode(System.Byte[] output, System.UInt32[] input)
    // Offset: 0x1D751E8
    void Encode(::Array<uint8_t>* output, ::Array<uint>* input);
    // private System.Void Decode(System.UInt32[] output, System.Byte[] input, System.Int32 index)
    // Offset: 0x1D75440
    void Decode(::Array<uint>* output, ::Array<uint8_t>* input, int index);
    // private System.Void MD4Transform(System.UInt32[] state, System.Byte[] block, System.Int32 index)
    // Offset: 0x1D74A50
    void MD4Transform(::Array<uint>* state, ::Array<uint8_t>* block, int index);
    // public System.Void .ctor()
    // Offset: 0x1D74748
    // Implemented from: Mono.Security.Cryptography.MD4
    // Base method: System.Void MD4::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::MD4Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1D74814
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1D7490C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* array, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1D750D4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // Mono.Security.Cryptography.MD4Managed
  #pragma pack(pop)
  static check_size<sizeof(MD4Managed), 72 + sizeof(::Array<uint8_t>*)> __Mono_Security_Cryptography_MD4ManagedSizeCheck;
  static_assert(sizeof(MD4Managed) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD4Managed*, "Mono.Security.Cryptography", "MD4Managed");
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Padding
// Il2CppName: Padding
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::F
// Il2CppName: F
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::G
// Il2CppName: G
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::H
// Il2CppName: H
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::ROL
// Il2CppName: ROL
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::FF
// Il2CppName: FF
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::GG
// Il2CppName: GG
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HH
// Il2CppName: HH
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Encode
// Il2CppName: Encode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Decode
// Il2CppName: Decode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::MD4Transform
// Il2CppName: MD4Transform
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HashCore
// Il2CppName: HashCore
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HashFinal
// Il2CppName: HashFinal
// Cannot perform method pointer template specialization from operators!
