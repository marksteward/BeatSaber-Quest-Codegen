// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatSaberAPI.DataTransferObjects.UserPlatform
#include "BeatSaberAPI/DataTransferObjects/UserPlatform.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.PlatformEnviroment
#include "BeatSaberAPI/DataTransferObjects/PlatformEnviroment.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserAuthenticationData
  class UserAuthenticationData : public ::Il2CppObject {
    public:
    // public BeatSaberAPI.DataTransferObjects.UserPlatform userPlatform
    // Size: 0x1
    // Offset: 0x10
    BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::UserPlatform) == 0x1);
    // public BeatSaberAPI.DataTransferObjects.PlatformEnviroment platformEnviroment
    // Size: 0x1
    // Offset: 0x11
    BeatSaberAPI::DataTransferObjects::PlatformEnviroment platformEnviroment;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::PlatformEnviroment) == 0x1);
    // Padding between fields: platformEnviroment and: platformUserId
    char __padding1[0x6] = {};
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
    // public System.String bsAuthToken
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* bsAuthToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String gameBuildVersion
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* gameBuildVersion;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String publicUserDisplayName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* publicUserDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UserAuthenticationData
    UserAuthenticationData(BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform_ = {}, BeatSaberAPI::DataTransferObjects::PlatformEnviroment platformEnviroment_ = {}, ::Il2CppString* platformUserId_ = {}, ::Il2CppString* platformAuthToken_ = {}, ::Il2CppString* bsAuthToken_ = {}, ::Il2CppString* gameBuildVersion_ = {}, ::Il2CppString* publicUserDisplayName_ = {}) noexcept : userPlatform{userPlatform_}, platformEnviroment{platformEnviroment_}, platformUserId{platformUserId_}, platformAuthToken{platformAuthToken_}, bsAuthToken{bsAuthToken_}, gameBuildVersion{gameBuildVersion_}, publicUserDisplayName{publicUserDisplayName_} {}
    // public System.Void .ctor()
    // Offset: 0x10A74C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserAuthenticationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::UserAuthenticationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserAuthenticationData*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.UserAuthenticationData
  #pragma pack(pop)
  static check_size<sizeof(UserAuthenticationData), 56 + sizeof(::Il2CppString*)> __BeatSaberAPI_DataTransferObjects_UserAuthenticationDataSizeCheck;
  static_assert(sizeof(UserAuthenticationData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserAuthenticationData*, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationData");
