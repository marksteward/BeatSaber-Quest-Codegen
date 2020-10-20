// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabWithParams
  class SubContainerCreatorByNewPrefabWithParams : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Offset: 0x18
    Zenject::IPrefabProvider* prefabProvider;
    // private readonly System.Type _installerType
    // Offset: 0x20
    System::Type* installerType;
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Offset: 0x28
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // public System.Void .ctor(System.Type installerType, Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x12F7458
    static SubContainerCreatorByNewPrefabWithParams* New_ctor(System::Type* installerType, Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo);
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x12F74D8
    Zenject::DiContainer* get_Container();
    // private Zenject.DiContainer CreateTempContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0x12F74E0
    Zenject::DiContainer* CreateTempContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x12F78E4
    // Implemented from: Zenject.ISubContainerCreator
    // Base method: Zenject.DiContainer ISubContainerCreator::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* parentContext);
  }; // Zenject.SubContainerCreatorByNewPrefabWithParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabWithParams*, "Zenject", "SubContainerCreatorByNewPrefabWithParams");
#pragma pack(pop)
