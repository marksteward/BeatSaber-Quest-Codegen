// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SFB.StandaloneFileBrowser
#include "SFB/StandaloneFileBrowser.hpp"
// Including type: SFB.IStandaloneFileBrowser
#include "SFB/IStandaloneFileBrowser.hpp"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
SFB::IStandaloneFileBrowser* SFB::StandaloneFileBrowser::_get__platformWrapper() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<SFB::IStandaloneFileBrowser*>("SFB", "StandaloneFileBrowser", "_platformWrapper"));
}
// Autogenerated static field setter
// Set static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
void SFB::StandaloneFileBrowser::_set__platformWrapper(SFB::IStandaloneFileBrowser* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("SFB", "StandaloneFileBrowser", "_platformWrapper", value));
}
// Autogenerated method: SFB.StandaloneFileBrowser..cctor
void SFB::StandaloneFileBrowser::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", ".cctor"));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFilePanel
::Array<::Il2CppString*>* SFB::StandaloneFileBrowser::OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>("SFB", "StandaloneFileBrowser", "OpenFilePanel", title, directory, extension, multiselect));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFilePanel
::Array<::Il2CppString*>* SFB::StandaloneFileBrowser::OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>("SFB", "StandaloneFileBrowser", "OpenFilePanel", title, directory, extensions, multiselect));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFilePanelAsync
void SFB::StandaloneFileBrowser::OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", "OpenFilePanelAsync", title, directory, extension, multiselect, cb));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFilePanelAsync
void SFB::StandaloneFileBrowser::OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", "OpenFilePanelAsync", title, directory, extensions, multiselect, cb));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFolderPanel
::Array<::Il2CppString*>* SFB::StandaloneFileBrowser::OpenFolderPanel(::Il2CppString* title, ::Il2CppString* directory, bool multiselect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>("SFB", "StandaloneFileBrowser", "OpenFolderPanel", title, directory, multiselect));
}
// Autogenerated method: SFB.StandaloneFileBrowser.OpenFolderPanelAsync
void SFB::StandaloneFileBrowser::OpenFolderPanelAsync(::Il2CppString* title, ::Il2CppString* directory, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", "OpenFolderPanelAsync", title, directory, multiselect, cb));
}
// Autogenerated method: SFB.StandaloneFileBrowser.SaveFilePanel
::Il2CppString* SFB::StandaloneFileBrowser::SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("SFB", "StandaloneFileBrowser", "SaveFilePanel", title, directory, defaultName, extension));
}
// Autogenerated method: SFB.StandaloneFileBrowser.SaveFilePanel
::Il2CppString* SFB::StandaloneFileBrowser::SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("SFB", "StandaloneFileBrowser", "SaveFilePanel", title, directory, defaultName, extensions));
}
// Autogenerated method: SFB.StandaloneFileBrowser.SaveFilePanelAsync
void SFB::StandaloneFileBrowser::SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension, System::Action_1<::Il2CppString*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", "SaveFilePanelAsync", title, directory, defaultName, extension, cb));
}
// Autogenerated method: SFB.StandaloneFileBrowser.SaveFilePanelAsync
void SFB::StandaloneFileBrowser::SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions, System::Action_1<::Il2CppString*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod("SFB", "StandaloneFileBrowser", "SaveFilePanelAsync", title, directory, defaultName, extensions, cb));
}
// Autogenerated method: SFB.StandaloneFileBrowser..ctor
SFB::StandaloneFileBrowser* SFB::StandaloneFileBrowser::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<StandaloneFileBrowser*>());
}
