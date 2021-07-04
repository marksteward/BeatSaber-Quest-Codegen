// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AesCryptoServiceProvider
  class AesCryptoServiceProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility
  class EncryptionUtility : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::EncryptionUtility::IEncryptionState
    class IEncryptionState;
    // Nested type: GlobalNamespace::EncryptionUtility::EncryptionState
    class EncryptionState;
    // Nested type: GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Creating value type constructor for type: EncryptionUtility
    EncryptionUtility() noexcept {}
    // static field const value: static private System.Int32 kMacHashSize
    static constexpr const int kMacHashSize = 10;
    // Get static field: static private System.Int32 kMacHashSize
    static int _get_kMacHashSize();
    // Set static field: static private System.Int32 kMacHashSize
    static void _set_kMacHashSize(int value);
    // static field const value: static private System.Int32 kSequenceNumberSize
    static constexpr const int kSequenceNumberSize = 4;
    // Get static field: static private System.Int32 kSequenceNumberSize
    static int _get_kSequenceNumberSize();
    // Set static field: static private System.Int32 kSequenceNumberSize
    static void _set_kSequenceNumberSize(int value);
    // static field const value: static private System.Int32 kMaxPadding
    static constexpr const int kMaxPadding = 32;
    // Get static field: static private System.Int32 kMaxPadding
    static int _get_kMaxPadding();
    // Set static field: static private System.Int32 kMaxPadding
    static void _set_kMaxPadding(int value);
    // static field const value: static private System.Int32 kMacKeySize
    static constexpr const int kMacKeySize = 64;
    // Get static field: static private System.Int32 kMacKeySize
    static int _get_kMacKeySize();
    // Set static field: static private System.Int32 kMacKeySize
    static void _set_kMacKeySize(int value);
    // static field const value: static private System.Int32 kKeySize
    static constexpr const int kKeySize = 32;
    // Get static field: static private System.Int32 kKeySize
    static int _get_kKeySize();
    // Set static field: static private System.Int32 kKeySize
    static void _set_kKeySize(int value);
    // static field const value: static private System.Int32 kBlockSize
    static constexpr const int kBlockSize = 16;
    // Get static field: static private System.Int32 kBlockSize
    static int _get_kBlockSize();
    // Set static field: static private System.Int32 kBlockSize
    static void _set_kBlockSize(int value);
    // static field const value: static private System.Int32 kIvSize
    static constexpr const int kIvSize = 16;
    // Get static field: static private System.Int32 kIvSize
    static int _get_kIvSize();
    // Set static field: static private System.Int32 kIvSize
    static void _set_kIvSize(int value);
    // static field const value: static public System.Int32 kMasterKeySize
    static constexpr const int kMasterKeySize = 48;
    // Get static field: static public System.Int32 kMasterKeySize
    static int _get_kMasterKeySize();
    // Set static field: static public System.Int32 kMasterKeySize
    static void _set_kMasterKeySize(int value);
    // static field const value: static public System.Int32 kRandomBlockSize
    static constexpr const int kRandomBlockSize = 32;
    // Get static field: static public System.Int32 kRandomBlockSize
    static int _get_kRandomBlockSize();
    // Set static field: static public System.Int32 kRandomBlockSize
    static void _set_kRandomBlockSize(int value);
    // static field const value: static public System.Int32 kExtraSize
    static constexpr const int kExtraSize = 62;
    // Get static field: static public System.Int32 kExtraSize
    static int _get_kExtraSize();
    // Set static field: static public System.Int32 kExtraSize
    static void _set_kExtraSize(int value);
    // Get static field: static private System.Byte[] _masterSecretSeed
    static ::Array<uint8_t>* _get__masterSecretSeed();
    // Set static field: static private System.Byte[] _masterSecretSeed
    static void _set__masterSecretSeed(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] _keyExpansionSeed
    static ::Array<uint8_t>* _get__keyExpansionSeed();
    // Set static field: static private System.Byte[] _keyExpansionSeed
    static void _set__keyExpansionSeed(::Array<uint8_t>* value);
    // [ThreadStaticAttribute] Offset: 0xDF0A70
    // Get static field: static private System.Byte[] _tempIV
    static ::Array<uint8_t>* _get__tempIV();
    // Set static field: static private System.Byte[] _tempIV
    static void _set__tempIV(::Array<uint8_t>* value);
    // [ThreadStaticAttribute] Offset: 0xDF0A80
    // Get static field: static private System.Byte[] _tempHash
    static ::Array<uint8_t>* _get__tempHash();
    // Set static field: static private System.Byte[] _tempHash
    static void _set__tempHash(::Array<uint8_t>* value);
    // Get static field: static private System.Security.Cryptography.AesCryptoServiceProvider _aes
    static System::Security::Cryptography::AesCryptoServiceProvider* _get__aes();
    // Set static field: static private System.Security.Cryptography.AesCryptoServiceProvider _aes
    static void _set__aes(System::Security::Cryptography::AesCryptoServiceProvider* value);
    // static public EncryptionUtility/IEncryptionState CreateEncryptionState(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x13299BC
    static GlobalNamespace::EncryptionUtility::IEncryptionState* CreateEncryptionState(::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed, bool isClient);
    // static public System.Threading.Tasks.Task`1<EncryptionUtility/IEncryptionState> CreateEncryptionStateAsync(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x1329C7C
    static System::Threading::Tasks::Task_1<GlobalNamespace::EncryptionUtility::IEncryptionState*>* CreateEncryptionStateAsync(::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed, bool isClient);
    // static public System.Boolean IsValidLength(System.Int32 length)
    // Offset: 0x1329D78
    static bool IsValidLength(int length);
    // static private System.Void EncryptData(EncryptionUtility/EncryptionState state, System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, System.Int32 extraPrefixedData)
    // Offset: 0x1329D98
    static void EncryptData(GlobalNamespace::EncryptionUtility::EncryptionState* state, ::Array<uint8_t>* data, int& offset, int& length, int extraPrefixedData);
    // static private System.Boolean TryDecryptData(EncryptionUtility/EncryptionState state, System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x132A60C
    static bool TryDecryptData(GlobalNamespace::EncryptionUtility::EncryptionState* state, ::Array<uint8_t>* data, int& offset, int& length);
    // static private System.Void FastCopyBlock(System.Byte[] inArr, System.Int32 inOff, System.Byte[] outArr, System.Int32 outOff)
    // Offset: 0x132B1A4
    static void FastCopyBlock(::Array<uint8_t>* inArr, int inOff, ::Array<uint8_t>* outArr, int outOff);
    // static private System.Void FastCopyMac(System.Byte[] inArr, System.Int32 inOff, System.Byte[] outArr, System.Int32 outOff)
    // Offset: 0x132B4C4
    static void FastCopyMac(::Array<uint8_t>* inArr, int inOff, ::Array<uint8_t>* outArr, int outOff);
    // static public System.Void Log(System.String message)
    // Offset: 0x132B6C4
    static void Log(::Il2CppString* message);
    // static public System.Void LogV(System.String message)
    // Offset: 0x132B748
    static void LogV(::Il2CppString* message);
    // static private System.Void .cctor()
    // Offset: 0x132B7CC
    static void _cctor();
  }; // EncryptionUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EncryptionUtility*, "", "EncryptionUtility");
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::CreateEncryptionState
// Il2CppName: CreateEncryptionState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync
// Il2CppName: CreateEncryptionStateAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::IsValidLength
// Il2CppName: IsValidLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptData
// Il2CppName: EncryptData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::TryDecryptData
// Il2CppName: TryDecryptData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::FastCopyBlock
// Il2CppName: FastCopyBlock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::FastCopyMac
// Il2CppName: FastCopyMac
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::Log
// Il2CppName: Log
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::LogV
// Il2CppName: LogV
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
