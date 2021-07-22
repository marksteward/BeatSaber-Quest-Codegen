// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`1
#include "Zenject/IMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.StaticMemoryPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class StaticMemoryPool_1 : public Zenject::StaticMemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_1<TValue>*/ {
    public:
    // private System.Action`1<TValue> _onSpawnMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<TValue>* onSpawnMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<TValue>*) == 0x8);
    // Creating value type constructor for type: StaticMemoryPool_1
    StaticMemoryPool_1(System::Action_1<TValue>* onSpawnMethod_ = {}) noexcept : onSpawnMethod{onSpawnMethod_} {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool_1<TValue>
    operator Zenject::IMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_1<TValue>*>(this);
    }
    // Creating conversion operator: operator System::Action_1<TValue>*
    constexpr operator System::Action_1<TValue>*() const noexcept {
      return onSpawnMethod;
    }
    // public System.Void set_OnSpawnMethod(System.Action`1<TValue> value)
    // Offset: 0xFFFFFFFF
    void set_OnSpawnMethod(System::Action_1<TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_1::set_OnSpawnMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_OnSpawnMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Action`1<TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod, System.Int32 initialSize)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMemoryPool_1<TValue>* New_ctor(System::Action_1<TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod, int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMemoryPool_1<TValue>*, creationType>(onSpawnMethod, onDespawnedMethod, initialSize)));
    }
    // public TValue Spawn()
    // Offset: 0xFFFFFFFF
    TValue Spawn() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPool_1::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.StaticMemoryPool`1
  // Could not write size check! Type: Zenject.StaticMemoryPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_1, "Zenject", "StaticMemoryPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
