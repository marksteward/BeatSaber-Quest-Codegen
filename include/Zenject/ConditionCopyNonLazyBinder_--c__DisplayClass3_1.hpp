// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92F68
  class ConditionCopyNonLazyBinder::$$c__DisplayClass3_1 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext r
    // Size: 0x8
    // Offset: 0x10
    Zenject::InjectContext* r;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_1
    $$c__DisplayClass3_1(Zenject::InjectContext* r_ = {}) noexcept : r{r_} {}
    // Creating conversion operator: operator Zenject::InjectContext*
    constexpr operator Zenject::InjectContext*() const noexcept {
      return r;
    }
    // System.Boolean <WhenInjectedInto>b__1(System.Type x)
    // Offset: 0x10EF7C4
    bool $WhenInjectedInto$b__1(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x10EF7BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder::$$c__DisplayClass3_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder::$$c__DisplayClass3_1*, creationType>()));
    }
  }; // Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_1
  static check_size<sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass3_1), 16 + sizeof(Zenject::InjectContext*)> __Zenject_ConditionCopyNonLazyBinder_$$c__DisplayClass3_1SizeCheck;
  static_assert(sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass3_1) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_1*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass3_1");
