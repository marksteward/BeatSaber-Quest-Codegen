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
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: AccessToken
  class AccessToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper
  class HTTPLeaderboardsOathHelper : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5
    struct $SendWebRequestWithOathAsync$d__5;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$LogOut$d__6
    struct $LogOut$d__6;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$LoginIfNeededAsync$d__7
    struct $LoginIfNeededAsync$d__7;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9
    struct $GetAccessTokenAsync$d__9;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1
    class $$c__DisplayClass10_1;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10
    struct $SendWebRequestAsync$d__10;
    // Nested type: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11
    struct $SendAndWaitAsync$d__11;
    // [InjectAttribute] Offset: 0xD47E4C
    // private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Size: 0x8
    // Offset: 0x10
    OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // Field size check
    static_assert(sizeof(OnlineServices::API::IUserLoginDtoDataSource*) == 0x8);
    // private readonly System.UriBuilder _uriBuilder
    // Size: 0x8
    // Offset: 0x18
    System::UriBuilder* uriBuilder;
    // Field size check
    static_assert(sizeof(System::UriBuilder*) == 0x8);
    // private BeatSaberAPI.DataTransferObjects.AccessToken _accessToken
    // Size: 0x8
    // Offset: 0x20
    BeatSaberAPI::DataTransferObjects::AccessToken* accessToken;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::AccessToken*) == 0x8);
    // Creating value type constructor for type: HTTPLeaderboardsOathHelper
    HTTPLeaderboardsOathHelper(OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource_ = {}, System::UriBuilder* uriBuilder_ = {}, BeatSaberAPI::DataTransferObjects::AccessToken* accessToken_ = {}) noexcept : userLoginDataSource{userLoginDataSource_}, uriBuilder{uriBuilder_}, accessToken{accessToken_} {}
    // static field const value: static private System.String kLoginPath
    static constexpr const char* kLoginPath = "/v1/User/Register";
    // Get static field: static private System.String kLoginPath
    static ::Il2CppString* _get_kLoginPath();
    // Set static field: static private System.String kLoginPath
    static void _set_kLoginPath(::Il2CppString* value);
    // static field const value: static private System.String kLogoutPath
    static constexpr const char* kLogoutPath = "/api/v1/Account/LogOut";
    // Get static field: static private System.String kLogoutPath
    static ::Il2CppString* _get_kLogoutPath();
    // Set static field: static private System.String kLogoutPath
    static void _set_kLogoutPath(::Il2CppString* value);
    // public System.Threading.Tasks.Task`1<System.String> SendWebRequestWithOathAsync(System.String path, System.String method, System.Object objectToSendAsJson, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF0EE84
    System::Threading::Tasks::Task_1<::Il2CppString*>* SendWebRequestWithOathAsync(::Il2CppString* path, ::Il2CppString* method, ::Il2CppObject* objectToSendAsJson, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task LogOut()
    // Offset: 0xF0F1B0
    System::Threading::Tasks::Task* LogOut();
    // private System.Threading.Tasks.Task LoginIfNeededAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF0F580
    System::Threading::Tasks::Task* LoginIfNeededAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Boolean IsUserLoggedIn()
    // Offset: 0xF0F694
    bool IsUserLoggedIn();
    // private System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.AccessToken> GetAccessTokenAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF0F6A4
    System::Threading::Tasks::Task_1<BeatSaberAPI::DataTransferObjects::AccessToken*>* GetAccessTokenAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.String> SendWebRequestAsync(System.String uri, System.String method, System.String bodyData, System.String bearerToken)
    // Offset: 0xF0F7B4
    System::Threading::Tasks::Task_1<::Il2CppString*>* SendWebRequestAsync(::Il2CppString* uri, ::Il2CppString* method, ::Il2CppString* bodyData, ::Il2CppString* bearerToken);
    // private System.Threading.Tasks.Task SendAndWaitAsync(UnityEngine.Networking.UnityWebRequest webRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF0F8E8
    System::Threading::Tasks::Task* SendAndWaitAsync(UnityEngine::Networking::UnityWebRequest* webRequest, System::Threading::CancellationToken cancellationToken);
    // static public System.Void Log(System.String message)
    // Offset: 0xF0F9E4
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0xF0FA4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsOathHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPLeaderboardsOathHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsOathHelper*, creationType>()));
    }
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsOathHelper), 32 + sizeof(BeatSaberAPI::DataTransferObjects::AccessToken*)> __OnlineServices_API_HTTPLeaderboardsOathHelperSizeCheck;
  static_assert(sizeof(HTTPLeaderboardsOathHelper) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper*, "OnlineServices.API", "HTTPLeaderboardsOathHelper");
