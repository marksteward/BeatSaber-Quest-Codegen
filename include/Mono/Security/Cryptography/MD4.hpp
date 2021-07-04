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
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD4
  class MD4 : public System::Security::Cryptography::HashAlgorithm {
    public:
    // Creating value type constructor for type: MD4
    MD4() noexcept {}
    // static public Mono.Security.Cryptography.MD4 Create()
    // Offset: 0x1D746F0
    static Mono::Security::Cryptography::MD4* Create();
    // protected System.Void .ctor()
    // Offset: 0x1D746C4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::MD4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4*, creationType>()));
    }
  }; // Mono.Security.Cryptography.MD4
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD4*, "Mono.Security.Cryptography", "MD4");
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
