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
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
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
  // Autogenerated type: Zenject.InstantiateOnPrefabComponentProvider
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92860
  class InstantiateOnPrefabComponentProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.IPrefabInstantiator _prefabInstantiator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IPrefabInstantiator* prefabInstantiator;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabInstantiator*) == 0x8);
    // private readonly System.Type _componentType
    // Size: 0x8
    // Offset: 0x18
    System::Type* componentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: InstantiateOnPrefabComponentProvider
    InstantiateOnPrefabComponentProvider(Zenject::IPrefabInstantiator* prefabInstantiator_ = {}, System::Type* componentType_ = {}) noexcept : prefabInstantiator{prefabInstantiator_}, componentType{componentType_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(System.Type componentType, Zenject.IPrefabInstantiator prefabInstantiator)
    // Offset: 0x1296BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantiateOnPrefabComponentProvider* New_ctor(System::Type* componentType, Zenject::IPrefabInstantiator* prefabInstantiator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstantiateOnPrefabComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantiateOnPrefabComponentProvider*, creationType>(componentType, prefabInstantiator)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x12A24B8
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x12A24C0
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x12A24C8
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x12A24D0
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.InstantiateOnPrefabComponentProvider
  static check_size<sizeof(InstantiateOnPrefabComponentProvider), 24 + sizeof(System::Type*)> __Zenject_InstantiateOnPrefabComponentProviderSizeCheck;
  static_assert(sizeof(InstantiateOnPrefabComponentProvider) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstantiateOnPrefabComponentProvider*, "Zenject", "InstantiateOnPrefabComponentProvider");
