// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Zenject.ActionInstaller
#include "Zenject/ActionInstaller.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ActionInstaller..ctor
Zenject::ActionInstaller* Zenject::ActionInstaller::New_ctor(System::Action_1<Zenject::DiContainer*>* installMethod) {
  return THROW_UNLESS(il2cpp_utils::New<ActionInstaller*>(installMethod));
}
// Autogenerated method: Zenject.ActionInstaller.InstallBindings
void Zenject::ActionInstaller::InstallBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallBindings"));
}
