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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Gost28147Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost28147Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: S
    char __padding1[0x7] = {};
    // private System.Byte[] S
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* S;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Gost28147Engine
    Gost28147Engine(::Array<int>* workingKey_ = {}, bool forEncryption_ = {}, ::Array<uint8_t>* S_ = {}) noexcept : workingKey{workingKey_}, forEncryption{forEncryption_}, S{S_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] Sbox_Default
    static ::Array<uint8_t>* _get_Sbox_Default();
    // Set static field: static private readonly System.Byte[] Sbox_Default
    static void _set_Sbox_Default(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] ESbox_Test
    static ::Array<uint8_t>* _get_ESbox_Test();
    // Set static field: static private readonly System.Byte[] ESbox_Test
    static void _set_ESbox_Test(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] ESbox_A
    static ::Array<uint8_t>* _get_ESbox_A();
    // Set static field: static private readonly System.Byte[] ESbox_A
    static void _set_ESbox_A(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] ESbox_B
    static ::Array<uint8_t>* _get_ESbox_B();
    // Set static field: static private readonly System.Byte[] ESbox_B
    static void _set_ESbox_B(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] ESbox_C
    static ::Array<uint8_t>* _get_ESbox_C();
    // Set static field: static private readonly System.Byte[] ESbox_C
    static void _set_ESbox_C(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] ESbox_D
    static ::Array<uint8_t>* _get_ESbox_D();
    // Set static field: static private readonly System.Byte[] ESbox_D
    static void _set_ESbox_D(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] DSbox_Test
    static ::Array<uint8_t>* _get_DSbox_Test();
    // Set static field: static private readonly System.Byte[] DSbox_Test
    static void _set_DSbox_Test(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] DSbox_A
    static ::Array<uint8_t>* _get_DSbox_A();
    // Set static field: static private readonly System.Byte[] DSbox_A
    static void _set_DSbox_A(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Collections.IDictionary sBoxes
    static System::Collections::IDictionary* _get_sBoxes();
    // Set static field: static private readonly System.Collections.IDictionary sBoxes
    static void _set_sBoxes(System::Collections::IDictionary* value);
    // Get instance field: private System.Int32[] workingKey
    ::Array<int>* _get_workingKey();
    // Set instance field: private System.Int32[] workingKey
    void _set_workingKey(::Array<int>* value);
    // Get instance field: private System.Boolean forEncryption
    bool _get_forEncryption();
    // Set instance field: private System.Boolean forEncryption
    void _set_forEncryption(bool value);
    // Get instance field: private System.Byte[] S
    ::Array<uint8_t>* _get_S();
    // Set instance field: private System.Byte[] S
    void _set_S(::Array<uint8_t>* value);
    // public System.String get_AlgorithmName()
    // Offset: 0x1E0793C
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E07984
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1E07130
    static void _cctor();
    // static private System.Void AddSBox(System.String sBoxName, System.Byte[] sBox)
    // Offset: 0x1E07410
    static void AddSBox(::Il2CppString* sBoxName, ::Array<uint8_t>* sBox);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E075B0
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E0798C
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E07994
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E07D04
    void Reset();
    // private System.Int32[] generateWorkingKey(System.Boolean forEncryption, System.Byte[] userKey)
    // Offset: 0x1E07808
    ::Array<int>* generateWorkingKey(bool forEncryption, ::Array<uint8_t>* userKey);
    // private System.Int32 Gost28147_mainStep(System.Int32 n1, System.Int32 key)
    // Offset: 0x1E07D88
    int Gost28147_mainStep(int n1, int key);
    // private System.Void Gost28147Func(System.Int32[] workingKey, System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E07A98
    void Gost28147Func(::Array<int>* workingKey, ::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // static private System.Int32 bytesToint(System.Byte[] inBytes, System.Int32 inOff)
    // Offset: 0x1E07D08
    static int bytesToint(::Array<uint8_t>* inBytes, int inOff);
    // static private System.Void intTobytes(System.Int32 num, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E07E7C
    static void intTobytes(int num, ::Array<uint8_t>* outBytes, int outOff);
    // static public System.Byte[] GetSBox(System.String sBoxName)
    // Offset: 0x1E07F08
    static ::Array<uint8_t>* GetSBox(::Il2CppString* sBoxName);
    // public System.Void .ctor()
    // Offset: 0x1E07534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost28147Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Gost28147Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost28147Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.Gost28147Engine
  #pragma pack(pop)
  static check_size<sizeof(Gost28147Engine), 32 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Engines_Gost28147EngineSizeCheck;
  static_assert(sizeof(Gost28147Engine) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*, "Org.BouncyCastle.Crypto.Engines", "Gost28147Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox
// Il2CppName: AddSBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox)> {
  static const MethodInfo* get() {
    static auto* sBoxName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sBox = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "AddSBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sBoxName, sBox});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey
// Il2CppName: generateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* userKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "generateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, userKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep
// Il2CppName: Gost28147_mainStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep)> {
  static const MethodInfo* get() {
    static auto* n1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Gost28147_mainStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n1, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func
// Il2CppName: Gost28147Func
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::Array<int>*, ::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func)> {
  static const MethodInfo* get() {
    static auto* workingKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Gost28147Func", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workingKey, inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint
// Il2CppName: bytesToint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "bytesToint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes
// Il2CppName: intTobytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "intTobytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox
// Il2CppName: GetSBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox)> {
  static const MethodInfo* get() {
    static auto* sBoxName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "GetSBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sBoxName});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
