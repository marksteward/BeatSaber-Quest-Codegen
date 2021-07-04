// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal
  class ZenUtilInternal : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ZenUtilInternal::$$c
    class $$c;
    // Nested type: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3
    class $GetAllSceneContexts$d__3;
    // Nested type: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Creating value type constructor for type: ZenUtilInternal
    ZenUtilInternal() noexcept {}
    // static public System.Boolean IsNull(System.Object obj)
    // Offset: 0x16DA994
    static bool IsNull(::Il2CppObject* obj);
    // static public System.Boolean AreFunctionsEqual(System.Delegate left, System.Delegate right)
    // Offset: 0x16DA9B0
    static bool AreFunctionsEqual(System::Delegate* left, System::Delegate* right);
    // static public System.Int32 GetInheritanceDelta(System.Type derived, System.Type parent)
    // Offset: 0x16DAA74
    static int GetInheritanceDelta(System::Type* derived, System::Type* parent);
    // static public System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> GetAllSceneContexts()
    // Offset: 0x16DABB4
    static System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* GetAllSceneContexts();
    // static public System.Void AddStateMachineBehaviourAutoInjectersInScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16DAC5C
    static void AddStateMachineBehaviourAutoInjectersInScene(UnityEngine::SceneManagement::Scene scene);
    // static public System.Void AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine.GameObject root)
    // Offset: 0x16DB0A0
    static void AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine::GameObject* root);
    // static public System.Void GetInjectableMonoBehavioursInScene(UnityEngine.SceneManagement.Scene scene, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x16DB1DC
    static void GetInjectableMonoBehavioursInScene(UnityEngine::SceneManagement::Scene scene, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
    // static public System.Void GetInjectableMonoBehavioursUnderGameObject(UnityEngine.GameObject gameObject, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableComponents)
    // Offset: 0x16DB76C
    static void GetInjectableMonoBehavioursUnderGameObject(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents);
    // static private System.Void GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine.GameObject gameObject, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableComponents)
    // Offset: 0x16DB488
    static void GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents);
    // static public System.Boolean IsInjectableMonoBehaviourType(System.Type type)
    // Offset: 0x16DB770
    static bool IsInjectableMonoBehaviourType(System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16DAF00
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects(UnityEngine::SceneManagement::Scene scene);
  }; // Zenject.Internal.ZenUtilInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal*, "Zenject.Internal", "ZenUtilInternal");
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::IsNull
// Il2CppName: IsNull
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AreFunctionsEqual
// Il2CppName: AreFunctionsEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInheritanceDelta
// Il2CppName: GetInheritanceDelta
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetAllSceneContexts
// Il2CppName: GetAllSceneContexts
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene
// Il2CppName: AddStateMachineBehaviourAutoInjectersInScene
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject
// Il2CppName: AddStateMachineBehaviourAutoInjectersUnderGameObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene
// Il2CppName: GetInjectableMonoBehavioursInScene
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject
// Il2CppName: GetInjectableMonoBehavioursUnderGameObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal
// Il2CppName: GetInjectableMonoBehavioursUnderGameObjectInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType
// Il2CppName: IsInjectableMonoBehaviourType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetRootGameObjects
// Il2CppName: GetRootGameObjects
// Cannot perform method pointer template specialization from operators!
