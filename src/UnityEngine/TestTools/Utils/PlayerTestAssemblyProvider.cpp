// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
#include "UnityEngine/TestTools/Utils/PlayerTestAssemblyProvider.hpp"
// Including type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
#include "UnityEngine/TestTools/Utils/IAssemblyLoadProxy.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.TestTools.Utils.IAssemblyWrapper
#include "UnityEngine/TestTools/Utils/IAssemblyWrapper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::_get_m_LoadedAssemblies() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>*>("UnityEngine.TestTools.Utils", "PlayerTestAssemblyProvider", "m_LoadedAssemblies"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
void UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::_set_m_LoadedAssemblies(System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.TestTools.Utils", "PlayerTestAssemblyProvider", "m_LoadedAssemblies", value));
}
// Autogenerated method: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider..ctor
UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider* UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::New_ctor(UnityEngine::TestTools::Utils::IAssemblyLoadProxy* assemblyLoadProxy, System::Collections::Generic::List_1<::Il2CppString*>* assembliesToLoad) {
  return THROW_UNLESS(il2cpp_utils::New<PlayerTestAssemblyProvider*>(assemblyLoadProxy, assembliesToLoad));
}
// Autogenerated method: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider.GetUserAssemblies
System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::GetUserAssemblies() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>*>(this, "GetUserAssemblies"));
}
// Autogenerated method: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider.LoadAssemblies
void UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::LoadAssemblies() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LoadAssemblies"));
}
