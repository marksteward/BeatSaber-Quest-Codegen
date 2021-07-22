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
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // private readonly System.Object _subIdentifier
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* subIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _resolveAll
    // Size: 0x1
    // Offset: 0x20
    bool resolveAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resolveAll and: creatorFactory
    char __padding1[0x7] = {};
    // private readonly System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> _creatorFactory
    // Size: 0x8
    // Offset: 0x28
    System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*) == 0x8);
    // Creating value type constructor for type: SubContainerBindingFinalizer
    SubContainerBindingFinalizer(::Il2CppObject* subIdentifier_ = {}, bool resolveAll_ = {}, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory_ = {}) noexcept : subIdentifier{subIdentifier_}, resolveAll{resolveAll_}, creatorFactory{creatorFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Object subIdentifier, System.Boolean resolveAll, System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> creatorFactory)
    // Offset: 0x16CFC24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, ::Il2CppObject* subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBindingFinalizer*, creationType>(bindInfo, subIdentifier, resolveAll, creatorFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x16D1984
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x16D17E4
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x16D174C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SubContainerBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBindingFinalizer), 40 + sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*)> __Zenject_SubContainerBindingFinalizerSizeCheck;
  static_assert(sizeof(SubContainerBindingFinalizer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBindingFinalizer*, "Zenject", "SubContainerBindingFinalizer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete
// Il2CppName: FinalizeBindingConcrete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer*, System::Collections::Generic::List_1<System::Type*>*)>(&Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBindingFinalizer*), "FinalizeBindingConcrete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf
// Il2CppName: FinalizeBindingSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBindingFinalizer*), "FinalizeBindingSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBindingFinalizer::OnFinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
