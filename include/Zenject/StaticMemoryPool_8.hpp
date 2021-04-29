// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`8
#include "Zenject/IMemoryPool_8.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`8<T1, T2, T3, T4, T5, T6, T7, T8>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  class Action_8;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.StaticMemoryPool`8
  // [NoReflectionBakingAttribute] Offset: D02434
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class StaticMemoryPool_8 : public Zenject::StaticMemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*/ {
    public:
    // private System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> _onSpawnMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod;
    // Field size check
    static_assert(sizeof(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*) == 0x8);
    // Creating value type constructor for type: StaticMemoryPool_8
    StaticMemoryPool_8(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod_ = {}) noexcept : onSpawnMethod{onSpawnMethod_} {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
    operator Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>(this);
    }
    // Creating conversion operator: operator System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*
    constexpr operator System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*() const noexcept {
      return onSpawnMethod;
    }
    // public System.Void .ctor(System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*, creationType>(onSpawnMethod, onDespawnedMethod)));
    }
    // public System.Void set_OnSpawnMethod(System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> value)
    // Offset: 0xFFFFFFFF
    void set_OnSpawnMethod(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_8::set_OnSpawnMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_OnSpawnMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_8::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6), ::il2cpp_utils::ExtractType(p7)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, p1, p2, p3, p4, p5, p6, p7);
    }
  }; // Zenject.StaticMemoryPool`8
  // Could not write size check! Type: Zenject.StaticMemoryPool`8 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_8, "Zenject", "StaticMemoryPool`8");
