// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
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
  // Forward declaring type: BindingCondition
  class BindingCondition;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/Zenject.ProviderInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DiContainer::ProviderInfo : public ::Il2CppObject {
    public:
    // public readonly Zenject.DiContainer Container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // public readonly System.Boolean NonLazy
    // Size: 0x1
    // Offset: 0x18
    bool NonLazy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NonLazy and: Provider
    char __padding1[0x7] = {};
    // public readonly Zenject.IProvider Provider
    // Size: 0x8
    // Offset: 0x20
    Zenject::IProvider* Provider;
    // Field size check
    static_assert(sizeof(Zenject::IProvider*) == 0x8);
    // public readonly Zenject.BindingCondition Condition
    // Size: 0x8
    // Offset: 0x28
    Zenject::BindingCondition* Condition;
    // Field size check
    static_assert(sizeof(Zenject::BindingCondition*) == 0x8);
    // Creating value type constructor for type: ProviderInfo
    ProviderInfo(Zenject::DiContainer* Container_ = {}, bool NonLazy_ = {}, Zenject::IProvider* Provider_ = {}, Zenject::BindingCondition* Condition_ = {}) noexcept : Container{Container_}, NonLazy{NonLazy_}, Provider{Provider_}, Condition{Condition_} {}
    // Get instance field: public readonly Zenject.DiContainer Container
    Zenject::DiContainer* _get_Container();
    // Set instance field: public readonly Zenject.DiContainer Container
    void _set_Container(Zenject::DiContainer* value);
    // Get instance field: public readonly System.Boolean NonLazy
    bool _get_NonLazy();
    // Set instance field: public readonly System.Boolean NonLazy
    void _set_NonLazy(bool value);
    // Get instance field: public readonly Zenject.IProvider Provider
    Zenject::IProvider* _get_Provider();
    // Set instance field: public readonly Zenject.IProvider Provider
    void _set_Provider(Zenject::IProvider* value);
    // Get instance field: public readonly Zenject.BindingCondition Condition
    Zenject::BindingCondition* _get_Condition();
    // Set instance field: public readonly Zenject.BindingCondition Condition
    void _set_Condition(Zenject::BindingCondition* value);
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.BindingCondition condition, System.Boolean nonLazy, Zenject.DiContainer container)
    // Offset: 0x1619808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::ProviderInfo* New_ctor(Zenject::IProvider* provider, Zenject::BindingCondition* condition, bool nonLazy, Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::ProviderInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::ProviderInfo*, creationType>(provider, condition, nonLazy, container)));
    }
  }; // Zenject.DiContainer/Zenject.ProviderInfo
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::ProviderInfo), 40 + sizeof(Zenject::BindingCondition*)> __Zenject_DiContainer_ProviderInfoSizeCheck;
  static_assert(sizeof(DiContainer::ProviderInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::ProviderInfo*, "Zenject", "DiContainer/ProviderInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DiContainer::ProviderInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
