// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ArgConditionCopyNonLazyBinder
#include "Zenject/ArgConditionCopyNonLazyBinder.hpp"
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
  // Autogenerated type: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: D01C44
  class ConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ArgConditionCopyNonLazyBinder {
    public:
    // Creating value type constructor for type: ConcreteIdArgConditionCopyNonLazyBinder
    ConcreteIdArgConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.ArgConditionCopyNonLazyBinder WithConcreteId(System.Object id)
    // Offset: 0x12C551C
    Zenject::ArgConditionCopyNonLazyBinder* WithConcreteId(::Il2CppObject* id);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x12C5514
    // Implemented from: Zenject.ArgConditionCopyNonLazyBinder
    // Base method: System.Void ArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ConcreteIdArgConditionCopyNonLazyBinder");
