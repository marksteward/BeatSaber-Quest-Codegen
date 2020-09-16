// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_0
#include "Zenject/PrefabResourceBindingFinalizer_--c__DisplayClass5_0.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_1
#include "Zenject/PrefabResourceBindingFinalizer_--c__DisplayClass5_1.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass6_0
#include "Zenject/PrefabResourceBindingFinalizer_--c__DisplayClass6_0.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass6_1
#include "Zenject/PrefabResourceBindingFinalizer_--c__DisplayClass6_1.hpp"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: System.Func`3
#include "System/Func_3.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.PrefabResourceBindingFinalizer..ctor
Zenject::PrefabResourceBindingFinalizer* Zenject::PrefabResourceBindingFinalizer::New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Il2CppString* resourcePath, System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>* providerFactory) {
  return THROW_UNLESS(il2cpp_utils::New<PrefabResourceBindingFinalizer*>(bindInfo, gameObjectBindInfo, resourcePath, providerFactory));
}
// Autogenerated method: Zenject.PrefabResourceBindingFinalizer.FinalizeBindingConcrete
void Zenject::PrefabResourceBindingFinalizer::FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingConcrete", container, concreteTypes));
}
// Autogenerated method: Zenject.PrefabResourceBindingFinalizer.FinalizeBindingSelf
void Zenject::PrefabResourceBindingFinalizer::FinalizeBindingSelf(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FinalizeBindingSelf", container));
}
// Autogenerated method: Zenject.PrefabResourceBindingFinalizer.OnFinalizeBinding
void Zenject::PrefabResourceBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFinalizeBinding", container));
}
