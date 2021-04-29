// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HMACMD5
  // [ComVisibleAttribute] Offset: CA86D8
  class HMACMD5 : public System::Security::Cryptography::HMAC {
    public:
    // Creating value type constructor for type: HMACMD5
    HMACMD5() noexcept {}
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x17E27C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACMD5* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMACMD5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACMD5*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x17DA834
    // Implemented from: System.Security.Cryptography.HMAC
    // Base method: System.Void HMAC::.ctor()
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACMD5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMACMD5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACMD5*, creationType>()));
    }
  }; // System.Security.Cryptography.HMACMD5
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACMD5*, "System.Security.Cryptography", "HMACMD5");
