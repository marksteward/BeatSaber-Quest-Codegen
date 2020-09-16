// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.PlatformUserNamesLoader
#include "OnlineServices/PlatformUserNamesLoader.hpp"
// Including type: OnlineServices.PlatformUserNamesLoader/<>c__DisplayClass2_0
#include "OnlineServices/PlatformUserNamesLoader_--c__DisplayClass2_0.hpp"
// Including type: OnlineServices.PlatformUserNamesLoader/<GetUserNamesForUserIds>d__2
#include "OnlineServices/PlatformUserNamesLoader_-GetUserNamesForUserIds-d__2.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.PlatformUserNamesLoader..ctor
OnlineServices::PlatformUserNamesLoader* OnlineServices::PlatformUserNamesLoader::New_ctor(GlobalNamespace::PlatformUserModelSO* platformUserModel) {
  return THROW_UNLESS(il2cpp_utils::New<PlatformUserNamesLoader*>(platformUserModel));
}
// Autogenerated method: OnlineServices.PlatformUserNamesLoader.GetUserNamesForUserIds
System::Threading::Tasks::Task_1<::Array<::Il2CppString*>*>* OnlineServices::PlatformUserNamesLoader::GetUserNamesForUserIds(::Array<::Il2CppString*>* userPlatfromIds, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Array<::Il2CppString*>*>*>(this, "GetUserNamesForUserIds", userPlatfromIds, cancellationToken));
}
