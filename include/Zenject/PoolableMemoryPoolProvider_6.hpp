// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableMemoryPoolProviderBase`1
#include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`5<TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IPoolable_5;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MemoryPool_6;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableMemoryPoolProvider`6
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  class PoolableMemoryPoolProvider_6 : public Zenject::PoolableMemoryPoolProviderBase_1<TContract>/*, public Zenject::IValidatable*/ {
    public:
    // private TMemoryPool _pool
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TMemoryPool pool;
    // Creating value type constructor for type: PoolableMemoryPoolProvider_6
    PoolableMemoryPoolProvider_6(TMemoryPool pool_ = {}) noexcept : pool{pool_} {}
    // Creating interface conversion operator: operator Zenject::IValidatable
    operator Zenject::IValidatable() noexcept {
      return *reinterpret_cast<Zenject::IValidatable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private TMemoryPool _pool
    TMemoryPool _get__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_6::_get__pool");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<TMemoryPool>(___internal__instance, "_pool"));
    }
    // Autogenerated instance field setter
    // Set instance field: private TMemoryPool _pool
    void _set__pool(TMemoryPool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_6::_set__pool");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "_pool", value));
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_6::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid poolId)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPoolProvider_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPoolProvider_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>*, creationType>(container, poolId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_6::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, injectAction, buffer);
    }
  }; // Zenject.PoolableMemoryPoolProvider`6
  // Could not write size check! Type: Zenject.PoolableMemoryPoolProvider`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_6, "Zenject", "PoolableMemoryPoolProvider`6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
