// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.DefaultGameObjectParentInstaller
  class DefaultGameObjectParentInstaller : public Zenject::Installer_2<::Il2CppString*, Zenject::DefaultGameObjectParentInstaller*> {
    public:
    // Nested type: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer
    class DefaultParentObjectDestroyer;
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DefaultGameObjectParentInstaller
    DefaultGameObjectParentInstaller(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(System.String name)
    // Offset: 0x12C9340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGameObjectParentInstaller* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DefaultGameObjectParentInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGameObjectParentInstaller*, creationType>(name)));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x12C93A4
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.DefaultGameObjectParentInstaller
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultGameObjectParentInstaller*, "Zenject", "DefaultGameObjectParentInstaller");
