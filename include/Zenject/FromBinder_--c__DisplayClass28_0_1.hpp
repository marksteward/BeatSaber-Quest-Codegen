// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass28_0`1
  template<typename TContract>
  class FromBinder::$$c__DisplayClass28_0_1 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const {
      return factoryId;
    }
    // Zenject.IProvider <FromIFactoryBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactoryBase$b__0(Zenject::DiContainer* container, System::Type* type) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactoryBase>b__0", container, type)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass28_0_1<TContract>* New_ctor() {
      return (FromBinder::$$c__DisplayClass28_0_1<TContract>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinder::$$c__DisplayClass28_0_1<TContract>*>::get()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass28_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinder::$$c__DisplayClass28_0_1, "Zenject", "FromBinder/<>c__DisplayClass28_0`1");
#pragma pack(pop)
