// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPoolBaseBase`1
#include "Zenject/StaticMemoryPoolBaseBase_1.hpp"
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
  // Autogenerated type: Zenject.StaticMemoryPoolBase`1
  // [NoReflectionBakingAttribute] Offset: D023B4
  template<typename TValue>
  class StaticMemoryPoolBase_1 : public Zenject::StaticMemoryPoolBaseBase_1<TValue> {
    public:
    // Creating value type constructor for type: StaticMemoryPoolBase_1
    StaticMemoryPoolBase_1() noexcept {}
    // public System.Void .ctor(System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.StaticMemoryPoolBaseBase`1
    // Base method: System.Void StaticMemoryPoolBaseBase_1::.ctor(System.Action`1<TValue> onDespawnedMethod)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMemoryPoolBase_1<TValue>* New_ctor(System::Action_1<TValue>* onDespawnedMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMemoryPoolBase_1<TValue>*, creationType>(onDespawnedMethod)));
    }
    // protected override TValue Alloc()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.StaticMemoryPoolBaseBase`1
    // Base method: TValue StaticMemoryPoolBaseBase_1::Alloc()
    TValue Alloc() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::StaticMemoryPoolBase_1::Alloc");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Alloc", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.StaticMemoryPoolBase`1
  // Could not write size check! Type: Zenject.StaticMemoryPoolBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPoolBase_1, "Zenject", "StaticMemoryPoolBase`1");
