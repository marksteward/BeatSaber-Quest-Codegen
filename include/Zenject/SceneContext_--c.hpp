// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93D18
  class SceneContext::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.SceneContext/<>c <>9
    static Zenject::SceneContext::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.SceneContext/<>c <>9
    static void _set_$$9(Zenject::SceneContext::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__48_0
    static System::Func_2<UnityEngine::SceneManagement::Scene, System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>* _get_$$9__48_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__48_0
    static void _set_$$9__48_0(System::Func_2<UnityEngine::SceneManagement::Scene, System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__48_1
    static System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* _get_$$9__48_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__48_1
    static void _set_$$9__48_1(System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* value);
    // Get static field: static public System.Func`2<Zenject.SceneContext,Zenject.DiContainer> <>9__48_3
    static System::Func_2<Zenject::SceneContext*, Zenject::DiContainer*>* _get_$$9__48_3();
    // Set static field: static public System.Func`2<Zenject.SceneContext,Zenject.DiContainer> <>9__48_3
    static void _set_$$9__48_3(System::Func_2<Zenject::SceneContext*, Zenject::DiContainer*>* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__49_0
    static System::Func_2<UnityEngine::SceneManagement::Scene, System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>* _get_$$9__49_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>> <>9__49_0
    static void _set_$$9__49_0(System::Func_2<UnityEngine::SceneManagement::Scene, System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext>> <>9__49_1
    static System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneDecoratorContext*>*>* _get_$$9__49_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext>> <>9__49_1
    static void _set_$$9__49_1(System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneDecoratorContext*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13513F0
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> <GetParentContainers>b__48_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1351460
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* $GetParentContainers$b__48_0(UnityEngine::SceneManagement::Scene scene);
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> <GetParentContainers>b__48_1(UnityEngine.GameObject root)
    // Offset: 0x1351488
    System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* $GetParentContainers$b__48_1(UnityEngine::GameObject* root);
    // Zenject.DiContainer <GetParentContainers>b__48_3(Zenject.SceneContext x)
    // Offset: 0x13514E0
    Zenject::DiContainer* $GetParentContainers$b__48_3(Zenject::SceneContext* x);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> <LookupDecoratorContexts>b__49_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1351500
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* $LookupDecoratorContexts$b__49_0(UnityEngine::SceneManagement::Scene scene);
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneDecoratorContext> <LookupDecoratorContexts>b__49_1(UnityEngine.GameObject root)
    // Offset: 0x1351528
    System::Collections::Generic::IEnumerable_1<Zenject::SceneDecoratorContext*>* $LookupDecoratorContexts$b__49_1(UnityEngine::GameObject* root);
    // public System.Void .ctor()
    // Offset: 0x1351458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContext::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c*, creationType>()));
    }
  }; // Zenject.SceneContext/<>c
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c*, "Zenject", "SceneContext/<>c");
