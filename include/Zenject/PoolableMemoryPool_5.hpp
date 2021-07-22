// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPool`5
#include "Zenject/MemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`4<TParam1, TParam2, TParam3, TParam4>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPool`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class PoolableMemoryPool_5 : public Zenject::MemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue> {
    public:
    // Creating value type constructor for type: PoolableMemoryPool_5
    PoolableMemoryPool_5() noexcept {}
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_5::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`5
    // Base method: System.Void MemoryPool_5::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*, creationType>()));
    }
    // protected override System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`5
    // Base method: System.Void MemoryPool_5::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPool_5::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, p1, p2, p3, p4, item);
    }
  }; // Zenject.PoolableMemoryPool`5
  // Could not write size check! Type: Zenject.PoolableMemoryPool`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_5, "Zenject", "PoolableMemoryPool`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
