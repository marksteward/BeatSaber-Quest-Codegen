// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x40
  // Autogenerated type: LeaderboardsDTO.LoginRequestDTO
  // [] Offset: FFFFFFFF
  class LoginRequestDTO : public ::Il2CppObject {
    public:
    // public System.String platform
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* platform;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformAuthToken
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* platformAuthToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformEnviroment
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* platformEnviroment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String publicUserDisplayName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* publicUserDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String buildVersion
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* buildVersion;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LoginRequestDTO
    LoginRequestDTO(::Il2CppString* platform_ = {}, ::Il2CppString* platformUserId_ = {}, ::Il2CppString* platformAuthToken_ = {}, ::Il2CppString* platformEnviroment_ = {}, ::Il2CppString* publicUserDisplayName_ = {}, ::Il2CppString* buildVersion_ = {}) noexcept : platform{platform_}, platformUserId{platformUserId_}, platformAuthToken{platformAuthToken_}, platformEnviroment{platformEnviroment_}, publicUserDisplayName{publicUserDisplayName_}, buildVersion{buildVersion_} {}
    // public System.Void .ctor()
    // Offset: 0xF1E9D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginRequestDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LoginRequestDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginRequestDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LoginRequestDTO
  static check_size<sizeof(LoginRequestDTO), 56 + sizeof(::Il2CppString*)> __LeaderboardsDTO_LoginRequestDTOSizeCheck;
  static_assert(sizeof(LoginRequestDTO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LoginRequestDTO*, "LeaderboardsDTO", "LoginRequestDTO");
#pragma pack(pop)
