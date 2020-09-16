// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
// Including type: AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10
#include "GlobalNamespace/AdditionalContentModel_-GetLevelEntitlementStatusAsync-d__10.hpp"
// Including type: AdditionalContentModel/<GetPackEntitlementStatusAsync>d__11
#include "GlobalNamespace/AdditionalContentModel_-GetPackEntitlementStatusAsync-d__11.hpp"
// Including type: AlwaysOwnedContentContainerSO
#include "GlobalNamespace/AlwaysOwnedContentContainerSO.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AdditionalContentModel.add_didInvalidateDataEvent
void GlobalNamespace::AdditionalContentModel::add_didInvalidateDataEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didInvalidateDataEvent", value));
}
// Autogenerated method: AdditionalContentModel.remove_didInvalidateDataEvent
void GlobalNamespace::AdditionalContentModel::remove_didInvalidateDataEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didInvalidateDataEvent", value));
}
// Autogenerated method: AdditionalContentModel.OnApplicationFocus
void GlobalNamespace::AdditionalContentModel::OnApplicationFocus(bool hasFocus) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnApplicationFocus", hasFocus));
}
// Autogenerated method: AdditionalContentModel.InvalidateData
void GlobalNamespace::AdditionalContentModel::InvalidateData() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvalidateData"));
}
// Autogenerated method: AdditionalContentModel.GetLevelEntitlementStatusAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusAsync(::Il2CppString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetLevelEntitlementStatusAsync", levelId, token));
}
// Autogenerated method: AdditionalContentModel.GetPackEntitlementStatusAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetPackEntitlementStatusAsync", levelPackId, token));
}
// Autogenerated method: AdditionalContentModel.InvalidateDataInternal
void GlobalNamespace::AdditionalContentModel::InvalidateDataInternal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvalidateDataInternal"));
}
// Autogenerated method: AdditionalContentModel.GetLevelEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetLevelEntitlementStatusInternalAsync", levelId, token));
}
// Autogenerated method: AdditionalContentModel.GetPackEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::AdditionalContentModel::GetPackEntitlementStatusInternalAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetPackEntitlementStatusInternalAsync", levelPackId, token));
}
// Autogenerated method: AdditionalContentModel.IsPackBetterBuyThanLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>*>(this, "IsPackBetterBuyThanLevelAsync", levelPackId, token));
}
// Autogenerated method: AdditionalContentModel.OpenLevelProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::AdditionalContentModel::OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelProductStoreAsync", levelId, token));
}
// Autogenerated method: AdditionalContentModel.OpenLevelPackProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::AdditionalContentModel::OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelPackProductStoreAsync", levelPackId, token));
}
// Autogenerated method: AdditionalContentModel..ctor
GlobalNamespace::AdditionalContentModel* GlobalNamespace::AdditionalContentModel::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AdditionalContentModel*>());
}
