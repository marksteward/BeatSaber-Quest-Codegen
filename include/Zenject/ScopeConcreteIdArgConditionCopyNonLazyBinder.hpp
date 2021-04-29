// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: D02104
  class ScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Creating value type constructor for type: ScopeConcreteIdArgConditionCopyNonLazyBinder
    ScopeConcreteIdArgConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsCached()
    // Offset: 0x15386C0
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsCached();
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsSingle()
    // Offset: 0x1533E14
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsSingle();
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsTransient()
    // Offset: 0x15386E0
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsTransient();
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x15386B8
    // Implemented from: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void ConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ScopeConcreteIdArgConditionCopyNonLazyBinder");
