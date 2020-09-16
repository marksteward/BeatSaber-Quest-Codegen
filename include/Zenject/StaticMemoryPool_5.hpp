// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`5
#include "Zenject/IMemoryPool_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPool`5
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class StaticMemoryPool_5 : public Zenject::StaticMemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue> {
    public:
    // private System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> _onSpawnMethod
    // Offset: 0x0
    System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod;
    // Creating conversion operator: operator System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*
    constexpr operator System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*() const noexcept {
      return onSpawnMethod;
    }
    // public System.Void .ctor(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0xFFFFFFFF
    static StaticMemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>* New_ctor(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      return THROW_UNLESS((il2cpp_utils::New<StaticMemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>*>(onSpawnMethod, onDespawnedMethod)));
    }
    // public System.Void set_OnSpawnMethod(System.Action`5<TParam1,TParam2,TParam3,TParam4,TValue> value)
    // Offset: 0xFFFFFFFF
    void set_OnSpawnMethod(System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_OnSpawnMethod", value));
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", p1, p2, p3, p4));
    }
  }; // Zenject.StaticMemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_5, "Zenject", "StaticMemoryPool`5");
#pragma pack(pop)
