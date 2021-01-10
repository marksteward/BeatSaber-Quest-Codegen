// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
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
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  // Autogenerated type: System.Security.Cryptography.Rijndael
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A4F8
  class Rijndael : public System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Creating value type constructor for type: Rijndael
    Rijndael() noexcept {}
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // static private System.Void .cctor()
    // Offset: 0x16A00C4
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x16A001C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rijndael* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::Rijndael::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rijndael*, creationType>()));
    }
  }; // System.Security.Cryptography.Rijndael
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Rijndael*, "System.Security.Cryptography", "Rijndael");
#pragma pack(pop)
