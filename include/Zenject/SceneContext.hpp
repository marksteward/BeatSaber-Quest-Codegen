// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.RunnableContext
#include "Zenject/RunnableContext.hpp"
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
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: MonoBehaviour because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0xB2
  // Autogenerated type: Zenject.SceneContext
  // [] Offset: FFFFFFFF
  class SceneContext : public Zenject::RunnableContext {
    public:
    // Writing base type padding for base size: 0x42 to desired offset: 0x48
    char ___base_padding[0x6] = {};
    // Nested type: Zenject::SceneContext::$$c__DisplayClass48_0
    class $$c__DisplayClass48_0;
    // Nested type: Zenject::SceneContext::$$c
    class $$c;
    // Nested type: Zenject::SceneContext::$$c__DisplayClass50_0
    class $$c__DisplayClass50_0;
    // [CompilerGeneratedAttribute] Offset: 0xD946B0
    // private System.Action PreInstall
    // Size: 0x8
    // Offset: 0x48
    System::Action* PreInstall;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD946C0
    // private System.Action PostInstall
    // Size: 0x8
    // Offset: 0x50
    System::Action* PostInstall;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD946D0
    // private System.Action PreResolve
    // Size: 0x8
    // Offset: 0x58
    System::Action* PreResolve;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD946E0
    // private System.Action PostResolve
    // Size: 0x8
    // Offset: 0x60
    System::Action* PostResolve;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPreInstall
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Events::UnityEvent* OnPreInstall;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPostInstall
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Events::UnityEvent* OnPostInstall;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPreResolve
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Events::UnityEvent* OnPreResolve;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPostResolve
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Events::UnityEvent* OnPostResolve;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD946F0
    // [FormerlySerializedAsAttribute] Offset: 0xD946F0
    // [TooltipAttribute] Offset: 0xD946F0
    // private System.Boolean _parentNewObjectsUnderSceneContext
    // Size: 0x1
    // Offset: 0x88
    bool parentNewObjectsUnderSceneContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: parentNewObjectsUnderSceneContext and: contractNames
    char __padding8[0x7] = {};
    // [TooltipAttribute] Offset: 0xD94784
    // private System.Collections.Generic.List`1<System.String> _contractNames
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::List_1<::Il2CppString*>* contractNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD947D0
    // private System.Collections.Generic.List`1<System.String> _parentContractNames
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::List_1<::Il2CppString*>* parentContractNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0xA0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> _decoratorContexts
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>* decoratorContexts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>*) == 0x8);
    // private System.Boolean _hasInstalled
    // Size: 0x1
    // Offset: 0xB0
    bool hasInstalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasResolved
    // Size: 0x1
    // Offset: 0xB1
    bool hasResolved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SceneContext
    SceneContext(System::Action* PreInstall_ = {}, System::Action* PostInstall_ = {}, System::Action* PreResolve_ = {}, System::Action* PostResolve_ = {}, UnityEngine::Events::UnityEvent* OnPreInstall_ = {}, UnityEngine::Events::UnityEvent* OnPostInstall_ = {}, UnityEngine::Events::UnityEvent* OnPreResolve_ = {}, UnityEngine::Events::UnityEvent* OnPostResolve_ = {}, bool parentNewObjectsUnderSceneContext_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* contractNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* parentContractNames_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>* decoratorContexts_ = {}, bool hasInstalled_ = {}, bool hasResolved_ = {}) noexcept : PreInstall{PreInstall_}, PostInstall{PostInstall_}, PreResolve{PreResolve_}, PostResolve{PostResolve_}, OnPreInstall{OnPreInstall_}, OnPostInstall{OnPostInstall_}, OnPreResolve{OnPreResolve_}, OnPostResolve{OnPostResolve_}, parentNewObjectsUnderSceneContext{parentNewObjectsUnderSceneContext_}, contractNames{contractNames_}, parentContractNames{parentContractNames_}, container{container_}, decoratorContexts{decoratorContexts_}, hasInstalled{hasInstalled_}, hasResolved{hasResolved_} {}
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsEarlyInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static void _set_ExtraBindingsEarlyInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static void _set_ExtraBindingsInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsLateInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static void _set_ExtraBindingsLateInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* _get_ParentContainers();
    // Set static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static void _set_ParentContainers(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* value);
    // public System.Void add_PreInstall(System.Action value)
    // Offset: 0x134F3EC
    void add_PreInstall(System::Action* value);
    // public System.Void remove_PreInstall(System.Action value)
    // Offset: 0x134F490
    void remove_PreInstall(System::Action* value);
    // public System.Void add_PostInstall(System.Action value)
    // Offset: 0x134F534
    void add_PostInstall(System::Action* value);
    // public System.Void remove_PostInstall(System.Action value)
    // Offset: 0x134F5D8
    void remove_PostInstall(System::Action* value);
    // public System.Void add_PreResolve(System.Action value)
    // Offset: 0x134F67C
    void add_PreResolve(System::Action* value);
    // public System.Void remove_PreResolve(System.Action value)
    // Offset: 0x134F720
    void remove_PreResolve(System::Action* value);
    // public System.Void add_PostResolve(System.Action value)
    // Offset: 0x134F7C4
    void add_PostResolve(System::Action* value);
    // public System.Void remove_PostResolve(System.Action value)
    // Offset: 0x134F868
    void remove_PostResolve(System::Action* value);
    // public System.Boolean get_HasResolved()
    // Offset: 0x134F914
    bool get_HasResolved();
    // public System.Boolean get_HasInstalled()
    // Offset: 0x134F91C
    bool get_HasInstalled();
    // public System.Boolean get_IsValidating()
    // Offset: 0x134F924
    bool get_IsValidating();
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ContractNames()
    // Offset: 0x134F954
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* get_ContractNames();
    // public System.Void set_ContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0x134F95C
    void set_ContractNames(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* value);
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ParentContractNames()
    // Offset: 0x134F9DC
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* get_ParentContractNames();
    // public System.Void set_ParentContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0x134FA64
    void set_ParentContractNames(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* value);
    // public System.Boolean get_ParentNewObjectsUnderSceneContext()
    // Offset: 0x134FAD0
    bool get_ParentNewObjectsUnderSceneContext();
    // public System.Void set_ParentNewObjectsUnderSceneContext(System.Boolean value)
    // Offset: 0x134FAD8
    void set_ParentNewObjectsUnderSceneContext(bool value);
    // public System.Void Awake()
    // Offset: 0x134FAE4
    void Awake();
    // public System.Void Validate()
    // Offset: 0x134FAE8
    void Validate();
    // private System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> GetParentContainers()
    // Offset: 0x13500C0
    System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* GetParentContainers();
    // private System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> LookupDecoratorContexts()
    // Offset: 0x1350640
    System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>* LookupDecoratorContexts();
    // public System.Void Install()
    // Offset: 0x134FB20
    void Install();
    // public System.Void Resolve()
    // Offset: 0x134FFC0
    void Resolve();
    // private System.Void InstallBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0x1350A50
    void InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // static public Zenject.SceneContext Create()
    // Offset: 0x13511E0
    static Zenject::SceneContext* Create();
    // private System.Boolean <LookupDecoratorContexts>b__49_2(Zenject.SceneDecoratorContext decoratorContext)
    // Offset: 0x1351384
    bool $LookupDecoratorContexts$b__49_2(Zenject::SceneDecoratorContext* decoratorContext);
    // public override Zenject.DiContainer get_Container()
    // Offset: 0x134F90C
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    Zenject::DiContainer* get_Container();
    // protected override System.Void RunInternal()
    // Offset: 0x1350060
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::RunInternal()
    void RunInternal();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0x1350094
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x1351198
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
    // public System.Void .ctor()
    // Offset: 0x1351274
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::.ctor()
    // Base method: System.Void Context::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext*, creationType>()));
    }
  }; // Zenject.SceneContext
  static check_size<sizeof(SceneContext), 177 + sizeof(bool)> __Zenject_SceneContextSizeCheck;
  static_assert(sizeof(SceneContext) == 0xB2);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext*, "Zenject", "SceneContext");
#pragma pack(pop)
