// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.IUserLoginDtoDataSource
  class IUserLoginDtoDataSource {
    public:
    // Creating value type constructor for type: IUserLoginDtoDataSource
    IUserLoginDtoDataSource() noexcept {}
    // public System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> UserAuthenticationDataAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* UserAuthenticationDataAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String[]> GetUserFriendsUserIds(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<::Array<::Il2CppString*>*>* GetUserFriendsUserIds(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String> GetPlatformUserIdAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<::Il2CppString*>* GetPlatformUserIdAsync(System::Threading::CancellationToken cancellationToken);
  }; // OnlineServices.API.IUserLoginDtoDataSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::IUserLoginDtoDataSource*, "OnlineServices.API", "IUserLoginDtoDataSource");
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::UserAuthenticationDataAsync
// Il2CppName: UserAuthenticationDataAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::GetPlatformUserIdAsync
// Il2CppName: GetPlatformUserIdAsync
// Cannot perform method pointer template specialization from operators!
