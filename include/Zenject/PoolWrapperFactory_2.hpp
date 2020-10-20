// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IMemoryPool_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolWrapperFactory`2
  template<typename TParam1, typename TValue>
  class PoolWrapperFactory_2 : public ::Il2CppObject/*, public Zenject::IFactory_2<TParam1, TValue>*/ {
    public:
    // private readonly Zenject.IMemoryPool`2<TParam1,TValue> _pool
    // Offset: 0x0
    Zenject::IMemoryPool_2<TParam1, TValue>* pool;
    // Creating interface conversion operator: operator Zenject::IFactory_2<TParam1, TValue>
    operator Zenject::IFactory_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_2<TParam1, TValue>*>(this);
    }
    // Creating conversion operator: operator Zenject::IMemoryPool_2<TParam1, TValue>*
    constexpr operator Zenject::IMemoryPool_2<TParam1, TValue>*() const noexcept {
      return pool;
    }
    // public System.Void .ctor(Zenject.IMemoryPool`2<TParam1,TValue> pool)
    // Offset: 0xFFFFFFFF
    static PoolWrapperFactory_2<TParam1, TValue>* New_ctor(Zenject::IMemoryPool_2<TParam1, TValue>* pool) {
      return THROW_UNLESS((il2cpp_utils::New<PoolWrapperFactory_2<TParam1, TValue>*>(pool)));
    }
    // public TValue Create(TParam1 arg)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`2
    // Base method: TValue IFactory_2::Create(TParam1 arg)
    TValue Create(TParam1 arg) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create", arg));
    }
    // Creating proxy method: Zenject_IFactory_2_Create
    // Maps to method: Create
    TValue Zenject_IFactory_2_Create(TParam1 arg) {
      return Create(arg);
    }
  }; // Zenject.PoolWrapperFactory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolWrapperFactory_2, "Zenject", "PoolWrapperFactory`2");
#pragma pack(pop)
