// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricSignatureFormatter
#include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSASignatureFormatter
  // [ComVisibleAttribute] Offset: D7D880
  class DSASignatureFormatter : public System::Security::Cryptography::AsymmetricSignatureFormatter {
    public:
    // private System.String _oid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* oid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DSASignatureFormatter
    DSASignatureFormatter(::Il2CppString* oid_ = {}) noexcept : oid{oid_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return oid;
    }
    // public System.Void .ctor()
    // Offset: 0x1962930
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureFormatter*, creationType>()));
    }
  }; // System.Security.Cryptography.DSASignatureFormatter
  #pragma pack(pop)
  static check_size<sizeof(DSASignatureFormatter), 16 + sizeof(::Il2CppString*)> __System_Security_Cryptography_DSASignatureFormatterSizeCheck;
  static_assert(sizeof(DSASignatureFormatter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
