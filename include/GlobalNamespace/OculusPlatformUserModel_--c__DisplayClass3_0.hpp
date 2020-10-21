// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass3_0
  class OculusPlatformUserModel::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* tcs;
    // public OculusPlatformUserModel <>4__this
    // Offset: 0x18
    GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // System.Void <GetUserFriendsUserIds>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> message)
    // Offset: 0x1F83274
    void $GetUserFriendsUserIds$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>* message);
    // public System.Void .ctor()
    // Offset: 0x1F8326C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformUserModel::$$c__DisplayClass3_0* New_ctor();
  }; // OculusPlatformUserModel/<>c__DisplayClass3_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0*, "", "OculusPlatformUserModel/<>c__DisplayClass3_0");
#pragma pack(pop)