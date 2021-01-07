// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventListener
#include "System/Diagnostics/Tracing/EventListener.hpp"
// Including type: System.EventHandler`1
#include "System/EventHandler_1.hpp"
// Including type: System.Diagnostics.Tracing.EventSourceCreatedEventArgs
#include "System/Diagnostics/Tracing/EventSourceCreatedEventArgs.hpp"
// Including type: System.Diagnostics.Tracing.EventWrittenEventArgs
#include "System/Diagnostics/Tracing/EventWrittenEventArgs.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.WeakReference
#include "System/WeakReference.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Object s_EventSourceCreatedLock
::Il2CppObject* System::Diagnostics::Tracing::EventListener::_get_s_EventSourceCreatedLock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_get_s_EventSourceCreatedLock");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("System.Diagnostics.Tracing", "EventListener", "s_EventSourceCreatedLock"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Object s_EventSourceCreatedLock
void System::Diagnostics::Tracing::EventListener::_set_s_EventSourceCreatedLock(::Il2CppObject* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_set_s_EventSourceCreatedLock");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventListener", "s_EventSourceCreatedLock", value));
}
// Autogenerated static field getter
// Get static field: static System.Diagnostics.Tracing.EventListener s_Listeners
System::Diagnostics::Tracing::EventListener* System::Diagnostics::Tracing::EventListener::_get_s_Listeners() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_get_s_Listeners");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Diagnostics::Tracing::EventListener*>("System.Diagnostics.Tracing", "EventListener", "s_Listeners"));
}
// Autogenerated static field setter
// Set static field: static System.Diagnostics.Tracing.EventListener s_Listeners
void System::Diagnostics::Tracing::EventListener::_set_s_Listeners(System::Diagnostics::Tracing::EventListener* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_set_s_Listeners");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventListener", "s_Listeners", value));
}
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
System::Collections::Generic::List_1<System::WeakReference*>* System::Diagnostics::Tracing::EventListener::_get_s_EventSources() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_get_s_EventSources");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<System::WeakReference*>*>("System.Diagnostics.Tracing", "EventListener", "s_EventSources"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.List`1<System.WeakReference> s_EventSources
void System::Diagnostics::Tracing::EventListener::_set_s_EventSources(System::Collections::Generic::List_1<System::WeakReference*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_set_s_EventSources");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventListener", "s_EventSources", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean s_CreatingListener
bool System::Diagnostics::Tracing::EventListener::_get_s_CreatingListener() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_get_s_CreatingListener");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Diagnostics.Tracing", "EventListener", "s_CreatingListener"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean s_CreatingListener
void System::Diagnostics::Tracing::EventListener::_set_s_CreatingListener(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_set_s_CreatingListener");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventListener", "s_CreatingListener", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean s_EventSourceShutdownRegistered
bool System::Diagnostics::Tracing::EventListener::_get_s_EventSourceShutdownRegistered() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_get_s_EventSourceShutdownRegistered");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Diagnostics.Tracing", "EventListener", "s_EventSourceShutdownRegistered"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean s_EventSourceShutdownRegistered
void System::Diagnostics::Tracing::EventListener::_set_s_EventSourceShutdownRegistered(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("_set_s_EventSourceShutdownRegistered");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventListener", "s_EventSourceShutdownRegistered", value));
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener.OnEventSourceCreated
void System::Diagnostics::Tracing::EventListener::OnEventSourceCreated(System::Diagnostics::Tracing::EventSource* eventSource) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("OnEventSourceCreated");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEventSourceCreated", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(eventSource)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventSource);
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener.OnEventWritten
void System::Diagnostics::Tracing::EventListener::OnEventWritten(System::Diagnostics::Tracing::EventWrittenEventArgs* eventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("OnEventWritten");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEventWritten", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(eventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventData);
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener.AddEventSource
void System::Diagnostics::Tracing::EventListener::AddEventSource(System::Diagnostics::Tracing::EventSource* newEventSource) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("AddEventSource");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "EventListener", "AddEventSource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(newEventSource)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, newEventSource);
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener.DisposeOnShutdown
void System::Diagnostics::Tracing::EventListener::DisposeOnShutdown(::Il2CppObject* sender, System::EventArgs* e) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("DisposeOnShutdown");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "EventListener", "DisposeOnShutdown", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sender, e)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sender, e);
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener.get_EventListenersLock
::Il2CppObject* System::Diagnostics::Tracing::EventListener::get_EventListenersLock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext("get_EventListenersLock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "EventListener", "get_EventListenersLock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Diagnostics.Tracing.EventListener..cctor
void System::Diagnostics::Tracing::EventListener::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("EventListener").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Diagnostics.Tracing", "EventListener", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
