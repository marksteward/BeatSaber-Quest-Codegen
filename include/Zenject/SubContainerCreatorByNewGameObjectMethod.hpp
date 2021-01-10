// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
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
  // Size: 0x28
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92BF0
  class SubContainerCreatorByNewGameObjectMethod : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installerMethod
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewGameObjectMethod
    SubContainerCreatorByNewGameObjectMethod(System::Action_1<Zenject::DiContainer*>* installerMethod_ = {}) noexcept : installerMethod{installerMethod_} {}
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x1354900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewGameObjectMethod* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_1<Zenject::DiContainer*>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewGameObjectMethod*, creationType>(container, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0x13564F0
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context);
  }; // Zenject.SubContainerCreatorByNewGameObjectMethod
  static check_size<sizeof(SubContainerCreatorByNewGameObjectMethod), 32 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __Zenject_SubContainerCreatorByNewGameObjectMethodSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewGameObjectMethod) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectMethod*, "Zenject", "SubContainerCreatorByNewGameObjectMethod");
#pragma pack(pop)
