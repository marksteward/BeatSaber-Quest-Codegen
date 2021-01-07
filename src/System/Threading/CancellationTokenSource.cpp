// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationTokenSource
#include "System/Threading/CancellationTokenSource.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.Threading.SparselyPopulatedArray`1
#include "System/Threading/SparselyPopulatedArray_1.hpp"
// Including type: System.Threading.CancellationCallbackInfo
#include "System/Threading/CancellationCallbackInfo.hpp"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Threading.TimerCallback
#include "System/Threading/TimerCallback.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Threading.CancellationCallbackCoreWorkArguments
#include "System/Threading/CancellationCallbackCoreWorkArguments.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::_get__staticSource_Set() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get__staticSource_Set");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::CancellationTokenSource*>("System.Threading", "CancellationTokenSource", "_staticSource_Set"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
void System::Threading::CancellationTokenSource::_set__staticSource_Set(System::Threading::CancellationTokenSource* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set__staticSource_Set");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "_staticSource_Set", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::_get__staticSource_NotCancelable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get__staticSource_NotCancelable");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::CancellationTokenSource*>("System.Threading", "CancellationTokenSource", "_staticSource_NotCancelable"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
void System::Threading::CancellationTokenSource::_set__staticSource_NotCancelable(System::Threading::CancellationTokenSource* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set__staticSource_NotCancelable");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "_staticSource_NotCancelable", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 s_nLists
int System::Threading::CancellationTokenSource::_get_s_nLists() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_s_nLists");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "CancellationTokenSource", "s_nLists"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 s_nLists
void System::Threading::CancellationTokenSource::_set_s_nLists(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_s_nLists");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "s_nLists", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 CANNOT_BE_CANCELED
int System::Threading::CancellationTokenSource::_get_CANNOT_BE_CANCELED() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_CANNOT_BE_CANCELED");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "CancellationTokenSource", "CANNOT_BE_CANCELED"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 CANNOT_BE_CANCELED
void System::Threading::CancellationTokenSource::_set_CANNOT_BE_CANCELED(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_CANNOT_BE_CANCELED");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "CANNOT_BE_CANCELED", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NOT_CANCELED
int System::Threading::CancellationTokenSource::_get_NOT_CANCELED() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_NOT_CANCELED");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "CancellationTokenSource", "NOT_CANCELED"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NOT_CANCELED
void System::Threading::CancellationTokenSource::_set_NOT_CANCELED(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_NOT_CANCELED");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "NOT_CANCELED", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NOTIFYING
int System::Threading::CancellationTokenSource::_get_NOTIFYING() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_NOTIFYING");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "CancellationTokenSource", "NOTIFYING"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NOTIFYING
void System::Threading::CancellationTokenSource::_set_NOTIFYING(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_NOTIFYING");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "NOTIFYING", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NOTIFYINGCOMPLETE
int System::Threading::CancellationTokenSource::_get_NOTIFYINGCOMPLETE() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_NOTIFYINGCOMPLETE");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "CancellationTokenSource", "NOTIFYINGCOMPLETE"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NOTIFYINGCOMPLETE
void System::Threading::CancellationTokenSource::_set_NOTIFYINGCOMPLETE(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_NOTIFYINGCOMPLETE");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "NOTIFYINGCOMPLETE", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
System::Action_1<::Il2CppObject*>* System::Threading::CancellationTokenSource::_get_s_LinkedTokenCancelDelegate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_s_LinkedTokenCancelDelegate");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<::Il2CppObject*>*>("System.Threading", "CancellationTokenSource", "s_LinkedTokenCancelDelegate"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
void System::Threading::CancellationTokenSource::_set_s_LinkedTokenCancelDelegate(System::Action_1<::Il2CppObject*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_s_LinkedTokenCancelDelegate");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "s_LinkedTokenCancelDelegate", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.TimerCallback s_timerCallback
System::Threading::TimerCallback* System::Threading::CancellationTokenSource::_get_s_timerCallback() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_get_s_timerCallback");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::TimerCallback*>("System.Threading", "CancellationTokenSource", "s_timerCallback"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.TimerCallback s_timerCallback
void System::Threading::CancellationTokenSource::_set_s_timerCallback(System::Threading::TimerCallback* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("_set_s_timerCallback");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationTokenSource", "s_timerCallback", value));
}
// Autogenerated method: System.Threading.CancellationTokenSource.LinkedTokenCancelDelegate
void System::Threading::CancellationTokenSource::LinkedTokenCancelDelegate(::Il2CppObject* source) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("LinkedTokenCancelDelegate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", "LinkedTokenCancelDelegate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(source)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, source);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_IsCancellationRequested
bool System::Threading::CancellationTokenSource::get_IsCancellationRequested() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_IsCancellationRequested");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsCancellationRequested", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_IsCancellationCompleted
bool System::Threading::CancellationTokenSource::get_IsCancellationCompleted() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_IsCancellationCompleted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsCancellationCompleted", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_IsDisposed
bool System::Threading::CancellationTokenSource::get_IsDisposed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_IsDisposed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsDisposed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.set_ThreadIDExecutingCallbacks
void System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("set_ThreadIDExecutingCallbacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_ThreadIDExecutingCallbacks", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_ThreadIDExecutingCallbacks
int System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_ThreadIDExecutingCallbacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ThreadIDExecutingCallbacks", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_Token
System::Threading::CancellationToken System::Threading::CancellationTokenSource::get_Token() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_Token");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Token", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::CancellationToken, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_CanBeCanceled
bool System::Threading::CancellationTokenSource::get_CanBeCanceled() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_CanBeCanceled");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_CanBeCanceled", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.get_ExecutingCallback
System::Threading::CancellationCallbackInfo* System::Threading::CancellationTokenSource::get_ExecutingCallback() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("get_ExecutingCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ExecutingCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::CancellationCallbackInfo*, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.Cancel
void System::Threading::CancellationTokenSource::Cancel() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("Cancel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Cancel", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.Cancel
void System::Threading::CancellationTokenSource::Cancel(bool throwOnFirstException) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("Cancel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Cancel", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(throwOnFirstException)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, throwOnFirstException);
}
// Autogenerated method: System.Threading.CancellationTokenSource.CancelAfter
void System::Threading::CancellationTokenSource::CancelAfter(System::TimeSpan delay) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("CancelAfter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CancelAfter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(delay)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, delay);
}
// Autogenerated method: System.Threading.CancellationTokenSource.CancelAfter
void System::Threading::CancellationTokenSource::CancelAfter(int millisecondsDelay) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("CancelAfter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CancelAfter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(millisecondsDelay)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, millisecondsDelay);
}
// Autogenerated method: System.Threading.CancellationTokenSource.TimerCallbackLogic
void System::Threading::CancellationTokenSource::TimerCallbackLogic(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("TimerCallbackLogic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", "TimerCallbackLogic", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj);
}
// Autogenerated method: System.Threading.CancellationTokenSource.Dispose
void System::Threading::CancellationTokenSource::Dispose(bool disposing) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(disposing)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
}
// Autogenerated method: System.Threading.CancellationTokenSource.ThrowIfDisposed
void System::Threading::CancellationTokenSource::ThrowIfDisposed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("ThrowIfDisposed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ThrowIfDisposed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.ThrowObjectDisposedException
void System::Threading::CancellationTokenSource::ThrowObjectDisposedException() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("ThrowObjectDisposedException");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", "ThrowObjectDisposedException", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.InternalGetStaticSource
System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::InternalGetStaticSource(bool set) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("InternalGetStaticSource");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", "InternalGetStaticSource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(set)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::CancellationTokenSource*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, set);
}
// Autogenerated method: System.Threading.CancellationTokenSource.InternalRegister
System::Threading::CancellationTokenRegistration System::Threading::CancellationTokenSource::InternalRegister(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* executionContext) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("InternalRegister");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InternalRegister", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callback, stateForCallback, targetSyncContext, executionContext)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::CancellationTokenRegistration, false>(this, ___internal__method, callback, stateForCallback, targetSyncContext, executionContext);
}
// Autogenerated method: System.Threading.CancellationTokenSource.NotifyCancellation
void System::Threading::CancellationTokenSource::NotifyCancellation(bool throwOnFirstException) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("NotifyCancellation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "NotifyCancellation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(throwOnFirstException)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, throwOnFirstException);
}
// Autogenerated method: System.Threading.CancellationTokenSource.ExecuteCallbackHandlers
void System::Threading::CancellationTokenSource::ExecuteCallbackHandlers(bool throwOnFirstException) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("ExecuteCallbackHandlers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ExecuteCallbackHandlers", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(throwOnFirstException)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, throwOnFirstException);
}
// Autogenerated method: System.Threading.CancellationTokenSource.CancellationCallbackCoreWork_OnSyncContext
void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("CancellationCallbackCoreWork_OnSyncContext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CancellationCallbackCoreWork_OnSyncContext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obj);
}
// Autogenerated method: System.Threading.CancellationTokenSource.CancellationCallbackCoreWork
void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork(System::Threading::CancellationCallbackCoreWorkArguments args) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("CancellationCallbackCoreWork");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CancellationCallbackCoreWork", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args);
}
// Autogenerated method: System.Threading.CancellationTokenSource.CreateLinkedTokenSource
System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("CreateLinkedTokenSource");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", "CreateLinkedTokenSource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(token1, token2)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::CancellationTokenSource*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, token1, token2);
}
// Autogenerated method: System.Threading.CancellationTokenSource.WaitForCallbackToComplete
void System::Threading::CancellationTokenSource::WaitForCallbackToComplete(System::Threading::CancellationCallbackInfo* callbackInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("WaitForCallbackToComplete");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WaitForCallbackToComplete", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callbackInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, callbackInfo);
}
// Autogenerated method: System.Threading.CancellationTokenSource..cctor
void System::Threading::CancellationTokenSource::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "CancellationTokenSource", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Threading.CancellationTokenSource.Dispose
void System::Threading::CancellationTokenSource::Dispose() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("CancellationTokenSource").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void System::Threading::CancellationTokenSource::System_IDisposable_Dispose() {
  System::Threading::CancellationTokenSource::Dispose();
}
