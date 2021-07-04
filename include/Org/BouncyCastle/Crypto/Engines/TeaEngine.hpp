// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.TeaEngine
  class TeaEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.UInt32 _a
    // Size: 0x4
    // Offset: 0x10
    uint a;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _b
    // Size: 0x4
    // Offset: 0x14
    uint b;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _c
    // Size: 0x4
    // Offset: 0x18
    uint c;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _d
    // Size: 0x4
    // Offset: 0x1C
    uint d;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean _initialised
    // Size: 0x1
    // Offset: 0x20
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _forEncryption
    // Size: 0x1
    // Offset: 0x21
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TeaEngine
    TeaEngine(uint a_ = {}, uint b_ = {}, uint c_ = {}, uint d_ = {}, bool initialised_ = {}, bool forEncryption_ = {}) noexcept : a{a_}, b{b_}, c{c_}, d{d_}, initialised{initialised_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1E50DFC
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E50E44
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E50E4C
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E50E54
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E51024
    int ProcessBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E51344
    void Reset();
    // private System.Void setKey(System.Byte[] key)
    // Offset: 0x1E50FB4
    void setKey(::Array<uint8_t>* key);
    // private System.Int32 encryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E51254
    int encryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 decryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E5116C
    int decryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void .ctor()
    // Offset: 0x1E50DD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::TeaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeaEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.TeaEngine
  #pragma pack(pop)
  static check_size<sizeof(TeaEngine), 33 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_TeaEngineSizeCheck;
  static_assert(sizeof(TeaEngine) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TeaEngine*, "Org.BouncyCastle.Crypto.Engines", "TeaEngine");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::get_IsPartialBlockOkay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::GetBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::Init)> {
  const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::ProcessBlock)> {
  const MethodInfo* get() {
    static auto* inBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::setKey
// Il2CppName: setKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::setKey)> {
  const MethodInfo* get() {
    static auto* key = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "setKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::encryptBlock
// Il2CppName: encryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::encryptBlock)> {
  const MethodInfo* get() {
    static auto* inBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "encryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::decryptBlock
// Il2CppName: decryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TeaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TeaEngine::decryptBlock)> {
  const MethodInfo* get() {
    static auto* inBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TeaEngine*), "decryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TeaEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
