// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`11
#include "Zenject/FactoryFromBinder_11.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceBinder`11
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TContract>
  class FactoryToChoiceBinder_11 : public Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract> {
    public:
    // public Zenject.FactoryFromBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* ToSelf() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(this, "ToSelf")));
    }
    // public Zenject.FactoryFromBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TConcrete>*>(this, "To", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()})));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`11
    // Base method: System.Void FactoryFromBinder`11::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return THROW_UNLESS((il2cpp_utils::New<FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`11
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_11, "Zenject", "FactoryToChoiceBinder`11");
#pragma pack(pop)
