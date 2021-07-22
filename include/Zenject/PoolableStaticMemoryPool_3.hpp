// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPool`3
#include "Zenject/StaticMemoryPool_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TValue>
  class PoolableStaticMemoryPool_3 : public Zenject::StaticMemoryPool_3<TParam1, TParam2, TValue> {
    public:
    // Creating value type constructor for type: PoolableStaticMemoryPool_3
    PoolableStaticMemoryPool_3() noexcept {}
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TParam1 p1, TParam2 p2, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_3::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, p1, p2, value);
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_3::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableStaticMemoryPool_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*, creationType>()));
    }
  }; // Zenject.PoolableStaticMemoryPool`3
  // Could not write size check! Type: Zenject.PoolableStaticMemoryPool`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_3, "Zenject", "PoolableStaticMemoryPool`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
