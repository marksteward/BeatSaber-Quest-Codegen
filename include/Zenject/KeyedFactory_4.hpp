// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.KeyedFactoryBase`2
#include "Zenject/KeyedFactoryBase_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.KeyedFactory`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TKey, typename TParam1, typename TParam2>
  class KeyedFactory_4 : public Zenject::KeyedFactoryBase_2<TBase, TKey> {
    public:
    // Creating value type constructor for type: KeyedFactory_4
    KeyedFactory_4() noexcept {}
    // public TBase Create(TKey key, TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    TBase Create(TKey key, TParam1 param1, TParam2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactory_4::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2)})));
      return ::il2cpp_utils::RunMethodThrow<TBase, false>(this, ___internal__method, key, param1, param2);
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ProvidedTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> KeyedFactoryBase_2::get_ProvidedTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ProvidedTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactory_4::get_ProvidedTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ProvidedTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Type*>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Void KeyedFactoryBase_2::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedFactory_4<TBase, TKey, TParam1, TParam2>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::KeyedFactory_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedFactory_4<TBase, TKey, TParam1, TParam2>*, creationType>()));
    }
  }; // Zenject.KeyedFactory`4
  // Could not write size check! Type: Zenject.KeyedFactory`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactory_4, "Zenject", "KeyedFactory`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
