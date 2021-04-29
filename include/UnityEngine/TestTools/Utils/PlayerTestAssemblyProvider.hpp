// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyLoadProxy
  class IAssemblyLoadProxy;
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
  class PlayerTestAssemblyProvider : public ::Il2CppObject {
    public:
    // private UnityEngine.TestTools.Utils.IAssemblyLoadProxy m_AssemblyLoadProxy
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TestTools::Utils::IAssemblyLoadProxy* m_AssemblyLoadProxy;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Utils::IAssemblyLoadProxy*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.String> m_AssembliesToLoad
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesToLoad;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: PlayerTestAssemblyProvider
    PlayerTestAssemblyProvider(UnityEngine::TestTools::Utils::IAssemblyLoadProxy* m_AssemblyLoadProxy_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesToLoad_ = {}) noexcept : m_AssemblyLoadProxy{m_AssemblyLoadProxy_}, m_AssembliesToLoad{m_AssembliesToLoad_} {}
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* _get_m_LoadedAssemblies();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static void _set_m_LoadedAssemblies(System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* value);
    // System.Void .ctor(UnityEngine.TestTools.Utils.IAssemblyLoadProxy assemblyLoadProxy, System.Collections.Generic.List`1<System.String> assembliesToLoad)
    // Offset: 0x21A1F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTestAssemblyProvider* New_ctor(UnityEngine::TestTools::Utils::IAssemblyLoadProxy* assemblyLoadProxy, System::Collections::Generic::List_1<::Il2CppString*>* assembliesToLoad) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTestAssemblyProvider*, creationType>(assemblyLoadProxy, assembliesToLoad)));
    }
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> GetUserAssemblies()
    // Offset: 0x21A21E0
    System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* GetUserAssemblies();
    // private System.Void LoadAssemblies()
    // Offset: 0x21A1F54
    void LoadAssemblies();
  }; // UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
  #pragma pack(pop)
  static check_size<sizeof(PlayerTestAssemblyProvider), 24 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __UnityEngine_TestTools_Utils_PlayerTestAssemblyProviderSizeCheck;
  static_assert(sizeof(PlayerTestAssemblyProvider) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider*, "UnityEngine.TestTools.Utils", "PlayerTestAssemblyProvider");
