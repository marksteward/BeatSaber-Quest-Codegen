// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: SubContainerBinder
  class SubContainerBinder;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder
  class FromBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Nested type: Zenject::FromBinder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass28_0_1<TContract>
    template<typename TContract>
    class $$c__DisplayClass28_0_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: Zenject::FromBinder::$$c
    class $$c;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass53_0
    class $$c__DisplayClass53_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass56_0
    class $$c__DisplayClass56_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass57_0
    class $$c__DisplayClass57_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass58_0
    class $$c__DisplayClass58_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass59_0
    class $$c__DisplayClass59_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass59_1
    class $$c__DisplayClass59_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass60_0
    class $$c__DisplayClass60_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass60_1
    class $$c__DisplayClass60_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass60_2
    class $$c__DisplayClass60_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass61_0
    class $$c__DisplayClass61_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass61_1
    class $$c__DisplayClass61_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass61_2
    class $$c__DisplayClass61_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass62_0
    class $$c__DisplayClass62_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass62_1
    class $$c__DisplayClass62_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass62_2
    class $$c__DisplayClass62_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass63_0
    class $$c__DisplayClass63_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass64_0
    class $$c__DisplayClass64_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass64_1
    class $$c__DisplayClass64_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass65_0
    class $$c__DisplayClass65_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass65_1
    class $$c__DisplayClass65_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass65_2
    class $$c__DisplayClass65_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass66_0
    class $$c__DisplayClass66_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass66_1
    class $$c__DisplayClass66_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass66_2
    class $$c__DisplayClass66_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass67_0
    class $$c__DisplayClass67_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass68_0
    class $$c__DisplayClass68_0;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass69_0_1<TConcrete>
    template<typename TConcrete>
    class $$c__DisplayClass69_0_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass70_0_1<TConcrete>
    template<typename TConcrete>
    class $$c__DisplayClass70_0_1;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>
    template<typename TObj, typename TResult>
    class $$c__DisplayClass71_0_2;
    // Nested type: Zenject::FromBinder::$$c__DisplayClass72_0
    class $$c__DisplayClass72_0;
    // [CompilerGeneratedAttribute] Offset: 0xD0407C
    // private Zenject.DiContainer <BindContainer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Zenject::DiContainer* BindContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD0408C
    // private Zenject.BindStatement <BindStatement>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    Zenject::BindStatement* BindStatement;
    // Field size check
    static_assert(sizeof(Zenject::BindStatement*) == 0x8);
    // Creating value type constructor for type: FromBinder
    FromBinder(Zenject::DiContainer* BindContainer_ = {}, Zenject::BindStatement* BindStatement_ = {}) noexcept : BindContainer{BindContainer_}, BindStatement{BindStatement_} {}
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0x1481718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
    // protected Zenject.DiContainer get_BindContainer()
    // Offset: 0x1481754
    Zenject::DiContainer* get_BindContainer();
    // private System.Void set_BindContainer(Zenject.DiContainer value)
    // Offset: 0x148175C
    void set_BindContainer(Zenject::DiContainer* value);
    // protected Zenject.BindStatement get_BindStatement()
    // Offset: 0x1481764
    Zenject::BindStatement* get_BindStatement();
    // private System.Void set_BindStatement(Zenject.BindStatement value)
    // Offset: 0x148176C
    void set_BindStatement(Zenject::BindStatement* value);
    // protected System.Void set_SubFinalizer(Zenject.IBindingFinalizer value)
    // Offset: 0x1481774
    void set_SubFinalizer(Zenject::IBindingFinalizer* value);
    // protected System.Collections.Generic.IEnumerable`1<System.Type> get_AllParentTypes()
    // Offset: 0x1481790
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllParentTypes();
    // protected System.Collections.Generic.IEnumerable`1<System.Type> get_ConcreteTypes()
    // Offset: 0x14817F0
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ConcreteTypes();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNew()
    // Offset: 0x148187C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNew();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolve()
    // Offset: 0x14818B8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolve(System.Object subIdentifier)
    // Offset: 0x14818C8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::Il2CppObject* subIdentifier);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolve(System.Object subIdentifier, Zenject.InjectSources source)
    // Offset: 0x14818D4
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::Il2CppObject* subIdentifier, Zenject::InjectSources source);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAll()
    // Offset: 0x1481A18
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAll(System.Object subIdentifier)
    // Offset: 0x1481A28
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::Il2CppObject* subIdentifier);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAll(System.Object subIdentifier, Zenject.InjectSources source)
    // Offset: 0x1481A34
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::Il2CppObject* subIdentifier, Zenject::InjectSources source);
    // private Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveInternal(System.Object subIdentifier, System.Boolean matchAll, Zenject.InjectSources source)
    // Offset: 0x14818E0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveInternal(::Il2CppObject* subIdentifier, bool matchAll, Zenject::InjectSources source);
    // public Zenject.SubContainerBinder FromSubContainerResolveAll()
    // Offset: 0x1481A48
    Zenject::SubContainerBinder* FromSubContainerResolveAll();
    // public Zenject.SubContainerBinder FromSubContainerResolveAll(System.Object subIdentifier)
    // Offset: 0x1481A54
    Zenject::SubContainerBinder* FromSubContainerResolveAll(::Il2CppObject* subIdentifier);
    // public Zenject.SubContainerBinder FromSubContainerResolve()
    // Offset: 0x1481B0C
    Zenject::SubContainerBinder* FromSubContainerResolve();
    // public Zenject.SubContainerBinder FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0x1481B18
    Zenject::SubContainerBinder* FromSubContainerResolve(::Il2CppObject* subIdentifier);
    // private Zenject.SubContainerBinder FromSubContainerResolveInternal(System.Object subIdentifier, System.Boolean resolveAll)
    // Offset: 0x1481A5C
    Zenject::SubContainerBinder* FromSubContainerResolveInternal(::Il2CppObject* subIdentifier, bool resolveAll);
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactoryBase(System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactoryBase(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::FromIFactoryBase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromIFactoryBase", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(factoryBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, factoryBindGenerator);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsOn(UnityEngine.GameObject gameObject)
    // Offset: 0x1481B20
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x1481C68
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x1481DB0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x1481EE8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsOnRoot()
    // Offset: 0x1482020
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOnRoot();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentOnRoot()
    // Offset: 0x1482108
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOnRoot();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x14821F0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x1482338
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentSibling()
    // Offset: 0x1482474
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentSibling();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnRoot()
    // Offset: 0x1482580
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnRoot();
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefabResource(System.String resourcePath)
    // Offset: 0x1482668
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::Il2CppString* resourcePath);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefabResource(System.String resourcePath, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x14826DC
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::Il2CppString* resourcePath, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x1482874
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(UnityEngine::Object* prefab);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefab(UnityEngine.Object prefab, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x14828E8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(UnityEngine::Object* prefab, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x1482A80
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(UnityEngine::Object* prefab);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefab(UnityEngine.Object prefab, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x1482AF4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(UnityEngine::Object* prefab, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x1482C7C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(UnityEngine::Object* prefab);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInNewPrefab(UnityEngine.Object prefab, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x1482CF0
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(UnityEngine::Object* prefab, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefabResource(System.String resourcePath)
    // Offset: 0x1482E78
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::Il2CppString* resourcePath);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefabResource(System.String resourcePath, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x1482EEC
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::Il2CppString* resourcePath, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInNewPrefabResource(System.String resourcePath)
    // Offset: 0x1483074
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::Il2CppString* resourcePath);
    // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInNewPrefabResource(System.String resourcePath, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x14830E8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::Il2CppString* resourcePath, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewScriptableObject(UnityEngine.ScriptableObject resource)
    // Offset: 0x1483270
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObject(UnityEngine::ScriptableObject* resource);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromScriptableObject(UnityEngine.ScriptableObject resource)
    // Offset: 0x14833A8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObject(UnityEngine::ScriptableObject* resource);
    // private Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromScriptableObjectInternal(UnityEngine.ScriptableObject resource, System.Boolean createNew)
    // Offset: 0x1483278
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectInternal(UnityEngine::ScriptableObject* resource, bool createNew);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromNewScriptableObjectResource(System.String resourcePath)
    // Offset: 0x14833B8
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::Il2CppString* resourcePath);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromScriptableObjectResource(System.String resourcePath)
    // Offset: 0x14834FC
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResource(::Il2CppString* resourcePath);
    // private Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromScriptableObjectResourceInternal(System.String resourcePath, System.Boolean createNew)
    // Offset: 0x14833C0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResourceInternal(::Il2CppString* resourcePath, bool createNew);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResource(System.String resourcePath)
    // Offset: 0x148350C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResource(::Il2CppString* resourcePath);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResources(System.String resourcePath)
    // Offset: 0x1483634
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResources(::Il2CppString* resourcePath);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInChildren(System.Boolean includeInactive)
    // Offset: 0x148375C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInChildren(bool includeInactive);
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildrenBase(System.Boolean excludeSelf, System.Func`2<UnityEngine.Component,System.Boolean> predicate, System.Boolean includeInactive)
    // Offset: 0x1483870
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildrenBase(bool excludeSelf, System::Func_2<UnityEngine::Component*, bool>* predicate, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInParents(System.Boolean excludeSelf, System.Boolean includeInactive)
    // Offset: 0x14839A0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInParents(bool excludeSelf, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInParents(System.Boolean excludeSelf, System.Boolean includeInactive)
    // Offset: 0x1483AC0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInParents(bool excludeSelf, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentSibling()
    // Offset: 0x1483BE0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentSibling();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsSibling()
    // Offset: 0x1483D24
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsSibling();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInHierarchy(System.Boolean includeInactive)
    // Offset: 0x1483E68
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive);
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchyBase(System.Func`2<UnityEngine.Component,System.Boolean> predicate, System.Boolean includeInactive)
    // Offset: 0x1483F80
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchyBase(System::Func_2<UnityEngine::Component*, bool>* predicate, bool includeInactive);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodUntyped(System.Func`2<Zenject.InjectContext,System.Object> method)
    // Offset: 0x14840A0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodUntyped(System::Func_2<Zenject::InjectContext*, ::Il2CppObject*>* method);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultipleUntyped(System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<System.Object>> method)
    // Offset: 0x14841A0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultipleUntyped(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method);
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodBase(System.Func`2<Zenject.InjectContext,TConcrete> method)
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodBase(System::Func_2<Zenject::InjectContext*, TConcrete>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::FromMethodBase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethodBase", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultipleBase(System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<TConcrete>> method)
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultipleBase(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<TConcrete>*>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::FromMethodMultipleBase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethodMultipleBase", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, method);
    }
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetterBase(System.Object identifier, System.Func`2<TObj,TResult> method, Zenject.InjectSources source, System.Boolean matchMultiple)
    // Offset: 0xFFFFFFFF
    template<class TObj, class TResult>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetterBase(::Il2CppObject* identifier, System::Func_2<TObj, TResult>* method, Zenject::InjectSources source, bool matchMultiple) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::FromResolveGetterBase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveGetterBase", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier), ::il2cpp_utils::ExtractType(method), ::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(matchMultiple)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, identifier, method, source, matchMultiple);
    }
    // protected Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstanceBase(System.Object instance)
    // Offset: 0x14842A0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstanceBase(::Il2CppObject* instance);
    // private Zenject.IProvider <FromNewComponentSibling>b__37_0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x14843DC
    Zenject::IProvider* $FromNewComponentSibling$b__37_0(Zenject::DiContainer* container, System::Type* type);
  }; // Zenject.FromBinder
  #pragma pack(pop)
  static check_size<sizeof(FromBinder), 40 + sizeof(Zenject::BindStatement*)> __Zenject_FromBinderSizeCheck;
  static_assert(sizeof(FromBinder) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder*, "Zenject", "FromBinder");
