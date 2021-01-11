// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.RC2
#include "System/Security/Cryptography/RC2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RC2CryptoServiceProvider
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A4E4
  class RC2CryptoServiceProvider : public System::Security::Cryptography::RC2 {
    public:
    // private System.Boolean m_use40bitSalt
    // Size: 0x1
    // Offset: 0x48
    bool m_use40bitSalt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC2CryptoServiceProvider
    RC2CryptoServiceProvider(bool m_use40bitSalt_ = {}) noexcept : m_use40bitSalt{m_use40bitSalt_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // public System.Void .ctor()
    // Offset: 0x169A56C
    // Implemented from: System.Security.Cryptography.RC2
    // Base method: System.Void RC2::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2CryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RC2CryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2CryptoServiceProvider*, creationType>()));
    }
    // public override System.Int32 get_EffectiveKeySize()
    // Offset: 0x169A83C
    // Implemented from: System.Security.Cryptography.RC2
    // Base method: System.Int32 RC2::get_EffectiveKeySize()
    int get_EffectiveKeySize();
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x169A844
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x169AEC8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Void GenerateKey()
    // Offset: 0x169AF88
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Void GenerateIV()
    // Offset: 0x169B01C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // static private System.Void .cctor()
    // Offset: 0x169B09C
    // Implemented from: System.Security.Cryptography.RC2
    // Base method: System.Void RC2::.cctor()
    static void _cctor();
  }; // System.Security.Cryptography.RC2CryptoServiceProvider
  static check_size<sizeof(RC2CryptoServiceProvider), 72 + sizeof(bool)> __System_Security_Cryptography_RC2CryptoServiceProviderSizeCheck;
  static_assert(sizeof(RC2CryptoServiceProvider) == 0x49);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RC2CryptoServiceProvider*, "System.Security.Cryptography", "RC2CryptoServiceProvider");
