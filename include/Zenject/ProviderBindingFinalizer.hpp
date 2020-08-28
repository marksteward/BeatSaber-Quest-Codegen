// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IBindingFinalizer
#include "Zenject/IBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: ScopeTypes
  struct ScopeTypes;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ProviderBindingFinalizer
  class ProviderBindingFinalizer : public ::Il2CppObject, public Zenject::IBindingFinalizer {
    public:
    // Nested type: Zenject::ProviderBindingFinalizer::$$c
    class $$c;
    // private Zenject.BindInfo <BindInfo>k__BackingField
    // Offset: 0x10
    Zenject::BindInfo* BindInfo;
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const {
      return BindInfo;
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xFC5874
    static ProviderBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo);
    // protected Zenject.BindInfo get_BindInfo()
    // Offset: 0xFC9FE0
    Zenject::BindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.BindInfo value)
    // Offset: 0xFC9FE8
    void set_BindInfo(Zenject::BindInfo* value);
    // protected Zenject.ScopeTypes GetScope()
    // Offset: 0xFC5F34
    Zenject::ScopeTypes GetScope();
    // protected System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    void OnFinalizeBinding(Zenject::DiContainer* container);
    // protected System.Void RegisterProvider(Zenject.DiContainer container, Zenject.IProvider provider)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    void RegisterProvider(Zenject::DiContainer* container, Zenject::IProvider* provider) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterProvider", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, container, provider));
    }
    // protected System.Void RegisterProvider(Zenject.DiContainer container, System.Type contractType, Zenject.IProvider provider)
    // Offset: 0xFCA34C
    void RegisterProvider(Zenject::DiContainer* container, System::Type* contractType, Zenject::IProvider* provider);
    // protected System.Void RegisterProviderPerContract(Zenject.DiContainer container, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0xFC687C
    void RegisterProviderPerContract(Zenject::DiContainer* container, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFunc);
    // protected System.Void RegisterProviderForAllContracts(Zenject.DiContainer container, Zenject.IProvider provider)
    // Offset: 0xFCA5F0
    void RegisterProviderForAllContracts(Zenject::DiContainer* container, Zenject::IProvider* provider);
    // protected System.Void RegisterProvidersPerContractAndConcreteType(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes, System.Func`3<System.Type,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0xFCA794
    void RegisterProvidersPerContractAndConcreteType(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes, System::Func_3<System::Type*, System::Type*, Zenject::IProvider*>* providerFunc);
    // private System.Boolean ValidateBindTypes(System.Type concreteType, System.Type contractType)
    // Offset: 0xFCAA64
    bool ValidateBindTypes(System::Type* concreteType, System::Type* contractType);
    // protected System.Void RegisterProvidersForAllContractsPerConcreteType(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0xFC6160
    void RegisterProvidersForAllContractsPerConcreteType(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFunc);
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0xFC9FC4
    // Implemented from: Zenject.IBindingFinalizer
    // Base method: Zenject.BindingInheritanceMethods IBindingFinalizer::get_BindingInheritanceMethod()
    Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFC9FF0
    // Implemented from: Zenject.IBindingFinalizer
    // Base method: System.Void IBindingFinalizer::FinalizeBinding(Zenject.DiContainer container)
    void FinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.ProviderBindingFinalizer
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderBindingFinalizer*, "Zenject", "ProviderBindingFinalizer");
#pragma pack(pop)
