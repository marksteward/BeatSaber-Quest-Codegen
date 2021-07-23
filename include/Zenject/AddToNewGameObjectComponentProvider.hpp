// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AddToGameObjectComponentProviderBase
#include "Zenject/AddToGameObjectComponentProviderBase.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AddToNewGameObjectComponentProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class AddToNewGameObjectComponentProvider : public Zenject::AddToGameObjectComponentProviderBase {
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x38
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: AddToNewGameObjectComponentProvider
    AddToNewGameObjectComponentProvider(Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}) noexcept : gameObjectBindInfo{gameObjectBindInfo_} {}
    // Creating conversion operator: operator Zenject::GameObjectCreationParameters*
    constexpr operator Zenject::GameObjectCreationParameters*() const noexcept {
      return gameObjectBindInfo;
    }
    // Get instance field: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    Zenject::GameObjectCreationParameters* _get__gameObjectBindInfo();
    // Set instance field: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    void _set__gameObjectBindInfo(Zenject::GameObjectCreationParameters* value);
    // public System.Void .ctor(Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x1378850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddToNewGameObjectComponentProvider* New_ctor(Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AddToNewGameObjectComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddToNewGameObjectComponentProvider*, creationType>(container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback)));
    }
    // protected override System.Boolean get_ShouldToggleActive()
    // Offset: 0x1378880
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: System.Boolean AddToGameObjectComponentProviderBase::get_ShouldToggleActive()
    bool get_ShouldToggleActive();
    // protected override UnityEngine.GameObject GetGameObject(Zenject.InjectContext context)
    // Offset: 0x1378888
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: UnityEngine.GameObject AddToGameObjectComponentProviderBase::GetGameObject(Zenject.InjectContext context)
    UnityEngine::GameObject* GetGameObject(Zenject::InjectContext* context);
  }; // Zenject.AddToNewGameObjectComponentProvider
  #pragma pack(pop)
  static check_size<sizeof(AddToNewGameObjectComponentProvider), 56 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_AddToNewGameObjectComponentProviderSizeCheck;
  static_assert(sizeof(AddToNewGameObjectComponentProvider) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToNewGameObjectComponentProvider*, "Zenject", "AddToNewGameObjectComponentProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AddToNewGameObjectComponentProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive
// Il2CppName: get_ShouldToggleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToNewGameObjectComponentProvider::*)()>(&Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToNewGameObjectComponentProvider*), "get_ShouldToggleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToNewGameObjectComponentProvider::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::AddToNewGameObjectComponentProvider::*)(Zenject::InjectContext*)>(&Zenject::AddToNewGameObjectComponentProvider::GetGameObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToNewGameObjectComponentProvider*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
