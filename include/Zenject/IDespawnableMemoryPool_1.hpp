// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IMemoryPool
#include "Zenject/IMemoryPool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IDespawnableMemoryPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class IDespawnableMemoryPool_1 : public ::Il2CppObject/*, public Zenject::IMemoryPool*/ {
    public:
    // Creating value type constructor for type: IDespawnableMemoryPool_1
    IDespawnableMemoryPool_1() noexcept {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool
    operator Zenject::IMemoryPool() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool*>(this);
    }
    // public System.Void Despawn(TValue item)
    // Offset: 0xFFFFFFFF
    void Despawn(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IDespawnableMemoryPool_1::Despawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Despawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
  }; // Zenject.IDespawnableMemoryPool`1
  // Could not write size check! Type: Zenject.IDespawnableMemoryPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IDespawnableMemoryPool_1, "Zenject", "IDespawnableMemoryPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
