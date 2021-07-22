// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IRsa
  // [TokenAttribute] Offset: FFFFFFFF
  class IRsa : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IRsa
    IRsa() noexcept {}
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFF
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0xFFFFFFFF
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0xFFFFFFFF
    int GetOutputBlockSize();
    // public Org.BouncyCastle.Math.BigInteger ConvertInput(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* ConvertInput(::Array<uint8_t>* buf, int off, int len);
    // public Org.BouncyCastle.Math.BigInteger ProcessBlock(Org.BouncyCastle.Math.BigInteger input)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* ProcessBlock(Org::BouncyCastle::Math::BigInteger* input);
    // public System.Byte[] ConvertOutput(Org.BouncyCastle.Math.BigInteger result)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* ConvertOutput(Org::BouncyCastle::Math::BigInteger* result);
  }; // Org.BouncyCastle.Crypto.IRsa
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IRsa*, "Org.BouncyCastle.Crypto", "IRsa");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IRsa::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::IRsa::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::IRsa::*)()>(&Org::BouncyCastle::Crypto::IRsa::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::IRsa::*)()>(&Org::BouncyCastle::Crypto::IRsa::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::ConvertInput
// Il2CppName: ConvertInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::IRsa::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::IRsa::ConvertInput)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "ConvertInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::IRsa::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::IRsa::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::IRsa::ConvertOutput
// Il2CppName: ConvertOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::IRsa::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::IRsa::ConvertOutput)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::IRsa*), "ConvertOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
