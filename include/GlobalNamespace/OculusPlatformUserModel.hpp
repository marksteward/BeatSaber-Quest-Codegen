// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IPlatformUserModel
#include "GlobalNamespace/IPlatformUserModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformUserModel
  class OculusPlatformUserModel : public ::Il2CppObject/*, public GlobalNamespace::IPlatformUserModel*/ {
    public:
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2
    struct $GetUserInfo$d__2;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$GetUserFriendsUserIds$d__3
    struct $GetUserFriendsUserIds$d__3;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$GetUserAuthToken$d__4
    struct $GetUserAuthToken$d__4;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: GlobalNamespace::OculusPlatformUserModel::$GetUserNamesForUserIds$d__5
    struct $GetUserNamesForUserIds$d__5;
    // private System.String[] _friendsUserIds
    // Offset: 0x10
    ::Array<::Il2CppString*>* friendsUserIds;
    // private UserInfo _userInfo
    // Offset: 0x18
    GlobalNamespace::UserInfo* userInfo;
    // Creating interface conversion operator: operator GlobalNamespace::IPlatformUserModel
    operator GlobalNamespace::IPlatformUserModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPlatformUserModel*>(this);
    }
    // public System.Threading.Tasks.Task`1<UserInfo> GetUserInfo()
    // Offset: 0x1F82CBC
    // Implemented from: IPlatformUserModel
    // Base method: System.Threading.Tasks.Task`1<UserInfo> IPlatformUserModel::GetUserInfo()
    System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo*>* GetUserInfo();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserFriendsUserIds(System.Boolean cached)
    // Offset: 0x1F82DDC
    // Implemented from: IPlatformUserModel
    // Base method: System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> IPlatformUserModel::GetUserFriendsUserIds(System.Boolean cached)
    System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GetUserFriendsUserIds(bool cached);
    // public System.Threading.Tasks.Task`1<System.String> GetUserAuthToken()
    // Offset: 0x1F82F20
    // Implemented from: IPlatformUserModel
    // Base method: System.Threading.Tasks.Task`1<System.String> IPlatformUserModel::GetUserAuthToken()
    System::Threading::Tasks::Task_1<::Il2CppString*>* GetUserAuthToken();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserNamesForUserIds(System.Collections.Generic.IReadOnlyList`1<System.String> userIds)
    // Offset: 0x1F8302C
    // Implemented from: IPlatformUserModel
    // Base method: System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> IPlatformUserModel::GetUserNamesForUserIds(System.Collections.Generic.IReadOnlyList`1<System.String> userIds)
    System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* userIds);
    // public System.Void .ctor()
    // Offset: 0x1F83144
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformUserModel* New_ctor();
  }; // OculusPlatformUserModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
#pragma pack(pop)
