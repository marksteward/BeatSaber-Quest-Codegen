// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityTracker
#include "System/Diagnostics/Tracing/ActivityTracker.hpp"
// Including type: System.Diagnostics.Tracing.ActivityTracker/ActivityInfo
#include "System/Diagnostics/Tracing/ActivityTracker_ActivityInfo.hpp"
// Including type: System.Threading.AsyncLocal`1
#include "System/Threading/AsyncLocal_1.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Diagnostics.Tracing.EventActivityOptions
#include "System/Diagnostics/Tracing/EventActivityOptions.hpp"
// Including type: System.Threading.AsyncLocalValueChangedArgs`1
#include "System/Threading/AsyncLocalValueChangedArgs_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
System::Diagnostics::Tracing::ActivityTracker* System::Diagnostics::Tracing::ActivityTracker::_get_s_activityTrackerInstance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Diagnostics::Tracing::ActivityTracker*>("System.Diagnostics.Tracing", "ActivityTracker", "s_activityTrackerInstance"));
}
// Autogenerated static field setter
// Set static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
void System::Diagnostics::Tracing::ActivityTracker::_set_s_activityTrackerInstance(System::Diagnostics::Tracing::ActivityTracker* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "ActivityTracker", "s_activityTrackerInstance", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int64 m_nextId
int64_t System::Diagnostics::Tracing::ActivityTracker::_get_m_nextId() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>("System.Diagnostics.Tracing", "ActivityTracker", "m_nextId"));
}
// Autogenerated static field setter
// Set static field: static private System.Int64 m_nextId
void System::Diagnostics::Tracing::ActivityTracker::_set_m_nextId(int64_t value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "ActivityTracker", "m_nextId", value));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.OnStart
void System::Diagnostics::Tracing::ActivityTracker::OnStart(::Il2CppString* providerName, ::Il2CppString* activityName, int task, System::Guid& activityId, System::Guid& relatedActivityId, System::Diagnostics::Tracing::EventActivityOptions options) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnStart", providerName, activityName, task, activityId, relatedActivityId, options));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.OnStop
void System::Diagnostics::Tracing::ActivityTracker::OnStop(::Il2CppString* providerName, ::Il2CppString* activityName, int task, System::Guid& activityId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnStop", providerName, activityName, task, activityId));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.Enable
void System::Diagnostics::Tracing::ActivityTracker::Enable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enable"));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.get_Instance
System::Diagnostics::Tracing::ActivityTracker* System::Diagnostics::Tracing::ActivityTracker::get_Instance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::ActivityTracker*>("System.Diagnostics.Tracing", "ActivityTracker", "get_Instance"));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.FindActiveActivity
System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* System::Diagnostics::Tracing::ActivityTracker::FindActiveActivity(::Il2CppString* name, System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* startLocation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>(this, "FindActiveActivity", name, startLocation));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.NormalizeActivityName
::Il2CppString* System::Diagnostics::Tracing::ActivityTracker::NormalizeActivityName(::Il2CppString* providerName, ::Il2CppString* activityName, int task) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "NormalizeActivityName", providerName, activityName, task));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker.ActivityChanging
void System::Diagnostics::Tracing::ActivityTracker::ActivityChanging(System::Threading::AsyncLocalValueChangedArgs_1<System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*> args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ActivityChanging", args));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker..cctor
void System::Diagnostics::Tracing::ActivityTracker::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityTracker", ".cctor"));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityTracker..ctor
System::Diagnostics::Tracing::ActivityTracker* System::Diagnostics::Tracing::ActivityTracker::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ActivityTracker*>());
}
