// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
  // [] Offset: FFFFFFFF
  class ISO7816d4Padding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*/ {
    public:
    // Creating value type constructor for type: ISO7816d4Padding
    ISO7816d4Padding() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
    operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x10415BC
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Void IBlockCipherPadding::Init(Org.BouncyCastle.Security.SecureRandom random)
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x10415C0
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Int32 IBlockCipherPadding::AddPadding(System.Byte[] input, System.Int32 inOff)
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x1041630
    // Implemented from: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
    // Base method: System.Int32 IBlockCipherPadding::PadCount(System.Byte[] input)
    int PadCount(::Array<uint8_t>* input);
    // public System.Void .ctor()
    // Offset: 0x104170C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO7816d4Padding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO7816d4Padding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO7816d4Padding");
#pragma pack(pop)
