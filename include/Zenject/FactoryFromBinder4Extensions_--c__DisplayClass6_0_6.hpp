// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder4Extensions
#include "Zenject/FactoryFromBinder4Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder4Extensions/<>c__DisplayClass6_0`6
  // [CompilerGeneratedAttribute] Offset: D0306C
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
  class FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6 : public ::Il2CppObject {
    public:
    // public System.Guid poolId
    // Size: 0x10
    // Offset: 0x0
    System::Guid poolId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass6_0_6
    $$c__DisplayClass6_0_6(System::Guid poolId_ = {}) noexcept : poolId{poolId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return poolId;
    }
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromPoolableMemoryPool$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6::<FromPoolableMemoryPool>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder4Extensions/<>c__DisplayClass6_0`6
  // Could not write size check! Type: Zenject.FactoryFromBinder4Extensions/<>c__DisplayClass6_0`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6, "Zenject", "FactoryFromBinder4Extensions/<>c__DisplayClass6_0`6");
