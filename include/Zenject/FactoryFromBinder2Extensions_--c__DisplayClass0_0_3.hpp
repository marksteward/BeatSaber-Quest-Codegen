// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const {
      return factoryId;
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>* New_ctor() {
      return (FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>*>::get())));
    }
  }; // Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3");
#pragma pack(pop)
