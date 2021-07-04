// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.EmptyGameObjectProvider
  // [NoReflectionBakingAttribute] Offset: DDCF24
  class EmptyGameObjectProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: EmptyGameObjectProvider
    EmptyGameObjectProvider(Zenject::DiContainer* container_ = {}, Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}) noexcept : container{container_}, gameObjectBindInfo{gameObjectBindInfo_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x1634C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyGameObjectProvider* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::EmptyGameObjectProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyGameObjectProvider*, creationType>(container, gameObjectBindInfo)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x1634C4C
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x1634C54
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1634C5C
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x1634CCC
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.EmptyGameObjectProvider
  #pragma pack(pop)
  static check_size<sizeof(EmptyGameObjectProvider), 24 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_EmptyGameObjectProviderSizeCheck;
  static_assert(sizeof(EmptyGameObjectProvider) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::EmptyGameObjectProvider*, "Zenject", "EmptyGameObjectProvider");
// Writing MetadataGetter for method: Zenject::EmptyGameObjectProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::EmptyGameObjectProvider::get_IsCached
// Il2CppName: get_IsCached
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::EmptyGameObjectProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::EmptyGameObjectProvider::GetInstanceType
// Il2CppName: GetInstanceType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::EmptyGameObjectProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
// Cannot perform method pointer template specialization from operators!
