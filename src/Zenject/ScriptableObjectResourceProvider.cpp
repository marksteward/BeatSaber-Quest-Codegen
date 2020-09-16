// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectResourceProvider
#include "Zenject/ScriptableObjectResourceProvider.hpp"
// Including type: Zenject.ScriptableObjectResourceProvider/<>c__DisplayClass13_0
#include "Zenject/ScriptableObjectResourceProvider_--c__DisplayClass13_0.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ScriptableObjectResourceProvider..ctor
Zenject::ScriptableObjectResourceProvider* Zenject::ScriptableObjectResourceProvider::New_ctor(::Il2CppString* resourcePath, System::Type* resourceType, Zenject::DiContainer* container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, bool createNew, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
  return THROW_UNLESS(il2cpp_utils::New<ScriptableObjectResourceProvider*>(resourcePath, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback));
}
// Autogenerated method: Zenject.ScriptableObjectResourceProvider.get_IsCached
bool Zenject::ScriptableObjectResourceProvider::get_IsCached() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
}
// Autogenerated method: Zenject.ScriptableObjectResourceProvider.get_TypeVariesBasedOnMemberType
bool Zenject::ScriptableObjectResourceProvider::get_TypeVariesBasedOnMemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
}
// Autogenerated method: Zenject.ScriptableObjectResourceProvider.GetInstanceType
System::Type* Zenject::ScriptableObjectResourceProvider::GetInstanceType(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
}
// Autogenerated method: Zenject.ScriptableObjectResourceProvider.GetAllInstancesWithInjectSplit
void Zenject::ScriptableObjectResourceProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
}
