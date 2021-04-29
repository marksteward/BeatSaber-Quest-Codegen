// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: Kernel
  class Kernel;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: D02124
  class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Creating value type constructor for type: WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0x2178AE8
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0xFFFFFFFF
    template<class TKernel>
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() {
      static_assert(std::is_convertible_v<TKernel, Zenject::Kernel*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithKernel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0x2178AE0
    // Implemented from: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(subContainerBindInfo, bindInfo)));
    }
  }; // Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
