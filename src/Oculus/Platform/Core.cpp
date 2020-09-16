// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Core
#include "Oculus/Platform/Core.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.PlatformInitialize
#include "Oculus/Platform/Models/PlatformInitialize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Boolean IsPlatformInitialized
bool Oculus::Platform::Core::_get_IsPlatformInitialized() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("Oculus.Platform", "Core", "IsPlatformInitialized"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean IsPlatformInitialized
void Oculus::Platform::Core::_set_IsPlatformInitialized(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Core", "IsPlatformInitialized", value));
}
// Autogenerated static field getter
// Get static field: static public System.Boolean LogMessages
bool Oculus::Platform::Core::_get_LogMessages() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("Oculus.Platform", "Core", "LogMessages"));
}
// Autogenerated static field setter
// Set static field: static public System.Boolean LogMessages
void Oculus::Platform::Core::_set_LogMessages(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Core", "LogMessages", value));
}
// Autogenerated method: Oculus.Platform.Core.IsInitialized
bool Oculus::Platform::Core::IsInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Oculus.Platform", "Core", "IsInitialized"));
}
// Autogenerated method: Oculus.Platform.Core.ForceInitialized
void Oculus::Platform::Core::ForceInitialized() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Core", "ForceInitialized"));
}
// Autogenerated method: Oculus.Platform.Core.getAppID
::Il2CppString* Oculus::Platform::Core::getAppID(::Il2CppString* appId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Oculus.Platform", "Core", "getAppID", appId));
}
// Autogenerated method: Oculus.Platform.Core.AsyncInitialize
Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::Core::AsyncInitialize(::Il2CppString* appId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>*>("Oculus.Platform", "Core", "AsyncInitialize", appId));
}
// Autogenerated method: Oculus.Platform.Core.Initialize
void Oculus::Platform::Core::Initialize(::Il2CppString* appId) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Core", "Initialize", appId));
}
// Autogenerated method: Oculus.Platform.Core.GetAppIDFromConfig
::Il2CppString* Oculus::Platform::Core::GetAppIDFromConfig() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Oculus.Platform", "Core", "GetAppIDFromConfig"));
}
// Autogenerated method: Oculus.Platform.Core..cctor
void Oculus::Platform::Core::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Core", ".cctor"));
}
// Autogenerated method: Oculus.Platform.Core..ctor
Oculus::Platform::Core* Oculus::Platform::Core::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Core*>());
}
