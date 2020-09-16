// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
#include "UnityEngine/Analytics/AnalyticsSessionInfo_SessionStateChanged.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionState
#include "UnityEngine/Analytics/AnalyticsSessionState.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged..ctor
UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<AnalyticsSessionInfo::SessionStateChanged*>(object, method));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged.Invoke
void UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::Invoke(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", sessionState, sessionId, sessionElapsedTime, sessionChanged));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged.BeginInvoke
System::IAsyncResult* UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::BeginInvoke(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", sessionState, sessionId, sessionElapsedTime, sessionChanged, callback, object));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged.EndInvoke
void UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
