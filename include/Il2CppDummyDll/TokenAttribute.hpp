// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppDummyDll
namespace Il2CppDummyDll {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppDummyDll.TokenAttribute
  class TokenAttribute : public System::Attribute {
    public:
    // public System.String Token
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TokenAttribute
    TokenAttribute(::Il2CppString* Token_ = {}) noexcept : Token{Token_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Token;
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppDummyDll::TokenAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenAttribute*, creationType>()));
    }
  }; // Il2CppDummyDll.TokenAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Il2CppDummyDll::TokenAttribute*, "Il2CppDummyDll", "TokenAttribute");
// Writing MetadataGetter for method: Il2CppDummyDll::TokenAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
