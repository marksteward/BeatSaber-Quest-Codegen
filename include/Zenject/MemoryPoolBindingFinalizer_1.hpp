// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPoolBindingFinalizer`1
  // [NoReflectionBakingAttribute] Offset: D02014
  template<typename TContract>
  class MemoryPoolBindingFinalizer_1 : public Zenject::ProviderBindingFinalizer {
    public:
    // private readonly Zenject.MemoryPoolBindInfo _poolBindInfo
    // Size: 0x8
    // Offset: 0x0
    Zenject::MemoryPoolBindInfo* poolBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::MemoryPoolBindInfo*) == 0x8);
    // private readonly Zenject.FactoryBindInfo _factoryBindInfo
    // Size: 0x8
    // Offset: 0x0
    Zenject::FactoryBindInfo* factoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // Creating value type constructor for type: MemoryPoolBindingFinalizer_1
    MemoryPoolBindingFinalizer_1(Zenject::MemoryPoolBindInfo* poolBindInfo_ = {}, Zenject::FactoryBindInfo* factoryBindInfo_ = {}) noexcept : poolBindInfo{poolBindInfo_}, factoryBindInfo{factoryBindInfo_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolBindingFinalizer_1<TContract>* New_ctor(Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBindingFinalizer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolBindingFinalizer_1<TContract>*, creationType>(bindInfo, factoryBindInfo, poolBindInfo)));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBindingFinalizer_1::OnFinalizeBinding");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnFinalizeBinding", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, container);
    }
  }; // Zenject.MemoryPoolBindingFinalizer`1
  // Could not write size check! Type: Zenject.MemoryPoolBindingFinalizer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBindingFinalizer_1, "Zenject", "MemoryPoolBindingFinalizer`1");
