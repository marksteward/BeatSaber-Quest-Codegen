// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/ServerStatusResultDto
  // [] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper::ServerStatusResultDto : public ::Il2CppObject {
    public:
    // public System.Boolean everythingOK
    // Size: 0x1
    // Offset: 0x10
    bool everythingOK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ServerStatusResultDto
    ServerStatusResultDto(bool everythingOK_ = {}) noexcept : everythingOK{everythingOK_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return everythingOK;
    }
    // public System.Void .ctor()
    // Offset: 0xEFA3CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::ServerStatusResultDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::ServerStatusResultDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/ServerStatusResultDto
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::ServerStatusResultDto), 16 + sizeof(bool)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_ServerStatusResultDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::ServerStatusResultDto) == 0x11);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/ServerStatusResultDto");
