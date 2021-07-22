// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactory`4
#include "Zenject/PlaceholderFactory_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Factory`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: DC90DC
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class Factory_4 : public Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue> {
    public:
    // Creating value type constructor for type: Factory_4
    Factory_4() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`4
    // Base method: System.Void PlaceholderFactory_4::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Factory_4<TParam1, TParam2, TParam3, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Factory_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Factory_4<TParam1, TParam2, TParam3, TValue>*, creationType>()));
    }
  }; // Zenject.Factory`4
  // Could not write size check! Type: Zenject.Factory`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_4, "Zenject", "Factory`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
