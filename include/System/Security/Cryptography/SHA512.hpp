// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA512
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A610
  class SHA512 : public System::Security::Cryptography::HashAlgorithm {
    public:
    // Creating value type constructor for type: SHA512
    SHA512() noexcept {}
    // static public System.Security.Cryptography.SHA512 Create()
    // Offset: 0x127B5FC
    static System::Security::Cryptography::SHA512* Create();
    // protected System.Void .ctor()
    // Offset: 0x127B5D0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA512* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA512::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA512*, creationType>()));
    }
  }; // System.Security.Cryptography.SHA512
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA512*, "System.Security.Cryptography", "SHA512");
