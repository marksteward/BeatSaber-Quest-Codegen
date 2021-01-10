// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadCipher.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Skipping declaration: State because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ChaCha7539Engine
  class ChaCha7539Engine;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IMac
  class IMac;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x60
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
  // [] Offset: FFFFFFFF
  class ChaCha20Poly1305 : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadCipher*/ {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State
    struct State;
    // Size: 0x4
    // Autogenerated type: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State
    // [] Offset: FFFFFFFF
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State Uninitialized
      static constexpr const int Uninitialized = 0;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State Uninitialized
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_Uninitialized();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State Uninitialized
      static void _set_Uninitialized(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncInit
      static constexpr const int EncInit = 1;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncInit
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncInit();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncInit
      static void _set_EncInit(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncAad
      static constexpr const int EncAad = 2;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncAad
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncAad();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncAad
      static void _set_EncAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncData
      static constexpr const int EncData = 3;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncData
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncData();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncData
      static void _set_EncData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncFinal
      static constexpr const int EncFinal = 4;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncFinal
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncFinal();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State EncFinal
      static void _set_EncFinal(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecInit
      static constexpr const int DecInit = 5;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecInit
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecInit();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecInit
      static void _set_DecInit(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecAad
      static constexpr const int DecAad = 6;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecAad
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecAad();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecAad
      static void _set_DecAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecData
      static constexpr const int DecData = 7;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecData
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecData();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecData
      static void _set_DecData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecFinal
      static constexpr const int DecFinal = 8;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecFinal
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecFinal();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State DecFinal
      static void _set_DecFinal(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
    }; // Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State
    static check_size<sizeof(ChaCha20Poly1305::State), 0 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_ChaCha20Poly1305_StateSizeCheck;
    static_assert(sizeof(ChaCha20Poly1305::State) == 0x4);
    // private readonly Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine mChacha20
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IMac mPoly1305
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IMac* mPoly1305;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private readonly System.Byte[] mKey
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* mKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mNonce
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* mNonce;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mBuf
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* mBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mMac
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* mMac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mInitialAad
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* mInitialAad;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt64 mAadCount
    // Size: 0x8
    // Offset: 0x48
    uint64_t mAadCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 mDataCount
    // Size: 0x8
    // Offset: 0x50
    uint64_t mDataCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State mState
    // Size: 0x4
    // Offset: 0x58
    Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State mState;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State) == 0x4);
    // private System.Int32 mBufPos
    // Size: 0x4
    // Offset: 0x5C
    int mBufPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ChaCha20Poly1305
    ChaCha20Poly1305(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20_ = {}, Org::BouncyCastle::Crypto::IMac* mPoly1305_ = {}, ::Array<uint8_t>* mKey_ = {}, ::Array<uint8_t>* mNonce_ = {}, ::Array<uint8_t>* mBuf_ = {}, ::Array<uint8_t>* mMac_ = {}, ::Array<uint8_t>* mInitialAad_ = {}, uint64_t mAadCount_ = {}, uint64_t mDataCount_ = {}, Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State mState_ = {}, int mBufPos_ = {}) noexcept : mChacha20{mChacha20_}, mPoly1305{mPoly1305_}, mKey{mKey_}, mNonce{mNonce_}, mBuf{mBuf_}, mMac{mMac_}, mInitialAad{mInitialAad_}, mAadCount{mAadCount_}, mDataCount{mDataCount_}, mState{mState_}, mBufPos{mBufPos_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] Zeroes
    static ::Array<uint8_t>* _get_Zeroes();
    // Set static field: static private readonly System.Byte[] Zeroes
    static void _set_Zeroes(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IMac poly1305)
    // Offset: 0x14A53C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaCha20Poly1305* New_ctor(Org::BouncyCastle::Crypto::IMac* poly1305) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaCha20Poly1305*, creationType>(poly1305)));
    }
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x14A5D5C
    void ProcessAadBytes(::Array<uint8_t>* inBytes, int inOff, int len);
    // private System.Void CheckAad()
    // Offset: 0x14A5F30
    void CheckAad();
    // private System.Void CheckData()
    // Offset: 0x14A6594
    void CheckData();
    // private System.Void FinishAad(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State nextState)
    // Offset: 0x14A6C9C
    void FinishAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State nextState);
    // private System.Void FinishData(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State nextState)
    // Offset: 0x14A6AEC
    void FinishData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State nextState);
    // private System.UInt64 IncrementCount(System.UInt64 count, System.UInt32 increment, System.UInt64 limit)
    // Offset: 0x14A6000
    uint64_t IncrementCount(uint64_t count, uint increment, uint64_t limit);
    // private System.Void InitMac()
    // Offset: 0x14A6DE4
    void InitMac();
    // private System.Void PadMac(System.UInt64 count)
    // Offset: 0x14A6CCC
    void PadMac(uint64_t count);
    // private System.Void ProcessData(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14A667C
    void ProcessData(::Array<uint8_t>* inBytes, int inOff, int inLen, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Void Reset(System.Boolean clearMac, System.Boolean resetCipher)
    // Offset: 0x14A59EC
    void Reset(bool clearMac, bool resetCipher);
    // static private System.Void .cctor()
    // Offset: 0x14A6F74
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14A5360
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaCha20Poly1305* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaCha20Poly1305*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14A55B8
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x14A5B50
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetOutputSize(System.Int32 len)
    int GetOutputSize(int len);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x14A5C54
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetUpdateOutputSize(System.Int32 len)
    int GetUpdateOutputSize(int len);
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14A60A0
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* inBytes, int inOff, int len, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14A6748
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x14A6C90
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
  static check_size<sizeof(ChaCha20Poly1305), 92 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_ChaCha20Poly1305SizeCheck;
  static_assert(sizeof(ChaCha20Poly1305) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305");
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State");
#pragma pack(pop)
