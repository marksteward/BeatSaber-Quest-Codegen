// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.GeneralSecurityException
  class GeneralSecurityException : public System::Exception {
    public:
    // Creating value type constructor for type: GeneralSecurityException
    GeneralSecurityException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1270AA8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1270B10
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x1270B88
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralSecurityException* New_ctor(::Il2CppString* message, System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::GeneralSecurityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralSecurityException*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Security.GeneralSecurityException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::GeneralSecurityException*, "Org.BouncyCastle.Security", "GeneralSecurityException");
