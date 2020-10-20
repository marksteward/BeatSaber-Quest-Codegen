// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
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
  // Autogenerated type: Zenject.ResolveProvider
  class ResolveProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly System.Object _identifier
    // Offset: 0x10
    ::Il2CppObject* identifier;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // private readonly System.Type _contractType
    // Offset: 0x20
    System::Type* contractType;
    // private readonly System.Boolean _isOptional
    // Offset: 0x28
    bool isOptional;
    // private readonly Zenject.InjectSources _source
    // Offset: 0x2C
    Zenject::InjectSources source;
    // private readonly System.Boolean _matchAll
    // Offset: 0x30
    bool matchAll;
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(System.Type contractType, Zenject.DiContainer container, System.Object identifier, System.Boolean isOptional, Zenject.InjectSources source, System.Boolean matchAll)
    // Offset: 0x12EF624
    static ResolveProvider* New_ctor(System::Type* contractType, Zenject::DiContainer* container, ::Il2CppObject* identifier, bool isOptional, Zenject::InjectSources source, bool matchAll);
    // private Zenject.InjectContext GetSubContext(Zenject.InjectContext parent)
    // Offset: 0x12EF820
    Zenject::InjectContext* GetSubContext(Zenject::InjectContext* parent);
    // public System.Boolean get_IsCached()
    // Offset: 0x12EF6BC
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x12EF6C4
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x12EF6CC
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x12EF6D4
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ResolveProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ResolveProvider*, "Zenject", "ResolveProvider");
#pragma pack(pop)
