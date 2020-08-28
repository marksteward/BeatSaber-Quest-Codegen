// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabFactory`1
  template<typename T>
  class PrefabFactory_1 : public ::Il2CppObject, public Zenject::IFactory_2<UnityEngine::Object*, T> {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const {
      return container;
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`2
    // Base method: TValue IFactory`2::Create(UnityEngine.Object prefab)
    T Create(UnityEngine::Object* prefab) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefab));
    }
    // Creating proxy method: Zenject_IFactory_2_Create
    // Maps to method: Create
    T Zenject_IFactory_2_Create(UnityEngine::Object* prefab) {
      return Create(prefab);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabFactory_1<T>* New_ctor() {
      return (PrefabFactory_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_1<T>*>::get()));
    }
  }; // Zenject.PrefabFactory`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_1, "Zenject", "PrefabFactory`1");
#pragma pack(pop)
