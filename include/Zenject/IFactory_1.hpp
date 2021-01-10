// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Zenject.IFactory
#include "Zenject/IFactory.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactory`1
  // [] Offset: FFFFFFFF
  template<typename TValue>
  class IFactory_1/*, public Zenject::IFactory*/ {
    public:
    // Creating value type constructor for type: IFactory_1
    IFactory_1() noexcept {}
    // Creating interface conversion operator: operator Zenject::IFactory
    operator Zenject::IFactory() noexcept {
      return *reinterpret_cast<Zenject::IFactory*>(this);
    }
    // public TValue Create()
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory_1_Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactory_1::Create");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.IFactory`1
  // Could not write size check! Type: Zenject.IFactory`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_1, "Zenject", "IFactory`1");
