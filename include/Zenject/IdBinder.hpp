// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IdBinder
  // [NoReflectionBakingAttribute] Offset: D020B4
  class IdBinder : public ::Il2CppObject {
    public:
    // private Zenject.BindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x10
    Zenject::BindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // Creating value type constructor for type: IdBinder
    IdBinder(Zenject::BindInfo* bindInfo_ = {}) noexcept : bindInfo{bindInfo_} {}
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept {
      return bindInfo;
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x1489520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IdBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdBinder*, creationType>(bindInfo)));
    }
    // public System.Void WithId(System.Object identifier)
    // Offset: 0x148954C
    void WithId(::Il2CppObject* identifier);
  }; // Zenject.IdBinder
  #pragma pack(pop)
  static check_size<sizeof(IdBinder), 16 + sizeof(Zenject::BindInfo*)> __Zenject_IdBinderSizeCheck;
  static_assert(sizeof(IdBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdBinder*, "Zenject", "IdBinder");
