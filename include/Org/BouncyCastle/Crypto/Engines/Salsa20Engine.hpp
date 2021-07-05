// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
  class Salsa20Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    // protected System.Int32 rounds
    // Size: 0x4
    // Offset: 0x10
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x14
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.UInt32[] engineState
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* engineState;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // System.UInt32[] x
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint>* x;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Byte[] keyStream
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* keyStream;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x30
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialised and: cW0
    char __padding5[0x3] = {};
    // private System.UInt32 cW0
    // Size: 0x4
    // Offset: 0x34
    uint cW0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 cW1
    // Size: 0x4
    // Offset: 0x38
    uint cW1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 cW2
    // Size: 0x4
    // Offset: 0x3C
    uint cW2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Salsa20Engine
    Salsa20Engine(int rounds_ = {}, int index_ = {}, ::Array<uint>* engineState_ = {}, ::Array<uint>* x_ = {}, ::Array<uint8_t>* keyStream_ = {}, bool initialised_ = {}, uint cW0_ = {}, uint cW1_ = {}, uint cW2_ = {}) noexcept : rounds{rounds_}, index{index_}, engineState{engineState_}, x{x_}, keyStream{keyStream_}, initialised{initialised_}, cW0{cW0_}, cW1{cW1_}, cW2{cW2_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // Get static field: static public readonly System.Int32 DEFAULT_ROUNDS
    static int _get_DEFAULT_ROUNDS();
    // Set static field: static public readonly System.Int32 DEFAULT_ROUNDS
    static void _set_DEFAULT_ROUNDS(int value);
    // Get static field: static private readonly System.UInt32[] TAU_SIGMA
    static ::Array<uint>* _get_TAU_SIGMA();
    // Set static field: static private readonly System.UInt32[] TAU_SIGMA
    static void _set_TAU_SIGMA(::Array<uint>* value);
    // [ObsoleteAttribute] Offset: 0xDE20CC
    // Get static field: static protected readonly System.Byte[] sigma
    static ::Array<uint8_t>* _get_sigma();
    // Set static field: static protected readonly System.Byte[] sigma
    static void _set_sigma(::Array<uint8_t>* value);
    // [ObsoleteAttribute] Offset: 0xDE20DC
    // Get static field: static protected readonly System.Byte[] tau
    static ::Array<uint8_t>* _get_tau();
    // Set static field: static protected readonly System.Byte[] tau
    static void _set_tau(::Array<uint8_t>* value);
    // System.Void PackTauOrSigma(System.Int32 keyLength, System.UInt32[] state, System.Int32 stateOffset)
    // Offset: 0x1E49018
    void PackTauOrSigma(int keyLength, ::Array<uint>* state, int stateOffset);
    // public System.Void .ctor(System.Int32 rounds)
    // Offset: 0x1E4921C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Salsa20Engine* New_ctor(int rounds) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Salsa20Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Salsa20Engine*, creationType>(rounds)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E49308
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // protected System.Int32 get_NonceSize()
    // Offset: 0x1E49668
    int get_NonceSize();
    // public System.String get_AlgorithmName()
    // Offset: 0x1E49670
    ::Il2CppString* get_AlgorithmName();
    // protected System.Void AdvanceCounter()
    // Offset: 0x1E49744
    void AdvanceCounter();
    // public System.Void ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E497A8
    void ProcessBytes(::Array<uint8_t>* inBytes, int inOff, int len, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E49A48
    void Reset();
    // protected System.Void ResetCounter()
    // Offset: 0x1E49A70
    void ResetCounter();
    // protected System.Void SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x1E49AA8
    void SetKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // protected System.Void GenerateKeyStream(System.Byte[] output)
    // Offset: 0x1E49D10
    void GenerateKeyStream(::Array<uint8_t>* output);
    // static System.Void SalsaCore(System.Int32 rounds, System.UInt32[] input, System.UInt32[] x)
    // Offset: 0x1E49DAC
    static void SalsaCore(int rounds, ::Array<uint>* input, ::Array<uint>* x);
    // private System.Void ResetLimitCounter()
    // Offset: 0x1E49A64
    void ResetLimitCounter();
    // private System.Boolean LimitExceeded(System.UInt32 len)
    // Offset: 0x1E49A0C
    bool LimitExceeded(uint len);
    // static private System.Void .cctor()
    // Offset: 0x1E4A424
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1E491AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Salsa20Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Salsa20Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Salsa20Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.Salsa20Engine
  #pragma pack(pop)
  static check_size<sizeof(Salsa20Engine), 60 + sizeof(uint)> __Org_BouncyCastle_Crypto_Engines_Salsa20EngineSizeCheck;
  static_assert(sizeof(Salsa20Engine) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*, "Org.BouncyCastle.Crypto.Engines", "Salsa20Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::PackTauOrSigma
// Il2CppName: PackTauOrSigma
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(int, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::PackTauOrSigma)> {
  static const MethodInfo* get() {
    static auto* keyLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* stateOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "PackTauOrSigma", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyLength, state, stateOffset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_NonceSize
// Il2CppName: get_NonceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_NonceSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "get_NonceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::AdvanceCounter
// Il2CppName: AdvanceCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::AdvanceCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "AdvanceCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetCounter
// Il2CppName: ResetCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "ResetCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SetKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::GenerateKeyStream
// Il2CppName: GenerateKeyStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::GenerateKeyStream)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "GenerateKeyStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SalsaCore
// Il2CppName: SalsaCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SalsaCore)> {
  static const MethodInfo* get() {
    static auto* rounds = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "SalsaCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rounds, input, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetLimitCounter
// Il2CppName: ResetLimitCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetLimitCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "ResetLimitCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded
// Il2CppName: LimitExceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(uint)>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), "LimitExceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Salsa20Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
