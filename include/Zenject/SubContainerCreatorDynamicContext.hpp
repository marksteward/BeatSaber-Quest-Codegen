// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorDynamicContext
  // [NoReflectionBakingAttribute] Offset: DDD3F4
  class SubContainerCreatorDynamicContext : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorDynamicContext
    SubContainerCreatorDynamicContext(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0x16E9F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorDynamicContext* New_ctor(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorDynamicContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorDynamicContext*, creationType>(container)));
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x16EB128
    Zenject::DiContainer* get_Container();
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x16EB130
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* parentContext);
    // protected System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFF
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context);
    // protected UnityEngine.GameObject CreateGameObject(out System.Boolean shouldMakeActive)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* CreateGameObject(bool& shouldMakeActive);
  }; // Zenject.SubContainerCreatorDynamicContext
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorDynamicContext), 16 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerCreatorDynamicContextSizeCheck;
  static_assert(sizeof(SubContainerCreatorDynamicContext) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorDynamicContext*, "Zenject", "SubContainerCreatorDynamicContext");
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::get_Container
// Il2CppName: get_Container
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::CreateSubContainer
// Il2CppName: CreateSubContainer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::AddInstallers
// Il2CppName: AddInstallers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::CreateGameObject
// Il2CppName: CreateGameObject
// Cannot perform method pointer template specialization from operators!
