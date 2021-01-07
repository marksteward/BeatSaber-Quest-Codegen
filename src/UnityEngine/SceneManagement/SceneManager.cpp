// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.SceneManager
#include "UnityEngine/SceneManagement/SceneManager.hpp"
// Including type: UnityEngine.Events.UnityAction`2
#include "UnityEngine/Events/UnityAction_2.hpp"
// Including type: UnityEngine.Events.UnityAction`1
#include "UnityEngine/Events/UnityAction_1.hpp"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
// Including type: UnityEngine.SceneManagement.UnloadSceneOptions
#include "UnityEngine/SceneManagement/UnloadSceneOptions.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneParameters
#include "UnityEngine/SceneManagement/LoadSceneParameters.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// [CompilerGeneratedAttribute] Offset: 0xD51750
// [DebuggerBrowsableAttribute] Offset: 0xD51750
// Autogenerated static field getter
// Get static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> sceneLoaded
UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* UnityEngine::SceneManagement::SceneManager::_get_sceneLoaded() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_get_sceneLoaded");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>*>("UnityEngine.SceneManagement", "SceneManager", "sceneLoaded")));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> sceneLoaded
void UnityEngine::SceneManagement::SceneManager::_set_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_set_sceneLoaded");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.SceneManagement", "SceneManager", "sceneLoaded", value));
}
// [CompilerGeneratedAttribute] Offset: 0xD5178C
// [DebuggerBrowsableAttribute] Offset: 0xD5178C
// Autogenerated static field getter
// Get static field: static private UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> sceneUnloaded
UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::_get_sceneUnloaded() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_get_sceneUnloaded");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>*>("UnityEngine.SceneManagement", "SceneManager", "sceneUnloaded"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> sceneUnloaded
void UnityEngine::SceneManagement::SceneManager::_set_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_set_sceneUnloaded");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.SceneManagement", "SceneManager", "sceneUnloaded", value));
}
// [DebuggerBrowsableAttribute] Offset: 0xD517C8
// [CompilerGeneratedAttribute] Offset: 0xD517C8
// Autogenerated static field getter
// Get static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> activeSceneChanged
UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::_get_activeSceneChanged() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_get_activeSceneChanged");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene>*>("UnityEngine.SceneManagement", "SceneManager", "activeSceneChanged")));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> activeSceneChanged
void UnityEngine::SceneManagement::SceneManager::_set_activeSceneChanged(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("_set_activeSceneChanged");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.SceneManagement", "SceneManager", "activeSceneChanged", value));
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.get_sceneCount
int UnityEngine::SceneManagement::SceneManager::get_sceneCount() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("get_sceneCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "get_sceneCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.get_sceneCountInBuildSettings
int UnityEngine::SceneManagement::SceneManager::get_sceneCountInBuildSettings() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("get_sceneCountInBuildSettings");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "get_sceneCountInBuildSettings", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetActiveScene
UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetActiveScene() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetActiveScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetActiveScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::SceneManagement::Scene, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.SetActiveScene
bool UnityEngine::SceneManagement::SceneManager::SetActiveScene(UnityEngine::SceneManagement::Scene scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("SetActiveScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "SetActiveScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetSceneByName
UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneByName(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetSceneByName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetSceneByName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::SceneManagement::Scene, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, name);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetSceneAt
UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneAt(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetSceneAt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetSceneAt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::SceneManagement::Scene, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, index);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.UnloadSceneAsyncInternal
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::UnloadSceneOptions options) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("UnloadSceneAsyncInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "UnloadSceneAsyncInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene, options)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene, options);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsyncNameIndexInternal
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsyncNameIndexInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsyncNameIndexInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.UnloadSceneNameIndexInternal
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, bool immediately, UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("UnloadSceneNameIndexInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "UnloadSceneNameIndexInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, sceneBuildIndex, immediately, options, outSuccess)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene
void UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene(UnityEngine::GameObject* go, UnityEngine::SceneManagement::Scene scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("MoveGameObjectToScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "MoveGameObjectToScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(go, scene)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, go, scene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.add_sceneLoaded
void UnityEngine::SceneManagement::SceneManager::add_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("add_sceneLoaded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "add_sceneLoaded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.remove_sceneLoaded
void UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("remove_sceneLoaded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "remove_sceneLoaded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadScene
void UnityEngine::SceneManagement::SceneManager::LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, mode)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, mode);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadScene
void UnityEngine::SceneManagement::SceneManager::LoadScene(::Il2CppString* sceneName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadScene
UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, parameters)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::SceneManagement::Scene, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, parameters);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadScene
void UnityEngine::SceneManagement::SceneManager::LoadScene(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneBuildIndex, mode)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneBuildIndex, mode);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadScene
UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::LoadScene(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadScene");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadScene", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneBuildIndex, parameters)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::SceneManagement::Scene, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneBuildIndex, parameters);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneBuildIndex, mode)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneBuildIndex, mode);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneBuildIndex, parameters)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneBuildIndex, parameters);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, mode)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, mode);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::Il2CppString* sceneName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, parameters)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, parameters);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(::Il2CppString* sceneName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("UnloadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "UnloadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(UnityEngine::SceneManagement::Scene scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("UnloadSceneAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "UnloadSceneAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.Internal_SceneLoaded
void UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("Internal_SceneLoaded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "Internal_SceneLoaded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene, mode)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene, mode);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.Internal_SceneUnloaded
void UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded(UnityEngine::SceneManagement::Scene scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("Internal_SceneUnloaded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "Internal_SceneUnloaded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.Internal_ActiveSceneChanged
void UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged(UnityEngine::SceneManagement::Scene previousActiveScene, UnityEngine::SceneManagement::Scene newActiveScene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("Internal_ActiveSceneChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "Internal_ActiveSceneChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(previousActiveScene, newActiveScene)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, previousActiveScene, newActiveScene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetActiveScene_Injected
void UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected(UnityEngine::SceneManagement::Scene& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetActiveScene_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetActiveScene_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, ret);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.SetActiveScene_Injected
bool UnityEngine::SceneManagement::SceneManager::SetActiveScene_Injected(UnityEngine::SceneManagement::Scene& scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("SetActiveScene_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "SetActiveScene_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetSceneByName_Injected
void UnityEngine::SceneManagement::SceneManager::GetSceneByName_Injected(::Il2CppString* name, UnityEngine::SceneManagement::Scene& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetSceneByName_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetSceneByName_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, name, ret);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.GetSceneAt_Injected
void UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected(int index, UnityEngine::SceneManagement::Scene& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("GetSceneAt_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "GetSceneAt_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, index, ret);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.UnloadSceneAsyncInternal_Injected
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine::SceneManagement::Scene& scene, UnityEngine::SceneManagement::UnloadSceneOptions options) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("UnloadSceneAsyncInternal_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "UnloadSceneAsyncInternal_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scene, options)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, scene, options);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.LoadSceneAsyncNameIndexInternal_Injected
UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal_Injected(::Il2CppString* sceneName, int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters& parameters, bool mustCompleteNextFrame) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("LoadSceneAsyncNameIndexInternal_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "LoadSceneAsyncNameIndexInternal_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::AsyncOperation*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
// Autogenerated method: UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene_Injected
void UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene_Injected(UnityEngine::GameObject* go, UnityEngine::SceneManagement::Scene& scene) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::SceneManagement").WithContext("SceneManager").WithContext("MoveGameObjectToScene_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.SceneManagement", "SceneManager", "MoveGameObjectToScene_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(go, scene)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, go, scene);
}
