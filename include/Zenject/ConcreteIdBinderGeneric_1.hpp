// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConcreteBinderGeneric`1
#include "Zenject/ConcreteBinderGeneric_1.hpp"
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
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ConcreteIdBinderGeneric`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D91EC0
  template<typename TContract>
  class ConcreteIdBinderGeneric_1 : public Zenject::ConcreteBinderGeneric_1<TContract> {
    public:
    // Creating value type constructor for type: ConcreteIdBinderGeneric_1
    ConcreteIdBinderGeneric_1() noexcept {}
    // public Zenject.ConcreteBinderGeneric`1<TContract> WithId(System.Object identifier)
    // Offset: 0xFFFFFFFF
    Zenject::ConcreteBinderGeneric_1<TContract>* WithId(::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteIdBinderGeneric_1::WithId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(identifier)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConcreteBinderGeneric_1<TContract>*, false>(this, ___internal__method, identifier);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ConcreteBinderGeneric`1
    // Base method: System.Void ConcreteBinderGeneric_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinderGeneric_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteIdBinderGeneric_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteIdBinderGeneric_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteIdBinderGeneric_1<TContract>*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.ConcreteIdBinderGeneric`1
  // Could not write size check! Type: Zenject.ConcreteIdBinderGeneric`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConcreteIdBinderGeneric_1, "Zenject", "ConcreteIdBinderGeneric`1");
