// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Rijndael
#include "System/Security/Cryptography/Rijndael.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
  // Skipping declaration: CipherMode because it is already included!
  // Forward declaring type: RijndaelManagedTransformMode
  struct RijndaelManagedTransformMode;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RijndaelManaged
  // [ComVisibleAttribute] Offset: CA87F0
  class RijndaelManaged : public System::Security::Cryptography::Rijndael {
    public:
    // Creating value type constructor for type: RijndaelManaged
    RijndaelManaged() noexcept {}
    // private System.Security.Cryptography.ICryptoTransform NewEncryptor(System.Byte[] rgbKey, System.Security.Cryptography.CipherMode mode, System.Byte[] rgbIV, System.Int32 feedbackSize, System.Security.Cryptography.RijndaelManagedTransformMode encryptMode)
    // Offset: 0x19618CC
    System::Security::Cryptography::ICryptoTransform* NewEncryptor(::Array<uint8_t>* rgbKey, System::Security::Cryptography::CipherMode mode, ::Array<uint8_t>* rgbIV, int feedbackSize, System::Security::Cryptography::RijndaelManagedTransformMode encryptMode);
    // public System.Void .ctor()
    // Offset: 0x19617F4
    // Implemented from: System.Security.Cryptography.Rijndael
    // Base method: System.Void Rijndael::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelManaged* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RijndaelManaged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelManaged*, creationType>()));
    }
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x19618B8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0x19619CC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public override System.Void GenerateKey()
    // Offset: 0x19619E0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Void GenerateIV()
    // Offset: 0x1961A90
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
  }; // System.Security.Cryptography.RijndaelManaged
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RijndaelManaged*, "System.Security.Cryptography", "RijndaelManaged");
