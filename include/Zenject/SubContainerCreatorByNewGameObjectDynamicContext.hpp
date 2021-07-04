// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorDynamicContext
#include "Zenject/SubContainerCreatorDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
  // [NoReflectionBakingAttribute] Offset: DDD284
  class SubContainerCreatorByNewGameObjectDynamicContext : public Zenject::SubContainerCreatorDynamicContext {
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewGameObjectDynamicContext
    SubContainerCreatorByNewGameObjectDynamicContext(Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}) noexcept : gameObjectBindInfo{gameObjectBindInfo_} {}
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x16E9F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewGameObjectDynamicContext* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectDynamicContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewGameObjectDynamicContext*, creationType>(container, gameObjectBindInfo)));
    }
    // protected override UnityEngine.GameObject CreateGameObject(out System.Boolean shouldMakeActive)
    // Offset: 0x16E9FBC
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: UnityEngine.GameObject SubContainerCreatorDynamicContext::CreateGameObject(out System.Boolean shouldMakeActive)
    UnityEngine::GameObject* CreateGameObject(bool& shouldMakeActive);
  }; // Zenject.SubContainerCreatorByNewGameObjectDynamicContext
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewGameObjectDynamicContext), 24 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_SubContainerCreatorByNewGameObjectDynamicContextSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewGameObjectDynamicContext) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectDynamicContext*, "Zenject", "SubContainerCreatorByNewGameObjectDynamicContext");
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewGameObjectDynamicContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject
// Il2CppName: CreateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::SubContainerCreatorByNewGameObjectDynamicContext::*)(bool&)>(&Zenject::SubContainerCreatorByNewGameObjectDynamicContext::CreateGameObject)> {
  const MethodInfo* get() {
    static auto* shouldMakeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewGameObjectDynamicContext*), "CreateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldMakeActive});
  }
};
