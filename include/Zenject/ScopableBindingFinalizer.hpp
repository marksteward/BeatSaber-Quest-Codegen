// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScopableBindingFinalizer
  // [NoReflectionBakingAttribute] Offset: DDCAD4
  class ScopableBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::ScopableBindingFinalizer::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x18
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*) == 0x8);
    // Creating value type constructor for type: ScopableBindingFinalizer
    ScopableBindingFinalizer(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory_ = {}) noexcept : providerFactory{providerFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFactory)
    // Offset: 0x16E6590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScopableBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScopableBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScopableBindingFinalizer*, creationType>(bindInfo, providerFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x16E6758
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x16E6660
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x16E65C8
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.ScopableBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(ScopableBindingFinalizer), 24 + sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*)> __Zenject_ScopableBindingFinalizerSizeCheck;
  static_assert(sizeof(ScopableBindingFinalizer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopableBindingFinalizer*, "Zenject", "ScopableBindingFinalizer");
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete
// Il2CppName: FinalizeBindingConcrete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScopableBindingFinalizer::*)(Zenject::DiContainer*, System::Collections::Generic::List_1<System::Type*>*)>(&Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScopableBindingFinalizer*), "FinalizeBindingConcrete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes});
  }
};
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::FinalizeBindingSelf
// Il2CppName: FinalizeBindingSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScopableBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::ScopableBindingFinalizer::FinalizeBindingSelf)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScopableBindingFinalizer*), "FinalizeBindingSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::ScopableBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScopableBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::ScopableBindingFinalizer::OnFinalizeBinding)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScopableBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
