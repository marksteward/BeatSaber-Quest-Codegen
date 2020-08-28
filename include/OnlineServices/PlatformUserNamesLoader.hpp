// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformUserModelSO
  class PlatformUserModelSO;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.PlatformUserNamesLoader
  class PlatformUserNamesLoader : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::PlatformUserNamesLoader::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: OnlineServices::PlatformUserNamesLoader::$GetUserNamesForUserIds$d__2
    struct $GetUserNamesForUserIds$d__2;
    // private PlatformUserModelSO _platformUserModel
    // Offset: 0x10
    GlobalNamespace::PlatformUserModelSO* platformUserModel;
    // Creating conversion operator: operator GlobalNamespace::PlatformUserModelSO*
    constexpr operator GlobalNamespace::PlatformUserModelSO*() const {
      return platformUserModel;
    }
    // public System.Void .ctor(PlatformUserModelSO platformUserModel)
    // Offset: 0xBCEC10
    static PlatformUserNamesLoader* New_ctor(GlobalNamespace::PlatformUserModelSO* platformUserModel);
    // public System.Threading.Tasks.Task`1<System.String[]> GetUserNamesForUserIds(System.String[] userPlatfromIds, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBCEC44
    System::Threading::Tasks::Task_1<::Array<::Il2CppString*>*>* GetUserNamesForUserIds(::Array<::Il2CppString*>* userPlatfromIds, System::Threading::CancellationToken cancellationToken);
  }; // OnlineServices.PlatformUserNamesLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformUserNamesLoader*, "OnlineServices", "PlatformUserNamesLoader");
#pragma pack(pop)
