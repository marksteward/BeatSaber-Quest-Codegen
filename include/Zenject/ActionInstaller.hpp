// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ActionInstaller
  class ActionInstaller : public Zenject::Installer_1<Zenject::ActionInstaller*> {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* installMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: ActionInstaller
    ActionInstaller(System::Action_1<Zenject::DiContainer*>* installMethod_ = {}) noexcept : installMethod{installMethod_} {}
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0x12BFD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionInstaller* New_ctor(System::Action_1<Zenject::DiContainer*>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ActionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionInstaller*, creationType>(installMethod)));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x12BFDCC
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ActionInstaller
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
