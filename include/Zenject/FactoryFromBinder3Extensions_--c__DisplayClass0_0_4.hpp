// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    System::Guid factoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass0_0_4
    $$c__DisplayClass0_0_4(System::Guid factoryId_ = {}) noexcept : factoryId{factoryId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid factoryId
    System::Guid _get_factoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::_get_factoryId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factoryId"))->offset;
      return *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Guid factoryId
    void _set_factoryId(System::Guid value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::_set_factoryId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factoryId"))->offset;
      *reinterpret_cast<System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4
  // Could not write size check! Type: Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
