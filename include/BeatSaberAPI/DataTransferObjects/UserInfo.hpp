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
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserInfo
  // [] Offset: FFFFFFFF
  class UserInfo : public ::Il2CppObject {
    public:
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String publicPlatformDisplayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* publicPlatformDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UserInfo
    UserInfo(::Il2CppString* platformUserId_ = {}, ::Il2CppString* publicPlatformDisplayName_ = {}) noexcept : platformUserId{platformUserId_}, publicPlatformDisplayName{publicPlatformDisplayName_} {}
    // public System.Void .ctor()
    // Offset: 0x1A78DC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::UserInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserInfo*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.UserInfo
  static check_size<sizeof(UserInfo), 24 + sizeof(::Il2CppString*)> __BeatSaberAPI_DataTransferObjects_UserInfoSizeCheck;
  static_assert(sizeof(UserInfo) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserInfo*, "BeatSaberAPI.DataTransferObjects", "UserInfo");
