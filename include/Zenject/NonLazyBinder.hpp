// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IfNotBoundBinder
#include "Zenject/IfNotBoundBinder.hpp"
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
  // Size: 0x18
  // Autogenerated type: Zenject.NonLazyBinder
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92390
  class NonLazyBinder : public Zenject::IfNotBoundBinder {
    public:
    // Creating value type constructor for type: NonLazyBinder
    NonLazyBinder() noexcept {}
    // public Zenject.IfNotBoundBinder NonLazy()
    // Offset: 0x13488CC
    Zenject::IfNotBoundBinder* NonLazy();
    // public Zenject.IfNotBoundBinder Lazy()
    // Offset: 0x13488EC
    Zenject::IfNotBoundBinder* Lazy();
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x13488C4
    // Implemented from: Zenject.IfNotBoundBinder
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::NonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.NonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NonLazyBinder*, "Zenject", "NonLazyBinder");
#pragma pack(pop)
