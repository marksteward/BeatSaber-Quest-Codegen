// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Zenject.IFactory`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class IFactory_5 : public ::Il2CppObject/*, public Zenject::IFactory*/ {
    public:
    // Creating value type constructor for type: IFactory_5
    IFactory_5() noexcept {}
    // Creating interface conversion operator: operator Zenject::IFactory
    operator Zenject::IFactory() noexcept {
      return *reinterpret_cast<Zenject::IFactory*>(this);
    }
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0xFFFFFFFF
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactory_5::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4);
    }
  }; // Zenject.IFactory`5
  // Could not write size check! Type: Zenject.IFactory`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_5, "Zenject", "IFactory`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
