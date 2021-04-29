// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.TokenDTO
  class TokenDTO : public ::Il2CppObject {
    public:
    // public System.String token
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 expireIn
    // Size: 0x4
    // Offset: 0x18
    int expireIn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TokenDTO
    TokenDTO(::Il2CppString* token_ = {}, int expireIn_ = {}) noexcept : token{token_}, expireIn{expireIn_} {}
    // public System.Void .ctor()
    // Offset: 0x111B25C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::TokenDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.TokenDTO
  #pragma pack(pop)
  static check_size<sizeof(TokenDTO), 24 + sizeof(int)> __LeaderboardsDTO_TokenDTOSizeCheck;
  static_assert(sizeof(TokenDTO) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::TokenDTO*, "LeaderboardsDTO", "TokenDTO");
