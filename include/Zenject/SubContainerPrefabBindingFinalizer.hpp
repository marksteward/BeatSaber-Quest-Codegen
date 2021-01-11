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
  // Autogenerated type: Zenject.SubContainerPrefabBindingFinalizer
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92450
  class SubContainerPrefabBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1
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
    // Padding between fields: resolveAll and: subContainerCreatorFactory
    char __padding1[0x7] = {};
    // private readonly System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> _subContainerCreatorFactory
    // Size: 0x8
    // Offset: 0x28
    System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*) == 0x8);
    // Creating value type constructor for type: SubContainerPrefabBindingFinalizer
    SubContainerPrefabBindingFinalizer(::Il2CppObject* subIdentifier_ = {}, bool resolveAll_ = {}, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory_ = {}) noexcept : subIdentifier{subIdentifier_}, resolveAll{resolveAll_}, subContainerCreatorFactory{subContainerCreatorFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Object subIdentifier, System.Boolean resolveAll, System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> subContainerCreatorFactory)
    // Offset: 0x13539E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerPrefabBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, ::Il2CppObject* subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerPrefabBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerPrefabBindingFinalizer*, creationType>(bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x13579E0
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x13577F0
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x1357758
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SubContainerPrefabBindingFinalizer
  static check_size<sizeof(SubContainerPrefabBindingFinalizer), 40 + sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*)> __Zenject_SubContainerPrefabBindingFinalizerSizeCheck;
  static_assert(sizeof(SubContainerPrefabBindingFinalizer) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerPrefabBindingFinalizer*, "Zenject", "SubContainerPrefabBindingFinalizer");
