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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceFactory`1
  template<typename T>
  class PrefabResourceFactory_1 : public ::Il2CppObject/*, public Zenject::IFactory_2<::Il2CppString*, T>*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Creating interface conversion operator: operator Zenject::IFactory_2<::Il2CppString*, T>
    operator Zenject::IFactory_2<::Il2CppString*, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_2<::Il2CppString*, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`2
    // Base method: TValue IFactory_2::Create(System.String prefabResourceName)
    T Create(::Il2CppString* prefabResourceName) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName));
    }
    // Creating proxy method: Zenject_IFactory_2_Create
    // Maps to method: Create
    T Zenject_IFactory_2_Create(::Il2CppString* prefabResourceName) {
      return Create(prefabResourceName);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<PrefabResourceFactory_1<T>*>());
    }
  }; // Zenject.PrefabResourceFactory`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_1, "Zenject", "PrefabResourceFactory`1");
#pragma pack(pop)
