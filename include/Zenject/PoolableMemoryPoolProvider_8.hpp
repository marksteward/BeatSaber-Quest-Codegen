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
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class MemoryPool_8;
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
  // Autogenerated type: Zenject.PoolableMemoryPoolProvider`8
  // [NoReflectionBakingAttribute] Offset: D027D4
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
  class PoolableMemoryPoolProvider_8 : public Zenject::PoolableMemoryPoolProviderBase_1<TContract>/*, public Zenject::IValidatable*/ {
    public:
    // private TMemoryPool _pool
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TMemoryPool pool;
    // Creating value type constructor for type: PoolableMemoryPoolProvider_8
    PoolableMemoryPoolProvider_8(TMemoryPool pool_ = {}) noexcept : pool{pool_} {}
    // Creating interface conversion operator: operator Zenject::IValidatable
    operator Zenject::IValidatable() noexcept {
      return *reinterpret_cast<Zenject::IValidatable*>(this);
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_8::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid poolId)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*, creationType>(container, poolId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PoolableMemoryPoolProvider_8::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, injectAction, buffer);
    }
  }; // Zenject.PoolableMemoryPoolProvider`8
  // Could not write size check! Type: Zenject.PoolableMemoryPoolProvider`8 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_8, "Zenject", "PoolableMemoryPoolProvider`8");
