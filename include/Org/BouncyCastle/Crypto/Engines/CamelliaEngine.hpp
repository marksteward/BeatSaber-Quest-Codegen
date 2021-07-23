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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class CamelliaEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x10
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _keyIs128
    // Size: 0x1
    // Offset: 0x11
    bool keyIs128;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keyIs128 and: subkey
    char __padding1[0x6] = {};
    // private System.UInt32[] subkey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* subkey;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] kw
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint>* kw;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] ke
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* ke;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint>* state;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: CamelliaEngine
    CamelliaEngine(bool initialised_ = {}, bool keyIs128_ = {}, ::Array<uint>* subkey_ = {}, ::Array<uint>* kw_ = {}, ::Array<uint>* ke_ = {}, ::Array<uint>* state_ = {}) noexcept : initialised{initialised_}, keyIs128{keyIs128_}, subkey{subkey_}, kw{kw_}, ke{ke_}, state{state_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] SIGMA
    static ::Array<uint>* _get_SIGMA();
    // Set static field: static private readonly System.UInt32[] SIGMA
    static void _set_SIGMA(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX1_1110
    static ::Array<uint>* _get_SBOX1_1110();
    // Set static field: static private readonly System.UInt32[] SBOX1_1110
    static void _set_SBOX1_1110(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX4_4404
    static ::Array<uint>* _get_SBOX4_4404();
    // Set static field: static private readonly System.UInt32[] SBOX4_4404
    static void _set_SBOX4_4404(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX2_0222
    static ::Array<uint>* _get_SBOX2_0222();
    // Set static field: static private readonly System.UInt32[] SBOX2_0222
    static void _set_SBOX2_0222(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] SBOX3_3033
    static ::Array<uint>* _get_SBOX3_3033();
    // Set static field: static private readonly System.UInt32[] SBOX3_3033
    static void _set_SBOX3_3033(::Array<uint>* value);
    // Get instance field: private System.Boolean initialised
    bool _get_initialised();
    // Set instance field: private System.Boolean initialised
    void _set_initialised(bool value);
    // Get instance field: private System.Boolean _keyIs128
    bool _get__keyIs128();
    // Set instance field: private System.Boolean _keyIs128
    void _set__keyIs128(bool value);
    // Get instance field: private System.UInt32[] subkey
    ::Array<uint>* _get_subkey();
    // Set instance field: private System.UInt32[] subkey
    void _set_subkey(::Array<uint>* value);
    // Get instance field: private System.UInt32[] kw
    ::Array<uint>* _get_kw();
    // Set instance field: private System.UInt32[] kw
    void _set_kw(::Array<uint>* value);
    // Get instance field: private System.UInt32[] ke
    ::Array<uint>* _get_ke();
    // Set instance field: private System.UInt32[] ke
    void _set_ke(::Array<uint>* value);
    // Get instance field: private System.UInt32[] state
    ::Array<uint>* _get_state();
    // Set instance field: private System.UInt32[] state
    void _set_state(::Array<uint>* value);
    // public System.String get_AlgorithmName()
    // Offset: 0x1DFE3F4
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1DFE43C
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1DFE574
    static void _cctor();
    // static private System.UInt32 rightRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x1DFBCF8
    static uint rightRotate(uint x, int s);
    // static private System.UInt32 leftRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x1DFBD0C
    static uint leftRotate(uint x, int s);
    // static private System.Void roldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x1DFBD20
    static void roldq(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void decroldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x1DFBEF0
    static void decroldq(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void roldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x1DFC0C0
    static void roldqo32(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.Void decroldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x1DFC294
    static void decroldqo32(int rot, ::Array<uint>* ki, int ioff, ::Array<uint>* ko, int ooff);
    // static private System.UInt32 bytes2uint(System.Byte[] src, System.Int32 offset)
    // Offset: 0x1DFC468
    static uint bytes2uint(::Array<uint8_t>* src, int offset);
    // static private System.Void uint2bytes(System.UInt32 word, System.Byte[] dst, System.Int32 offset)
    // Offset: 0x1DFC4D8
    static void uint2bytes(uint word, ::Array<uint8_t>* dst, int offset);
    // static private System.Void camelliaF2(System.UInt32[] s, System.UInt32[] skey, System.Int32 keyoff)
    // Offset: 0x1DFC52C
    static void camelliaF2(::Array<uint>* s, ::Array<uint>* skey, int keyoff);
    // static private System.Void camelliaFLs(System.UInt32[] s, System.UInt32[] fkey, System.Int32 keyoff)
    // Offset: 0x1DFC868
    static void camelliaFLs(::Array<uint>* s, ::Array<uint>* fkey, int keyoff);
    // private System.Void setKey(System.Boolean forEncryption, System.Byte[] key)
    // Offset: 0x1DFC9BC
    void setKey(bool forEncryption, ::Array<uint8_t>* key);
    // private System.Int32 processBlock128(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1DFDBBC
    int processBlock128(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // private System.Int32 processBlock192or256(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1DFDEFC
    int processBlock192or256(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1DFE30C
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1DFE444
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1DFE44C
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1DFE570
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1DFE278
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CamelliaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::CamelliaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CamelliaEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  #pragma pack(pop)
  static check_size<sizeof(CamelliaEngine), 48 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_CamelliaEngineSizeCheck;
  static_assert(sizeof(CamelliaEngine) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::rightRotate
// Il2CppName: rightRotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::rightRotate)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "rightRotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::leftRotate
// Il2CppName: leftRotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::leftRotate)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "leftRotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldq
// Il2CppName: roldq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldq)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "roldq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldq
// Il2CppName: decroldq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldq)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "decroldq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldqo32
// Il2CppName: roldqo32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldqo32)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "roldqo32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldqo32
// Il2CppName: decroldqo32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldqo32)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "decroldqo32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::bytes2uint
// Il2CppName: bytes2uint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::bytes2uint)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "bytes2uint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::uint2bytes
// Il2CppName: uint2bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::uint2bytes)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "uint2bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, dst, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaF2
// Il2CppName: camelliaF2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaF2)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* skey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* keyoff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "camelliaF2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, skey, keyoff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaFLs
// Il2CppName: camelliaFLs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaFLs)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* fkey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* keyoff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "camelliaFLs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, fkey, keyoff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::setKey
// Il2CppName: setKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(bool, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::setKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "setKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock128
// Il2CppName: processBlock128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock128)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "processBlock128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock192or256
// Il2CppName: processBlock192or256
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock192or256)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "processBlock192or256", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
